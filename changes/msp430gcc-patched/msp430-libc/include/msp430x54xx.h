#if !defined(__msp430x54xx)
#define __msp430x54xx

/* msp430x54xx.h
 *
 * mspgcc project: MSP430 device headers
 * MSP430x54xx family header
 *
 * (c) 2006 by Steve Underwood <steveu@coppice.org>
 * Originally based in part on work by Texas Instruments Inc.
 *
 * 2008-10-08 - sb-sf (sb-sf@users.sf.net)
 * - created, based on msp430xG461x.h
 *
 * $Id: msp430x54xx.h,v 1.2 2008/12/07 22:45:57 sb-sf Exp $
 */

#include <iomacros.h>

#define __MSP430_SYS_BASE__     0x180
#define __MSP430_WDT_A_BASE__   0x150
#define __MSP430_PORT1_BASE__   0x200
#define __MSP430_PORT2_BASE__   0x200
#define __MSP430_PORT3_BASE__   0x220
#define __MSP430_PORT4_BASE__   0x220
#define __MSP430_PORT5_BASE__   0x240
#define __MSP430_PORT6_BASE__   0x240
#define __MSP430_PORT7_BASE__   0x260
#define __MSP430_PORT8_BASE__   0x260
#define __MSP430_PORT9_BASE__   0x280
#define __MSP430_PORT10_BASE__  0x280
#define __MSP430_PORT11_BASE__  0x2A0
#define __MSP430_PORTJ_BASE__   0x320

#define __MSP430_MPY32_BASE__   0x4C0


#include <msp430/wdt_a.h>
#include <msp430/sys.h>
#include <msp430/gpio_5xxx.h>
#include <msp430/mpy32.h>

/*

  Empty yet :(

*/
#define SFRIE1_             0x0100  /* Interrupt Enable 1 */
sfrw(SFRIE1, SFRIE1_);
#define WDTIE               (1<<0)
#define OFIE                (1<<1)
#define VMAIE               (1<<3)
#define NMIIE               (1<<4)
#define ACCVIE              (1<<5)
#define JMBINIE             (1<<6)
#define JMBOUTIE            (1<<7)

#define SFRIFG1_            0x0102  /* Interrupt Flag 1 */
sfrw(SFRIFG1, SFRIFG1_);
#define WDTIFG              (1<<0)
#define OFIFG               (1<<1)
#define VMAIFG              (1<<3)
#define NMIIFG              (1<<4)
#define JMBINIFG            (1<<6)
#define JMBOUTIFG           (1<<7)

#define RTC_A_VECTOR        0x52    /* 0xFFD2 Basic Timer / RTC */
#define PORT2_VECTOR        0x54    /* 0xFFD4 Port 2 */
#define USCIB3_RXTX_VECTOR  0x56    /* 0xFFD6 USCI A1/B1 Transmit */
#define USCIA3_RXTX_VECTOR  0x58    /* 0xFFD8 USCI A1/B1 Receive */
#define USCIB1_RXTX_VECTOR  0x5A    /* 0xFFDA USCI A1/B1 Transmit */
#define USCIA1_RXTX_VECTOR  0x5C    /* 0xFFDC USCI A1/B1 Receive */
#define PORT1_VECTOR        0x5E    /* 0xFFDE Port 1 */
#define TIMER1_A1_VECTOR    0x60    /* 0xFFE0 Timer A CC1-2, TA */
#define TIMER1_A0_VECTOR    0x62    /* 0xFFE2 Timer A CC0 */
#define DMA_VECTOR          0x64    /* 0xFFE4 Port 2 */
#define USCIB2_RXTX_VECTOR  0x66    /* 0xFFE6 USCI A1/B1 Transmit */
#define USCIA2_RXTX_VECTOR  0x68    /* 0xFFE8 USCI A1/B1 Receive */
#define TIMER0_A1_VECTOR    0x6A    /* 0xFFEA Timer A CC1-2, TA */
#define TIMER0_A0_VECTOR    0x6C    /* 0xFFEC Timer A CC0 */
#define AD12_A_VECTOR       0x6E    /* 0xFFEE ADC */
#define USCIB0_RXTX_VECTOR  0x70    /* 0xFFF0 USCI A0/B0 Transmit */
#define USCIA0_RXTX_VECTOR  0x72    /* 0xFFF2 USCI A0/B0 Receive */
#define WDT_VECTOR          0x74    /* 0xFFF4 Watchdog Timer */
#define TIMER0_B1_VECTOR    0x76    /* 0xFFF6 Timer B CC1-2, TB */
#define TIMER0_B0_VECTOR    0x78    /* 0xFFF8 Timer B CC0 */
#define USER_NMI_VECTOR     0x7A    /* 0xFFFA Non-maskable */
#define NMI_VECTOR          0x7C    /* 0xFFFC Non-maskable */

#endif /* #ifndef __msp430x54xx */
