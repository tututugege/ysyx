import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte wstrb);

module Ram (

  input         ren,
  input  [31:0] raddr,
  output [31:0] rdata,

  input         wen,
  input  [31:0] waddr,
  input  [31:0] wdata,
  input  [ 3:0] wstrb
);

  reg [31:0] rdataReg;

  always @(*) begin
    if (ren)
      rdataReg = pmem_read(raddr);
    else
      rdataReg = 0;

    if (wen)
      pmem_write(waddr, wdata, {4'b0, wstrb});
  end

  assign rdata = rdataReg;

endmodule


