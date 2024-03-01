BUILD_DIR = ./build
OBJ_DIR   = ./obj_dir
MODULE    = TOP
TESEBENCH = tb_$(MODULE).cpp
# VSRC      = ./build/$(MODULE).v
SSRCS     = ./playground/src/*.scala

TOPNAME   = $(MODULE)

VERILATOR = verilator


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

.PHONY: test verilog help compile bsp reformat checkformat clean wave sim board


sim: $(VSRC) $(TESTBENCH)
	# $(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	# @echo "Write this Makefile by yourself."
	verilator -Wall --trace -cc $< --exe $(TESEBENCH)
	make -C obj_dir -f V$(MODULE).mk V$(MODULE)
	./obj_dir/V$(MODULE)
	gtkwave wave.vcd

# wave: sim $(TESEBENCH)


include ../Makefile


NXDC_FILES = constr/top.nxdc
VERILATOR_CFLAGS = -MMD --build -cc  \
				 -O3 --x-assign fast --x-initial fast --noassert


# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
BIN = $(BUILD_DIR)/$(MODULE)

CSRCS = ./tb_nvboard.cpp
CSRCS += $(SRC_AUTO_BIND)

$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# $(VSRC): verilog
VSRC = ./build/*.v

board: $(VSRC) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) --trace $(VERILATOR_CFLAGS) \
		--top-module $(MODULE) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))
