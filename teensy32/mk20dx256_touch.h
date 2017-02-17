/*
 * mk20dx256_touch.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_TOUCH_H_
#define TEENSY32_MK20DX256_TOUCH_H_

// Touch sense input (TSI)

#define TSI0_GENCS		(*(volatile uint32_t *)0x40045000) // General Control and Status Register
#define TSI_GENCS_LPCLKS		((uint32_t)0x10000000)		//
#define TSI_GENCS_LPSCNITV(n)		(((n) & 15) << 24)		//
#define TSI_GENCS_NSCN(n)		(((n) & 31) << 19)		//
#define TSI_GENCS_PS(n)			(((n) & 7) << 16)		//
#define TSI_GENCS_EOSF			((uint32_t)0x00008000)		//
#define TSI_GENCS_OUTRGF		((uint32_t)0x00004000)		//
#define TSI_GENCS_EXTERF		((uint32_t)0x00002000)		//
#define TSI_GENCS_OVRF			((uint32_t)0x00001000)		//
#define TSI_GENCS_SCNIP			((uint32_t)0x00000200)		//
#define TSI_GENCS_SWTS			((uint32_t)0x00000100)		//
#define TSI_GENCS_TSIEN			((uint32_t)0x00000080)		//
#define TSI_GENCS_TSIIE			((uint32_t)0x00000040)		//
#define TSI_GENCS_ERIE			((uint32_t)0x00000020)		//
#define TSI_GENCS_ESOR			((uint32_t)0x00000010)		//
#define TSI_GENCS_STM			((uint32_t)0x00000002)		//
#define TSI_GENCS_STPE			((uint32_t)0x00000001)		//
#define TSI0_SCANC		(*(volatile uint32_t *)0x40045004) // SCAN Control Register
#define TSI_SCANC_REFCHRG(n)		(((n) & 15) << 24)		//
#define TSI_SCANC_EXTCHRG(n)		(((n) & 15) << 16)		//
#define TSI_SCANC_SMOD(n)		(((n) & 255) << 8)		//
#define TSI_SCANC_AMCLKS(n)		(((n) & 3) << 3)		//
#define TSI_SCANC_AMPSC(n)		(((n) & 7) << 0)		//
#define TSI0_PEN		(*(volatile uint32_t *)0x40045008) // Pin Enable Register
#define TSI0_WUCNTR		(*(volatile uint32_t *)0x4004500C) // Wake-Up Channel Counter Register
#define TSI0_CNTR1		(*(volatile uint32_t *)0x40045100) // Counter Register
#define TSI0_CNTR3		(*(volatile uint32_t *)0x40045104) // Counter Register
#define TSI0_CNTR5		(*(volatile uint32_t *)0x40045108) // Counter Register
#define TSI0_CNTR7		(*(volatile uint32_t *)0x4004510C) // Counter Register
#define TSI0_CNTR9		(*(volatile uint32_t *)0x40045110) // Counter Register
#define TSI0_CNTR11		(*(volatile uint32_t *)0x40045114) // Counter Register
#define TSI0_CNTR13		(*(volatile uint32_t *)0x40045118) // Counter Register
#define TSI0_CNTR15		(*(volatile uint32_t *)0x4004511C) // Counter Register
#define TSI0_THRESHOLD		(*(volatile uint32_t *)0x40045120) // Low Power Channel Threshold Register

#endif /* TEENSY32_MK20DX256_TOUCH_H_ */
