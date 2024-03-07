BUILD_DIR=./build
ELF=$(BUILD_DIR)/ex18
CSRCS=$(notdir $(ELF))/$(notdir $(ELF)).c
CFLAGS=-Wall -g

all:$(ELF)

$(ELF):$(CSRCS)
	cc $(CFLAGS) $^ -o $@

valgrind:$(ELF)
	valgrind $(ELF)

clean:
	rm -f $(BUILD_DIR)/*

.PHONY: clean all
