`timescale 1ns/1ps

module fifo (
    input  logic        clk,
    input  logic        rst,
    input  logic        wr_en,
    input  logic        rd_en,
    input  logic [7:0]  din,
    output logic [7:0]  dout,
    output logic        full,
    output logic        empty
);

    // internal signals
    logic [7:0] mem [0:7];
    logic [2:0] wr_ptr;
    logic [2:0] rd_ptr;
    logic [3:0] count;

    always_ff @(posedge clk) begin
        if (rst) begin
            wr_ptr <= 3'b000;
            rd_ptr <= 3'b000;
            count  <= 4'b0000;
            dout   <= 8'b0;
        end
        else begin
            if (wr_en && !full) begin
                mem[wr_ptr] <= din;
                wr_ptr      <= wr_ptr + 1;
                count       <= count + 1;
            end
            if (rd_en && !empty) begin
                dout   <= mem[rd_ptr];
                rd_ptr <= rd_ptr + 1;
                count  <= count - 1;
            end
        end
    end

    always_comb begin
        full  = (count == 4'd8);
        empty = (count == 4'd0);
    end

endmodule