import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte wmask);

module MemorySim (
  input         clock,
  input         reset,
  input  [31:0] PC,
  output [31:0] Inst,

  input  [31:0] Address,
  input         MemRead,
  input         MemWrite,

  input  [31:0] Wdata,
  input  [ 3:0] Wstrb,

  output [31:0] ReadData
);

  reg [31:0] InstReg, ReadDataReg;
  always @(*) begin
    if (MemRead && !reset)
      ReadDataReg = pmem_read(Address);
    else
      ReadDataReg = 0;
  end 

  always @(*) begin
    InstReg = pmem_read(PC);
  end

  assign Inst = InstReg;
  assign ReadData = ReadDataReg;

  always @(posedge clock) begin
    if (MemWrite && !reset)
      pmem_write(Address, Wdata, {4'b0, Wstrb});
  end

endmodule
