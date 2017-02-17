/*
 * mk20dx256_llwu.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_LLWU_H_
#define TEENSY32_MK20DX256_LLWU_H_

// Low-Leakage Wakeup Unit (LLWU)

#define LLWU_PE1		(*(volatile uint8_t  *)0x4007C000) // LLWU Pin Enable 1 register
#define LLWU_PE1_WUPE0(n)       ((uint8_t)((n) & 0x03)) // Wakeup Pin Enable For LLWU_P0
#define LLWU_PE1_WUPE1(n)       ((uint8_t)(((n) & 0x03) << 2)) // Wakeup Pin Enable For LLWU_P1
#define LLWU_PE1_WUPE2(n)       ((uint8_t)(((n) & 0x03) << 4)) // Wakeup Pin Enable For LLWU_P2
#define LLWU_PE1_WUPE3(n)       ((uint8_t)(((n) & 0x03) << 6)) // Wakeup Pin Enable For LLWU_P3
#define LLWU_PE2		(*(volatile uint8_t  *)0x4007C001) // LLWU Pin Enable 2 register
#define LLWU_PE2_WUPE4(n)       ((uint8_t)((n) & 0x03)) // Wakeup Pin Enable For LLWU_P4
#define LLWU_PE2_WUPE5(n)       ((uint8_t)(((n) & 0x03) << 2)) // Wakeup Pin Enable For LLWU_P5
#define LLWU_PE2_WUPE6(n)       ((uint8_t)(((n) & 0x03) << 4)) // Wakeup Pin Enable For LLWU_P6
#define LLWU_PE2_WUPE7(n)       ((uint8_t)(((n) & 0x03) << 6)) // Wakeup Pin Enable For LLWU_P7
#define LLWU_PE3		(*(volatile uint8_t  *)0x4007C002) // LLWU Pin Enable 3 register
#define LLWU_PE3_WUPE8(n)       ((uint8_t)((n) & 0x03)) // Wakeup Pin Enable For LLWU_P8
#define LLWU_PE3_WUPE9(n)       ((uint8_t)(((n) & 0x03) << 2)) // Wakeup Pin Enable For LLWU_P9
#define LLWU_PE3_WUPE10(n)      ((uint8_t)(((n) & 0x03) << 4)) // Wakeup Pin Enable For LLWU_P10
#define LLWU_PE3_WUPE11(n)      ((uint8_t)(((n) & 0x03) << 6)) // Wakeup Pin Enable For LLWU_P11
#define LLWU_PE4		(*(volatile uint8_t  *)0x4007C003) // LLWU Pin Enable 4 register
#define LLWU_PE4_WUPE12(n)      ((uint8_t)((n) & 0x03)) // Wakeup Pin Enable For LLWU_P12
#define LLWU_PE4_WUPE13(n)      ((uint8_t)(((n) & 0x03) << 2)) // Wakeup Pin Enable For LLWU_P13
#define LLWU_PE4_WUPE14(n)      ((uint8_t)(((n) & 0x03) << 4)) // Wakeup Pin Enable For LLWU_P14
#define LLWU_PE4_WUPE15(n)      ((uint8_t)(((n) & 0x03) << 6)) // Wakeup Pin Enable For LLWU_P15
#define LLWU_ME			(*(volatile uint8_t  *)0x4007C004) // LLWU Module Enable register
#define LLWU_ME_WUME0           ((uint8_t)0x01) // Wakeup Module Enable For Module 0
#define LLWU_ME_WUME1           ((uint8_t)0x02) // Wakeup Module Enable For Module 1
#define LLWU_ME_WUME2           ((uint8_t)0x04) // Wakeup Module Enable For Module 2
#define LLWU_ME_WUME3           ((uint8_t)0x08) // Wakeup Module Enable For Module 3
#define LLWU_ME_WUME4           ((uint8_t)0x10) // Wakeup Module Enable For Module 4
#define LLWU_ME_WUME5           ((uint8_t)0x20) // Wakeup Module Enable For Module 5
#define LLWU_ME_WUME6           ((uint8_t)0x40) // Wakeup Module Enable For Module 6
#define LLWU_ME_WUME7           ((uint8_t)0x80) // Wakeup Module Enable For Module 7
#define LLWU_F1			(*(volatile uint8_t  *)0x4007C005) // LLWU Flag 1 register
#define LLWU_F1_WUF0            ((uint8_t)0x01) // Wakeup Flag For LLWU_P0
#define LLWU_F1_WUF1            ((uint8_t)0x02) // Wakeup Flag For LLWU_P1
#define LLWU_F1_WUF2            ((uint8_t)0x04) // Wakeup Flag For LLWU_P2
#define LLWU_F1_WUF3            ((uint8_t)0x08) // Wakeup Flag For LLWU_P3
#define LLWU_F1_WUF4            ((uint8_t)0x10) // Wakeup Flag For LLWU_P4
#define LLWU_F1_WUF5            ((uint8_t)0x20) // Wakeup Flag For LLWU_P5
#define LLWU_F1_WUF6            ((uint8_t)0x40) // Wakeup Flag For LLWU_P6
#define LLWU_F1_WUF7            ((uint8_t)0x80) // Wakeup Flag For LLWU_P7
#define LLWU_F2			(*(volatile uint8_t  *)0x4007C006) // LLWU Flag 2 register
#define LLWU_F2_WUF8            ((uint8_t)0x01) // Wakeup Flag For LLWU_P8
#define LLWU_F2_WUF9            ((uint8_t)0x02) // Wakeup Flag For LLWU_P9
#define LLWU_F2_WUF10           ((uint8_t)0x04) // Wakeup Flag For LLWU_P10
#define LLWU_F2_WUF11           ((uint8_t)0x08) // Wakeup Flag For LLWU_P11
#define LLWU_F2_WUF12           ((uint8_t)0x10) // Wakeup Flag For LLWU_P12
#define LLWU_F2_WUF13           ((uint8_t)0x20) // Wakeup Flag For LLWU_P13
#define LLWU_F2_WUF14           ((uint8_t)0x40) // Wakeup Flag For LLWU_P14
#define LLWU_F2_WUF15           ((uint8_t)0x80) // Wakeup Flag For LLWU_P15
#define LLWU_F3			(*(volatile uint8_t  *)0x4007C007) // LLWU Flag 3 register
#define LLWU_F3_MWUF0           ((uint8_t)0x01) // Wakeup flag For module 0
#define LLWU_F3_MWUF1           ((uint8_t)0x02) // Wakeup flag For module 1
#define LLWU_F3_MWUF2           ((uint8_t)0x04) // Wakeup flag For module 2
#define LLWU_F3_MWUF3           ((uint8_t)0x08) // Wakeup flag For module 3
#define LLWU_F3_MWUF4           ((uint8_t)0x10) // Wakeup flag For module 4
#define LLWU_F3_MWUF5           ((uint8_t)0x20) // Wakeup flag For module 5
#define LLWU_F3_MWUF6           ((uint8_t)0x40) // Wakeup flag For module 6
#define LLWU_F3_MWUF7           ((uint8_t)0x80) // Wakeup flag For module 7
#define LLWU_FILT1		(*(volatile uint8_t  *)0x4007C008) // LLWU Pin Filter 1 register
#define LLWU_FILT2		(*(volatile uint8_t  *)0x4007C009) // LLWU Pin Filter 2 register
#define LLWU_RST		(*(volatile uint8_t  *)0x4007C00A) // LLWU Reset Enable register

#endif /* TEENSY32_MK20DX256_LLWU_H_ */
