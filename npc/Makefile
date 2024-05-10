BUILD_DIR = ./build
OBJ_DIR   = ./obj_dir
SOC_TOP   = ysyxSoCFull
NPC_TOP   = NPC
NPC_CSRC 	= ./src/npc-csrc/*.cpp
SOC_CSRC 	= ./src/soc-csrc/*.cpp
NPC_SSRCS = ./playground/src/*.scala
NPC_VSRC  = ./build/NPC.v 
SOC_VSRC  = $(NPC_VSRC) $(foreach dir ,$(shell find ../ysyxSoC/perip/ -type d), $(wildcard $(dir)/*.v)) \
						../ysyxSoC/build/ysyxSoCFull.v ./playground/src/ExitSim.v

export PATH := $(PATH):$(abspath ./utils)

test:
	mill -i __.test

verilog: $(NPC_SSRCS)
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill  -i __.test.runMain Elaborate -td $(BUILD_DIR)

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

$(NPC_VSRC): verilog

VERILATOR = verilator

SOC_VERILATOR_INCLUDE  = /home/tututu/hry/ysyx/ysyx-workbench/ysyxSoC/perip/uart16550/rtl/ 
SOC_VERILATOR_INCLUDE += /home/tututu/hry/ysyx/ysyx-workbench/ysyxSoC/perip/spi/rtl/
SOC_VERILATOR_FLAGS = --trace --cc --build --exe --autoflush \
									$(foreach dir, $(SOC_VERILATOR_INCLUDE), $(addprefix -I, $(dir))) \
									--timescale "1ns/1ns" --no-timing \
									--top-module ysyxSoCFull $(SOC_VERILATOR_CFLAGS)

SOC_VERILATOR_CINCLUDE = /home/tututu/hry/ysyx/ysyx-workbench/npc/src/soc-csrc/include
SOC_VERILATOR_CFLAGS = $(addprefix -CFLAGS , -I$(SOC_VERILATOR_CINCLUDE))
SOC_VERILATOR_CFLAGS += -CFLAGS -ggdb  -LDFLAGS -ggdb

remove_quote = $(patsubst "%",%,$(1))

NPC_VERILATOR_FLAGS = --trace --cc --build --exe 
NPC_VERILATOR_CINCLUDE = /home/tututu/hry/ysyx/ysyx-workbench/npc/src/npc-csrc/include
NPC_VERILATOR_CFLAGS = $(addprefix -CFLAGS , -I$(NPC_VERILATOR_CINCLUDE))
NPC_VERILATOR_CFLAGS += $(addprefix -CFLAGS , $(call remove_quote, $(CONFIG_CC_OPT)))
NPC_VERILATOR_CFLAGS += $(addprefix -CFLAGS , -I/home/tututu/hry/ysyx/ysyx-workbench/npc/include)
NPC_VERILATOR_CFLAGS += $(addprefix -LDFLAGS , $(shell llvm-config --libs))
NPC_VERILATOR_CFLAGS += $(addprefix -CFLAGS , -fPIE)
NPC_VERILATOR_CFLAGS += $(addprefix -LDFLAGS , -lreadline)
NPC_VERILATOR_CFLAGS += $(addprefix -LDFLAGS , -lSDL2)


soc-sim: $(SOC_VSRC) $(SOC_CSRC) $(NPC_VSRC)
	# @echo "Write this Makefile by yourself."
	$(call git_commit, "sim SOC") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(SOC_VERILATOR_FLAGS) $(SOC_VSRC) $(SOC_CSRC)
	./obj_dir/V$(SOC_TOP) $(IMG) $(NEMU_HOME)/build/riscv32-nemu-interpreter-so

npc-sim: $(NPC_VSRC) $(NPC_CSRC)
	# @echo "Write this Makefile by yourself."
	$(call git_commit, "sim NPC") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(NPC_VERILATOR_FLAGS) $(NPC_VSRC) $(NPC_VERILATOR_CFLAGS) $(NPC_CSRC)
	./obj_dir/V$(NPC_TOP) $(ARGS) $(IMG)

soc-run:
	make -C $(OBJ_DIR) -f V$(SOC_TOP).mk V$(SOC_TOP)
	./obj_dir/V$(SOC_TOP) $(IMG) $(NEMU_HOME)/build/riscv32-nemu-interpreter-so

soc-gdb:
	make -C $(OBJ_DIR) -f V$(SOC_TOP).mk V$(SOC_TOP)
	gdb --args ./obj_dir/V$(SOC_TOP) $(IMG) $(NEMU_HOME)/build/riscv32-nemu-interpreter-so


wave:
	gtkwave ./wave.vcd
