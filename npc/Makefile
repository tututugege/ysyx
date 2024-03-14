BUILD_DIR = ./build
OBJ_DIR   = ./obj_dir
MODULE    = SimpleCpu
TESEBENCH = tb_$(MODULE).cpp
VSRC      = ./build/$(MODULE).v
SSRCS     = ./playground/src/*.scala


export PATH := $(PATH):$(abspath ./utils)

test:
	mill -i __.test

verilog: $(SSRCS)
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill --mill-version 0.11.6 -i __.test.runMain Elaborate -td $(BUILD_DIR)

help:
	mill -i __.test.runMain Elaborate --help

compile:
	mill -i __.compile

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

clean:
	rm -rf $(BUILD_DIR)
	rm -rf $(OBJ_DIR)
	rm *.vcd	

.PHONY: test verilog help compile bsp reformat checkformat clean sim run

IMG ?=

$(VSRC): verilog
VERILATOR = verilator
VERILATOR_FLAGS = --trace --cc --build --exe

sim: $(VSRC) $(TESTBENCH)
	# @echo "Write this Makefile by yourself."
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) $< $(TESEBENCH)
	./obj_dir/V$(MODULE) $(IMG)
	gtkwave wave.vcd

run:
	./obj_dir/V$(MODULE) $(IMG)
	gtkwave wave.vcd
