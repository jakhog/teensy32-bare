/*
 * mk20dx256_dma.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_DMA_H_
#define TEENSY32_MK20DX256_DMA_H_

#define DMA_NUM_CHANNELS	16

#define DMAMUX_SOURCE_UART0_RX		2
#define DMAMUX_SOURCE_UART0_TX		3
#define DMAMUX_SOURCE_UART1_RX		4
#define DMAMUX_SOURCE_UART1_TX		5
#define DMAMUX_SOURCE_UART2_RX		6
#define DMAMUX_SOURCE_UART2_TX		7
#define DMAMUX_SOURCE_I2S0_RX		14
#define DMAMUX_SOURCE_I2S0_TX		15
#define DMAMUX_SOURCE_SPI0_RX		16
#define DMAMUX_SOURCE_SPI0_TX		17
#define DMAMUX_SOURCE_SPI1_RX		18
#define DMAMUX_SOURCE_SPI1_TX		19
#define DMAMUX_SOURCE_I2C0		22
#define DMAMUX_SOURCE_I2C1		23
#define DMAMUX_SOURCE_FTM0_CH0		24
#define DMAMUX_SOURCE_FTM0_CH1		25
#define DMAMUX_SOURCE_FTM0_CH2		26
#define DMAMUX_SOURCE_FTM0_CH3		27
#define DMAMUX_SOURCE_FTM0_CH4		28
#define DMAMUX_SOURCE_FTM0_CH5		29
#define DMAMUX_SOURCE_FTM0_CH6		30
#define DMAMUX_SOURCE_FTM0_CH7		31
#define DMAMUX_SOURCE_FTM1_CH0		32
#define DMAMUX_SOURCE_FTM1_CH1		33
#define DMAMUX_SOURCE_FTM2_CH0		34
#define DMAMUX_SOURCE_FTM2_CH1		35
#define DMAMUX_SOURCE_ADC0		40
#define DMAMUX_SOURCE_ADC1		41
#define DMAMUX_SOURCE_CMP0		42
#define DMAMUX_SOURCE_CMP1		43
#define DMAMUX_SOURCE_CMP2		44
#define DMAMUX_SOURCE_DAC0		45
#define DMAMUX_SOURCE_CMT		47
#define DMAMUX_SOURCE_PDB		48
#define DMAMUX_SOURCE_PORTA		49
#define DMAMUX_SOURCE_PORTB		50
#define DMAMUX_SOURCE_PORTC		51
#define DMAMUX_SOURCE_PORTD		52
#define DMAMUX_SOURCE_PORTE		53
#define DMAMUX_SOURCE_ALWAYS0		54
#define DMAMUX_SOURCE_ALWAYS1		55
#define DMAMUX_SOURCE_ALWAYS2		56
#define DMAMUX_SOURCE_ALWAYS3		57
#define DMAMUX_SOURCE_ALWAYS4		58
#define DMAMUX_SOURCE_ALWAYS5		59
#define DMAMUX_SOURCE_ALWAYS6		60
#define DMAMUX_SOURCE_ALWAYS7		61
#define DMAMUX_SOURCE_ALWAYS8		62
#define DMAMUX_SOURCE_ALWAYS9		63
#define DMAMUX_NUM_SOURCE_ALWAYS	10

// Direct Memory Access Multiplexer (DMAMUX)

#define DMAMUX0_CHCFG0		(*(volatile uint8_t  *)0x40021000) // Channel Configuration register
#define DMAMUX0_CHCFG1		(*(volatile uint8_t  *)0x40021001) // Channel Configuration register
#define DMAMUX0_CHCFG2		(*(volatile uint8_t  *)0x40021002) // Channel Configuration register
#define DMAMUX0_CHCFG3		(*(volatile uint8_t  *)0x40021003) // Channel Configuration register
#define DMAMUX0_CHCFG4		(*(volatile uint8_t  *)0x40021004) // Channel Configuration register
#define DMAMUX0_CHCFG5		(*(volatile uint8_t  *)0x40021005) // Channel Configuration register
#define DMAMUX0_CHCFG6		(*(volatile uint8_t  *)0x40021006) // Channel Configuration register
#define DMAMUX0_CHCFG7		(*(volatile uint8_t  *)0x40021007) // Channel Configuration register
#define DMAMUX0_CHCFG8		(*(volatile uint8_t  *)0x40021008) // Channel Configuration register
#define DMAMUX0_CHCFG9		(*(volatile uint8_t  *)0x40021009) // Channel Configuration register
#define DMAMUX0_CHCFG10		(*(volatile uint8_t  *)0x4002100A) // Channel Configuration register
#define DMAMUX0_CHCFG11		(*(volatile uint8_t  *)0x4002100B) // Channel Configuration register
#define DMAMUX0_CHCFG12		(*(volatile uint8_t  *)0x4002100C) // Channel Configuration register
#define DMAMUX0_CHCFG13		(*(volatile uint8_t  *)0x4002100D) // Channel Configuration register
#define DMAMUX0_CHCFG14		(*(volatile uint8_t  *)0x4002100E) // Channel Configuration register
#define DMAMUX0_CHCFG15		(*(volatile uint8_t  *)0x4002100F) // Channel Configuration register

#define DMAMUX_DISABLE		0
#define DMAMUX_TRIG			64
#define DMAMUX_ENABLE		128

// Direct Memory Access Controller (eDMA)

#define DMA_CR			(*(volatile uint32_t *)0x40008000) // Control Register
#define DMA_CR_CX			((uint32_t)(1<<17))	// Cancel Transfer
#define DMA_CR_ECX			((uint32_t)(1<<16))	// Error Cancel Transfer
#define DMA_CR_EMLM			((uint32_t)0x80)	// Enable Minor Loop Mapping
#define DMA_CR_CLM			((uint32_t)0x40)	// Continuous Link Mode
#define DMA_CR_HALT			((uint32_t)0x20)	// Halt DMA Operations
#define DMA_CR_HOE			((uint32_t)0x10)	// Halt On Error
#define DMA_CR_ERCA			((uint32_t)0x04)	// Enable Round Robin Channel Arbitration
#define DMA_CR_EDBG			((uint32_t)0x02)	// Enable Debug
#define DMA_ES			(*(volatile uint32_t *)0x40008004) // Error Status Register
#define DMA_ERQ			(*(volatile uint32_t *)0x4000800C) // Enable Request Register
#define DMA_EEI			(*(volatile uint32_t *)0x40008014) // Enable Error Interrupt Register
#define DMA_CEEI		(*(volatile uint8_t  *)0x40008018) // Clear Enable Error Interrupt Register
#define DMA_CEEI_CEEI(n)		((uint8_t)(n & 15)<<0)	// Clear Enable Error Interrupt
#define DMA_CEEI_CAEE			((uint8_t)1<<6)		// Clear All Enable Error Interrupts
#define DMA_CEEI_NOP			((uint8_t)1<<7)		// NOP
#define DMA_SEEI		(*(volatile uint8_t  *)0x40008019) // Set Enable Error Interrupt Register
#define DMA_SEEI_SEEI(n)		((uint8_t)(n & 15)<<0)	// Set Enable Error Interrupt
#define DMA_SEEI_SAEE			((uint8_t)1<<6)		// Set All Enable Error Interrupts
#define DMA_SEEI_NOP			((uint8_t)1<<7)		// NOP
#define DMA_CERQ		(*(volatile uint8_t  *)0x4000801A) // Clear Enable Request Register
#define DMA_CERQ_CERQ(n)		((uint8_t)(n & 15)<<0)	// Clear Enable Request
#define DMA_CERQ_CAER			((uint8_t)1<<6)		// Clear All Enable Requests
#define DMA_CERQ_NOP			((uint8_t)1<<7)		// NOP
#define DMA_SERQ		(*(volatile uint8_t  *)0x4000801B) // Set Enable Request Register
#define DMA_SERQ_SERQ(n)		((uint8_t)(n & 15)<<0)	// Set Enable Request
#define DMA_SERQ_SAER			((uint8_t)1<<6)		// Set All Enable Requests
#define DMA_SERQ_NOP			((uint8_t)1<<7)		// NOP
#define DMA_CDNE		(*(volatile uint8_t  *)0x4000801C) // Clear DONE Status Bit Register
#define DMA_CDNE_CDNE(n)		((uint8_t)(n & 15)<<0)	// Clear Done Bit
#define DMA_CDNE_CADN			((uint8_t)1<<6)		// Clear All Done Bits
#define DMA_CDNE_NOP			((uint8_t)1<<7)		// NOP
#define DMA_SSRT		(*(volatile uint8_t  *)0x4000801D) // Set START Bit Register
#define DMA_SSRT_SSRT(n)		((uint8_t)(n & 15)<<0)	// Set Start Bit
#define DMA_SSRT_SAST			((uint8_t)1<<6)		// Set All Start Bits
#define DMA_SSRT_NOP			((uint8_t)1<<7)		// NOP
#define DMA_CERR		(*(volatile uint8_t  *)0x4000801E) // Clear Error Register
#define DMA_CERR_CERR(n)		((uint8_t)(n & 15)<<0)	// Clear Error Indicator
#define DMA_CERR_CAEI			((uint8_t)1<<6)		// Clear All Error Indicators
#define DMA_CERR_NOP			((uint8_t)1<<7)		// NOP
#define DMA_CINT		(*(volatile uint8_t  *)0x4000801F) // Clear Interrupt Request Register
#define DMA_CINT_CINT(n)		((uint8_t)(n & 15)<<0)	// Clear Interrupt Request
#define DMA_CINT_CAIR			((uint8_t)1<<6)		// Clear All Interrupt Requests
#define DMA_CINT_NOP			((uint8_t)1<<7)		// NOP
#define DMA_INT			(*(volatile uint32_t *)0x40008024) // Interrupt Request Register
#define DMA_ERR			(*(volatile uint32_t *)0x4000802C) // Error Register
#define DMA_HRS			(*(volatile uint32_t *)0x40008034) // Hardware Request Status Register

#define DMA_ERQ_ERQ0			((uint32_t)1<<0)	// Enable DMA Request 0
#define DMA_ERQ_ERQ1			((uint32_t)1<<1)	// Enable DMA Request 1
#define DMA_ERQ_ERQ2			((uint32_t)1<<2)	// Enable DMA Request 2
#define DMA_ERQ_ERQ3			((uint32_t)1<<3)	// Enable DMA Request 3
#define DMA_INT_INT0			((uint32_t)1<<0)	// Interrupt Request 0
#define DMA_INT_INT1			((uint32_t)1<<1)	// Interrupt Request 1
#define DMA_INT_INT2			((uint32_t)1<<2)	// Interrupt Request 2
#define DMA_INT_INT3			((uint32_t)1<<3)	// Interrupt Request 3
#define DMA_ERR_ERR0			((uint32_t)1<<0)	// Error in Channel 0
#define DMA_ERR_ERR1			((uint32_t)1<<1)	// Error in Channel 1
#define DMA_ERR_ERR2			((uint32_t)1<<2)	// Error in Channel 2
#define DMA_ERR_ERR3			((uint32_t)1<<3)	// Error in Channel 3
#define DMA_HRS_HRS0			((uint32_t)1<<0)	// Hardware Request Status Channel 0
#define DMA_HRS_HRS1			((uint32_t)1<<1)	// Hardware Request Status Channel 1
#define DMA_HRS_HRS2			((uint32_t)1<<2)	// Hardware Request Status Channel 2
#define DMA_HRS_HRS3			((uint32_t)1<<3)	// Hardware Request Status Channel 3
#define DMA_ERQ_ERQ4			((uint32_t)1<<4)	// Enable DMA Request 4
#define DMA_ERQ_ERQ5			((uint32_t)1<<5)	// Enable DMA Request 5
#define DMA_ERQ_ERQ6			((uint32_t)1<<6)	// Enable DMA Request 6
#define DMA_ERQ_ERQ7			((uint32_t)1<<7)	// Enable DMA Request 7
#define DMA_ERQ_ERQ8			((uint32_t)1<<8)	// Enable DMA Request 8
#define DMA_ERQ_ERQ9			((uint32_t)1<<9)	// Enable DMA Request 9
#define DMA_ERQ_ERQ10			((uint32_t)1<<10)	// Enable DMA Request 10
#define DMA_ERQ_ERQ11			((uint32_t)1<<11)	// Enable DMA Request 11
#define DMA_ERQ_ERQ12			((uint32_t)1<<12)	// Enable DMA Request 12
#define DMA_ERQ_ERQ13			((uint32_t)1<<13)	// Enable DMA Request 13
#define DMA_ERQ_ERQ14			((uint32_t)1<<14)	// Enable DMA Request 14
#define DMA_ERQ_ERQ15			((uint32_t)1<<15)	// Enable DMA Request 15
#define DMA_INT_INT4			((uint32_t)1<<4)	// Interrupt Request 4
#define DMA_INT_INT5			((uint32_t)1<<5)	// Interrupt Request 5
#define DMA_INT_INT6			((uint32_t)1<<6)	// Interrupt Request 6
#define DMA_INT_INT7			((uint32_t)1<<7)	// Interrupt Request 7
#define DMA_INT_INT8			((uint32_t)1<<8)	// Interrupt Request 8
#define DMA_INT_INT9			((uint32_t)1<<9)	// Interrupt Request 9
#define DMA_INT_INT10			((uint32_t)1<<10)	// Interrupt Request 10
#define DMA_INT_INT11			((uint32_t)1<<11)	// Interrupt Request 11
#define DMA_INT_INT12			((uint32_t)1<<12)	// Interrupt Request 12
#define DMA_INT_INT13			((uint32_t)1<<13)	// Interrupt Request 13
#define DMA_INT_INT14			((uint32_t)1<<14)	// Interrupt Request 14
#define DMA_INT_INT15			((uint32_t)1<<15)	// Interrupt Request 15
#define DMA_ERR_ERR4			((uint32_t)1<<4)	// Error in Channel 4
#define DMA_ERR_ERR5			((uint32_t)1<<5)	// Error in Channel 5
#define DMA_ERR_ERR6			((uint32_t)1<<6)	// Error in Channel 6
#define DMA_ERR_ERR7			((uint32_t)1<<7)	// Error in Channel 7
#define DMA_ERR_ERR8			((uint32_t)1<<8)	// Error in Channel 8
#define DMA_ERR_ERR9			((uint32_t)1<<9)	// Error in Channel 9
#define DMA_ERR_ERR10			((uint32_t)1<<10)	// Error in Channel 10
#define DMA_ERR_ERR11			((uint32_t)1<<11)	// Error in Channel 11
#define DMA_ERR_ERR12			((uint32_t)1<<12)	// Error in Channel 12
#define DMA_ERR_ERR13			((uint32_t)1<<13)	// Error in Channel 13
#define DMA_ERR_ERR14			((uint32_t)1<<14)	// Error in Channel 14
#define DMA_ERR_ERR15			((uint32_t)1<<15)	// Error in Channel 15
#define DMA_HRS_HRS4			((uint32_t)1<<4)	// Hardware Request Status Channel 4
#define DMA_HRS_HRS5			((uint32_t)1<<5)	// Hardware Request Status Channel 5
#define DMA_HRS_HRS6			((uint32_t)1<<6)	// Hardware Request Status Channel 6
#define DMA_HRS_HRS7			((uint32_t)1<<7)	// Hardware Request Status Channel 7
#define DMA_HRS_HRS8			((uint32_t)1<<8)	// Hardware Request Status Channel 8
#define DMA_HRS_HRS9			((uint32_t)1<<9)	// Hardware Request Status Channel 9
#define DMA_HRS_HRS10			((uint32_t)1<<10)	// Hardware Request Status Channel 10
#define DMA_HRS_HRS11			((uint32_t)1<<11)	// Hardware Request Status Channel 11
#define DMA_HRS_HRS12			((uint32_t)1<<12)	// Hardware Request Status Channel 12
#define DMA_HRS_HRS13			((uint32_t)1<<13)	// Hardware Request Status Channel 13
#define DMA_HRS_HRS14			((uint32_t)1<<14)	// Hardware Request Status Channel 14
#define DMA_HRS_HRS15			((uint32_t)1<<15)	// Hardware Request Status Channel 15

#define DMA_DCHPRI3		(*(volatile uint8_t  *)0x40008100) // Channel n Priority Register
#define DMA_DCHPRI2		(*(volatile uint8_t  *)0x40008101) // Channel n Priority Register
#define DMA_DCHPRI1		(*(volatile uint8_t  *)0x40008102) // Channel n Priority Register
#define DMA_DCHPRI0		(*(volatile uint8_t  *)0x40008103) // Channel n Priority Register
#define DMA_DCHPRI_CHPRI(n)		((uint8_t)(n & 15)<<0)	// Channel Arbitration Priority
#define DMA_DCHPRI_DPA			((uint8_t)1<<6)		// Disable PreEmpt Ability
#define DMA_DCHPRI_ECP			((uint8_t)1<<7)		// Enable PreEmption
#define DMA_DCHPRI7		(*(volatile uint8_t  *)0x40008104) // Channel n Priority Register
#define DMA_DCHPRI6		(*(volatile uint8_t  *)0x40008105) // Channel n Priority Register
#define DMA_DCHPRI5		(*(volatile uint8_t  *)0x40008106) // Channel n Priority Register
#define DMA_DCHPRI4		(*(volatile uint8_t  *)0x40008107) // Channel n Priority Register
#define DMA_DCHPRI11		(*(volatile uint8_t  *)0x40008108) // Channel n Priority Register
#define DMA_DCHPRI10		(*(volatile uint8_t  *)0x40008109) // Channel n Priority Register
#define DMA_DCHPRI9		(*(volatile uint8_t  *)0x4000810A) // Channel n Priority Register
#define DMA_DCHPRI8		(*(volatile uint8_t  *)0x4000810B) // Channel n Priority Register
#define DMA_DCHPRI15		(*(volatile uint8_t  *)0x4000810C) // Channel n Priority Register
#define DMA_DCHPRI14		(*(volatile uint8_t  *)0x4000810D) // Channel n Priority Register
#define DMA_DCHPRI13		(*(volatile uint8_t  *)0x4000810E) // Channel n Priority Register
#define DMA_DCHPRI12		(*(volatile uint8_t  *)0x4000810F) // Channel n Priority Register

#define DMA_TCD_ATTR_SMOD(n)		(((n) & 0x1F) << 11)
#define DMA_TCD_ATTR_SSIZE(n)		(((n) & 0x7) << 8)
#define DMA_TCD_ATTR_DMOD(n)		(((n) & 0x1F) << 3)
#define DMA_TCD_ATTR_DSIZE(n)		(((n) & 0x7) << 0)
#define DMA_TCD_ATTR_SIZE_8BIT		0
#define DMA_TCD_ATTR_SIZE_16BIT		1
#define DMA_TCD_ATTR_SIZE_32BIT		2
#define DMA_TCD_ATTR_SIZE_16BYTE	4
#define DMA_TCD_ATTR_SIZE_32BYTE	5 // caution: this might not be supported in newer chips?
#define DMA_TCD_CSR_BWC(n)		(((n) & 0x3) << 14)
#define DMA_TCD_CSR_BWC_MASK		0xC000
#define DMA_TCD_CSR_MAJORLINKCH(n)	(((n) & 0xF) << 8)
#define DMA_TCD_CSR_MAJORLINKCH_MASK	0x0F00
#define DMA_TCD_CSR_DONE		0x0080
#define DMA_TCD_CSR_ACTIVE		0x0040
#define DMA_TCD_CSR_MAJORELINK		0x0020
#define DMA_TCD_CSR_ESG			0x0010
#define DMA_TCD_CSR_DREQ		0x0008
#define DMA_TCD_CSR_INTHALF		0x0004
#define DMA_TCD_CSR_INTMAJOR		0x0002
#define DMA_TCD_CSR_START		0x0001
#define DMA_TCD_CITER_MASK		((uint16_t)0x7FFF)	   // Loop count mask
#define DMA_TCD_CITER_ELINK		((uint16_t)1<<15)	   // Enable channel linking on minor-loop complete
#define DMA_TCD_BITER_MASK		((uint16_t)0x7FFF)	   // Loop count mask
#define DMA_TCD_BITER_ELINK		((uint16_t)1<<15)	   // Enable channel linking on minor-loop complete
#define DMA_TCD_BITER_ELINKYES_ELINK		0x8000
#define DMA_TCD_BITER_ELINKYES_LINKCH(n)	(((n) & 0xF) << 9)
#define DMA_TCD_BITER_ELINKYES_LINKCH_MASK	0x1E00
#define DMA_TCD_BITER_ELINKYES_BITER(n)		(((n) & 0x1FF) << 0)
#define DMA_TCD_BITER_ELINKYES_BITER_MASK	0x01FF
#define DMA_TCD_CITER_ELINKYES_ELINK		0x8000
#define DMA_TCD_CITER_ELINKYES_LINKCH(n)	(((n) & 0xF) << 9)
#define DMA_TCD_CITER_ELINKYES_LINKCH_MASK	0x1E00
#define DMA_TCD_CITER_ELINKYES_CITER(n)		(((n) & 0x1FF) << 0)
#define DMA_TCD_CITER_ELINKYES_CITER_MASK	0x01FF
#define DMA_TCD_NBYTES_SMLOE		    ((uint32_t)1<<31)		    // Source Minor Loop Offset Enable
#define DMA_TCD_NBYTES_DMLOE		    ((uint32_t)1<<30)		    // Destination Minor Loop Offset Enable
#define DMA_TCD_NBYTES_MLOFFNO_NBYTES(n)    ((uint32_t)((n) & 0x3FFFFFFF))  // NBytes transfer count when minor loop disabled
#define DMA_TCD_NBYTES_MLOFFYES_NBYTES(n)   ((uint32_t)((n) & 0x3FF))	    // NBytes transfer count when minor loop enabled
#define DMA_TCD_NBYTES_MLOFFYES_MLOFF(n)    ((uint32_t)((n) & 0xFFFFF)<<10) // Minor loop offset

#define DMA_TCD0_SADDR		(*(volatile const void * volatile *)0x40009000) // TCD Source Address
#define DMA_TCD0_SOFF		(*(volatile int16_t *)0x40009004)  // TCD Signed Source Address Offset
#define DMA_TCD0_ATTR		(*(volatile uint16_t *)0x40009006) // TCD Transfer Attributes
#define DMA_TCD0_NBYTES_MLNO	(*(volatile uint32_t *)0x40009008) // TCD Minor Byte Count (Minor Loop Disabled)
#define DMA_TCD0_NBYTES_MLOFFNO (*(volatile uint32_t *)0x40009008) // TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
#define DMA_TCD0_NBYTES_MLOFFYES (*(volatile uint32_t *)0x40009008) // TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
#define DMA_TCD0_SLAST		(*(volatile int32_t *)0x4000900C)  // TCD Last Source Address Adjustment
#define DMA_TCD0_DADDR		(*(volatile void * volatile *)0x40009010) // TCD Destination Address
#define DMA_TCD0_DOFF		(*(volatile int16_t *)0x40009014)  // TCD Signed Destination Address Offset
#define DMA_TCD0_CITER_ELINKYES (*(volatile uint16_t *)0x40009016) // TCD Current Minor Loop Link, Major Loop Count, Channel Linking Enabled
#define DMA_TCD0_CITER_ELINKNO	(*(volatile uint16_t *)0x40009016) // ??
#define DMA_TCD0_DLASTSGA	(*(volatile int32_t *)0x40009018)  // TCD Last Destination Address Adjustment/Scatter Gather Address
#define DMA_TCD0_CSR		(*(volatile uint16_t *)0x4000901C) // TCD Control and Status
#define DMA_TCD0_BITER_ELINKYES (*(volatile uint16_t *)0x4000901E) // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Enabled
#define DMA_TCD0_BITER_ELINKNO	(*(volatile uint16_t *)0x4000901E) // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Disabled

#define DMA_TCD1_SADDR		(*(volatile const void * volatile *)0x40009020) // TCD Source Address
#define DMA_TCD1_SOFF		(*(volatile int16_t *)0x40009024)  // TCD Signed Source Address Offset
#define DMA_TCD1_ATTR		(*(volatile uint16_t *)0x40009026) // TCD Transfer Attributes
#define DMA_TCD1_NBYTES_MLNO	(*(volatile uint32_t *)0x40009028) // TCD Minor Byte Count, Minor Loop Disabled
#define DMA_TCD1_NBYTES_MLOFFNO (*(volatile uint32_t *)0x40009028) // TCD Signed Minor Loop Offset, Minor Loop Enabled and Offset Disabled
#define DMA_TCD1_NBYTES_MLOFFYES (*(volatile uint32_t *)0x40009028) // TCD Signed Minor Loop Offset, Minor Loop and Offset Enabled
#define DMA_TCD1_SLAST		(*(volatile int32_t *)0x4000902C)  // TCD Last Source Address Adjustment
#define DMA_TCD1_DADDR		(*(volatile void * volatile *)0x40009030) // TCD Destination Address
#define DMA_TCD1_DOFF		(*(volatile int16_t *)0x40009034)  // TCD Signed Destination Address Offset
#define DMA_TCD1_CITER_ELINKYES (*(volatile uint16_t *)0x40009036) // TCD Current Minor Loop Link, Major Loop Count, Channel Linking Enabled
#define DMA_TCD1_CITER_ELINKNO	(*(volatile uint16_t *)0x40009036) // ??
#define DMA_TCD1_DLASTSGA	(*(volatile int32_t *)0x40009038)  // TCD Last Destination Address Adjustment/Scatter Gather Address
#define DMA_TCD1_CSR		(*(volatile uint16_t *)0x4000903C) // TCD Control and Status
#define DMA_TCD1_BITER_ELINKYES (*(volatile uint16_t *)0x4000903E) // TCD Beginning Minor Loop Link, Major Loop Count Channel Linking Enabled
#define DMA_TCD1_BITER_ELINKNO	(*(volatile uint16_t *)0x4000903E) // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Disabled

#define DMA_TCD2_SADDR		(*(volatile const void * volatile *)0x40009040) // TCD Source Address
#define DMA_TCD2_SOFF		(*(volatile int16_t *)0x40009044)  // TCD Signed Source Address Offset
#define DMA_TCD2_ATTR		(*(volatile uint16_t *)0x40009046) // TCD Transfer Attributes
#define DMA_TCD2_NBYTES_MLNO	(*(volatile uint32_t *)0x40009048) // TCD Minor Byte Count, Minor Loop Disabled
#define DMA_TCD2_NBYTES_MLOFFNO (*(volatile uint32_t *)0x40009048) // TCD Signed Minor Loop Offset, Minor Loop Enabled and Offset Disabled
#define DMA_TCD2_NBYTES_MLOFFYES (*(volatile uint32_t *)0x40009048) // TCD Signed Minor Loop Offset, Minor Loop and Offset Enabled
#define DMA_TCD2_SLAST		(*(volatile int32_t *)0x4000904C)  // TCD Last Source Address Adjustment
#define DMA_TCD2_DADDR		(*(volatile void * volatile *)0x40009050) // TCD Destination Address
#define DMA_TCD2_DOFF		(*(volatile int16_t *)0x40009054)  // TCD Signed Destination Address Offset
#define DMA_TCD2_CITER_ELINKYES (*(volatile uint16_t *)0x40009056) // TCD Current Minor Loop Link, Major Loop Count, Channel Linking Enabled
#define DMA_TCD2_CITER_ELINKNO	(*(volatile uint16_t *)0x40009056) // ??
#define DMA_TCD2_DLASTSGA	(*(volatile int32_t *)0x40009058)  // TCD Last Destination Address Adjustment/Scatter Gather Address
#define DMA_TCD2_CSR		(*(volatile uint16_t *)0x4000905C) // TCD Control and Status
#define DMA_TCD2_BITER_ELINKYES (*(volatile uint16_t *)0x4000905E) // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Enabled
#define DMA_TCD2_BITER_ELINKNO	(*(volatile uint16_t *)0x4000905E) // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Disabled

#define DMA_TCD3_SADDR		(*(volatile const void * volatile *)0x40009060) // TCD Source Address
#define DMA_TCD3_SOFF		(*(volatile int16_t *)0x40009064)  // TCD Signed Source Address Offset
#define DMA_TCD3_ATTR		(*(volatile uint16_t *)0x40009066) // TCD Transfer Attributes
#define DMA_TCD3_NBYTES_MLNO	(*(volatile uint32_t *)0x40009068) // TCD Minor Byte Count, Minor Loop Disabled
#define DMA_TCD3_NBYTES_MLOFFNO (*(volatile uint32_t *)0x40009068) // TCD Signed Minor Loop Offset, Minor Loop Enabled and Offset Disabled
#define DMA_TCD3_NBYTES_MLOFFYES (*(volatile uint32_t *)0x40009068) // TCD Signed Minor Loop Offset, Minor Loop and Offset Enabled
#define DMA_TCD3_SLAST		(*(volatile int32_t *)0x4000906C)  // TCD Last Source Address Adjustment
#define DMA_TCD3_DADDR		(*(volatile void * volatile *)0x40009070) // TCD Destination Address
#define DMA_TCD3_DOFF		(*(volatile int16_t *)0x40009074)  // TCD Signed Destination Address Offset
#define DMA_TCD3_CITER_ELINKYES (*(volatile uint16_t *)0x40009076) // TCD Current Minor Loop Link, Major Loop Count, Channel Linking Enabled
#define DMA_TCD3_CITER_ELINKNO	(*(volatile uint16_t *)0x40009076) // ??
#define DMA_TCD3_DLASTSGA	(*(volatile int32_t *)0x40009078)  // TCD Last Destination Address Adjustment/Scatter Gather Address
#define DMA_TCD3_CSR		(*(volatile uint16_t *)0x4000907C) // TCD Control and Status
#define DMA_TCD3_BITER_ELINKYES (*(volatile uint16_t *)0x4000907E) // TCD Beginning Minor Loop Link, Major Loop Count ,Channel Linking Enabled
#define DMA_TCD3_BITER_ELINKNO	(*(volatile uint16_t *)0x4000907E) // TCD Beginning Minor Loop Link, Major Loop Count ,Channel Linking Disabled

#define DMA_TCD4_SADDR		(*(volatile const void * volatile *)0x40009080) // TCD Source Addr
#define DMA_TCD4_SOFF		(*(volatile int16_t *)0x40009084)  // TCD Signed Source Address Offset
#define DMA_TCD4_ATTR		(*(volatile uint16_t *)0x40009086) // TCD Transfer Attributes
#define DMA_TCD4_NBYTES_MLNO	(*(volatile uint32_t *)0x40009088) // TCD Minor Byte Count
#define DMA_TCD4_NBYTES_MLOFFNO (*(volatile uint32_t *)0x40009088) // TCD Signed Minor Loop Offset
#define DMA_TCD4_NBYTES_MLOFFYES (*(volatile uint32_t *)0x40009088) // TCD Signed Minor Loop Offset
#define DMA_TCD4_SLAST		(*(volatile int32_t *)0x4000908C)  // TCD Last Source Addr Adj.
#define DMA_TCD4_DADDR		(*(volatile void * volatile *)0x40009090) // TCD Destination Address
#define DMA_TCD4_DOFF		(*(volatile int16_t *)0x40009094)  // TCD Signed Dest Address Offset
#define DMA_TCD4_CITER_ELINKYES (*(volatile uint16_t *)0x40009096) // TCD Current Minor Loop Link
#define DMA_TCD4_CITER_ELINKNO	(*(volatile uint16_t *)0x40009096) // ??
#define DMA_TCD4_DLASTSGA	(*(volatile int32_t *)0x40009098)  // TCD Last Destination Addr Adj
#define DMA_TCD4_CSR		(*(volatile uint16_t *)0x4000909C) // TCD Control and Status
#define DMA_TCD4_BITER_ELINKYES (*(volatile uint16_t *)0x4000909E) // TCD Beginning Minor Loop Link
#define DMA_TCD4_BITER_ELINKNO	(*(volatile uint16_t *)0x4000909E) // TCD Beginning Minor Loop Link

#define DMA_TCD5_SADDR		(*(volatile const void * volatile *)0x400090A0) // TCD Source Addr
#define DMA_TCD5_SOFF		(*(volatile int16_t *)0x400090A4)  // TCD Signed Source Address Offset
#define DMA_TCD5_ATTR		(*(volatile uint16_t *)0x400090A6) // TCD Transfer Attributes
#define DMA_TCD5_NBYTES_MLNO	(*(volatile uint32_t *)0x400090A8) // TCD Minor Byte Count
#define DMA_TCD5_NBYTES_MLOFFNO (*(volatile uint32_t *)0x400090A8) // TCD Signed Minor Loop Offset
#define DMA_TCD5_NBYTES_MLOFFYES (*(volatile uint32_t *)0x400090A8) // TCD Signed Minor Loop Offset
#define DMA_TCD5_SLAST		(*(volatile int32_t *)0x400090AC)  // TCD Last Source Addr Adj.
#define DMA_TCD5_DADDR		(*(volatile void * volatile *)0x400090B0) // TCD Destination Address
#define DMA_TCD5_DOFF		(*(volatile int16_t *)0x400090B4)  // TCD Signed Dest Address Offset
#define DMA_TCD5_CITER_ELINKYES (*(volatile uint16_t *)0x400090B6) // TCD Current Minor Loop Link
#define DMA_TCD5_CITER_ELINKNO	(*(volatile uint16_t *)0x400090B6) // ??
#define DMA_TCD5_DLASTSGA	(*(volatile int32_t *)0x400090B8)  // TCD Last Destination Addr Adj
#define DMA_TCD5_CSR		(*(volatile uint16_t *)0x400090BC) // TCD Control and Status
#define DMA_TCD5_BITER_ELINKYES (*(volatile uint16_t *)0x400090BE) // TCD Beginning Minor Loop Link
#define DMA_TCD5_BITER_ELINKNO	(*(volatile uint16_t *)0x400090BE) // TCD Beginning Minor Loop Link

#define DMA_TCD6_SADDR		(*(volatile const void * volatile *)0x400090C0) // TCD Source Addr
#define DMA_TCD6_SOFF		(*(volatile int16_t *)0x400090C4)  // TCD Signed Source Address Offset
#define DMA_TCD6_ATTR		(*(volatile uint16_t *)0x400090C6) // TCD Transfer Attributes
#define DMA_TCD6_NBYTES_MLNO	(*(volatile uint32_t *)0x400090C8) // TCD Minor Byte Count
#define DMA_TCD6_NBYTES_MLOFFNO (*(volatile uint32_t *)0x400090C8) // TCD Signed Minor Loop Offset
#define DMA_TCD6_NBYTES_MLOFFYES (*(volatile uint32_t *)0x400090C8) // TCD Signed Minor Loop Offset
#define DMA_TCD6_SLAST		(*(volatile int32_t *)0x400090CC)  // TCD Last Source Addr Adj.
#define DMA_TCD6_DADDR		(*(volatile void * volatile *)0x400090D0) // TCD Destination Address
#define DMA_TCD6_DOFF		(*(volatile int16_t *)0x400090D4)  // TCD Signed Dest Address Offset
#define DMA_TCD6_CITER_ELINKYES (*(volatile uint16_t *)0x400090D6) // TCD Current Minor Loop Link
#define DMA_TCD6_CITER_ELINKNO	(*(volatile uint16_t *)0x400090D6) // ??
#define DMA_TCD6_DLASTSGA	(*(volatile int32_t *)0x400090D8)  // TCD Last Destination Addr Adj
#define DMA_TCD6_CSR		(*(volatile uint16_t *)0x400090DC) // TCD Control and Status
#define DMA_TCD6_BITER_ELINKYES (*(volatile uint16_t *)0x400090DE) // TCD Beginning Minor Loop Link
#define DMA_TCD6_BITER_ELINKNO	(*(volatile uint16_t *)0x400090DE) // TCD Beginning Minor Loop Link

#define DMA_TCD7_SADDR		(*(volatile const void * volatile *)0x400090E0) // TCD Source Addr
#define DMA_TCD7_SOFF		(*(volatile int16_t *)0x400090E4)  // TCD Signed Source Address Offset
#define DMA_TCD7_ATTR		(*(volatile uint16_t *)0x400090E6) // TCD Transfer Attributes
#define DMA_TCD7_NBYTES_MLNO	(*(volatile uint32_t *)0x400090E8) // TCD Minor Byte Count
#define DMA_TCD7_NBYTES_MLOFFNO (*(volatile uint32_t *)0x400090E8) // TCD Signed Minor Loop Offset
#define DMA_TCD7_NBYTES_MLOFFYES (*(volatile uint32_t *)0x400090E8) // TCD Signed Minor Loop Offset
#define DMA_TCD7_SLAST		(*(volatile int32_t *)0x400090EC)  // TCD Last Source Addr Adj.
#define DMA_TCD7_DADDR		(*(volatile void * volatile *)0x400090F0) // TCD Destination Address
#define DMA_TCD7_DOFF		(*(volatile int16_t *)0x400090F4)  // TCD Signed Dest Address Offset
#define DMA_TCD7_CITER_ELINKYES (*(volatile uint16_t *)0x400090F6) // TCD Current Minor Loop Link
#define DMA_TCD7_CITER_ELINKNO	(*(volatile uint16_t *)0x400090F6) // ??
#define DMA_TCD7_DLASTSGA	(*(volatile int32_t *)0x400090F8)  // TCD Last Destination Addr Adj
#define DMA_TCD7_CSR		(*(volatile uint16_t *)0x400090FC) // TCD Control and Status
#define DMA_TCD7_BITER_ELINKYES (*(volatile uint16_t *)0x400090FE) // TCD Beginning Minor Loop Link
#define DMA_TCD7_BITER_ELINKNO	(*(volatile uint16_t *)0x400090FE) // TCD Beginning Minor Loop Link

#define DMA_TCD8_SADDR		(*(volatile const void * volatile *)0x40009100) // TCD Source Addr
#define DMA_TCD8_SOFF		(*(volatile int16_t *)0x40009104)  // TCD Signed Source Address Offset
#define DMA_TCD8_ATTR		(*(volatile uint16_t *)0x40009106) // TCD Transfer Attributes
#define DMA_TCD8_NBYTES_MLNO	(*(volatile uint32_t *)0x40009108) // TCD Minor Byte Count
#define DMA_TCD8_NBYTES_MLOFFNO (*(volatile uint32_t *)0x40009108) // TCD Signed Minor Loop Offset
#define DMA_TCD8_NBYTES_MLOFFYES (*(volatile uint32_t *)0x40009108) // TCD Signed Minor Loop Offset
#define DMA_TCD8_SLAST		(*(volatile int32_t *)0x4000910C)  // TCD Last Source Addr Adj.
#define DMA_TCD8_DADDR		(*(volatile void * volatile *)0x40009110) // TCD Destination Address
#define DMA_TCD8_DOFF		(*(volatile int16_t *)0x40009114)  // TCD Signed Dest Address Offset
#define DMA_TCD8_CITER_ELINKYES (*(volatile uint16_t *)0x40009116) // TCD Current Minor Loop Link
#define DMA_TCD8_CITER_ELINKNO	(*(volatile uint16_t *)0x40009116) // ??
#define DMA_TCD8_DLASTSGA	(*(volatile int32_t *)0x40009118)  // TCD Last Destination Addr Adj
#define DMA_TCD8_CSR		(*(volatile uint16_t *)0x4000911C) // TCD Control and Status
#define DMA_TCD8_BITER_ELINKYES (*(volatile uint16_t *)0x4000911E) // TCD Beginning Minor Loop Link
#define DMA_TCD8_BITER_ELINKNO	(*(volatile uint16_t *)0x4000911E) // TCD Beginning Minor Loop Link

#define DMA_TCD9_SADDR		(*(volatile const void * volatile *)0x40009120) // TCD Source Addr
#define DMA_TCD9_SOFF		(*(volatile int16_t *)0x40009124)  // TCD Signed Source Address Offset
#define DMA_TCD9_ATTR		(*(volatile uint16_t *)0x40009126) // TCD Transfer Attributes
#define DMA_TCD9_NBYTES_MLNO	(*(volatile uint32_t *)0x40009128) // TCD Minor Byte Count
#define DMA_TCD9_NBYTES_MLOFFNO (*(volatile uint32_t *)0x40009128) // TCD Signed Minor Loop Offset
#define DMA_TCD9_NBYTES_MLOFFYES (*(volatile uint32_t *)0x40009128) // TCD Signed Minor Loop Offset
#define DMA_TCD9_SLAST		(*(volatile int32_t *)0x4000912C)  // TCD Last Source Addr Adj.
#define DMA_TCD9_DADDR		(*(volatile void * volatile *)0x40009130) // TCD Destination Address
#define DMA_TCD9_DOFF		(*(volatile int16_t *)0x40009134)  // TCD Signed Dest Address Offset
#define DMA_TCD9_CITER_ELINKYES (*(volatile uint16_t *)0x40009136) // TCD Current Minor Loop Link
#define DMA_TCD9_CITER_ELINKNO	(*(volatile uint16_t *)0x40009136) // ??
#define DMA_TCD9_DLASTSGA	(*(volatile int32_t *)0x40009138)  // TCD Last Destination Addr Adj
#define DMA_TCD9_CSR		(*(volatile uint16_t *)0x4000913C) // TCD Control and Status
#define DMA_TCD9_BITER_ELINKYES (*(volatile uint16_t *)0x4000913E) // TCD Beginning Minor Loop Link
#define DMA_TCD9_BITER_ELINKNO	(*(volatile uint16_t *)0x4000913E) // TCD Beginning Minor Loop Link

#define DMA_TCD10_SADDR		(*(volatile const void * volatile *)0x40009140) // TCD Source Addr
#define DMA_TCD10_SOFF		(*(volatile int16_t *)0x40009144)	 // TCD Signed Source Address Offset
#define DMA_TCD10_ATTR		(*(volatile uint16_t *)0x40009146) // TCD Transfer Attributes
#define DMA_TCD10_NBYTES_MLNO	(*(volatile uint32_t *)0x40009148) // TCD Minor Byte Count
#define DMA_TCD10_NBYTES_MLOFFNO (*(volatile uint32_t *)0x40009148) // TCD Signed Minor Loop Offset
#define DMA_TCD10_NBYTES_MLOFFYES (*(volatile uint32_t *)0x40009148) // TCD Signed Minor Loop Offset
#define DMA_TCD10_SLAST		(*(volatile int32_t *)0x4000914C)	 // TCD Last Source Addr Adj.
#define DMA_TCD10_DADDR		(*(volatile void * volatile *)0x40009150) // TCD Destination Address
#define DMA_TCD10_DOFF		(*(volatile int16_t *)0x40009154)	 // TCD Signed Dest Address Offset
#define DMA_TCD10_CITER_ELINKYES (*(volatile uint16_t *)0x40009156) // TCD Current Minor Loop Link
#define DMA_TCD10_CITER_ELINKNO	(*(volatile uint16_t *)0x40009156) // ??
#define DMA_TCD10_DLASTSGA	(*(volatile int32_t *)0x40009158)	 // TCD Last Destination Addr Adj
#define DMA_TCD10_CSR		(*(volatile uint16_t *)0x4000915C) // TCD Control and Status
#define DMA_TCD10_BITER_ELINKYES (*(volatile uint16_t *)0x4000915E) // TCD Beginning Minor Loop Link
#define DMA_TCD10_BITER_ELINKNO	(*(volatile uint16_t *)0x4000915E) // TCD Beginning Minor Loop Link

#define DMA_TCD11_SADDR		(*(volatile const void * volatile *)0x40009160) // TCD Source Addr
#define DMA_TCD11_SOFF		(*(volatile int16_t *)0x40009164)	 // TCD Signed Source Address Offset
#define DMA_TCD11_ATTR		(*(volatile uint16_t *)0x40009166) // TCD Transfer Attributes
#define DMA_TCD11_NBYTES_MLNO	(*(volatile uint32_t *)0x40009168) // TCD Minor Byte Count
#define DMA_TCD11_NBYTES_MLOFFNO (*(volatile uint32_t *)0x40009168) // TCD Signed Minor Loop Offset
#define DMA_TCD11_NBYTES_MLOFFYES (*(volatile uint32_t *)0x40009168) // TCD Signed Minor Loop Offset
#define DMA_TCD11_SLAST		(*(volatile int32_t *)0x4000916C)	 // TCD Last Source Addr Adj.
#define DMA_TCD11_DADDR		(*(volatile void * volatile *)0x40009170) // TCD Destination Address
#define DMA_TCD11_DOFF		(*(volatile int16_t *)0x40009174)	 // TCD Signed Dest Address Offset
#define DMA_TCD11_CITER_ELINKYES (*(volatile uint16_t *)0x40009176) // TCD Current Minor Loop Link
#define DMA_TCD11_CITER_ELINKNO	(*(volatile uint16_t *)0x40009176) // ??
#define DMA_TCD11_DLASTSGA	(*(volatile int32_t *)0x40009178)	 // TCD Last Destination Addr Adj
#define DMA_TCD11_CSR		(*(volatile uint16_t *)0x4000917C) // TCD Control and Status
#define DMA_TCD11_BITER_ELINKYES (*(volatile uint16_t *)0x4000917E) // TCD Beginning Minor Loop Link
#define DMA_TCD11_BITER_ELINKNO	(*(volatile uint16_t *)0x4000917E) // TCD Beginning Minor Loop Link

#define DMA_TCD12_SADDR		(*(volatile const void * volatile *)0x40009180) // TCD Source Addr
#define DMA_TCD12_SOFF		(*(volatile int16_t *)0x40009184)	 // TCD Signed Source Address Offset
#define DMA_TCD12_ATTR		(*(volatile uint16_t *)0x40009186) // TCD Transfer Attributes
#define DMA_TCD12_NBYTES_MLNO	(*(volatile uint32_t *)0x40009188) // TCD Minor Byte Count
#define DMA_TCD12_NBYTES_MLOFFNO (*(volatile uint32_t *)0x40009188) // TCD Signed Minor Loop Offset
#define DMA_TCD12_NBYTES_MLOFFYES (*(volatile uint32_t *)0x40009188) // TCD Signed Minor Loop Offset
#define DMA_TCD12_SLAST		(*(volatile int32_t *)0x4000918C)	 // TCD Last Source Addr Adj.
#define DMA_TCD12_DADDR		(*(volatile void * volatile *)0x40009190) // TCD Destination Address
#define DMA_TCD12_DOFF		(*(volatile int16_t *)0x40009194)	 // TCD Signed Dest Address Offset
#define DMA_TCD12_CITER_ELINKYES (*(volatile uint16_t *)0x40009196) // TCD Current Minor Loop Link
#define DMA_TCD12_CITER_ELINKNO	(*(volatile uint16_t *)0x40009196) // ??
#define DMA_TCD12_DLASTSGA	(*(volatile int32_t *)0x40009198)	 // TCD Last Destination Addr Adj
#define DMA_TCD12_CSR		(*(volatile uint16_t *)0x4000919C) // TCD Control and Status
#define DMA_TCD12_BITER_ELINKYES (*(volatile uint16_t *)0x4000919E) // TCD Beginning Minor Loop Link
#define DMA_TCD12_BITER_ELINKNO	(*(volatile uint16_t *)0x4000919E) // TCD Beginning Minor Loop Link

#define DMA_TCD13_SADDR		(*(volatile const void * volatile *)0x400091A0) // TCD Source Addr
#define DMA_TCD13_SOFF		(*(volatile int16_t *)0x400091A4)	 // TCD Signed Source Address Offset
#define DMA_TCD13_ATTR		(*(volatile uint16_t *)0x400091A6) // TCD Transfer Attributes
#define DMA_TCD13_NBYTES_MLNO	(*(volatile uint32_t *)0x400091A8) // TCD Minor Byte Count
#define DMA_TCD13_NBYTES_MLOFFNO (*(volatile uint32_t *)0x400091A8) // TCD Signed Minor Loop Offset
#define DMA_TCD13_NBYTES_MLOFFYES (*(volatile uint32_t *)0x400091A8) // TCD Signed Minor Loop Offset
#define DMA_TCD13_SLAST		(*(volatile int32_t *)0x400091AC)	 // TCD Last Source Addr Adj.
#define DMA_TCD13_DADDR		(*(volatile void * volatile *)0x400091B0) // TCD Destination Address
#define DMA_TCD13_DOFF		(*(volatile int16_t *)0x400091B4)	 // TCD Signed Dest Address Offset
#define DMA_TCD13_CITER_ELINKYES (*(volatile uint16_t *)0x400091B6) // TCD Current Minor Loop Link
#define DMA_TCD13_CITER_ELINKNO	(*(volatile uint16_t *)0x400091B6) // ??
#define DMA_TCD13_DLASTSGA	(*(volatile int32_t *)0x400091B8)	 // TCD Last Destination Addr Adj
#define DMA_TCD13_CSR		(*(volatile uint16_t *)0x400091BC) // TCD Control and Status
#define DMA_TCD13_BITER_ELINKYES (*(volatile uint16_t *)0x400091BE) // TCD Beginning Minor Loop Link
#define DMA_TCD13_BITER_ELINKNO	(*(volatile uint16_t *)0x400091BE) // TCD Beginning Minor Loop Link

#define DMA_TCD14_SADDR		(*(volatile const void * volatile *)0x400091C0) // TCD Source Addr
#define DMA_TCD14_SOFF		(*(volatile int16_t *)0x400091C4)	 // TCD Signed Source Address Offset
#define DMA_TCD14_ATTR		(*(volatile uint16_t *)0x400091C6) // TCD Transfer Attributes
#define DMA_TCD14_NBYTES_MLNO	(*(volatile uint32_t *)0x400091C8) // TCD Minor Byte Count
#define DMA_TCD14_NBYTES_MLOFFNO (*(volatile uint32_t *)0x400091C8) // TCD Signed Minor Loop Offset
#define DMA_TCD14_NBYTES_MLOFFYES (*(volatile uint32_t *)0x400091C8) // TCD Signed Minor Loop Offset
#define DMA_TCD14_SLAST		(*(volatile int32_t *)0x400091CC)	 // TCD Last Source Addr Adj.
#define DMA_TCD14_DADDR		(*(volatile void * volatile *)0x400091D0) // TCD Destination Address
#define DMA_TCD14_DOFF		(*(volatile int16_t *)0x400091D4)	 // TCD Signed Dest Address Offset
#define DMA_TCD14_CITER_ELINKYES (*(volatile uint16_t *)0x400091D6) // TCD Current Minor Loop Link
#define DMA_TCD14_CITER_ELINKNO	(*(volatile uint16_t *)0x400091D6) // ??
#define DMA_TCD14_DLASTSGA	(*(volatile int32_t *)0x400091D8)	 // TCD Last Destination Addr Adj
#define DMA_TCD14_CSR		(*(volatile uint16_t *)0x400091DC) // TCD Control and Status
#define DMA_TCD14_BITER_ELINKYES (*(volatile uint16_t *)0x400091DE) // TCD Beginning Minor Loop Link
#define DMA_TCD14_BITER_ELINKNO	(*(volatile uint16_t *)0x400091DE) // TCD Beginning Minor Loop Link

#define DMA_TCD15_SADDR		(*(volatile const void * volatile *)0x400091E0) // TCD Source Addr
#define DMA_TCD15_SOFF		(*(volatile int16_t *)0x400091E4)	 // TCD Signed Source Address Offset
#define DMA_TCD15_ATTR		(*(volatile uint16_t *)0x400091E6) // TCD Transfer Attributes
#define DMA_TCD15_NBYTES_MLNO	(*(volatile uint32_t *)0x400091E8) // TCD Minor Byte Count
#define DMA_TCD15_NBYTES_MLOFFNO (*(volatile uint32_t *)0x400091E8) // TCD Signed Minor Loop Offset
#define DMA_TCD15_NBYTES_MLOFFYES (*(volatile uint32_t *)0x400091E8) // TCD Signed Minor Loop Offset
#define DMA_TCD15_SLAST		(*(volatile int32_t *)0x400091EC)	 // TCD Last Source Addr Adj.
#define DMA_TCD15_DADDR		(*(volatile void * volatile *)0x400091F0) // TCD Destination Address
#define DMA_TCD15_DOFF		(*(volatile int16_t *)0x400091F4)	 // TCD Signed Dest Address Offset
#define DMA_TCD15_CITER_ELINKYES (*(volatile uint16_t *)0x400091F6) // TCD Current Minor Loop Link
#define DMA_TCD15_CITER_ELINKNO	(*(volatile uint16_t *)0x400091F6) // ??
#define DMA_TCD15_DLASTSGA	(*(volatile int32_t *)0x400091F8)	 // TCD Last Destination Addr Adj
#define DMA_TCD15_CSR		(*(volatile uint16_t *)0x400091FC) // TCD Control and Status
#define DMA_TCD15_BITER_ELINKYES (*(volatile uint16_t *)0x400091FE) // TCD Beginning Minor Loop Link
#define DMA_TCD15_BITER_ELINKNO	(*(volatile uint16_t *)0x400091FE) // TCD Beginning Minor Loop Link

#endif /* TEENSY32_MK20DX256_DMA_H_ */
