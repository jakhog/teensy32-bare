/*
 * mk20dx256_mem.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_MEM_H_
#define TEENSY32_MK20DX256_MEM_H_

// Local Memory Controller

#define LMEM_PCCCR		(*(volatile uint32_t *)0xE0082000) // Cache control register
#define LMEM_PCCLCR		(*(volatile uint32_t *)0xE0082004) // Cache line control register
#define LMEM_PCCSAR		(*(volatile uint32_t *)0xE0082008) // Cache search address register
#define LMEM_PCCCVR		(*(volatile uint32_t *)0xE008200C) // Cache read/write value register
#define LMEM_PCCRMR		(*(volatile uint32_t *)0xE0082020) // Cache regions mode register


// Flash Memory Controller (FMC)

#define FMC_PFAPR		(*(volatile uint32_t *)0x4001F000) // Flash Access Protection
#define FMC_PFB0CR		(*(volatile uint32_t *)0x4001F004) // Flash Control
#define FMC_TAGVDW0S0		(*(volatile uint32_t *)0x4001F100) // Cache Tag Storage
#define FMC_TAGVDW0S1		(*(volatile uint32_t *)0x4001F104) // Cache Tag Storage
#define FMC_TAGVDW1S0		(*(volatile uint32_t *)0x4001F108) // Cache Tag Storage
#define FMC_TAGVDW1S1		(*(volatile uint32_t *)0x4001F10C) // Cache Tag Storage
#define FMC_TAGVDW2S0		(*(volatile uint32_t *)0x4001F110) // Cache Tag Storage
#define FMC_TAGVDW2S1		(*(volatile uint32_t *)0x4001F114) // Cache Tag Storage
#define FMC_TAGVDW3S0		(*(volatile uint32_t *)0x4001F118) // Cache Tag Storage
#define FMC_TAGVDW3S1		(*(volatile uint32_t *)0x4001F11C) // Cache Tag Storage
#define FMC_DATAW0S0		(*(volatile uint32_t *)0x4001F200) // Cache Data Storage
#define FMC_DATAW0S1		(*(volatile uint32_t *)0x4001F204) // Cache Data Storage
#define FMC_DATAW1S0		(*(volatile uint32_t *)0x4001F208) // Cache Data Storage
#define FMC_DATAW1S1		(*(volatile uint32_t *)0x4001F20C) // Cache Data Storage
#define FMC_DATAW2S0		(*(volatile uint32_t *)0x4001F210) // Cache Data Storage
#define FMC_DATAW2S1		(*(volatile uint32_t *)0x4001F214) // Cache Data Storage
#define FMC_DATAW3S0		(*(volatile uint32_t *)0x4001F218) // Cache Data Storage
#define FMC_DATAW3S1		(*(volatile uint32_t *)0x4001F21C) // Cache Data Storage

// Flash Memory Module (FTFL)

#define FTFL_FSTAT		(*(volatile uint8_t  *)0x40020000) // Flash Status Register
#define FTFL_FSTAT_CCIF			((uint8_t)0x80)			// Command Complete Interrupt Flag
#define FTFL_FSTAT_RDCOLERR		((uint8_t)0x40)			// Flash Read Collision Error Flag
#define FTFL_FSTAT_ACCERR		((uint8_t)0x20)			// Flash Access Error Flag
#define FTFL_FSTAT_FPVIOL		((uint8_t)0x10)			// Flash Protection Violation Flag
#define FTFL_FSTAT_MGSTAT0		((uint8_t)0x01)			// Memory Controller Command Completion Status Flag
#define FTFL_FCNFG		(*(volatile uint8_t  *)0x40020001) // Flash Configuration Register
#define FTFL_FCNFG_CCIE			((uint8_t)0x80)			// Command Complete Interrupt Enable
#define FTFL_FCNFG_RDCOLLIE		((uint8_t)0x40)			// Read Collision Error Interrupt Enable
#define FTFL_FCNFG_ERSAREQ		((uint8_t)0x20)			// Erase All Request
#define FTFL_FCNFG_ERSSUSP		((uint8_t)0x10)			// Erase Suspend
#define FTFL_FCNFG_PFLSH		((uint8_t)0x04)			// Flash memory configuration
#define FTFL_FCNFG_RAMRDY		((uint8_t)0x02)			// RAM Ready
#define FTFL_FCNFG_EEERDY		((uint8_t)0x01)			// EEPROM Ready
#define FTFL_FSEC		(*(const    uint8_t  *)0x40020002) // Flash Security Register
#define FTFL_FOPT		(*(const    uint8_t  *)0x40020003) // Flash Option Register
#define FTFL_FCCOB3		(*(volatile uint8_t  *)0x40020004) // Flash Common Command Object Registers
#define FTFL_FCCOB2		(*(volatile uint8_t  *)0x40020005)
#define FTFL_FCCOB1		(*(volatile uint8_t  *)0x40020006)
#define FTFL_FCCOB0		(*(volatile uint8_t  *)0x40020007)
#define FTFL_FCCOB7		(*(volatile uint8_t  *)0x40020008)
#define FTFL_FCCOB6		(*(volatile uint8_t  *)0x40020009)
#define FTFL_FCCOB5		(*(volatile uint8_t  *)0x4002000A)
#define FTFL_FCCOB4		(*(volatile uint8_t  *)0x4002000B)
#define FTFL_FCCOBB		(*(volatile uint8_t  *)0x4002000C)
#define FTFL_FCCOBA		(*(volatile uint8_t  *)0x4002000D)
#define FTFL_FCCOB9		(*(volatile uint8_t  *)0x4002000E)
#define FTFL_FCCOB8		(*(volatile uint8_t  *)0x4002000F)
#define FTFL_FPROT3		(*(volatile uint8_t  *)0x40020010) // Program Flash Protection Registers
#define FTFL_FPROT2		(*(volatile uint8_t  *)0x40020011) // Program Flash Protection Registers
#define FTFL_FPROT1		(*(volatile uint8_t  *)0x40020012) // Program Flash Protection Registers
#define FTFL_FPROT0		(*(volatile uint8_t  *)0x40020013) // Program Flash Protection Registers
#define FTFL_FEPROT		(*(volatile uint8_t  *)0x40020016) // EEPROM Protection Register
#define FTFL_FDPROT		(*(volatile uint8_t  *)0x40020017) // Data Flash Protection Register

// Cyclic Redundancy Check (CRC)

#define CRC_CRC			(*(volatile uint32_t *)0x40032000) // CRC Data register
#define CRC_GPOLY		(*(volatile uint32_t *)0x40032004) // CRC Polynomial register
#define CRC_CTRL		(*(volatile uint32_t *)0x40032008) // CRC Control register

// Cryptographic Acceleration Unit (CAU)

#define CAU_CASR		(*(volatile uint32_t *)0xE0081000) // Status Register
#define CAU_CAA			(*(volatile uint32_t *)0xE0081001) // Accumulator
#define CAU_CA0			(*(volatile uint32_t *)0xE0081002) // General Purpose Register
#define CAU_CA1			(*(volatile uint32_t *)0xE0081003) // General Purpose Register
#define CAU_CA2			(*(volatile uint32_t *)0xE0081004) // General Purpose Register
#define CAU_CA3			(*(volatile uint32_t *)0xE0081005) // General Purpose Register
#define CAU_CA4			(*(volatile uint32_t *)0xE0081006) // General Purpose Register
#define CAU_CA5			(*(volatile uint32_t *)0xE0081007) // General Purpose Register
#define CAU_CA6			(*(volatile uint32_t *)0xE0081008) // General Purpose Register
#define CAU_CA7			(*(volatile uint32_t *)0xE0081009) // General Purpose Register
#define CAU_CA8			(*(volatile uint32_t *)0xE008100A) // General Purpose Register

// Random Number Generator Accelerator (RNGA)

#define RNG_CR			(*(volatile uint32_t *)0x40029000) // RNGA Control Register
#define RNG_SR			(*(volatile uint32_t *)0x40029004) // RNGA Status Register
#define RNG_ER			(*(volatile uint32_t *)0x40029008) // RNGA Entropy Register
#define RNG_OR			(*(volatile uint32_t *)0x4002900C) // RNGA Output Register

#endif /* TEENSY32_MK20DX256_MEM_H_ */
