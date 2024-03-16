BUILD_DIR = ./build
OBJ_DIR   = ./obj_dir
MODULE    = SimpleCpu
CSRC 			= ./src/csrc/*.cpp
VSRC      = ./build/$(MODULE).v ./src/vsrc/*.v
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

.PHONY: test verilog help compile bsp reformat checkformat clean sim wave run

override ARGS ?= --log=$(BUILD_DIR)/npc-log.txt
override ARGS += --diff=$(NEMU_HOME)/build/riscv32-nemu-interpreter-so

IMG ?=

$(VSRC): verilog
VERILATOR_CINCLUDE = /home/tututu/hry/ysyx/ysyx-workbench/npc/src/csrc/include
VERILATOR = verilator
VERILATOR_FLAGS = --trace --cc --build --exe
VERILATOR_CFLAGS = $(addprefix -CFLAGS , -I$(VERILATOR_CINCLUDE))
VERILATOR_CFLAGS += $(addprefix -CFLAGS , -I/usr/lib/llvm-14/include -std=c++14)
VERILATOR_CFLAGS += $(addprefix -CFLAGS , -fPIE)
VERILATOR_CFLAGS += $(addprefix -LDFLAGS , -lreadline)
VERILATOR_CFLAGS += $(addprefix -LDFLAGS , $(shell llvm-config --libs))


# DIFFTEST_CFLAGS  = $(addprefix -LDFLAGS , -L$(NEMU_HOME)/build)
# DIFFTEST_CFLAGS = $(addprefix -LDFLAGS , -lriscv32-nemu-interpreter-so)

sim: $(VSRC) $(CSRC)
	# @echo "Write this Makefile by yourself."
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) $(VSRC) $(VERILATOR_CFLAGS) $(DIFFTEST_CFLAGS) $(CSRC)
	./obj_dir/V$(MODULE) $(ARGS) $(IMG)

run:
	make -C $(OBJ_DIR) -f V$(MODULE).mk V$(MODULE)
	./obj_dir/V$(MODULE) $(ARGS) $(IMG)

wave:
	gtkwave ./wave.vcd
