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
  input         MemReadSigned,
  input  [ 1:0] MemSize,
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


  wire [ 3:0] Offset;
  assign Offset[0] = ~Address[0] && ~Address[1];
  assign Offset[1] =  Address[0] && ~Address[1];
  assign Offset[2] = ~Address[0] &&  Address[1];
  assign Offset[3] =  Address[0] &&  Address[1];


  wire [31:0] WriteData;
  assign WriteData = {32{Offset[0]}} & Wdata
                   | {32{Offset[1]}} & {Wdata[23: 0],  8'b0}
                   | {32{Offset[2]}} & {Wdata[15: 0], 16'b0}
                   | {32{Offset[3]}} & {Wdata[ 7: 0], 24'b0};


  always @(posedge clock) begin
    if (MemWrite && !reset)
      pmem_write(Address, WriteData, {4'b0, Wstrb});
  end

  wire [31:0] Mask;
  wire [31:0] ReadDataRaw;
  wire        ReadSign;

  assign ReadSign = (~MemSize[0] && ~MemSize[1] && MemReadSigned) & ReadDataRaw[7]
                  | ( MemSize[0] && MemReadSigned               ) & ReadDataRaw[15];



  assign ReadDataRaw = ({32{Offset[0]}} & ReadDataReg
                     |  {32{Offset[1]}} & { 8'b0, ReadDataReg[31: 8]}
                     |  {32{Offset[2]}} & {16'b0, ReadDataReg[31:16]}
                     |  {32{Offset[3]}} & {24'b0, ReadDataReg[31:24]}) & Mask;

  assign Mask[ 7: 0] = 8'hFF;
  assign Mask[15: 8] = {8{MemSize[0] || MemSize[1]}};
  assign Mask[23:16] = {8{MemSize[1]}};
  assign Mask[31:24] = {8{MemSize[1]}};

  assign ReadData    = {32{~MemSize[0] && ~MemSize[1] }} & {{24{ReadSign}}, ReadDataRaw[ 7:0]}
                     | {32{ MemSize[0]                }} & {{16{ReadSign}}, ReadDataRaw[15:0]}
                     | {32{ MemSize[1]                }} & ReadDataRaw;


endmodule
