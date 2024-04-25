ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }
MEMORY {
  MROM (rx) : ORIGIN = 0x20000000, LENGTH = 4K
  SRAM (rwx) : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  . = _pmem_start + _entry_offset;
  .text : {
    *(entry)
    *(.text*)
  } > MROM : text

  _etext = LOADADDR(.data);
  .data : {
    _bdata = .;
    *(.rodata*)
    *(.srodata*)
    *(.sdata*)
    *(.data*)
    _edata = .;
  } > SRAM AT> MROM : data 


  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  _bss_end = .;
  } > SRAM

  .stack : {
  _heap_start = .;
    _stack_top = ALIGN(0x1000);
    _stack_pointer = ORIGIN(SRAM) + LENGTH(SRAM);
    end = .;
  } > SRAM
}
