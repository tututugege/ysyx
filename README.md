export AM_HOME=$(pwd)/abstract-machine
export NPC_HOME=$(pwd)/npc
export NVBOARD_HOME=$(pwd)/nvboard
cd ysyxSoC && make verilog
cd ../rt-thread-am-master/bsp/abstract-machine
make init
make ARCH=riscv32e-ysyxsoc all

