OBJ_DIR   = ./obj_dir
MODULE    = Multiplier
TESEBENCH = ./$(MODULE)-test.cpp
VSRC      = ../build/$(MODULE).sv

export PATH := $(PATH):$(abspath ../../utils/)

sim: $(VSRC) $(TESTBENCH)
	# $(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	# @echo "Write this Makefile by yourself."
	verilator -Wall --trace -cc $< --exe $(TESEBENCH)
	make -C obj_dir -f V$(MODULE).mk V$(MODULE)
	./obj_dir/V$(MODULE)

wave: sim
	gtkwave wave.vcd

clean: 
	rm -rf ./obj_dir/
	rm -f ./wave.vcd

