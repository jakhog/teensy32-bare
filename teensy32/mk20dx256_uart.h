/*
 * mk20dx256_uart.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_UART_H_
#define TEENSY32_MK20DX256_UART_H_

#include <stdint.h>

// Universal Asynchronous Receiver/Transmitter (UART)

typedef struct __attribute__((packed)) {
	volatile uint8_t	BDH;
	volatile uint8_t	BDL;
	volatile uint8_t	C1;
	volatile uint8_t	C2;
	volatile uint8_t	S1;
	volatile uint8_t	S2;
	volatile uint8_t	C3;
	volatile uint8_t	D;
	volatile uint8_t	MA1;
	volatile uint8_t	MA2;
	volatile uint8_t	C4;
	volatile uint8_t	C5;
	volatile uint8_t	ED;
	volatile uint8_t	MODEM;
	volatile uint8_t	IR;
	volatile uint8_t	unused1;
	volatile uint8_t	PFIFO;
	volatile uint8_t	CFIFO;
	volatile uint8_t	SFIFO;
	volatile uint8_t	TWFIFO;
	volatile uint8_t	TCFIFO;
	volatile uint8_t	RWFIFO;
	volatile uint8_t	RCFIFO;
	volatile uint8_t	unused2;
	volatile uint8_t	C7816;
	volatile uint8_t	IE7816;
	volatile uint8_t	IS7816;
	union { volatile uint8_t WP7816T0; volatile uint8_t WP7816T1; };
	volatile uint8_t	WN7816;
	volatile uint8_t	WF7816;
	volatile uint8_t	ET7816;
	volatile uint8_t	TL7816;
	volatile uint8_t	unused3;
	volatile uint8_t	C6;
	volatile uint8_t	PCTH;
	volatile uint8_t	PCTL;
	volatile uint8_t	B1T;
	volatile uint8_t	SDTH;
	volatile uint8_t	SDTL;
	volatile uint8_t	PRE;
	volatile uint8_t	TPL;
	volatile uint8_t	IE;
	volatile uint8_t	WB;
	volatile uint8_t	S3;
	volatile uint8_t	S4;
	volatile uint8_t	RPL;
	volatile uint8_t	RPREL;
	volatile uint8_t	CPW;
	volatile uint8_t	RIDT;
	volatile uint8_t	TIDT;
} KINETISK_UART_t;

#define KINETISK_UART0		(*(KINETISK_UART_t *)0x4006A000)
#define UART0_BDH		(KINETISK_UART0.BDH)		// UART Baud Rate Registers: High
#define UART_BDH_SBNS		0x20			// UART Stop Bit Number Select (TLC T3.5 T3.6)
#define UART0_BDL		(KINETISK_UART0.BDL)		// UART Baud Rate Registers: Low
#define UART0_C1		(KINETISK_UART0.C1)		// UART Control Register 1
#define UART_C1_LOOPS		0x80			//  When LOOPS is set, the RxD pin is disconnected from the UART and the transmitter output is internally connected to the receiver input
#define UART_C1_UARTSWAI	0x40			//  UART Stops in Wait Mode
#define UART_C1_RSRC		0x20			//  When LOOPS is set, the RSRC field determines the source for the receiver shift register input
#define UART_C1_M			0x10			//  9-bit or 8-bit Mode Select
#define UART_C1_WAKE		0x08			//  Determines which condition wakes the UART
#define UART_C1_ILT		0x04			//  Idle Line Type Select
#define UART_C1_PE		0x02			//  Parity Enable
#define UART_C1_PT		0x01			//  Parity Type, 0=even, 1=odd
#define UART0_C2		(KINETISK_UART0.C2)		// UART Control Register 2
#define UART_C2_TIE		0x80			//  Transmitter Interrupt or DMA Transfer Enable.
#define UART_C2_TCIE		0x40			//  Transmission Complete Interrupt Enable
#define UART_C2_RIE		0x20			//  Receiver Full Interrupt or DMA Transfer Enable
#define UART_C2_ILIE		0x10			//  Idle Line Interrupt Enable
#define UART_C2_TE		0x08			//  Transmitter Enable
#define UART_C2_RE		0x04			//  Receiver Enable
#define UART_C2_RWU		0x02			//  Receiver Wakeup Control
#define UART_C2_SBK		0x01			//  Send Break
#define UART0_S1		(KINETISK_UART0.S1)		// UART Status Register 1
#define UART_S1_TDRE		0x80			//  Transmit Data Register Empty Flag
#define UART_S1_TC		0x40			//  Transmit Complete Flag
#define UART_S1_RDRF		0x20			//  Receive Data Register Full Flag
#define UART_S1_IDLE		0x10			//  Idle Line Flag
#define UART_S1_OR		0x08			//  Receiver Overrun Flag
#define UART_S1_NF		0x04			//  Noise Flag
#define UART_S1_FE		0x02			//  Framing Error Flag
#define UART_S1_PF		0x01			//  Parity Error Flag
#define UART0_S2		(KINETISK_UART0.S2)		// UART Status Register 2
#define UART_S2_LBKDIF		0x80			// LIN Break Detect Interrupt Flag
#define UART_S2_RXEDGIF		0x40			// RxD Pin Active Edge Interrupt Flag
#define UART_S2_MSBF		0x20			// Most Significant Bit First
#define UART_S2_RXINV		0x10			// Receive Data Inversion
#define UART_S2_RWUID		0x08			// Receive Wakeup Idle Detect
#define UART_S2_BRK13		0x04			// Break Transmit Character Length
#define UART_S2_LBKDE		0x02			// LIN Break Detection Enable
#define UART_S2_RAF		0x01			// Receiver Active Flag
#define UART0_C3		(KINETISK_UART0.C3)		// UART Control Register 3
#define UART_C3_R8		0x80			// Received Bit 8
#define UART_C3_T8		0x40			// Transmit Bit 8
#define UART_C3_TXDIR		0x20			// TX Pin Direction in Single-Wire mode
#define UART_C3_TXINV		0x10			// Transmit Data Inversion
#define UART_C3_ORIE		0x08			// Overrun Error Interrupt Enable
#define UART_C3_NEIE		0x04			// Noise Error Interrupt Enable
#define UART_C3_FEIE		0x02			// Framing Error Interrupt Enable
#define UART_C3_PEIE		0x01			// Parity Error Interrupt Enable
#define UART0_D			(KINETISK_UART0.D)		// UART Data Register
#define UART0_MA1		(KINETISK_UART0.MA1)		// UART Match Address Registers 1
#define UART0_MA2		(KINETISK_UART0.MA2)		// UART Match Address Registers 2
#define UART0_C4		(KINETISK_UART0.C4)		// UART Control Register 4
#define UART_C4_MAEN1		0x80			// Match Address Mode Enable 1
#define UART_C4_MAEN2		0x40			// Match Address Mode Enable 2
#define UART_C4_M10		0x20			// 10-bit Mode select
#define UART_C4_BRFA(n)		((n) & 31)		// Baud Rate Fine Adjust
#define UART0_C5		(KINETISK_UART0.C5)		// UART Control Register 5
#define UART_C5_TDMAS		0x80			// Transmitter DMA Select
#define UART_C5_RDMAS		0x20			// Receiver Full DMA Select
#define UART0_ED		(KINETISK_UART0.ED)		// UART Extended Data Register
#define UART_ED_NOISY		0x80			// data received with noise
#define UART_ED_PARITYE		0x40			// data received with a parity error
#define UART0_MODEM		(KINETISK_UART0.MODEM)		// UART Modem Register
#define UART_MODEM_RXRTSE	0x08			// Receiver request-to-send enable
#define UART_MODEM_TXRTSPOL	0x04			// Transmitter request-to-send polarity
#define UART_MODEM_TXRTSE	0x02			// Transmitter request-to-send enable
#define UART_MODEM_TXCTSE	0x01			// Transmitter clear-to-send enable
#define UART0_IR		(KINETISK_UART0.IR)		// UART Infrared Register
#define UART_IR_IREN		0x04			// Infrared enable
#define UART_IR_TNP(n)		((n) & 3)		// TX narrow pulse, 0=3/16, 1=1/16, 2=1/32, 3=1/4
#define UART0_PFIFO		(KINETISK_UART0.PFIFO)		// UART FIFO Parameters
#define UART_PFIFO_TXFE		0x80			//  Transmit FIFO Enable
#define UART_PFIFO_TXFIFOSIZE(n) (((n) & 7) << 4)	//  Transmit FIFO Size, 0=1, 1=4, 2=8, 3=16, 4=32, 5=64, 6=128
#define UART_PFIFO_RXFE		0x08			//  Receive FIFO Enable
#define UART_PFIFO_RXFIFOSIZE(n) (((n) & 7) << 0)	//  Transmit FIFO Size, 0=1, 1=4, 2=8, 3=16, 4=32, 5=64, 6=128
#define UART0_CFIFO		(KINETISK_UART0.CFIFO)		// UART FIFO Control Register
#define UART_CFIFO_TXFLUSH	0x80			//  Transmit FIFO/Buffer Flush
#define UART_CFIFO_RXFLUSH	0x40			//  Receive FIFO/Buffer Flush
#define UART_CFIFO_RXOFE	0x04			//  Receive FIFO Overflow Interrupt Enable
#define UART_CFIFO_TXOFE	0x02			//  Transmit FIFO Overflow Interrupt Enable
#define UART_CFIFO_RXUFE	0x01			//  Receive FIFO Underflow Interrupt Enable
#define UART0_SFIFO		(KINETISK_UART0.SFIFO)		// UART FIFO Status Register
#define UART_SFIFO_TXEMPT	0x80			//  Transmit Buffer/FIFO Empty
#define UART_SFIFO_RXEMPT	0x40			//  Receive Buffer/FIFO Empty
#define UART_SFIFO_RXOF		0x04			//  Receiver Buffer Overflow Flag
#define UART_SFIFO_TXOF		0x02			//  Transmitter Buffer Overflow Flag
#define UART_SFIFO_RXUF		0x01			//  Receiver Buffer Underflow Flag
#define UART0_TWFIFO		(KINETISK_UART0.TWFIFO)		// UART FIFO Transmit Watermark
#define UART0_TCFIFO		(KINETISK_UART0.TCFIFO)		// UART FIFO Transmit Count
#define UART0_RWFIFO		(KINETISK_UART0.RWFIFO)		// UART FIFO Receive Watermark
#define UART0_RCFIFO		(KINETISK_UART0.RCFIFO)		// UART FIFO Receive Count
#define UART0_C7816		(KINETISK_UART0.C7816)		// UART 7816 Control Register
#define UART_C7816_ONACK	0x10			//  Generate NACK on Overflow
#define UART_C7816_ANACK	0x08			//  Generate NACK on Error
#define UART_C7816_INIT		0x04			//  Detect Initial Character
#define UART_C7816_TTYPE	0x02			//  Transfer Type
#define UART_C7816_ISO_7816E	0x01			//  ISO-7816 Functionality Enabled
#define UART0_IE7816		(KINETISK_UART0.IE7816)		// UART 7816 Interrupt Enable Register
#define UART_IE7816_WTE		0x80			//  Wait Timer Interrupt Enable
#define UART_IE7816_CWTE	0x40			//  Character Wait Timer Interrupt Enable
#define UART_IE7816_BWTE	0x20			//  Block Wait Timer Interrupt Enable
#define UART_IE7816_INITDE	0x10			//  Initial Character Detected Interrupt Enable
#define UART_IE7816_GTVE	0x04			//  Guard Timer Violated Interrupt Enable
#define UART_IE7816_TXTE	0x02			//  Transmit Threshold Exceeded Interrupt Enable
#define UART_IE7816_RXTE	0x01			//  Receive Threshold Exceeded Interrupt Enable
#define UART0_IS7816		(KINETISK_UART0.IS7816)		// UART 7816 Interrupt Status Register
#define UART_IS7816_WT		0x80			//  Wait Timer Interrupt
#define UART_IS7816_CWT		0x40			//  Character Wait Timer Interrupt
#define UART_IS7816_BWT		0x20			//  Block Wait Timer Interrupt
#define UART_IS7816_INITD	0x10			//  Initial Character Detected Interrupt
#define UART_IS7816_GTV		0x04			//  Guard Timer Violated Interrupt
#define UART_IS7816_TXT		0x02			//  Transmit Threshold Exceeded Interrupt
#define UART_IS7816_RXT		0x01			//  Receive Threshold Exceeded Interrupt
#define UART0_WP7816T0		(KINETISK_UART0.WP7816T0)	// UART 7816 Wait Parameter Register
#define UART0_WP7816T1		(KINETISK_UART0.WP7816T1)	// UART 7816 Wait Parameter Register
#define UART_WP7816T1_CWI(n)	(((n) & 15) << 4)	//  Character Wait Time Integer (C7816[TTYPE] = 1)
#define UART_WP7816T1_BWI(n)	(((n) & 15) << 0)	//  Block Wait Time Integer(C7816[TTYPE] = 1)
#define UART0_WN7816		(KINETISK_UART0.WN7816)		// UART 7816 Wait N Register
#define UART0_WF7816		(KINETISK_UART0.WF7816)		// UART 7816 Wait FD Register
#define UART0_ET7816		(KINETISK_UART0.ET7816)		// UART 7816 Error Threshold Register
#define UART_ET7816_TXTHRESHOLD(n) (((n) & 15) << 4)	//  Transmit NACK Threshold
#define UART_ET7816_RXTHRESHOLD(n) (((n) & 15) << 0)	//  Receive NACK Threshold
#define UART0_TL7816		(KINETISK_UART0.TL7816)		// UART 7816 Transmit Length Register
#define UART0_C6		(KINETISK_UART0.C6)		// UART CEA709.1-B Control Register 6
#define UART_C6_EN709		0x80			//  Enables the CEA709.1-B feature.
#define UART_C6_TX709		0x40			//  Starts CEA709.1-B transmission.
#define UART_C6_CE		0x20			//  Collision Enable
#define UART_C6_CP		0x10			//  Collision Signal Polarity
#define UART0_PCTH		(KINETISK_UART0.PCTH)		// UART CEA709.1-B Packet Cycle Time Counter High
#define UART0_PCTL		(KINETISK_UART0.PCTL)		// UART CEA709.1-B Packet Cycle Time Counter Low
#define UART0_B1T		(KINETISK_UART0.B1T)		// UART CEA709.1-B Beta1 Timer
#define UART0_SDTH		(KINETISK_UART0.SDTH)		// UART CEA709.1-B Secondary Delay Timer High
#define UART0_SDTL		(KINETISK_UART0.SDTL)		// UART CEA709.1-B Secondary Delay Timer Low
#define UART0_PRE		(KINETISK_UART0.PRE)		// UART CEA709.1-B Preamble
#define UART0_TPL		(KINETISK_UART0.TPL)		// UART CEA709.1-B Transmit Packet Length
#define UART0_IE		(KINETISK_UART0.IE)		// UART CEA709.1-B Interrupt Enable Register
#define UART_IE_WBEIE		0x40			//  WBASE Expired Interrupt Enable
#define UART_IE_ISDIE		0x20			//  Initial Sync Detection Interrupt Enable
#define UART_IE_PRXIE		0x10			//  Packet Received Interrupt Enable
#define UART_IE_PTXIE		0x08			//  Packet Transmitted Interrupt Enable
#define UART_IE_PCTEIE		0x04			//  Packet Cycle Timer Interrupt Enable
#define UART_IE_PSIE		0x02			//  Preamble Start Interrupt Enable
#define UART_IE_TXFIE		0x01			//  Transmission Fail Interrupt Enable
#define UART0_WB		(KINETISK_UART0.WB)		// UART CEA709.1-B WBASE
#define UART0_S3		(KINETISK_UART0.S3)		// UART CEA709.1-B Status Register
#define UART_S3_PEF		0x80			//  Preamble Error Flag
#define UART_S3_WBEF		0x40			//  Wbase Expired Flag
#define UART_S3_ISD		0x20			//  Initial Sync Detect
#define UART_S3_PRXF		0x10			//  Packet Received Flag
#define UART_S3_PTXF		0x08			//  Packet Transmitted Flag
#define UART_S3_PCTEF		0x04			//  Packet Cycle Timer Expired Flag
#define UART_S3_PSF		0x02			//  Preamble Start Flag
#define UART_S3_TXFF		0x01			//  Transmission Fail Flag
#define UART0_S4		(KINETISK_UART0.S4)		// UART CEA709.1-B Status Register
#define UART_S4_INITF		0x10			//  Initial Synchronization Fail Flag
#define UART_S4_CDET(n)		(((n) & 3) << 2)	//  Indicates collision: 0=none, 1=preamble, 2=data, 3=line code violation
#define UART_S4_ILCV		0x02			//  Improper Line Code Violation
#define UART_S4_FE		0x01			//  Framing Error
#define UART0_RPL		(KINETISK_UART0.RPL)	// UART CEA709.1-B Received Packet Length
#define UART0_RPREL		(KINETISK_UART0.RPREL)	// UART CEA709.1-B Received Preamble Length
#define UART0_CPW		(KINETISK_UART0.CPW)	// UART CEA709.1-B Collision Pulse Width
#define UART0_RIDT		(KINETISK_UART0.RIDT)	// UART CEA709.1-B Receive Indeterminate Time
#define UART0_TIDT		(KINETISK_UART0.TIDT)	// UART CEA709.1-B Transmit Indeterminate Time
#define KINETISK_UART1		(*(KINETISK_UART_t *)0x4006B000)
#define UART1_BDH		(KINETISK_UART1.BDH)	// UART Baud Rate Registers: High
#define UART1_BDL		(KINETISK_UART1.BDL)	// UART Baud Rate Registers: Low
#define UART1_C1		(KINETISK_UART1.C1)	// UART Control Register 1
#define UART1_C2		(KINETISK_UART1.C2)	// UART Control Register 2
#define UART1_S1		(KINETISK_UART1.S1)	// UART Status Register 1
#define UART1_S2		(KINETISK_UART1.S2)	// UART Status Register 2
#define UART1_C3		(KINETISK_UART1.C3)	// UART Control Register 3
#define UART1_D			(KINETISK_UART1.D)	// UART Data Register
#define UART1_MA1		(KINETISK_UART1.MA1)	// UART Match Address Registers 1
#define UART1_MA2		(KINETISK_UART1.MA2)	// UART Match Address Registers 2
#define UART1_C4		(KINETISK_UART1.C4)	// UART Control Register 4
#define UART1_C5		(KINETISK_UART1.C5)	// UART Control Register 5
#define UART1_ED		(KINETISK_UART1.ED)	// UART Extended Data Register
#define UART1_MODEM		(KINETISK_UART1.MODEM)	// UART Modem Register
#define UART1_IR		(KINETISK_UART1.IR)	// UART Infrared Register
#define UART1_PFIFO		(KINETISK_UART1.PFIFO)	// UART FIFO Parameters
#define UART1_CFIFO		(KINETISK_UART1.CFIFO)	// UART FIFO Control Register
#define UART1_SFIFO		(KINETISK_UART1.SFIFO)	// UART FIFO Status Register
#define UART1_TWFIFO		(KINETISK_UART1.TWFIFO)	// UART FIFO Transmit Watermark
#define UART1_TCFIFO		(KINETISK_UART1.TCFIFO)	// UART FIFO Transmit Count
#define UART1_RWFIFO		(KINETISK_UART1.RWFIFO)	// UART FIFO Receive Watermark
#define UART1_RCFIFO		(KINETISK_UART1.RCFIFO)	// UART FIFO Receive Count
#define UART1_C7816		(KINETISK_UART1.C7816)	// UART 7816 Control Register
#define UART1_IE7816		(KINETISK_UART1.IE7816)	// UART 7816 Interrupt Enable Register
#define UART1_IS7816		(KINETISK_UART1.IS7816)	// UART 7816 Interrupt Status Register
#define UART1_WP7816T0		(KINETISK_UART1.WP7816T0)// UART 7816 Wait Parameter Register
#define UART1_WP7816T1		(KINETISK_UART1.WP7816T1)// UART 7816 Wait Parameter Register
#define UART1_WN7816		(KINETISK_UART1.WN7816)	// UART 7816 Wait N Register
#define UART1_WF7816		(KINETISK_UART1.WF7816)	// UART 7816 Wait FD Register
#define UART1_ET7816		(KINETISK_UART1.ET7816)	// UART 7816 Error Threshold Register
#define UART1_TL7816		(KINETISK_UART1.TL7816)	// UART 7816 Transmit Length Register
#define UART1_C6		(KINETISK_UART1.C6)	// UART CEA709.1-B Control Register 6
#define UART1_PCTH		(KINETISK_UART1.PCTH)	// UART CEA709.1-B Packet Cycle Time Counter High
#define UART1_PCTL		(KINETISK_UART1.PCTL)	// UART CEA709.1-B Packet Cycle Time Counter Low
#define UART1_B1T		(KINETISK_UART1.B1T)	// UART CEA709.1-B Beta1 Timer
#define UART1_SDTH		(KINETISK_UART1.SDTH)	// UART CEA709.1-B Secondary Delay Timer High
#define UART1_SDTL		(KINETISK_UART1.SDTL)	// UART CEA709.1-B Secondary Delay Timer Low
#define UART1_PRE		(KINETISK_UART1.PRE)	// UART CEA709.1-B Preamble
#define UART1_TPL		(KINETISK_UART1.TPL)	// UART CEA709.1-B Transmit Packet Length
#define UART1_IE		(KINETISK_UART1.IE)	// UART CEA709.1-B Interrupt Enable Register
#define UART1_WB		(KINETISK_UART1.WB)	// UART CEA709.1-B WBASE
#define UART1_S3		(KINETISK_UART1.S3)	// UART CEA709.1-B Status Register
#define UART1_S4		(KINETISK_UART1.S4)	// UART CEA709.1-B Status Register
#define UART1_RPL		(KINETISK_UART1.RPL)	// UART CEA709.1-B Received Packet Length
#define UART1_RPREL		(KINETISK_UART1.RPREL)	// UART CEA709.1-B Received Preamble Length
#define UART1_CPW		(KINETISK_UART1.CPW)	// UART CEA709.1-B Collision Pulse Width
#define UART1_RIDT		(KINETISK_UART1.RIDT)	// UART CEA709.1-B Receive Indeterminate Time
#define UART1_TIDT		(KINETISK_UART1.TIDT)	// UART CEA709.1-B Transmit Indeterminate Time
#define KINETISK_UART2		(*(KINETISK_UART_t *)0x4006C000)
#define UART2_BDH		(KINETISK_UART2.BDH)	// UART Baud Rate Registers: High
#define UART2_BDL		(KINETISK_UART2.BDL)	// UART Baud Rate Registers: Low
#define UART2_C1		(KINETISK_UART2.C1)	// UART Control Register 1
#define UART2_C2		(KINETISK_UART2.C2)	// UART Control Register 2
#define UART2_S1		(KINETISK_UART2.S1)	// UART Status Register 1
#define UART2_S2		(KINETISK_UART2.S2)	// UART Status Register 2
#define UART2_C3		(KINETISK_UART2.C3)	// UART Control Register 3
#define UART2_D			(KINETISK_UART2.D)	// UART Data Register
#define UART2_MA1		(KINETISK_UART2.MA1)	// UART Match Address Registers 1
#define UART2_MA2		(KINETISK_UART2.MA2)	// UART Match Address Registers 2
#define UART2_C4		(KINETISK_UART2.C4)	// UART Control Register 4
#define UART2_C5		(KINETISK_UART2.C5)	// UART Control Register 5
#define UART2_ED		(KINETISK_UART2.ED)	// UART Extended Data Register
#define UART2_MODEM		(KINETISK_UART2.MODEM)	// UART Modem Register
#define UART2_IR		(KINETISK_UART2.IR)	// UART Infrared Register
#define UART2_PFIFO		(KINETISK_UART2.PFIFO)	// UART FIFO Parameters
#define UART2_CFIFO		(KINETISK_UART2.CFIFO)	// UART FIFO Control Register
#define UART2_SFIFO		(KINETISK_UART2.SFIFO)	// UART FIFO Status Register
#define UART2_TWFIFO		(KINETISK_UART2.TWFIFO)	// UART FIFO Transmit Watermark
#define UART2_TCFIFO		(KINETISK_UART2.TCFIFO)	// UART FIFO Transmit Count
#define UART2_RWFIFO		(KINETISK_UART2.RWFIFO)	// UART FIFO Receive Watermark
#define UART2_RCFIFO		(KINETISK_UART2.RCFIFO)	// UART FIFO Receive Count
#define UART2_C7816		(KINETISK_UART2.C7816)	// UART 7816 Control Register
#define UART2_IE7816		(KINETISK_UART2.IE7816)	// UART 7816 Interrupt Enable Register
#define UART2_IS7816		(KINETISK_UART2.IS7816)	// UART 7816 Interrupt Status Register
#define UART2_WP7816T0		(KINETISK_UART2.WP7816T0)// UART 7816 Wait Parameter Register
#define UART2_WP7816T1		(KINETISK_UART2.WP7816T1)// UART 7816 Wait Parameter Register
#define UART2_WN7816		(KINETISK_UART2.WN7816)	// UART 7816 Wait N Register
#define UART2_WF7816		(KINETISK_UART2.WF7816)	// UART 7816 Wait FD Register
#define UART2_ET7816		(KINETISK_UART2.ET7816)	// UART 7816 Error Threshold Register
#define UART2_TL7816		(KINETISK_UART2.TL7816)	// UART 7816 Transmit Length Register
#define UART2_C6		(KINETISK_UART2.C6)	// UART CEA709.1-B Control Register 6
#define UART2_PCTH		(KINETISK_UART2.PCTH)	// UART CEA709.1-B Packet Cycle Time Counter High
#define UART2_PCTL		(KINETISK_UART2.PCTL)	// UART CEA709.1-B Packet Cycle Time Counter Low
#define UART2_B1T		(KINETISK_UART2.B1T)	// UART CEA709.1-B Beta1 Timer
#define UART2_SDTH		(KINETISK_UART2.SDTH)	// UART CEA709.1-B Secondary Delay Timer High
#define UART2_SDTL		(KINETISK_UART2.SDTL)	// UART CEA709.1-B Secondary Delay Timer Low
#define UART2_PRE		(KINETISK_UART2.PRE)	// UART CEA709.1-B Preamble
#define UART2_TPL		(KINETISK_UART2.TPL)	// UART CEA709.1-B Transmit Packet Length
#define UART2_IE		(KINETISK_UART2.IE)	// UART CEA709.1-B Interrupt Enable Register
#define UART2_WB		(KINETISK_UART2.WB)	// UART CEA709.1-B WBASE
#define UART2_S3		(KINETISK_UART2.S3)	// UART CEA709.1-B Status Register
#define UART2_S4		(KINETISK_UART2.S4)	// UART CEA709.1-B Status Register
#define UART2_RPL		(KINETISK_UART2.RPL)	// UART CEA709.1-B Received Packet Length
#define UART2_RPREL		(KINETISK_UART2.RPREL)	// UART CEA709.1-B Received Preamble Length
#define UART2_CPW		(KINETISK_UART2.CPW)	// UART CEA709.1-B Collision Pulse Width
#define UART2_RIDT		(KINETISK_UART2.RIDT)	// UART CEA709.1-B Receive Indeterminate Time
#define UART2_TIDT		(KINETISK_UART2.TIDT)	// UART CEA709.1-B Transmit Indeterminate Time

#define KINETISK_UART3		(*(KINETISK_UART_t *)0x4006D000)
#define UART3_BDH		(KINETISK_UART3.BDH)	// UART Baud Rate Registers: High
#define UART3_BDL		(KINETISK_UART3.BDL)	// UART Baud Rate Registers: Low
#define UART3_C1		(KINETISK_UART3.C1)	// UART Control Register 1
#define UART3_C2		(KINETISK_UART3.C2)	// UART Control Register 2
#define UART3_S1		(KINETISK_UART3.S1)	// UART Status Register 1
#define UART3_S2		(KINETISK_UART3.S2)	// UART Status Register 2
#define UART3_C3		(KINETISK_UART3.C3)	// UART Control Register 3
#define UART3_D			(KINETISK_UART3.D)	// UART Data Register
#define UART3_MA1		(KINETISK_UART3.MA1)	// UART Match Address Registers 1
#define UART3_MA2		(KINETISK_UART3.MA2)	// UART Match Address Registers 2
#define UART3_C4		(KINETISK_UART3.C4)	// UART Control Register 4
#define UART3_C5		(KINETISK_UART3.C5)	// UART Control Register 5
#define UART3_ED		(KINETISK_UART3.ED)	// UART Extended Data Register
#define UART3_MODEM		(KINETISK_UART3.MODEM)	// UART Modem Register
#define UART3_IR		(KINETISK_UART3.IR)	// UART Infrared Register
#define UART3_PFIFO		(KINETISK_UART3.PFIFO)	// UART FIFO Parameters
#define UART3_CFIFO		(KINETISK_UART3.CFIFO)	// UART FIFO Control Register
#define UART3_SFIFO		(KINETISK_UART3.SFIFO)	// UART FIFO Status Register
#define UART3_TWFIFO		(KINETISK_UART3.TWFIFO)	// UART FIFO Transmit Watermark
#define UART3_TCFIFO		(KINETISK_UART3.TCFIFO)	// UART FIFO Transmit Count
#define UART3_RWFIFO		(KINETISK_UART3.RWFIFO)	// UART FIFO Receive Watermark
#define UART3_RCFIFO		(KINETISK_UART3.RCFIFO)	// UART FIFO Receive Count
#define UART3_C7816		(KINETISK_UART3.C7816)	// UART 7816 Control Register
#define UART3_IE7816		(KINETISK_UART3.IE7816)	// UART 7816 Interrupt Enable Register
#define UART3_IS7816		(KINETISK_UART3.IS7816)	// UART 7816 Interrupt Status Register
#define UART3_WP7816T0		(KINETISK_UART3.WP7816T0)// UART 7816 Wait Parameter Register
#define UART3_WP7816T1		(KINETISK_UART3.WP7816T1)// UART 7816 Wait Parameter Register
#define UART3_WN7816		(KINETISK_UART3.WN7816)	// UART 7816 Wait N Register
#define UART3_WF7816		(KINETISK_UART3.WF7816)	// UART 7816 Wait FD Register
#define UART3_ET7816		(KINETISK_UART3.ET7816)	// UART 7816 Error Threshold Register
#define UART3_TL7816		(KINETISK_UART3.TL7816)	// UART 7816 Transmit Length Register

#define KINETISK_UART4		(*(KINETISK_UART_t *)0x400EA000)
#define UART4_BDH		(KINETISK_UART4.BDH)	// UART Baud Rate Registers: High
#define UART4_BDL		(KINETISK_UART4.BDL)	// UART Baud Rate Registers: Low
#define UART4_C1		(KINETISK_UART4.C1)	// UART Control Register 1
#define UART4_C2		(KINETISK_UART4.C2)	// UART Control Register 2
#define UART4_S1		(KINETISK_UART4.S1)	// UART Status Register 1
#define UART4_S2		(KINETISK_UART4.S2)	// UART Status Register 2
#define UART4_C3		(KINETISK_UART4.C3)	// UART Control Register 3
#define UART4_D			(KINETISK_UART4.D)	// UART Data Register
#define UART4_MA1		(KINETISK_UART4.MA1)	// UART Match Address Registers 1
#define UART4_MA2		(KINETISK_UART4.MA2)	// UART Match Address Registers 2
#define UART4_C4		(KINETISK_UART4.C4)	// UART Control Register 4
#define UART4_C5		(KINETISK_UART4.C5)	// UART Control Register 5
#define UART4_ED		(KINETISK_UART4.ED)	// UART Extended Data Register
#define UART4_MODEM		(KINETISK_UART4.MODEM)	// UART Modem Register
#define UART4_IR		(KINETISK_UART4.IR)	// UART Infrared Register
#define UART4_PFIFO		(KINETISK_UART4.PFIFO)	// UART FIFO Parameters
#define UART4_CFIFO		(KINETISK_UART4.CFIFO)	// UART FIFO Control Register
#define UART4_SFIFO		(KINETISK_UART4.SFIFO)	// UART FIFO Status Register
#define UART4_TWFIFO		(KINETISK_UART4.TWFIFO)	// UART FIFO Transmit Watermark
#define UART4_TCFIFO		(KINETISK_UART4.TCFIFO)	// UART FIFO Transmit Count
#define UART4_RWFIFO		(KINETISK_UART4.RWFIFO)	// UART FIFO Receive Watermark
#define UART4_RCFIFO		(KINETISK_UART4.RCFIFO)	// UART FIFO Receive Count
#define UART4_C7816		(KINETISK_UART4.C7816)	// UART 7816 Control Register
#define UART4_IE7816		(KINETISK_UART4.IE7816)	// UART 7816 Interrupt Enable Register
#define UART4_IS7816		(KINETISK_UART4.IS7816)	// UART 7816 Interrupt Status Register
#define UART4_WP7816T0		(KINETISK_UART4.WP7816T0)// UART 7816 Wait Parameter Register
#define UART4_WP7816T1		(KINETISK_UART4.WP7816T1)// UART 7816 Wait Parameter Register
#define UART4_WN7816		(KINETISK_UART4.WN7816)	// UART 7816 Wait N Register
#define UART4_WF7816		(KINETISK_UART4.WF7816)	// UART 7816 Wait FD Register
#define UART4_ET7816		(KINETISK_UART4.ET7816)	// UART 7816 Error Threshold Register
#define UART4_TL7816		(KINETISK_UART4.TL7816)	// UART 7816 Transmit Length Register

#define KINETISK_UART5		(*(KINETISK_UART_t *)0x400EB000)
#define UART5_BDH		(KINETISK_UART5.BDH)	// UART Baud Rate Registers: High
#define UART5_BDL		(KINETISK_UART5.BDL)	// UART Baud Rate Registers: Low
#define UART5_C1		(KINETISK_UART5.C1)	// UART Control Register 1
#define UART5_C2		(KINETISK_UART5.C2)	// UART Control Register 2
#define UART5_S1		(KINETISK_UART5.S1)	// UART Status Register 1
#define UART5_S2		(KINETISK_UART5.S2)	// UART Status Register 2
#define UART5_C3		(KINETISK_UART5.C3)	// UART Control Register 3
#define UART5_D			(KINETISK_UART5.D)	// UART Data Register
#define UART5_MA1		(KINETISK_UART5.MA1)	// UART Match Address Registers 1
#define UART5_MA2		(KINETISK_UART5.MA2)	// UART Match Address Registers 2
#define UART5_C4		(KINETISK_UART5.C4)	// UART Control Register 4
#define UART5_C5		(KINETISK_UART5.C5)	// UART Control Register 5
#define UART5_ED		(KINETISK_UART5.ED)	// UART Extended Data Register
#define UART5_MODEM		(KINETISK_UART5.MODEM)	// UART Modem Register
#define UART5_IR		(KINETISK_UART5.IR)	// UART Infrared Register
#define UART5_PFIFO		(KINETISK_UART5.PFIFO)	// UART FIFO Parameters
#define UART5_CFIFO		(KINETISK_UART5.CFIFO)	// UART FIFO Control Register
#define UART5_SFIFO		(KINETISK_UART5.SFIFO)	// UART FIFO Status Register
#define UART5_TWFIFO		(KINETISK_UART5.TWFIFO)	// UART FIFO Transmit Watermark
#define UART5_TCFIFO		(KINETISK_UART5.TCFIFO)	// UART FIFO Transmit Count
#define UART5_RWFIFO		(KINETISK_UART5.RWFIFO)	// UART FIFO Receive Watermark
#define UART5_RCFIFO		(KINETISK_UART5.RCFIFO)	// UART FIFO Receive Count
#define UART5_C7816		(KINETISK_UART5.C7816)	// UART 7816 Control Register
#define UART5_IE7816		(KINETISK_UART5.IE7816)	// UART 7816 Interrupt Enable Register
#define UART5_IS7816		(KINETISK_UART5.IS7816)	// UART 7816 Interrupt Status Register
#define UART5_WP7816T0		(KINETISK_UART5.WP7816T0)// UART 7816 Wait Parameter Register
#define UART5_WP7816T1		(KINETISK_UART5.WP7816T1)// UART 7816 Wait Parameter Register
#define UART5_WN7816		(KINETISK_UART5.WN7816)	// UART 7816 Wait N Register
#define UART5_WF7816		(KINETISK_UART5.WF7816)	// UART 7816 Wait FD Register
#define UART5_ET7816		(KINETISK_UART5.ET7816)	// UART 7816 Error Threshold Register
#define UART5_TL7816		(KINETISK_UART5.TL7816)	// UART 7816 Transmit Length Register
// Low Power Asynchronous Receiver/Transmitter (LPUART)

typedef struct __attribute__((packed)) {
	volatile uint32_t	BAUD;
	volatile uint32_t	STAT;
	volatile uint32_t	CTRL;
	volatile uint32_t	DATA;
	volatile uint32_t	MATCH;
	volatile uint32_t	MODIR;
} KINETISK_LPUART_t;

#define KINETISK_LPUART0	(*(KINETISK_LPUART_t *)0x400C4000)
#define LPUART0_BAUD		(KINETISK_LPUART0.BAUD)		// LPUART Baud Register
#define LPUART_BAUD_MAEN1		((uint32_t)0x80000000)		// Enable automatic address or data maching
#define LPUART_BAUD_MAEN2		((uint32_t)0x40000000)		// Enable automatic address or data maching
#define LPUART_BAUD_M10			((uint32_t)0x20000000)		// 10-bit Mode select
#define LPUART_BAUD_OSR(n)		((uint32_t)((n) & 0x1f) << 24) // Over sampling ratio
#define LPUART_BAUD_TDMAE		((uint32_t)0x00800000)		// Transmitter Dma Enable
#define LPUART_BAUD_RDMAE		((uint32_t)0x00400000)		// Receiver Dma Enable
#define LPUART_BAUD_BOTHEDGE	((uint32_t)0x00020000)		// Both edge sampling needed OSR 4-7
#define LPUART_BAUD_SBNS		((uint32_t)0x00002000)		// UART Stop Bit Number Select
#define LPUART_BAUD_SBR(n)		((uint32_t)((n) & 0x1fff) << 0) // set baud rate divisor

#define LPUART0_STAT		(KINETISK_LPUART0.STAT)		// LPUART Status register
#define LPUART_STAT_LBKDIF		((uint32_t)0x80000000)		// LIN Break Detect Interrupt Flag
#define LPUART_STAT_RXEDGIF		((uint32_t)0x40000000)		// RxD Pin Active Edge Interrupt Flag
#define LPUART_STAT_MSBF		((uint32_t)0x20000000)		// Most Significant Bit First
#define LPUART_STAT_RXINV		((uint32_t)0x10000000)		// Receive Data Inversion
#define LPUART_STAT_RWUID		((uint32_t)0x08000000)		// Receive Wakeup Idle Detect
#define LPUART_STAT_BRK13		((uint32_t)0x04000000)		// Break Transmit Character Length
#define LPUART_STAT_LBKDE		((uint32_t)0x02000000)		// LIN Break Detection Enable
#define LPUART_STAT_RAF			((uint32_t)0x01000000)		// Receiver Active Flag
#define LPUART_STAT_TDRE		((uint32_t)0x00800000)		//  Transmit Data Register Empty Flag
#define LPUART_STAT_TC			((uint32_t)0x00400000)		//  Transmit Complete Flag
#define LPUART_STAT_RDRF		((uint32_t)0x00200000)		//  Receive Data Register Full Flag
#define LPUART_STAT_IDLE		((uint32_t)0x00100000)		//  Idle Line Flag
#define LPUART_STAT_OR			((uint32_t)0x00080000)		//  Receiver Overrun Flag
#define LPUART_STAT_NF			((uint32_t)0x00040000)		//  Noise Flag
#define LPUART_STAT_FE			((uint32_t)0x00020000)		//  Framing Error Flag
#define LPUART_STAT_PF			((uint32_t)0x00010000)		//  Parity Error Flag
#define LPUART_STAT_MA1F		((uint32_t)0x00008000)		//  Match 1 Flag
#define LPUART_STAT_MA2F		((uint32_t)0x00004000)		//  Match 2 Flag
#define LPUART0_CTRL		(KINETISK_LPUART0.CTRL)		// LPUART Control register
#define LPUART_CTRL_R8			((uint32_t)0x80000000)		// Received Bit 8
#define LPUART_CTRL_T8			((uint32_t)0x40000000)		// Transmit Bit 8
#define LPUART_CTRL_TXDIR		((uint32_t)0x20000000)		// TX Pin Direction in Single-Wire mode
#define LPUART_CTRL_TXINV		((uint32_t)0x10000000)		// Transmit Data Inversion
#define LPUART_CTRL_ORIE		((uint32_t)0x08000000)		// Overrun Error Interrupt Enable
#define LPUART_CTRL_NEIE		((uint32_t)0x04000000)		// Noise Error Interrupt Enable
#define LPUART_CTRL_FEIE		((uint32_t)0x02000000)		// Framing Error Interrupt Enable
#define LPUART_CTRL_PEIE		((uint32_t)0x01000000)		// Parity Error Interrupt Enable
#define LPUART_CTRL_TIE			((uint32_t)0x00800000)		//  Transmitter Interrupt or DMA Transfer Enable.
#define LPUART_CTRL_TCIE		((uint32_t)0x00400000)		//  Transmission Complete Interrupt Enable
#define LPUART_CTRL_RIE			((uint32_t)0x00200000)		//  Receiver Full Interrupt or DMA Transfer Enable
#define LPUART_CTRL_ILIE		((uint32_t)0x00100000)		//  Idle Line Interrupt Enable
#define LPUART_CTRL_TE			((uint32_t)0x00080000)		//  Transmitter Enable
#define LPUART_CTRL_RE			((uint32_t)0x00040000)		//  Receiver Enable
#define LPUART_CTRL_RWU			((uint32_t)0x00020000)		//  Receiver Wakeup Control
#define LPUART_CTRL_SBK			((uint32_t)0x00010000)		//  Send Break
#define LPUART_CTRL_MAEN1		((uint32_t)0x00008000)		// Match Address Mode Enable 1
#define LPUART_CTRL_MAEN2		((uint32_t)0x00004000)		// Match Address Mode Enable 2
#define LPUART_CTRL_LOOPS		((uint32_t)0x00000080)		//  When LOOPS is set, the RxD pin is disconnected from the UART and the transmitter output is internally connected to the receiver input
#define LPUART_CTRL_UARTSWAI	((uint32_t)0x00000040)		//  UART Stops in Wait Mode
#define LPUART_CTRL_RSRC		((uint32_t)0x00000020)		//  When LOOPS is set, the RSRC field determines the source for the receiver shift register input
#define LPUART_CTRL_M			((uint32_t)0x00000010)		//  9-bit or 8-bit Mode Select
#define LPUART_CTRL_WAKE		((uint32_t)0x00000008)		//  Determines which condition wakes the UART
#define LPUART_CTRL_ILT			((uint32_t)0x00000004)		//  Idle Line Type Select
#define LPUART_CTRL_PE			((uint32_t)0x00000002)		//  Parity Enable
#define LPUART_CTRL_PT			((uint32_t)0x00000001)		//  Parity Type, 0=even, 1=odd

#define LPUART0_DATA		(KINETISK_LPUART0.DATA)		// LPUART Data register
#define LPUART_DATA_NOISY		((uint32_t)0x00080000)		//  Data received with noise
#define LPUART_DATA_PARITY		((uint32_t)0x00040000)		//  Data received with Parity error
#define LPUART_DATA_FRETSC		((uint32_t)0x00020000)		//  Frame error/Transmit Special char
#define LPUART_DATA_RXEMPT		((uint32_t)0x00010000)		//  receive buffer empty
#define LPUART_DATA_IDLINE		((uint32_t)0x00008000)		// Match Address Mode Enable 1
#define LPUART0_MATCH		(KINETISK_LPUART0.MATCH)	// LPUART Match register
#define LPUART0_MODIR		(KINETISK_LPUART0.MODIR)	// LPUART Modem IrDA Register

#endif /* TEENSY32_MK20DX256_UART_H_ */
