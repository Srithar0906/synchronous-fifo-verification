`timescale 1ns/1ps

module fifo_tb;

    logic        clk;
    logic        rst;
    logic        wr_en;
    logic        rd_en;
    logic [7:0]  din;
    logic [7:0]  dout;
    logic        full;
    logic        empty;

    integer pass_count, fail_count;

    fifo uut (
        .clk(clk), .rst(rst),
        .wr_en(wr_en), .rd_en(rd_en),
        .din(din), .dout(dout),
        .full(full), .empty(empty)
    );

    initial clk = 0;
    always #5 clk = ~clk;

    initial begin
        $dumpfile("sim/waveform.vcd");
        $dumpvars(0, fifo_tb);
    end

    task write_fifo(input [7:0] data);
        @(negedge clk);
        wr_en = 1;
        din   = data;
        @(posedge clk);
        #1;
        wr_en = 0;
    endtask

    task read_check(input [7:0] expected);
        @(negedge clk);
        rd_en = 1;
        @(posedge clk);
        #1;
        if(dout == expected) begin
            $display("PASS: Read = %h (expected %h)", dout, expected);
            pass_count = pass_count + 1;
        end else begin
            $display("FAIL: Expected %h got %h", expected, dout);
            fail_count = fail_count + 1;
        end
        rd_en = 0;
    endtask

    initial begin
        pass_count = 0;
        fail_count = 0;

        rst   = 1;
        wr_en = 0;
        rd_en = 0;
        din   = 0;

        repeat(3) @(posedge clk);
        @(negedge clk);
        rst = 0;

        // write 4 values
        write_fifo(8'hAA);
        write_fifo(8'hBB);
        write_fifo(8'hCC);
        write_fifo(8'hDD);

        @(posedge clk);

        // read AA BB CC DD
        read_check(8'hAA);
        read_check(8'hBB);
        read_check(8'hCC);
        read_check(8'hDD);

        $display("==============================");
        $display("PASSED: %0d / %0d", pass_count, pass_count+fail_count);
        $display("FAILED: %0d / %0d", fail_count, pass_count+fail_count);
        $display("==============================");
        $finish;
    end

endmodule