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
    integer rand_pass,  rand_fail;
    integer sw_head, sw_tail, sw_count;
    integer num_ops, i, op;
    reg [7:0] sw_queue [0:7];
    reg [7:0] rand_data;

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

    task write_only(input [7:0] data);
        @(negedge clk);
        wr_en = 1;
        din   = data;
        @(posedge clk);
        #1;
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

        // ── Basic Order Test ─────────────────────
        $display("\n--- Basic Order Test ---");
        write_fifo(8'hAA);
        write_fifo(8'hBB);
        write_fifo(8'hCC);
        write_fifo(8'hDD);
        @(posedge clk);
        read_check(8'hAA);
        read_check(8'hBB);
        read_check(8'hCC);
        read_check(8'hDD);

        // ── Full Flag Test ───────────────────────
        $display("\n--- Full Flag Test ---");
        repeat(8) begin
            write_only(8'hFF);
        end
        wr_en = 0;
        @(posedge clk);
        #1;
        if(full == 1) begin
            $display("PASS: Full flag set correctly");
            pass_count = pass_count + 1;
        end else begin
            $display("FAIL: Full flag not set");
            fail_count = fail_count + 1;
        end

        // ── Empty Flag Test ──────────────────────
        $display("\n--- Empty Flag Test ---");
        repeat(8) begin
            read_check(8'hFF);
        end
        @(posedge clk);
        #1;
        if(empty == 1) begin
            $display("PASS: Empty flag set correctly");
            pass_count = pass_count + 1;
        end else begin
            $display("FAIL: Empty flag not set");
            fail_count = fail_count + 1;
        end

        $display("\n==============================");
        $display(" DIRECTED TESTS");
        $display(" PASSED: %0d / %0d", pass_count, pass_count+fail_count);
        $display(" FAILED: %0d / %0d", fail_count, pass_count+fail_count);
        $display("==============================");

        // ── Random Verification ──────────────────
        $display("\n--- Random Verification (200 ops) ---");
        rand_pass = 0;
        rand_fail = 0;
        sw_head   = 0;
        sw_tail   = 0;
        sw_count  = 0;

        // reset FIFO before random test
        @(negedge clk);
        rst = 1;
        @(posedge clk);
        #1;
        rst = 0;

        num_ops = 200;

        for(i = 0; i < num_ops; i = i + 1) begin
            op = $random % 2;

            if(op == 0 && sw_count < 8) begin
                /* verilator lint_off WIDTHTRUNC */
rand_data = $random;
/* verilator lint_on WIDTHTRUNC */
                sw_queue[sw_tail] = rand_data;
                sw_tail   = (sw_tail + 1) % 8;
                sw_count  = sw_count + 1;
                write_only(rand_data);
                wr_en = 0;

            end else if(op == 1 && sw_count > 0) begin
                @(negedge clk);
                rd_en = 1;
                @(posedge clk);
                #1;
                if(dout == sw_queue[sw_head]) begin
                    rand_pass = rand_pass + 1;
                end else begin
                    $display("FAIL: op%0d expected %h got %h", i, sw_queue[sw_head], dout);
                    rand_fail = rand_fail + 1;
                end
                rd_en    = 0;
                sw_head  = (sw_head + 1) % 8;
                sw_count = sw_count - 1;
            end
        end

        $display("\n==============================");
        $display(" RANDOM TESTS (200 ops)");
        $display(" PASSED: %0d", rand_pass);
        $display(" FAILED: %0d", rand_fail);
        $display("==============================");
        $finish;
    end

endmodule