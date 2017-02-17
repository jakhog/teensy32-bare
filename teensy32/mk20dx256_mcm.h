/*
 * mk20dx256_mcm.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_MCM_H_
#define TEENSY32_MK20DX256_MCM_H_

// Miscellaneous Control Module (MCM)

#define MCM_PLASC		(*(volatile uint16_t *)0xE0080008) // Crossbar Switch (AXBS) Slave Configuration
#define MCM_PLAMC		(*(volatile uint16_t *)0xE008000A) // Crossbar Switch (AXBS) Master Configuration
#define MCM_PLACR		(*(volatile uint32_t *)0xE008000C) // Crossbar Switch (AXBS) Control Register (MK20DX128)
#define MCM_PLACR_ARG			((uint32_t)0x00000200)		// Arbitration select, 0=fixed, 1=round-robin
#define MCM_CR			(*(volatile uint32_t *)0xE008000C) // RAM arbitration control register (MK20DX256)
#define MCM_CR_SRAMLWP			((uint32_t)0x40000000)		// SRAM_L write protect
#define MCM_CR_SRAMLAP(n)		((uint32_t)(((n) & 0x03) << 28)) // SRAM_L priority, 0=RR, 1=favor DMA, 2=CPU, 3=DMA
#define MCM_CR_SRAMUWP			((uint32_t)0x04000000)		// SRAM_U write protect
#define MCM_CR_SRAMUAP(n)		((uint32_t)(((n) & 0x03) << 24)) // SRAM_U priority, 0=RR, 1=favor DMA, 2=CPU, 3=DMA
#define MCM_ISCR		(*(volatile uint32_t *)0xE0080010) // Interrupt Status Register
#define MCM_ETBCC		(*(volatile uint32_t *)0xE0080014) // ETB Counter Control register
#define MCM_ETBRL		(*(volatile uint32_t *)0xE0080018) // ETB Reload register
#define MCM_ETBCNT		(*(volatile uint32_t *)0xE008001C) // ETB Counter Value register
#define MCM_FADR		(*(volatile uint32_t *)0xE0080020) // Fault address register
#define MCM_FATR		(*(volatile uint32_t *)0xE0080024) // Fault attributes register
#define MCM_FDR			(*(volatile uint32_t *)0xE0080028) // Fault data register
#define MCM_PID			(*(volatile uint32_t *)0xE0080030) // Process ID register
#define MCM_CPO			(*(volatile uint32_t *)0xE0080040) // Compute Operation Control Register

#endif /* TEENSY32_MK20DX256_MCM_H_ */
