-include ../Makefile

BUILD_DIR = ./build
OBJ_DIR   = ./obj_dir
SOC_TOP   = ysyxSoCFull
NPC_TOP   = NPC
NPC_CSRC 	= ./src/npc-csrc/*.cpp
SOC_CSRC 	= ./src/soc-csrc/*.cpp
NPC_SSRCS = ./chisel-playground/src/main/*.scala
NPC_VSRC  = ./build/NPC.v ./chisel-playground/src/main/ExitSim.v
SOC_VSRC  = $(NPC_VSRC) $(foreach dir ,$(shell find ../ysyxSoC/perip/ -type d), $(wildcard $(dir)/*.v)) \
						../ysyxSoC/build/ysyxSoCFull.v ./chisel-playground/src/main/ExitSim.v

export PATH := $(PATH):$(abspath ./utils)

verilog: $(NPC_SSRCS)
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	make -C chisel-playground verilog
	mv ./build/NPC.sv ./build/NPC.v

clean:
	rm -rf $(BUILD_DIR)
	rm -rf $(OBJ_DIR)
	rm -f *.vcd	

.PHONY: test verilog help compile bsp reformat checkformat clean sim wave run

override ARGS ?= --log=$(BUILD_DIR)/npc-log.txt
override ARGS += --diff=$(NEMU_HOME)/build/riscv32-nemu-interpreter-so

IMG ?=

$(NPC_VSRC): verilog

VERILATOR = verilator

SOC_VERILATOR_INCLUDE  = /home/tututu/hry/ysyx/ysyx-workbench/ysyxSoC/perip/uart16550/rtl/ 
SOC_VERILATOR_INCLUDE += /home/tututu/hry/ysyx/ysyx-workbench/ysyxSoC/perip/spi/rtl/

SOC_VERILATOR_CINCLUDE = /home/tututu/hry/ysyx/ysyx-workbench/npc/src/soc-csrc/include
SOC_VERILATOR_CFLAGS = $(foreach dir, $(SOC_VERILATOR_CINCLUDE), $(addprefix -CFLAGS , -I$(dir)))
SOC_VERILATOR_CFLAGS += -CFLAGS -MMD
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

# nvboard file

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# constraint file
NXDC_FILES = constr/top.nxdc
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
SOC_CSRC += $(SRC_AUTO_BIND)
SOC_VERILATOR_CFLAGS += $(addprefix -LDFLAGS , $(LDFLAGS))
SOC_VERILATOR_CFLAGS += $(addprefix -CFLAGS , -DTOP_NAME=VysyxSoCFull)
SOC_VERILATOR_CINCLUDE += $(INC_PATH)


$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

SOC_VERILATOR_FLAGS = --trace --cc --build --exe --autoflush \
									-O3 --x-assign fast --x-initial fast --noassert\
									$(foreach dir, $(SOC_VERILATOR_INCLUDE), $(addprefix -I, $(dir))) \
									--timescale "1ns/1ns" --no-timing -MMD\
									--top-module ysyxSoCFull $(SOC_VERILATOR_CFLAGS)

soc-sim: $(SOC_VSRC) $(SOC_CSRC) $(NVBOARD_ARCHIVE)
	# @echo "Write this Makefile by yourself."
	$(call git_commit, "sim SOC") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR)  $^ $(SOC_VERILATOR_FLAGS)
	./obj_dir/V$(SOC_TOP) $(IMG) --diff=$(NEMU_HOME)/build/riscv32-nemu-interpreter-so

npc-sim: $(NPC_VSRC) $(NPC_CSRC)
	# @echo "Write this Makefile by yourself."
	$(call git_commit, "sim NPC") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(NPC_VERILATOR_FLAGS) $(NPC_VSRC) $(NPC_VERILATOR_CFLAGS) $(NPC_CSRC)
	./obj_dir/V$(NPC_TOP) $(ARGS) $(IMG)

soc-run: $(SOC_CSRC) $(NVBOARD_ARCHIVE)
	make -C $(OBJ_DIR) -f V$(SOC_TOP).mk V$(SOC_TOP)
	./obj_dir/V$(SOC_TOP) $(IMG) --diff=$(NEMU_HOME)/build/riscv32-nemu-interpreter-so

soc-gdb: $(SOC_VSRC) $(SOC_CSRC) $(NVBOARD_ARCHIVE)
	make -C $(OBJ_DIR) -f V$(SOC_TOP).mk V$(SOC_TOP)
	gdb --args ./obj_dir/V$(SOC_TOP) $(IMG) --diff=$(NEMU_HOME)/build/riscv32-nemu-interpreter-so

soc-trace: $(SOC_VSRC) $(SOC_CSRC) $(NVBOARD_ARCHIVE)
	make -C $(OBJ_DIR) -f V$(SOC_TOP).mk V$(SOC_TOP)
	 ./obj_dir/V$(SOC_TOP) $(IMG) --trace=$(NEMU_HOME)/build/cache_itrace.txt --diff=$(NEMU_HOME)/build/riscv32-nemu-interpreter-so 

wave:
	gtkwave ./wave.vcd
