#!/bin/sh

HEAP_SECTION_MSP430=" "
HEAP_MEMORY_MSP430=" "

if test ${GOT_HEAP_MSP-0} -ne 0 
then 
HEAP_SECTION_MSP430=".heap ${RELOCATING-0} :
  {
    ${RELOCATING+ PROVIDE (__heap_data_start = .) ; }
    *(.heap*)
    ${RELOCATING+ PROVIDE (_heap_data_end = .) ; }
    ${RELOCATING+. = ALIGN(2);}
    ${RELOCATING+ PROVIDE (__heap_bottom = .) ; }
    ${RELOCATING+ PROVIDE (__heap_top = ${HEAP_START} + ${HEAP_LENGTH}) ; }
  } ${RELOCATING+ > heap}"
HEAP_MEMORY_MSP430="heap(rwx)         : ORIGIN = $HEAP_START,    LENGTH = $HEAP_LENGTH"
fi

ROM_END=$((ROM_START + ROM_SIZE))
if (( ROM_END > 65536 ))
then
NEAR_ROM_SIZE=$(printf "0x%x" $(( $VECTORS_START - $ROM_START )) )
FAR_ROM_SIZE=$(printf  "0x%x" $(( $ROM_START + $ROM_SIZE - 0x10000 )) )

TEXT_REGION_MSP430="text   (rx)       : ORIGIN = $ROM_START,     LENGTH = $NEAR_ROM_SIZE
  fartext(rx)       : ORIGIN = 0x10000,    LENGTH = $FAR_ROM_SIZE"

FARTEXT_SECTION_MSP430="/* Extended address space, accessed with extended instructions.  */
  .fartext :
  {
    ${RELOCATING+. = ALIGN(2);}
    *(.fartext)
    ${RELOCATING+. = ALIGN(2);}
    *(.fartext.*)

    _efartext = .;
  } ${RELOCATING+ > fartext}"
else
TEXT_REGION_MSP430="text   (rx)       : ORIGIN = $ROM_START,     LENGTH = $ROM_SIZE"
FARTEXT_SECTION_MSP430=""
fi

cat <<EOF
OUTPUT_FORMAT("${OUTPUT_FORMAT}","${OUTPUT_FORMAT}","${OUTPUT_FORMAT}")
OUTPUT_ARCH(${ARCH})

MEMORY
{
  ${TEXT_REGION_MSP430}
  data   (rwx)      : ORIGIN = $RAM_START,     LENGTH = $RAM_SIZE
  vectors (rw)      : ORIGIN = $VECTORS_START,     LENGTH = $VECTORS_SIZE
  bootloader(rx)    : ORIGIN = 0x0c00,     LENGTH = 1K
  infomem(rx)       : ORIGIN = 0x1000,     LENGTH = 256
  infomemnobits(rx) : ORIGIN = 0x1000,     LENGTH = 256
  ${HEAP_MEMORY_MSP430}
}

SECTIONS
{
  /* Read-only sections, merged into text segment.  */
  ${TEXT_DYNAMIC+${DYNAMIC}}
  .hash        ${RELOCATING-0} : { *(.hash)             }
  .dynsym      ${RELOCATING-0} : { *(.dynsym)           }
  .dynstr      ${RELOCATING-0} : { *(.dynstr)           }
  .gnu.version ${RELOCATING-0} : { *(.gnu.version)      }
  .gnu.version_d ${RELOCATING-0} : { *(.gnu.version_d)  }
  .gnu.version_r ${RELOCATING-0} : { *(.gnu.version_r)  }

  .rel.init    ${RELOCATING-0} : { *(.rel.init) }
  .rela.init   ${RELOCATING-0} : { *(.rela.init) }
  .rel.text    ${RELOCATING-0} :
    {
      *(.rel.text)
      ${RELOCATING+*(.rel.text.*)}
      ${RELOCATING+*(.rel.gnu.linkonce.t*)}
    }
  .rela.text   ${RELOCATING-0} :
    {
      *(.rela.text)
      ${RELOCATING+*(.rela.text.*)}
      ${RELOCATING+*(.rela.gnu.linkonce.t*)}
    }
  .rel.fini    ${RELOCATING-0} : { *(.rel.fini) }
  .rela.fini   ${RELOCATING-0} : { *(.rela.fini) }
  .rel.rodata  ${RELOCATING-0} :
    {
      *(.rel.rodata)
      ${RELOCATING+*(.rel.rodata.*)}
      ${RELOCATING+*(.rel.gnu.linkonce.r*)}
    }
  .rela.rodata ${RELOCATING-0} :
    {
      *(.rela.rodata)
      ${RELOCATING+*(.rela.rodata.*)}
      ${RELOCATING+*(.rela.gnu.linkonce.r*)}
    }
  .rel.data    ${RELOCATING-0} :
    {
      *(.rel.data)
      ${RELOCATING+*(.rel.data.*)}
      ${RELOCATING+*(.rel.gnu.linkonce.d*)}
    }
  .rela.data   ${RELOCATING-0} :
    {
      *(.rela.data)
      ${RELOCATING+*(.rela.data.*)}
      ${RELOCATING+*(.rela.gnu.linkonce.d*)}
    }
  .rel.ctors   ${RELOCATING-0} : { *(.rel.ctors)        }
  .rela.ctors  ${RELOCATING-0} : { *(.rela.ctors)       }
  .rel.dtors   ${RELOCATING-0} : { *(.rel.dtors)        }
  .rela.dtors  ${RELOCATING-0} : { *(.rela.dtors)       }
  .rel.got     ${RELOCATING-0} : { *(.rel.got)          }
  .rela.got    ${RELOCATING-0} : { *(.rela.got)         }
  .rel.bss     ${RELOCATING-0} : { *(.rel.bss)          }
  .rela.bss    ${RELOCATING-0} : { *(.rela.bss)         }
  .rel.plt     ${RELOCATING-0} : { *(.rel.plt)          }
  .rela.plt    ${RELOCATING-0} : { *(.rela.plt)         }

  /* Internal text space.  */
  .text :
  {
    ${RELOCATING+. = ALIGN(2);}
    *(.init)
    KEEP(*(.init))
    *(.init0)  /* Start here after reset.               */
    KEEP(*(.init0))
    *(.init1)  /* User definable.                       */
    KEEP(*(.init1))
    *(.init2)  /* Initialize stack.                     */
    KEEP(*(.init2))
    *(.init3)  /* Initialize hardware, user definable.  */
    KEEP(*(.init3))
    *(.init4)  /* Copy data to .data, clear bss.        */
    KEEP(*(.init4))
    *(.init5)  /* User definable.                       */
    KEEP(*(.init5))
    *(.init6)  /* C++ constructors.                     */
    KEEP(*(.init6))
    *(.init7)  /* User definable.                       */
    KEEP(*(.init7))
    *(.init8)  /* User definable.                       */
    KEEP(*(.init8))
    *(.init9)  /* Call main().                          */
    KEEP(*(.init9))

    ${CONSTRUCTING+ __ctors_start = . ; }
    ${CONSTRUCTING+ *(.ctors) }
    ${CONSTRUCTING+ KEEP(*(.ctors)) }
    ${CONSTRUCTING+ __ctors_end = . ; }
    ${CONSTRUCTING+ __dtors_start = . ; }
    ${CONSTRUCTING+ *(.dtors) }
    ${CONSTRUCTING+ KEEP(*(.dtors)) }
    ${CONSTRUCTING+ __dtors_end = . ; }

    ${RELOCATING+. = ALIGN(2);}
    *(.text)
    ${RELOCATING+. = ALIGN(2);}
    *(.text.*)

    ${RELOCATING+. = ALIGN(2);}
    *(.fini9)  /* Jumps here after main(). User definable.  */
    KEEP(*(.fini9))
    *(.fini8)  /* User definable.                           */
    KEEP(*(.fini8))
    *(.fini7)  /* User definable.                           */
    KEEP(*(.fini7))
    *(.fini6)  /* C++ destructors.                          */
    KEEP(*(.fini6))
    *(.fini5)  /* User definable.                           */
    KEEP(*(.fini5))
    *(.fini4)  /* User definable.                           */
    KEEP(*(.fini4))
    *(.fini3)  /* User definable.                           */
    KEEP(*(.fini3))
    *(.fini2)  /* User definable.                           */
    KEEP(*(.fini2))
    *(.fini1)  /* User definable.                           */
    KEEP(*(.fini1))
    *(.fini0)  /* Infinite loop after program termination.  */
    KEEP(*(.fini0))
    *(.fini)
    KEEP(*(.fini))

    _etext = .;
  } ${RELOCATING+ > text}

  .data ${RELOCATING-0} :
  {  
    ${RELOCATING+ PROVIDE (__data_start = .) ; }
    ${RELOCATING+. = ALIGN(2);}
    *(.data)
    *(SORT_BY_ALIGNMENT(.data.*))
    ${RELOCATING+. = ALIGN(2);}
    *(.gnu.linkonce.d*)
    ${RELOCATING+. = ALIGN(2);}
    ${RELOCATING+ _edata = . ; }
  } ${RELOCATING+ > data AT > text}
   ${RELOCATING+ PROVIDE (__data_load_start = LOADADDR(.data) ); }
   ${RELOCATING+ PROVIDE (__data_size = SIZEOF(.data) ); }
  
  /* Bootloader.  */
  .bootloader ${RELOCATING-0} :
  {
    ${RELOCATING+ PROVIDE (__boot_start = .) ; }
    *(.bootloader)
    ${RELOCATING+. = ALIGN(2);}
    *(.bootloader.*)
  } ${RELOCATING+ > bootloader}
  
  /* Information memory.  */
  .infomem ${RELOCATING-0} :
  {
    *(.infomem)
    ${RELOCATING+. = ALIGN(2);}
    *(.infomem.*)
  } ${RELOCATING+ > infomem}

  /* Information memory (not loaded into MPU).  */
  .infomemnobits ${RELOCATING-0} :
  {
    *(.infomemnobits)
    ${RELOCATING+. = ALIGN(2);}
    *(.infomemnobits.*)
  } ${RELOCATING+ > infomemnobits}

  .bss ${RELOCATING-0} :
  {
    ${RELOCATING+ PROVIDE (__bss_start = .) ; }
    *(.bss)
    *(SORT_BY_ALIGNMENT(.bss.*))
    *(COMMON)
    ${RELOCATING+ PROVIDE (__bss_end = .) ; }
    ${RELOCATING+ _end = . ;  }
  } ${RELOCATING+ > data}
   ${RELOCATING+ PROVIDE (__bss_size = SIZEOF(.bss) ); }

  .noinit ${RELOCATING-0} :
  {
    ${RELOCATING+ PROVIDE (__noinit_start = .) ; }
    *(.noinit)
    *(.noinit.*)
    *(COMMON)
    ${RELOCATING+ PROVIDE (__noinit_end = .) ; }
    ${RELOCATING+ _end = . ;  }
  } ${RELOCATING+ > data}

  .vectors ${RELOCATING-0}:
  {
    ${RELOCATING+ PROVIDE (__vectors_start = .) ; }
    *(.vectors*)
    KEEP(*(.vectors*))
    ${RELOCATING+ _vectors_end = . ; }
  } ${RELOCATING+ > vectors}

  ${FARTEXT_SECTION_MSP430}
  ${HEAP_SECTION_MSP430}

  /* Stabs for profiling information*/
  .profiler 0 : { *(.profiler) }
  
  /* Stabs debugging sections.  */
  .stab 0 : { *(.stab) } 
  .stabstr 0 : { *(.stabstr) }
  .stab.excl 0 : { *(.stab.excl) }
  .stab.exclstr 0 : { *(.stab.exclstr) }
  .stab.index 0 : { *(.stab.index) }
  .stab.indexstr 0 : { *(.stab.indexstr) }
  .comment 0 : { *(.comment) }
 
  /* DWARF debug sections.
     Symbols in the DWARF debugging sections are relative to the beginning
     of the section so we begin them at 0.  */

  /* DWARF 1 */
  .debug          0 : { *(.debug) }
  .line           0 : { *(.line) }

  /* GNU DWARF 1 extensions */
  .debug_srcinfo  0 : { *(.debug_srcinfo) }
  .debug_sfnames  0 : { *(.debug_sfnames) }

  /* DWARF 1.1 and DWARF 2 */
  .debug_aranges  0 : { *(.debug_aranges) }
  .debug_pubnames 0 : { *(.debug_pubnames) }

  /* DWARF 2 */
  .debug_info     0 : { *(.debug_info) *(.gnu.linkonce.wi.*) }
  .debug_abbrev   0 : { *(.debug_abbrev) }
  .debug_line     0 : { *(.debug_line) }
  .debug_frame    0 : { *(.debug_frame) }
  .debug_str      0 : { *(.debug_str) }
  .debug_loc      0 : { *(.debug_loc) }
  .debug_macinfo  0 : { *(.debug_macinfo) }

  /* DWARF 3 */
  .debug_pubtypes 0 : { *(.debug_pubtypes) }
  .debug_ranges   0 : { *(.debug_ranges) }

  PROVIDE (__stack = ${STACK}) ;
  PROVIDE (__data_start_rom = _etext) ;
  PROVIDE (__data_end_rom   = _etext + SIZEOF (.data)) ;
  PROVIDE (__noinit_start_rom = _etext + SIZEOF (.data)) ;
  PROVIDE (__noinit_end_rom = _etext + SIZEOF (.data) + SIZEOF (.noinit)) ;
  PROVIDE (__subdevice_has_heap = ${GOT_HEAP_MSP-0}) ;
}
EOF
