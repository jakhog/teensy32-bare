/*
 * mk20dx256_i2c.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_I2C_H_
#define TEENSY32_MK20DX256_I2C_H_

#include <stdint.h>

// Inter-Integrated Circuit (I2C)

typedef struct {
	volatile uint8_t	A1;
	volatile uint8_t	F;
	volatile uint8_t	C1;
	volatile uint8_t	S;
	volatile uint8_t	D;
	volatile uint8_t	C2;
	volatile uint8_t	FLT;
	volatile uint8_t	RA;
	volatile uint8_t	SMB;
	volatile uint8_t	A2;
	volatile uint8_t	SLTH;
	volatile uint8_t	SLTL;
} KINETIS_I2C_t;

#define KINETIS_I2C0		(*(KINETIS_I2C_t *)0x40066000)
#define KINETIS_I2C1		(*(KINETIS_I2C_t *)0x40067000)
#define KINETIS_I2C2		(*(KINETIS_I2C_t *)0x400E6000)
#define KINETIS_I2C3		(*(KINETIS_I2C_t *)0x400E7000)
#define I2C0_A1			(KINETIS_I2C0.A1)		// I2C Address Register 1
#define I2C0_F			(KINETIS_I2C0.F)		// I2C Frequency Divider register
#define I2C_F_DIV20			((uint8_t)0x00)
#define I2C_F_DIV22			((uint8_t)0x01)
#define I2C_F_DIV24			((uint8_t)0x02)
#define I2C_F_DIV26			((uint8_t)0x03)
#define I2C_F_DIV28			((uint8_t)0x04)
#define I2C_F_DIV30			((uint8_t)0x05)
#define I2C_F_DIV32			((uint8_t)0x09)
#define I2C_F_DIV34			((uint8_t)0x06)
#define I2C_F_DIV36			((uint8_t)0x0A)
#define I2C_F_DIV40			((uint8_t)0x07)
#define I2C_F_DIV44			((uint8_t)0x0C)
#define I2C_F_DIV48			((uint8_t)0x0D)
#define I2C_F_DIV56			((uint8_t)0x0E)
#define I2C_F_DIV64			((uint8_t)0x12)
#define I2C_F_DIV68			((uint8_t)0x0F)
#define I2C_F_DIV72			((uint8_t)0x13)
#define I2C_F_DIV80			((uint8_t)0x14)
#define I2C_F_DIV88			((uint8_t)0x15)
#define I2C_F_DIV96			((uint8_t)0x19)
#define I2C_F_DIV104			((uint8_t)0x16)
#define I2C_F_DIV112			((uint8_t)0x1A)
#define I2C_F_DIV128			((uint8_t)0x17)
#define I2C_F_DIV144			((uint8_t)0x1C)
#define I2C_F_DIV160			((uint8_t)0x1D)
#define I2C_F_DIV192			((uint8_t)0x1E)
#define I2C_F_DIV224			((uint8_t)0x22)
#define I2C_F_DIV240			((uint8_t)0x1F)
#define I2C_F_DIV256			((uint8_t)0x23)
#define I2C_F_DIV288			((uint8_t)0x24)
#define I2C_F_DIV320			((uint8_t)0x25)
#define I2C_F_DIV384			((uint8_t)0x26)
#define I2C_F_DIV480			((uint8_t)0x27)
#define I2C_F_DIV448			((uint8_t)0x2A)
#define I2C_F_DIV512			((uint8_t)0x2B)
#define I2C_F_DIV576			((uint8_t)0x2C)
#define I2C_F_DIV640			((uint8_t)0x2D)
#define I2C_F_DIV768			((uint8_t)0x2E)
#define I2C_F_DIV896			((uint8_t)0x32)
#define I2C_F_DIV960			((uint8_t)0x2F)
#define I2C_F_DIV1024			((uint8_t)0x33)
#define I2C_F_DIV1152			((uint8_t)0x34)
#define I2C_F_DIV1280			((uint8_t)0x35)
#define I2C_F_DIV1536			((uint8_t)0x36)
#define I2C_F_DIV1920			((uint8_t)0x37)
#define I2C_F_DIV1792			((uint8_t)0x3A)
#define I2C_F_DIV2048			((uint8_t)0x3B)
#define I2C_F_DIV2304			((uint8_t)0x3C)
#define I2C_F_DIV2560			((uint8_t)0x3D)
#define I2C_F_DIV3072			((uint8_t)0x3E)
#define I2C_F_DIV3840			((uint8_t)0x3F)
//#define I2C_F_DIV28			((uint8_t)0x08)
//#define I2C_F_DIV40			((uint8_t)0x0B)
//#define I2C_F_DIV48			((uint8_t)0x10)
//#define I2C_F_DIV56			((uint8_t)0x11)
//#define I2C_F_DIV80			((uint8_t)0x18)
//#define I2C_F_DIV128			((uint8_t)0x1B)
//#define I2C_F_DIV160			((uint8_t)0x20)
//#define I2C_F_DIV192			((uint8_t)0x21)
//#define I2C_F_DIV320			((uint8_t)0x28)
//#define I2C_F_DIV384			((uint8_t)0x29)
//#define I2C_F_DIV640			((uint8_t)0x30)
//#define I2C_F_DIV768			((uint8_t)0x31)
//#define I2C_F_DIV1280			((uint8_t)0x38)
//#define I2C_F_DIV1536			((uint8_t)0x39)
#define I2C0_C1			(KINETIS_I2C0.C1)		// I2C Control Register 1
#define I2C_C1_IICEN			((uint8_t)0x80)			// I2C Enable
#define I2C_C1_IICIE			((uint8_t)0x40)			// I2C Interrupt Enable
#define I2C_C1_MST			((uint8_t)0x20)			// Master Mode Select
#define I2C_C1_TX			((uint8_t)0x10)			// Transmit Mode Select
#define I2C_C1_TXAK			((uint8_t)0x08)			// Transmit Acknowledge Enable
#define I2C_C1_RSTA			((uint8_t)0x04)			// Repeat START
#define I2C_C1_WUEN			((uint8_t)0x02)			// Wakeup Enable
#define I2C_C1_DMAEN			((uint8_t)0x01)			// DMA Enable
#define I2C0_S			(KINETIS_I2C0.S)		// I2C Status register
#define I2C_S_TCF			((uint8_t)0x80)			// Transfer Complete Flag
#define I2C_S_IAAS			((uint8_t)0x40)			// Addressed As A Slave
#define I2C_S_BUSY			((uint8_t)0x20)			// Bus Busy
#define I2C_S_ARBL			((uint8_t)0x10)			// Arbitration Lost
#define I2C_S_RAM			((uint8_t)0x08)			// Range Address Match
#define I2C_S_SRW			((uint8_t)0x04)			// Slave Read/Write
#define I2C_S_IICIF			((uint8_t)0x02)			// Interrupt Flag
#define I2C_S_RXAK			((uint8_t)0x01)			// Receive Acknowledge
#define I2C0_D			(KINETIS_I2C0.D)		// I2C Data I/O register
#define I2C0_C2			(KINETIS_I2C0.C2)		// I2C Control Register 2
#define I2C_C2_GCAEN			((uint8_t)0x80)			// General Call Address Enable
#define I2C_C2_ADEXT			((uint8_t)0x40)			// Address Extension
#define I2C_C2_HDRS			((uint8_t)0x20)			// High Drive Select
#define I2C_C2_SBRC			((uint8_t)0x10)			// Slave Baud Rate Control
#define I2C_C2_RMEN			((uint8_t)0x08)			// Range Address Matching Enable
#define I2C_C2_AD(n)			((n) & 7)			// Slave Address, upper 3 bits
#define I2C0_FLT		(KINETIS_I2C0.FLT)		// I2C Programmable Input Glitch Filter register
#define I2C_FLT_SHEN			((uint8_t)0x80)			// Stop Hold Enable
#define I2C_FLT_STOPF			((uint8_t)0x40)			// Stop Detect Flag
#define I2C_FLT_STOPIE			((uint8_t)0x20)			// Stop Interrupt Enable
#define I2C_FLT_FTL(n)			((n) & 0x1F)			// Programmable Filter Factor
#define I2C0_RA			(KINETIS_I2C0.RA)		// I2C Range Address register
#define I2C0_SMB		(KINETIS_I2C0.SMB)		// I2C SMBus Control and Status register
#define I2C0_A2			(KINETIS_I2C0.A2)		// I2C Address Register 2
#define I2C0_SLTH		(KINETIS_I2C0.SLTH)		// I2C SCL Low Timeout Register High
#define I2C0_SLTL		(KINETIS_I2C0.SLTL)		// I2C SCL Low Timeout Register Low

#define I2C1_A1			(KINETIS_I2C1.A1)		// I2C Address Register 1
#define I2C1_F			(KINETIS_I2C1.F)		// I2C Frequency Divider register
#define I2C1_C1			(KINETIS_I2C1.C1)		// I2C Control Register 1
#define I2C1_S			(KINETIS_I2C1.S)		// I2C Status register
#define I2C1_D			(KINETIS_I2C1.D)		// I2C Data I/O register
#define I2C1_C2			(KINETIS_I2C1.C2)		// I2C Control Register 2
#define I2C1_FLT		(KINETIS_I2C1.FLT)		// I2C Programmable Input Glitch Filter register
#define I2C1_RA			(KINETIS_I2C1.RA)		// I2C Range Address register
#define I2C1_SMB		(KINETIS_I2C1.SMB)		// I2C SMBus Control and Status register
#define I2C1_A2			(KINETIS_I2C1.A2)		// I2C Address Register 2
#define I2C1_SLTH		(KINETIS_I2C1.SLTH)		// I2C SCL Low Timeout Register High
#define I2C1_SLTL		(KINETIS_I2C1.SLTL)		// I2C SCL Low Timeout Register Low

#define I2C2_A1			(KINETIS_I2C2.A1)		// I2C Address Register 1
#define I2C2_F			(KINETIS_I2C2.F)		// I2C Frequency Divider register
#define I2C2_C1			(KINETIS_I2C2.C1)		// I2C Control Register 1
#define I2C2_S			(KINETIS_I2C2.S)		// I2C Status register
#define I2C2_D			(KINETIS_I2C2.D)		// I2C Data I/O register
#define I2C2_C2			(KINETIS_I2C2.C2)		// I2C Control Register 2
#define I2C2_FLT		(KINETIS_I2C2.FLT)		// I2C Programmable Input Glitch Filter register
#define I2C2_RA			(KINETIS_I2C2.RA)		// I2C Range Address register
#define I2C2_SMB		(KINETIS_I2C2.SMB)		// I2C SMBus Control and Status register
#define I2C2_A2			(KINETIS_I2C2.A2)		// I2C Address Register 2
#define I2C2_SLTH		(KINETIS_I2C2.SLTH)		// I2C SCL Low Timeout Register High
#define I2C2_SLTL		(KINETIS_I2C2.SLTL)		// I2C SCL Low Timeout Register Low

#define I2C3_A1			(KINETIS_I2C3.A1)		// I2C Address Register 1
#define I2C3_F			(KINETIS_I2C3.F)		// I2C Frequency Divider register
#define I2C3_C1			(KINETIS_I2C3.C1)		// I2C Control Register 1
#define I2C3_S			(KINETIS_I2C3.S)		// I2C Status register
#define I2C3_D			(KINETIS_I2C3.D)		// I2C Data I/O register
#define I2C3_C2			(KINETIS_I2C3.C2)		// I2C Control Register 2
#define I2C3_FLT		(KINETIS_I2C3.FLT)		// I2C Programmable Input Glitch Filter register
#define I2C3_RA			(KINETIS_I2C3.RA)		// I2C Range Address register
#define I2C3_SMB		(KINETIS_I2C3.SMB)		// I2C SMBus Control and Status register
#define I2C3_A2			(KINETIS_I2C3.A2)		// I2C Address Register 2
#define I2C3_SLTH		(KINETIS_I2C3.SLTH)		// I2C SCL Low Timeout Register High
#define I2C3_SLTL		(KINETIS_I2C3.SLTL)		// I2C SCL Low Timeout Register Low

#endif /* TEENSY32_MK20DX256_I2C_H_ */
