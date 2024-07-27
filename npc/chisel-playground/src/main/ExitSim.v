import "DPI-C" function void halt(input int commit_pc, 
                                input int commit_mem,input int commit_addr,
                                input int commit_halt,input int commit_ret);

`define CONFIG_DIFFTEST 1'b0

module ExitSim(
  input        clock,
  input [31:0] commit_pc,
  input [31:0] commit_addr,
  input        commit_mem,
  input        commit_ret,
  input        commit_commit,
  input        commit_halt
);

  always @(posedge clock) begin
    if (commit_commit && (`CONFIG_DIFFTEST || commit_halt)) begin
      halt(commit_pc, {31'b0, commit_mem},  commit_addr,
                      {31'b0, commit_halt}, {31'b0, commit_ret});
    end
  end


endmodule

