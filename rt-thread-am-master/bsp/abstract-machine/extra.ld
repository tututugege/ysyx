MEMORY {
  MROM (rx) : ORIGIN = 0x20000000, LENGTH = 4K
  SRAM (rwx) : ORIGIN = 0x0f000000, LENGTH = 8K
  FLASH (rx) : ORIGIN = 0x30000000, LENGTH = 16M
  PSRAM (rwx) : ORIGIN = 0x80000000, LENGTH = 4M
  SDRAM (rwx) : ORIGIN = 0xa0000000, LENGTH = 64M
}
SECTIONS {

  _extra_lma = LOADADDR(.data.extra);
  .data.extra : {
    _extra_start = .;
    /* section information for finsh shell */
    __fsymtab_start = .;
    KEEP(*(FSymTab))
    __fsymtab_end = .;
    . = ALIGN(8);
    __vsymtab_start = .;
    KEEP(*(VSymTab))
    __vsymtab_end = .;
    . = ALIGN(8);

    /* section information for initial. */
    . = ALIGN(8);
    __rt_init_start = .;
    KEEP(*(SORT(.rti_fn*)))
    __rt_init_end = .;
    . = ALIGN(8);

    __rt_utest_tc_tab_start = .;
    KEEP(*(UtestTcTab))
    __rt_utest_tc_tab_end = .;

    . = ALIGN(8);
    __am_apps_data_start = .;
    *(__am_apps.data*)
    *(__am_apps.sdata*)
    __am_apps_data_end = .;
    _extra_end = .;
    . = ALIGN(8);
  } > SDRAM AT> FLASH
}
INSERT BEFORE .data;

SECTIONS {
  .bss.extra : {
    . = ALIGN(8);
    __am_apps_bss_start = .;
    *(__am_apps.bss*)
    *(__am_apps.sbss*)
    *(__am_apps.scommon*)
    __am_apps_bss_end = .;
    . = ALIGN(8);
  } > SDRAM AT> FLASH
}
INSERT BEFORE .bss;
