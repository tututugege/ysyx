TOPNAME = TOP

# constraint file
BUILD_DIR = ./build
OBJ_DIR   = ./obj_dir

SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
BIN = $(BUILD_DIR)/$(TOPNAME)
VSRCS = ./src/*.v
CSRCS = ./tb_nvboard.cpp
CSRCS += $(SRC_AUTO_BIND)


NXDC_FILES = constr/top.nxdc
VERILATOR = verilator
VERILATOR_CFLAGS = -MMD --build -cc  \
				 -O3 --x-assign fast --x-initial fast --noassert


# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""


$(SRC_AUTO_BIND): $(NXDC_FILES)
	mkdir build
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

board: $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) --trace $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

clean:
	rm -rf build

.PHONY: board  clean
