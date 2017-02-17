/*
 * mk20dx256_iqr.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_INTERRUPTS_H_
#define TEENSY32_MK20DX256_INTERRUPTS_H_

#define NVIC_NUM_INTERRUPTS	95

enum IRQ_NUMBER_t {
	IRQ_DMA_CH0 =		0,
	IRQ_DMA_CH1 =		1,
	IRQ_DMA_CH2 =		2,
	IRQ_DMA_CH3 =		3,
	IRQ_DMA_CH4 =		4,
	IRQ_DMA_CH5 =		5,
	IRQ_DMA_CH6 =		6,
	IRQ_DMA_CH7 =		7,
	IRQ_DMA_CH8 =		8,
	IRQ_DMA_CH9 =		9,
	IRQ_DMA_CH10 =		10,
	IRQ_DMA_CH11 =		11,
	IRQ_DMA_CH12 =		12,
	IRQ_DMA_CH13 =		13,
	IRQ_DMA_CH14 =		14,
	IRQ_DMA_CH15 =		15,
	IRQ_DMA_ERROR =		16,
	IRQ_FTFL_COMPLETE =	18,
	IRQ_FTFL_COLLISION =	19,
	IRQ_LOW_VOLTAGE =	20,
	IRQ_LLWU =			21,
	IRQ_WDOG =			22,
	IRQ_I2C0 =			24,
	IRQ_I2C1 =			25,
	IRQ_SPI0 =			26,
	IRQ_SPI1 =			27,
	IRQ_CAN_MESSAGE =	29,
	IRQ_CAN_BUS_OFF =	30,
	IRQ_CAN_ERROR =		31,
	IRQ_CAN_TX_WARN =	32,
	IRQ_CAN_RX_WARN =	33,
	IRQ_CAN_WAKEUP =	34,
	IRQ_I2S0_TX =		35,
	IRQ_I2S0_RX =		36,
	IRQ_UART0_LON =		44,
	IRQ_UART0_STATUS =	45,
	IRQ_UART0_ERROR =	46,
	IRQ_UART1_STATUS =	47,
	IRQ_UART1_ERROR =	48,
	IRQ_UART2_STATUS =	49,
	IRQ_UART2_ERROR =	50,
	IRQ_ADC0 =			57,
	IRQ_ADC1 =			58,
	IRQ_CMP0 =			59,
	IRQ_CMP1 =			60,
	IRQ_CMP2 =			61,
	IRQ_FTM0 =			62,
	IRQ_FTM1 =			63,
	IRQ_FTM2 =			64,
	IRQ_CMT =			65,
	IRQ_RTC_ALARM =		66,
	IRQ_RTC_SECOND =	67,
	IRQ_PIT_CH0 =		68,
	IRQ_PIT_CH1 =		69,
	IRQ_PIT_CH2 =		70,
	IRQ_PIT_CH3 =		71,
	IRQ_PDB =			72,
	IRQ_USBOTG =		73,
	IRQ_USBDCD =		74,
	IRQ_DAC0 =			81,
	IRQ_TSI =			83,
	IRQ_MCG =			84,
	IRQ_LPTMR =			85,
	IRQ_PORTA =			87,
	IRQ_PORTB =			88,
	IRQ_PORTC =			89,
	IRQ_PORTD =			90,
	IRQ_PORTE =			91,
	IRQ_SOFTWARE =		94
};

// Nested Vectored Interrupt Controller, Table 3-4 & ARMv7 ref, appendix B3.4 (page 750)

#define NVIC_STIR			(*(volatile uint32_t *)0xE000EF00)
#define NVIC_ENABLE_IRQ(n)	(*((volatile uint32_t *)0xE000E100 + ((n) >> 5)) = (1 << ((n) & 31)))
#define NVIC_DISABLE_IRQ(n)	(*((volatile uint32_t *)0xE000E180 + ((n) >> 5)) = (1 << ((n) & 31)))
#define NVIC_SET_PENDING(n)	(*((volatile uint32_t *)0xE000E200 + ((n) >> 5)) = (1 << ((n) & 31)))
#define NVIC_CLEAR_PENDING(n)	(*((volatile uint32_t *)0xE000E280 + ((n) >> 5)) = (1 << ((n) & 31)))
#define NVIC_IS_ENABLED(n)	(*((volatile uint32_t *)0xE000E100 + ((n) >> 5)) & (1 << ((n) & 31)))
#define NVIC_IS_PENDING(n)	(*((volatile uint32_t *)0xE000E200 + ((n) >> 5)) & (1 << ((n) & 31)))
#define NVIC_IS_ACTIVE(n)	(*((volatile uint32_t *)0xE000E300 + ((n) >> 5)) & (1 << ((n) & 31)))
#define NVIC_TRIGGER_IRQ(n)	NVIC_STIR=(n)

#define NVIC_ISER0		(*(volatile uint32_t *)0xE000E100)
#define NVIC_ISER1		(*(volatile uint32_t *)0xE000E104)
#define NVIC_ISER2		(*(volatile uint32_t *)0xE000E108)
#define NVIC_ISER3		(*(volatile uint32_t *)0xE000E10C)
#define NVIC_ICER0		(*(volatile uint32_t *)0xE000E180)
#define NVIC_ICER1		(*(volatile uint32_t *)0xE000E184)
#define NVIC_ICER2		(*(volatile uint32_t *)0xE000E188)
#define NVIC_ICER3		(*(volatile uint32_t *)0xE000E18C)

// 0 = highest priority
// Cortex-M4: 0,16,32,48,64,80,96,112,128,144,160,176,192,208,224,240
// Cortex-M0: 0,64,128,192
#define NVIC_SET_PRIORITY(irqnum, priority)  (*((volatile uint8_t *)0xE000E400 + (irqnum)) = (uint8_t)(priority))
#define NVIC_GET_PRIORITY(irqnum) (*((uint8_t *)0xE000E400 + (irqnum)))

#define __disable_irq() __asm__ volatile("CPSID i":::"memory");
#define __enable_irq()	__asm__ volatile("CPSIE i":::"memory");

extern int nvic_execution_priority(void);

extern void nmi_isr(void);
extern void hard_fault_isr(void);
extern void memmanage_fault_isr(void);
extern void bus_fault_isr(void);
extern void usage_fault_isr(void);
extern void svcall_isr(void);
extern void debugmonitor_isr(void);
extern void pendablesrvreq_isr(void);
extern void systick_isr(void);
extern void dma_ch0_isr(void);
extern void dma_ch1_isr(void);
extern void dma_ch2_isr(void);
extern void dma_ch3_isr(void);
extern void dma_ch4_isr(void);
extern void dma_ch5_isr(void);
extern void dma_ch6_isr(void);
extern void dma_ch7_isr(void);
extern void dma_ch8_isr(void);
extern void dma_ch9_isr(void);
extern void dma_ch10_isr(void);
extern void dma_ch11_isr(void);
extern void dma_ch12_isr(void);
extern void dma_ch13_isr(void);
extern void dma_ch14_isr(void);
extern void dma_ch15_isr(void);
extern void dma_error_isr(void);
extern void mcm_isr(void);
extern void randnum_isr(void);
extern void flash_cmd_isr(void);
extern void flash_error_isr(void);
extern void low_voltage_isr(void);
extern void wakeup_isr(void);
extern void watchdog_isr(void);
extern void i2c0_isr(void);
extern void i2c1_isr(void);
extern void i2c2_isr(void);
extern void i2c3_isr(void);
extern void spi0_isr(void);
extern void spi1_isr(void);
extern void spi2_isr(void);
extern void sdhc_isr(void);
extern void enet_timer_isr(void);
extern void enet_tx_isr(void);
extern void enet_rx_isr(void);
extern void enet_error_isr(void);
extern void can0_message_isr(void);
extern void can0_bus_off_isr(void);
extern void can0_error_isr(void);
extern void can0_tx_warn_isr(void);
extern void can0_rx_warn_isr(void);
extern void can0_wakeup_isr(void);
extern void can1_message_isr(void);
extern void can1_bus_off_isr(void);
extern void can1_error_isr(void);
extern void can1_tx_warn_isr(void);
extern void can1_rx_warn_isr(void);
extern void can1_wakeup_isr(void);
extern void i2s0_tx_isr(void);
extern void i2s0_rx_isr(void);
extern void i2s0_isr(void);
extern void uart0_lon_isr(void);
extern void uart0_status_isr(void);
extern void uart0_error_isr(void);
extern void uart1_status_isr(void);
extern void uart1_error_isr(void);
extern void uart2_status_isr(void);
extern void uart2_error_isr(void);
extern void uart3_status_isr(void);
extern void uart3_error_isr(void);
extern void uart4_status_isr(void);
extern void uart4_error_isr(void);
extern void uart5_status_isr(void);
extern void uart5_error_isr(void);
extern void lpuart0_status_isr(void);
extern void adc0_isr(void);
extern void adc1_isr(void);
extern void cmp0_isr(void);
extern void cmp1_isr(void);
extern void cmp2_isr(void);
extern void cmp3_isr(void);
extern void ftm0_isr(void);
extern void ftm1_isr(void);
extern void ftm2_isr(void);
extern void ftm3_isr(void);
extern void tpm0_isr(void);
extern void tpm1_isr(void);
extern void tpm2_isr(void);
extern void cmt_isr(void);
extern void rtc_alarm_isr(void);
extern void rtc_seconds_isr(void);
extern void pit0_isr(void);
extern void pit1_isr(void);
extern void pit2_isr(void);
extern void pit3_isr(void);
extern void pit_isr(void);
extern void pdb_isr(void);
extern void usb_isr(void);
extern void usb_charge_isr(void);
extern void usbhs_isr(void);
extern void usbhs_phy_isr(void);
extern void dac0_isr(void);
extern void dac1_isr(void);
extern void tsi0_isr(void);
extern void mcg_isr(void);
extern void lptmr_isr(void);
extern void porta_isr(void);
extern void portb_isr(void);
extern void portc_isr(void);
extern void portd_isr(void);
extern void porte_isr(void);
extern void portcd_isr(void);
extern void software_isr(void);

extern void (* _VectorsRam[NVIC_NUM_INTERRUPTS+16])(void);
extern void (* const _VectorsFlash[NVIC_NUM_INTERRUPTS+16])(void);

#endif /* TEENSY32_MK20DX256_INTERRUPTS_H_ */
