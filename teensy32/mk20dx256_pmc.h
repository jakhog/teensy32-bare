/*
 * mk20dx256_pmc.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_PMC_H_
#define TEENSY32_MK20DX256_PMC_H_

// Power Management Controller

#define PMC_LVDSC1		(*(volatile uint8_t  *)0x4007D000) // Low Voltage Detect Status And Control 1 register
#define PMC_LVDSC1_LVDF			((uint8_t)0x80)			// Low-Voltage Detect Flag
#define PMC_LVDSC1_LVDACK		((uint8_t)0x40)			// Low-Voltage Detect Acknowledge
#define PMC_LVDSC1_LVDIE		((uint8_t)0x20)			// Low-Voltage Detect Interrupt Enable
#define PMC_LVDSC1_LVDRE		((uint8_t)0x10)			// Low-Voltage Detect Reset Enable
#define PMC_LVDSC1_LVDV(n)		((uint8_t)((n) & 0x03))		// Low-Voltage Detect Voltage Select
#define PMC_LVDSC2		(*(volatile uint8_t  *)0x4007D001) // Low Voltage Detect Status And Control 2 register
#define PMC_LVDSC2_LVWF			((uint8_t)0x80)			// Low-Voltage Warning Flag
#define PMC_LVDSC2_LVWACK		((uint8_t)0x40)			// Low-Voltage Warning Acknowledge
#define PMC_LVDSC2_LVWIE		((uint8_t)0x20)			// Low-Voltage Warning Interrupt Enable
#define PMC_LVDSC2_LVWV(n)		((uint8_t)((n) & 0x03))		// Low-Voltage Warning Voltage Select
#define PMC_REGSC		(*(volatile uint8_t  *)0x4007D002) // Regulator Status And Control register
#define PMC_REGSC_BGEN			((uint8_t)0x10)			// Bandgap Enable In VLPx Operation
#define PMC_REGSC_ACKISO		((uint8_t)0x08)			// Acknowledge Isolation
#define PMC_REGSC_REGONS		((uint8_t)0x04)			// Regulator In Run Regulation Status
#define PMC_REGSC_BGBE			((uint8_t)0x01)			// Bandgap Buffer Enable

#endif /* TEENSY32_MK20DX256_PMC_H_ */
