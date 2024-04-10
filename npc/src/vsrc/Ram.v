import "DPI-C" function int pmem_read(input int raddr, input int MemRead);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte Wstrb);

module Ram (
  input       clock,
  input       reset,

  output       awready,
  input        awvalid,
  input [2:0]  awid,
  input [31:0] awaddr,
  input [2:0]  awsize,
  input [2:0]  awprot,

  output       wready,
  input        wvalid,
  input [31:0] wdata,
  input [3:0]  wstrb,

  input         bready,
  output        bvalid,
  output  [2:0] bid,

  output       arready,
  input        arvalid,
  input [2:0]  arid,
  input [31:0] araddr,
  input [2:0]  arsize,
  input [2:0]  arprot,
  input        rready,

  output         rvalid,
  output  [2:0]  rid,
  output  [31:0] rdata
);

  // constant
  assign bid = 0;
  assign rid = 0;

  parameter READY = 3'b001,
            WAIT  = 3'b010,
            VALID = 3'b100;

  reg [2:0] rstate;
  reg [2:0] awstate;
  reg [2:0] wstate;

  reg [2:0] nxt_rstate;
  reg [2:0] nxt_awstate;
  reg [2:0] nxt_wstate;

  always @(posedge clock) begin
    if (reset) begin
      rstate <= READY;
      awstate <= READY;
      wstate <= READY;
    end
    else begin
      rstate <= nxt_rstate;  
      awstate <= nxt_awstate; 
      wstate <= nxt_wstate;  
    end
  end

 // ar r
  always @(*) begin
    case (rstate) 
      READY: begin
        if (arvalid && arready)
          nxt_rstate = VALID;
      end
      VALID: begin
        if (rvalid && rready) begin
          if (arready && arvalid)
            nxt_rstate = VALID;
          else
            nxt_rstate = READY;
        end
      end
      default :
        nxt_rstate = READY;
    endcase
  end

  assign arready = 1'b1;
  assign rvalid = rstate[2];

  // aw w b
  always @(*) begin
    case (wstate) 
      READY: begin
        if (awvalid && awready)
          nxt_wstate = VALID;
      end
      VALID: begin
        if (bvalid && bready) begin
          if (awready && awvalid)
            nxt_wstate = VALID;
          else
            nxt_wstate = READY;
        end
      end
      default :
        nxt_wstate = READY;
    endcase
  end

  assign awready = 1'b1;
  assign wready = 1'b1;
  assign bvalid = wstate[2];

  reg [31:0] ReadDataReg;
  always @(posedge clock) begin
    if (arvalid && arready && ~reset)
      ReadDataReg <= pmem_read(araddr, {31'b0, arvalid && arready});
  end 

  assign rdata = ReadDataReg;

  always @(posedge clock) begin
    if (awvalid && awready && ~reset)
      pmem_write(awaddr, wdata, {4'b0, wstrb});
  end

endmodule

