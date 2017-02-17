/*
 * mk20dx256_spi.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_SPI_H_
#define TEENSY32_MK20DX256_SPI_H_

#include <stdint.h>

// SPI (DSPI)

typedef struct {
	volatile uint32_t	MCR;	// 0
	volatile uint32_t	unused1;// 4
	volatile uint32_t	TCR;	// 8
	volatile uint32_t	CTAR0;	// c
	volatile uint32_t	CTAR1;	// 10
	volatile uint32_t	CTAR2;	// 14
	volatile uint32_t	CTAR3;	// 18
	volatile uint32_t	CTAR4;	// 1c
	volatile uint32_t	CTAR5;	// 20
	volatile uint32_t	CTAR6;	// 24
	volatile uint32_t	CTAR7;	// 28
	volatile uint32_t	SR;	// 2c
	volatile uint32_t	RSER;	// 30
	volatile uint32_t	PUSHR;	// 34
	volatile uint32_t	POPR;	// 38
	volatile uint32_t	TXFR[16]; // 3c
	volatile uint32_t	RXFR[16]; // 7c
} KINETISK_SPI_t;

#define KINETISK_SPI0		(*(KINETISK_SPI_t *)0x4002C000)
#define SPI0_MCR		(KINETISK_SPI0.MCR)	// DSPI Module Configuration Register
#define SPI_MCR_MSTR			((uint32_t)0x80000000)		// Master/Slave Mode Select
#define SPI_MCR_CONT_SCKE		((uint32_t)0x40000000)		//
#define SPI_MCR_DCONF(n)		(((n) & 3) << 28)		//
#define SPI_MCR_FRZ			((uint32_t)0x08000000)		//
#define SPI_MCR_MTFE			((uint32_t)0x04000000)		//
#define SPI_MCR_ROOE			((uint32_t)0x01000000)		//
#define SPI_MCR_PCSIS(n)		(((n) & 0x1F) << 16)		//
#define SPI_MCR_DOZE			((uint32_t)0x00008000)		//
#define SPI_MCR_MDIS			((uint32_t)0x00004000)		//
#define SPI_MCR_DIS_TXF			((uint32_t)0x00002000)		//
#define SPI_MCR_DIS_RXF			((uint32_t)0x00001000)		//
#define SPI_MCR_CLR_TXF			((uint32_t)0x00000800)		//
#define SPI_MCR_CLR_RXF			((uint32_t)0x00000400)		//
#define SPI_MCR_SMPL_PT(n)		(((n) & 3) << 8)		//
#define SPI_MCR_HALT			((uint32_t)0x00000001)		//
#define SPI0_TCR		(KINETISK_SPI0.TCR)	// DSPI Transfer Count Register
#define SPI0_CTAR0		(KINETISK_SPI0.CTAR0)	// DSPI Clock and Transfer Attributes Register, In Master Mode
#define SPI_CTAR_DBR			((uint32_t)0x80000000)		// Double Baud Rate
#define SPI_CTAR_FMSZ(n)		(((n) & 15) << 27)		// Frame Size (+1)
#define SPI_CTAR_CPOL			((uint32_t)0x04000000)		// Clock Polarity
#define SPI_CTAR_CPHA			((uint32_t)0x02000000)		// Clock Phase
#define SPI_CTAR_LSBFE			((uint32_t)0x01000000)		// LSB First
#define SPI_CTAR_PCSSCK(n)		(((n) & 3) << 22)		// PCS to SCK Delay Prescaler
#define SPI_CTAR_PASC(n)		(((n) & 3) << 20)		// After SCK Delay Prescaler
#define SPI_CTAR_PDT(n)			(((n) & 3) << 18)		// Delay after Transfer Prescaler
#define SPI_CTAR_PBR(n)			(((n) & 3) << 16)		// Baud Rate Prescaler
#define SPI_CTAR_CSSCK(n)		(((n) & 15) << 12)		// PCS to SCK Delay Scaler
#define SPI_CTAR_ASC(n)			(((n) & 15) << 8)		// After SCK Delay Scaler
#define SPI_CTAR_DT(n)			(((n) & 15) << 4)		// Delay After Transfer Scaler
#define SPI_CTAR_BR(n)			(((n) & 15) << 0)		// Baud Rate Scaler
#define SPI0_CTAR0_SLAVE	(KINETISK_SPI0.CTAR0)	// DSPI Clock and Transfer Attributes Register, In Slave Mode
#define SPI0_CTAR1		(KINETISK_SPI0.CTAR1)	// DSPI Clock and Transfer Attributes Register, In Master Mode
#define SPI0_SR			(KINETISK_SPI0.SR)	// DSPI Status Register
#define SPI_SR_TCF			((uint32_t)0x80000000)		// Transfer Complete Flag
#define SPI_SR_TXRXS			((uint32_t)0x40000000)		// TX and RX Status
#define SPI_SR_EOQF			((uint32_t)0x10000000)		// End of Queue Flag
#define SPI_SR_TFUF			((uint32_t)0x08000000)		// Transmit FIFO Underflow Flag
#define SPI_SR_TFFF			((uint32_t)0x02000000)		// Transmit FIFO Fill Flag
#define SPI_SR_RFOF			((uint32_t)0x00080000)		// Receive FIFO Overflow Flag
#define SPI_SR_RFDF			((uint32_t)0x00020000)		// Receive FIFO Drain Flag
#define SPI0_RSER		(KINETISK_SPI0.RSER)	// DSPI DMA/Interrupt Request Select and Enable Register
#define SPI_RSER_TCF_RE			((uint32_t)0x80000000)		// Transmission Complete Request Enable
#define SPI_RSER_EOQF_RE		((uint32_t)0x10000000)		// DSPI Finished Request Request Enable
#define SPI_RSER_TFUF_RE		((uint32_t)0x08000000)		// Transmit FIFO Underflow Request Enable
#define SPI_RSER_TFFF_RE		((uint32_t)0x02000000)		// Transmit FIFO Fill Request Enable
#define SPI_RSER_TFFF_DIRS		((uint32_t)0x01000000)		// Transmit FIFO FIll Dma or Interrupt Request Select
#define SPI_RSER_RFOF_RE		((uint32_t)0x00080000)		// Receive FIFO Overflow Request Enable
#define SPI_RSER_RFDF_RE		((uint32_t)0x00020000)		// Receive FIFO Drain Request Enable
#define SPI_RSER_RFDF_DIRS		((uint32_t)0x00010000)		// Receive FIFO Drain DMA or Interrupt Request Select
#define SPI0_PUSHR		(KINETISK_SPI0.PUSHR)	// DSPI PUSH TX FIFO Register In Master Mode
#define SPI_PUSHR_CONT			((uint32_t)0x80000000)		//
#define SPI_PUSHR_CTAS(n)		(((n) & 7) << 28)		//
#define SPI_PUSHR_EOQ			((uint32_t)0x08000000)		//
#define SPI_PUSHR_CTCNT			((uint32_t)0x04000000)		//
#define SPI_PUSHR_PCS(n)		(((n) & 31) << 16)		//
#define SPI0_PUSHR_SLAVE	(KINETISK_SPI0.PUSHR)	// DSPI PUSH TX FIFO Register In Slave Mode
#define SPI0_POPR		(KINETISK_SPI0.POPR)	// DSPI POP RX FIFO Register
#define SPI0_TXFR0		(KINETISK_SPI0.TXFR[0])	// DSPI Transmit FIFO Registers
#define SPI0_TXFR1		(KINETISK_SPI0.TXFR[1])	// DSPI Transmit FIFO Registers
#define SPI0_TXFR2		(KINETISK_SPI0.TXFR[2])	// DSPI Transmit FIFO Registers
#define SPI0_TXFR3		(KINETISK_SPI0.TXFR[3])	// DSPI Transmit FIFO Registers
#define SPI0_RXFR0		(KINETISK_SPI0.RXFR[0])	// DSPI Receive FIFO Registers
#define SPI0_RXFR1		(KINETISK_SPI0.RXFR[1])	// DSPI Receive FIFO Registers
#define SPI0_RXFR2		(KINETISK_SPI0.RXFR[2])	// DSPI Receive FIFO Registers
#define SPI0_RXFR3		(KINETISK_SPI0.RXFR[3])	// DSPI Receive FIFO Registers

#endif /* TEENSY32_MK20DX256_SPI_H_ */
