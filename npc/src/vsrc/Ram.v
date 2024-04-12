import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte Wstrb);

`define INIT 5'b1

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

  reg [4:0] LFSR;
  wire newBit, zero;
  wire [4:0] LFSRnxt;

  assign zero = ~(|LFSR);
  assign newBit = LFSR[4] ^ LFSR[3] ^ LFSR[2] ^ LFSR[0];
  assign LFSRnxt = (zero) ? 5'b1 : {newBit, LFSR[4:1]};

  always @(posedge clock) begin
    if (reset)
      LFSR <= `INIT;
    else
      LFSR <= LFSRnxt;
  end

  // constant
  assign bid = 0;
  assign rid = 0;

  parameter BUSY  = 4'b0001,
            READY = 4'b0010,
            WAIT  = 4'b0100,
            VALID = 4'b1000;

  reg [3:0] rstate;
  reg [3:0] awstate;
  reg [3:0] wstate;

  reg [3:0] nxt_rstate;
  reg [3:0] nxt_awstate;
  reg [3:0] nxt_wstate;

  reg [4:0] arcounter;
  reg [4:0] awcounter;
  reg [4:0] rcounter;
  reg [4:0] bcounter;

  // latancy
  always @(posedge clock) begin
    if (reset) 
      rcounter <= 0;
    else if (arvalid && arready)
      rcounter <= LFSR;
    else if (rstate[2])
      rcounter <= rcounter - 1;
  end

  always @(posedge clock) begin
    if (reset) 
      bcounter <= 0;
    else if (awvalid && awready)
      bcounter <= LFSR;
    else if (wstate[2])
      bcounter <= bcounter - 1;
  end

  always @(posedge clock) begin
    if (reset) 
      arcounter <= 0;
    else if (rvalid && rready)
      arcounter <= LFSR;
    else if (rstate[0])
      arcounter <= arcounter - 1;
  end

  always @(posedge clock) begin
    if (reset) 
      awcounter <= 0;
    else if (bvalid && bready)
      awcounter <= LFSR;
    else if (wstate[0])
      awcounter <= awcounter - 1;
  end


  always @(posedge clock) begin
    if (reset) begin
      rstate <= BUSY;
      awstate <= BUSY;
      wstate <= BUSY;
    end
    else begin
      rstate <= nxt_rstate;  
      awstate <= nxt_awstate; 
      wstate <= nxt_wstate;  
    end
  end

 // ar r channel

 // store memory access infomation
  reg [31:0] raddr;
  always @(posedge clock) begin
    if (rstate[1] && arvalid && arready)
      raddr <= araddr;
  end

  wire block = wreg_valid && (araddr == waddr);
  always @(*) begin
    case (rstate) 
      BUSY: begin
         if (arcounter == 0)
          nxt_rstate = READY;
        else
          nxt_rstate = BUSY;
      end
      READY: begin
        if (arvalid && arready && LFSR != 0)
          nxt_rstate = WAIT;
        else if (arvalid && arready)
          nxt_rstate = VALID;
        else
          nxt_rstate = READY;
      end
      WAIT: begin
        if (rcounter == 0)
          nxt_rstate = VALID;
        else
          nxt_rstate = WAIT;
      end
      VALID: begin
        if (rvalid && rready && LFSR != 0) 
            nxt_rstate = BUSY;
        else if (rvalid && rready)
            nxt_rstate = READY;
        else
            nxt_rstate = VALID;
      end
      default :
        nxt_rstate = BUSY;
    endcase
  end

  assign arready = rstate[1] && ~block;
  assign rvalid = rstate[3];

  // aw w b channel

  // store memory access infomation
  reg [31:0] waddr;
  reg [31:0] data;
  reg [ 3:0] strb;
  reg        wreg_valid;
  always @(posedge clock) begin
    if (wstate[1] && awvalid && awready) begin
      waddr <= awaddr;
      data  <= wdata;
      strb  <= wstrb;
      wreg_valid <= 1'b1;
    end
    else if (wstate[3] && bvalid && bready) begin
      wreg_valid <= 1'b0;
    end
  end

  always @(*) begin
    case (wstate) 
      BUSY: begin
        if (awcounter == 0)
          nxt_wstate = READY;
        else
          nxt_wstate = BUSY;
      end

      READY: begin
        if (awvalid && awready && LFSR != 0)
          nxt_wstate = WAIT;
        else if (awvalid && awready)
          nxt_wstate = VALID;
        else
          nxt_wstate = READY;
      end
      WAIT: begin
        if (bcounter == 0)
          nxt_wstate = VALID;
        else
          nxt_wstate = WAIT;
      end
      VALID: begin
        if (bvalid && bready && LFSR != 0) 
            nxt_wstate = BUSY;
        else if (bvalid && bready)
            nxt_wstate = READY;
        else 
            nxt_wstate = VALID;
      end
      default :
        nxt_wstate = BUSY;
    endcase
  end

  assign awready = wstate[1];
  assign wready = wstate[1];
  assign bvalid = wstate[3];

  reg [31:0] ReadDataReg;
  always @(posedge clock) begin
    if (rstate[2] && rcounter == 0 && ~reset)
      ReadDataReg <= pmem_read(raddr);
  end 

  assign rdata = ReadDataReg;

  always @(posedge clock) begin
    if (wstate[2] && bcounter == 0 && ~reset)
      pmem_write(waddr, data, {4'b0, strb});
  end

endmodule

