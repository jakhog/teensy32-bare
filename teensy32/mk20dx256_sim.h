/*
 * mk20dx256_sim.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_SIM_H_
#define TEENSY32_MK20DX256_SIM_H_

// System Integration Module (SIM)

#define SIM_SOPT1		(*(volatile uint32_t *)0x40047000) // System Options Register 1
#define SIM_SOPT1_USBREGEN		((uint32_t)0x80000000)		// USB regulator enable
#define SIM_SOPT1_USBSSTBY		((uint32_t)0x40000000)		// USB regulator standby in Stop, VLPS, LLS and VLLS
#define SIM_SOPT1_USBVSTBY		((uint32_t)0x20000000)		// USB regulator standby in  VLPR and VLPW
#define SIM_SOPT1_OSC32KSEL(n)		((uint32_t)(((n) & 3) << 18))	// 32K oscillator clock, 0=system osc, 2=rtc osc, 3=lpo
#define SIM_SOPT1CFG		(*(volatile uint32_t *)0x40047004) // SOPT1 Configuration Register
#define SIM_SOPT1CFG_USSWE		((uint32_t)0x04000000)		// USB voltage regulator stop standby write enable
#define SIM_SOPT1CFG_UVSWE		((uint32_t)0x02000000)		// USB voltage regulator VLP standby write enable
#define SIM_SOPT1CFG_URWE		((uint32_t)0x01000000)		// USB voltage regulator enable write enable
#define SIM_USBPHYCTL		(*(volatile uint32_t *)0x40047008) // USB PHY Control Register
#define SIM_USBPHYCTL_USBDISILIM	((uint32_t)0x00800000)		// USB Disable Inrush Current Limit
#define SIM_USBPHYCTL_USB3VOUTTRG(n)	((uint32_t)(((n) & 7) << 20))	// USB 3.3V Output Target
#define SIM_USBPHYCTL_USBVREGPD		((uint32_t)0x00020000)		// Enables the pulldown on the output of the USB Regulator.
#define SIM_USBPHYCTL_USBVREGSEL	((uint32_t)0x00010000)		// Selects the default input voltage source
#define SIM_SOPT2		(*(volatile uint32_t *)0x40048004) // System Options Register 2
#define SIM_SOPT2_SDHCSRC(n)            (uint32_t)(((n) & 3) << 28)     // SDHC Clock, 0=system, 1=FLL/PLL, 2=OSCERCLK, 3=external
#define SIM_SOPT2_LPUARTSRC(n)          (uint32_t)(((n) & 3) << 26)     // LPUART Clock, 0=off, 1=FLL/PLL, 2=OSCERCLK, 3=MCGIRCLK
#define SIM_SOPT2_UART0SRC(n)           (uint32_t)(((n) & 3) << 26)     // UART0 Clock, 0=off, 1=FLL/PLL, 2=OSCERCLK, 3=MCGIRCLK
#define SIM_SOPT2_TPMSRC(n)             (uint32_t)(((n) & 3) << 24)     // TPM Clock, 0=off, 1=FLL/PLL, 2=OSCERCLK, 3=MCGIRCLK
#define SIM_SOPT2_TIMESRC(n)		(uint32_t)(((n) & 3) << 20)	// IEEE 1588 clock, 0=system, 1=FLL/PLL, 2=OSCERCLK, 3=external
#define SIM_SOPT2_RMIISRC		((uint32_t)0x00080000)		// 0=external, 1=external 1588
#define SIM_SOPT2_USBSRC		((uint32_t)0x00040000)		// 0=USB_CLKIN, 1=FFL/PLL
#define SIM_SOPT2_PLLFLLSEL		((uint32_t)0x00010000)		// 0=FLL, 1=PLL
#define SIM_SOPT2_IRC48SEL		((uint32_t)0x00030000)		// 0=FLL, 1=PLL
#define SIM_SOPT2_TRACECLKSEL		((uint32_t)0x00001000)		// 0=MCGOUTCLK, 1=CPU
#define SIM_SOPT2_PTD7PAD		((uint32_t)0x00000800)		// 0=normal, 1=double drive PTD7
#define SIM_SOPT2_FBSL(n)		((uint32_t)(((n) & 3) << 8))	// FlexBus security level
#define SIM_SOPT2_CLKOUTSEL(n)		((uint32_t)(((n) & 7) << 5))	// Selects the clock to output on the CLKOUT pin.
#define SIM_SOPT2_RTCCLKOUTSEL		((uint32_t)0x00000010)		// RTC clock out select
#define SIM_SOPT2_USBREGEN		((uint32_t)0x00000002)		// USB PHY PLL Regulator Enable
#define SIM_SOPT2_USBSLSRC		((uint32_t)0x00000001)		// USB Slow Clock Source
#define SIM_SOPT4		(*(volatile uint32_t *)0x4004800C) // System Options Register 4
#define SIM_SOPT4_FTM3TRG1SRC		((uint32_t)0x80000000)		// FlexTimer 3 Hardware Trigger 1 Source Select
#define SIM_SOPT4_FTM3TRG0SRC		((uint32_t)0x40000000)		// FlexTimer 3 Hardware Trigger 0 Source Select
#define SIM_SOPT4_FTM0TRG1SRC		((uint32_t)0x20000000)		// FlexTimer 0 Hardware Trigger 1 Source Select
#define SIM_SOPT4_FTM0TRG0SRC		((uint32_t)0x10000000)		// FlexTimer 0 Hardware Trigger 0 Source Select
#define SIM_SOPT4_FTM3CLKSEL		((uint32_t)0x08000000)		// FlexTimer 3 External Clock Pin Select
#define SIM_SOPT4_FTM2CLKSEL		((uint32_t)0x04000000)		// FlexTimer 2 External Clock Pin Select
#define SIM_SOPT4_FTM1CLKSEL		((uint32_t)0x02000000)		// FTM1 External Clock Pin Select
#define SIM_SOPT4_FTM0CLKSEL		((uint32_t)0x01000000)		// FlexTimer 0 External Clock Pin Select
#define SIM_SOPT4_FTM2CH1SRC		((uint32_t)0x00400000)		// FTM2 channel 1 input capture source select
#define SIM_SOPT4_FTM2CH0SRC(n)		((uint32_t)(((n) & 3) << 20))	// FTM2 channel 0 input capture source select
#define SIM_SOPT4_FTM1CH0SRC(n)		((uint32_t)(((n) & 3) << 18))	// FTM1 channel 0 input capture source select
#define SIM_SOPT4_FTM3FLT0		((uint32_t)0x00001000)		// FTM3 Fault 0 Select
#define SIM_SOPT4_FTM2FLT0		((uint32_t)0x00000100)		// FTM2 Fault 0 Select
#define SIM_SOPT4_FTM1FLT0		((uint32_t)0x00000010)		// FTM1 Fault 0 Select
#define SIM_SOPT4_FTM0FLT3		((uint32_t)0x00000008)		// FTM0 Fault 3 Select
#define SIM_SOPT4_FTM0FLT2		((uint32_t)0x00000004)		// FTM0 Fault 2 Select
#define SIM_SOPT4_FTM0FLT1		((uint32_t)0x00000002)		// FTM0 Fault 1 Select
#define SIM_SOPT4_FTM0FLT0		((uint32_t)0x00000001)		// FTM0 Fault 0 Select
#define SIM_SOPT5		(*(volatile uint32_t *)0x40048010) // System Options Register 5
#define SIM_SOPT5_LPUART0RXSRC(n)	(uint32_t)(((n) & 3) << 18)	// LPUART0 receive data source select
#define SIM_SOPT5_LPUART0TXSRC(n)	(uint32_t)(((n) & 3) << 16)	// LPUART0 transmit data source select
#define SIM_SOPT5_UART1RXSRC(n)		(uint32_t)(((n) & 3) << 6)	// UART 1 receive data source select
#define SIM_SOPT5_UART1TXSRC(n)		(uint32_t)(((n) & 3) << 4)	// UART 1 transmit data source select
#define SIM_SOPT5_UART0RXSRC(n)		(uint32_t)(((n) & 3) << 2)	// UART 0 receive data source select
#define SIM_SOPT5_UART0TXSRC(n)		(uint32_t)(((n) & 3) << 0)	// UART 0 transmit data source select
#define SIM_SOPT7		(*(volatile uint32_t *)0x40048018) // System Options Register 7
#define SIM_SOPT7_ADC1ALTTRGEN		((uint32_t)0x00008000)		// ADC1 alternate trigger enable
#define SIM_SOPT7_ADC1PRETRGSEL		((uint32_t)0x00001000)		// ADC1 pre-trigger select
#define SIM_SOPT7_ADC1TRGSEL(n)		(uint32_t)(((n) & 15) << 8)	// ADC1 trigger select
#define SIM_SOPT7_ADC0ALTTRGEN		((uint32_t)0x00000080)		// ADC0 alternate trigger enable
#define SIM_SOPT7_ADC0PRETRGSEL		((uint32_t)0x00000010)		// ADC0 pretrigger select
#define SIM_SOPT7_ADC0TRGSEL(n)		(uint32_t)(((n) & 15) << 0)	// ADC0 trigger select
#define SIM_SOPT8		(*(volatile uint32_t *)0x4004801C) // System Options Register 8
#define SIM_SOPT8_FTM3OCH7SRC		((uint32_t)0x80000000)		// FTM3 channel 7 output source
#define SIM_SOPT8_FTM3OCH6SRC		((uint32_t)0x40000000)		// FTM3 channel 6 output source
#define SIM_SOPT8_FTM3OCH5SRC		((uint32_t)0x20000000)		// FTM3 channel 5 output source
#define SIM_SOPT8_FTM3OCH4SRC		((uint32_t)0x10000000)		// FTM3 channel 4 output source
#define SIM_SOPT8_FTM3OCH3SRC		((uint32_t)0x08000000)		// FTM3 channel 3 output source
#define SIM_SOPT8_FTM3OCH2SRC		((uint32_t)0x04000000)		// FTM3 channel 2 output source
#define SIM_SOPT8_FTM3OCH1SRC		((uint32_t)0x02000000)		// FTM3 channel 1 output source
#define SIM_SOPT8_FTM3OCH0SRC		((uint32_t)0x01000000)		// FTM3 channel 0 output source
#define SIM_SOPT8_FTM0OCH7SRC		((uint32_t)0x00800000)		// FTM0 channel 7 output source
#define SIM_SOPT8_FTM0OCH6SRC		((uint32_t)0x00400000)		// FTM0 channel 6 output source
#define SIM_SOPT8_FTM0OCH5SRC		((uint32_t)0x00200000)		// FTM0 channel 5 output source
#define SIM_SOPT8_FTM0OCH4SRC		((uint32_t)0x00100000)		// FTM0 channel 4 output source
#define SIM_SOPT8_FTM0OCH3SRC		((uint32_t)0x00080000)		// FTM0 channel 3 output source
#define SIM_SOPT8_FTM0OCH2SRC		((uint32_t)0x00040000)		// FTM0 channel 2 output source
#define SIM_SOPT8_FTM0OCH1SRC		((uint32_t)0x00020000)		// FTM0 channel 1 output source
#define SIM_SOPT8_FTM0OCH0SRC		((uint32_t)0x00010000)		// FTM0 channel 0 output source
#define SIM_SOPT8_FTM3SYNCBIT		((uint32_t)0x00000008)		// FTM3 Hardware Trigger 0 Software Synchronization
#define SIM_SOPT8_FTM2SYNCBIT		((uint32_t)0x00000004)		// FTM2 Hardware Trigger 0 Software Synchronization
#define SIM_SOPT8_FTM1SYNCBIT		((uint32_t)0x00000002)		// FTM1 Hardware Trigger 0 Software Synchronization
#define SIM_SOPT8_FTM0SYNCBIT		((uint32_t)0x00000001)		// FTM0 Hardware Trigger 0 Software Synchronization
#define SIM_SOPT9		(*(volatile uint32_t *)0x40048020) // System Options Register 9
#define SIM_SOPT9_TPM2CLKSEL		((uint32_t)0x02000000)		// TPM2 External Clock Pin Select
#define SIM_SOPT9_TPM1CLKSEL		((uint32_t)0x01000000)		// TPM1 External Clock Pin Select
#define SIM_SOPT9_TPM2CH0SRC(n)		(uint32_t)(((n) & 3) << 20)	// TPM2 channel 0 input capture source select
#define SIM_SOPT9_TPM1CH0SRC(n)		(uint32_t)(((n) & 3) << 18)	// TPM1 channel 0 input capture source select
#define SIM_SDID		(*(const uint32_t *)0x40048024)    // System Device Identification Register
#define SIM_SCGC1		(*(volatile uint32_t *)0x40048028) // System Clock Gating Control Register 1
#define SIM_SCGC1_UART5			((uint32_t)0x00000800)		// UART5 Clock Gate Control
#define SIM_SCGC1_UART4			((uint32_t)0x00000400)		// UART4 Clock Gate Control
#define SIM_SCGC1_I2C3			((uint32_t)0x00000080)		// I2C3 Clock Gate Control
#define SIM_SCGC1_I2C2			((uint32_t)0x00000040)		// I2C2 Clock Gate Control
#define SIM_SCGC2		(*(volatile uint32_t *)0x4004802C) // System Clock Gating Control Register 2
#define SIM_SCGC2_DAC1			((uint32_t)0x00002000)		// DAC1 Clock Gate Control
#define SIM_SCGC2_DAC0			((uint32_t)0x00001000)		// DAC0 Clock on APIS1 (base addr 400CC000)
#define SIM_SCGC2_TPM2			((uint32_t)0x00000400)		// TPM2 Clock Gate Control
#define SIM_SCGC2_TPM1			((uint32_t)0x00000200)		// TPM1 Clock Gate Control
#define SIM_SCGC2_LPUART0		((uint32_t)0x00000010)		// LPUART0 Clock Gate Control
#define SIM_SCGC2_ENET			((uint32_t)0x00000001)		// Ethernet Clock Gate Control
#define SIM_SCGC3		(*(volatile uint32_t *)0x40048030) // System Clock Gating Control Register 3
#define SIM_SCGC3_ADC1			((uint32_t)0x08000000)		// ADC1 Clock Gate Control
#define SIM_SCGC3_FTM3			((uint32_t)0x02000000)		// FTM3 Clock Gate Control
#define SIM_SCGC3_FTM2			((uint32_t)0x01000000)		// FTM2 Clock on APIS1 (base addr 400B8000)
#define SIM_SCGC3_SDHC			((uint32_t)0x00020000)		// SDHC Clock Gate Control
#define SIM_SCGC3_SPI2			((uint32_t)0x00001000)		// SPI2 Clock Gate Control
#define SIM_SCGC3_FLEXCAN1		((uint32_t)0x00000010)		// FLEXCAN1 Clock Gate Control
#define SIM_SCGC3_USBHSDCD		((uint32_t)0x00000008)		// USBHSDCD Clock Gate Control
#define SIM_SCGC3_USBHSPHY		((uint32_t)0x00000004)		// USBHSPHY Clock Gate Control
#define SIM_SCGC3_USBHS			((uint32_t)0x00000002)		// USBHS Clock Gate Control
//#define SIM_SCGC3_RNGA		((uint32_t)0x00000001)		// RNGA Clock on APIS1 (base addr 400A0000)
#define SIM_SCGC4		(*(volatile uint32_t *)0x40048034) // System Clock Gating Control Register 4
#define SIM_SCGC4_VREF			((uint32_t)0x00100000)		// VREF Clock Gate Control
#define SIM_SCGC4_CMP			((uint32_t)0x00080000)		// Comparator Clock Gate Control
#define SIM_SCGC4_USBOTG		((uint32_t)0x00040000)		// USB Clock Gate Control
#define SIM_SCGC4_UART3			((uint32_t)0x00002000)		// UART3 Clock Gate Control
#define SIM_SCGC4_UART2			((uint32_t)0x00001000)		// UART2 Clock Gate Control
#define SIM_SCGC4_UART1			((uint32_t)0x00000800)		// UART1 Clock Gate Control
#define SIM_SCGC4_UART0			((uint32_t)0x00000400)		// UART0 Clock Gate Control
#define SIM_SCGC4_I2C1			((uint32_t)0x00000080)		// I2C1 Clock Gate Control
#define SIM_SCGC4_I2C0			((uint32_t)0x00000040)		// I2C0 Clock Gate Control
#define SIM_SCGC4_CMT			((uint32_t)0x00000004)		// CMT Clock Gate Control
#define SIM_SCGC4_EWM			((uint32_t)0x00000002)		// EWM Clock Gate Control
#define SIM_SCGC5		(*(volatile uint32_t *)0x40048038) // System Clock Gating Control Register 5
#define SIM_SCGC5_PORTE			((uint32_t)0x00002000)		// Port E Clock Gate Control
#define SIM_SCGC5_PORTD			((uint32_t)0x00001000)		// Port D Clock Gate Control
#define SIM_SCGC5_PORTC			((uint32_t)0x00000800)		// Port C Clock Gate Control
#define SIM_SCGC5_PORTB			((uint32_t)0x00000400)		// Port B Clock Gate Control
#define SIM_SCGC5_PORTA			((uint32_t)0x00000200)		// Port A Clock Gate Control
#define SIM_SCGC5_TSI			((uint32_t)0x00000020)		// Touch Sense Input TSI Clock Gate Control
#define SIM_SCGC5_LPTIMER		((uint32_t)0x00000001)		// Low Power Timer Access Control
#define SIM_SCGC6		(*(volatile uint32_t *)0x4004803C) // System Clock Gating Control Register 6
#define SIM_SCGC6_RTC			((uint32_t)0x20000000)		// RTC Access
#define SIM_SCGC6_ADC0			((uint32_t)0x08000000)		// ADC0 Clock Gate Control
#define SIM_SCGC6_FTM1			((uint32_t)0x02000000)		// FTM1 Clock Gate Control
#define SIM_SCGC6_FTM0			((uint32_t)0x01000000)		// FTM0 Clock Gate Control
#define SIM_SCGC6_PIT			((uint32_t)0x00800000)		// PIT Clock Gate Control
#define SIM_SCGC6_I2S			((uint32_t)0x00008000)		// I2S Clock Gate Control
#define SIM_SCGC6_DMAMUX		((uint32_t)0x00000002)		// DMA Mux Clock Gate Control
#define SIM_SCGC6_FTFL			((uint32_t)0x00000001)		// Flash Memory Clock Gate Control
#define SIM_SCGC7		(*(volatile uint32_t *)0x40048040) // System Clock Gating Control Register 7
#define SIM_SCGC7_SDRAMC		((uint32_t)0x00000008)		// SDRAM Clock Gate Control
#define SIM_SCGC7_MPU			((uint32_t)0x00000004)		// MPU Clock Gate Control
#define SIM_SCGC7_DMA			((uint32_t)0x00000002)		// DMA Clock Gate Control
#define SIM_SCGC7_FLEXBUS		((uint32_t)0x00000001)		// FLEXBUS Clock Gate Control
#define SIM_CLKDIV1		(*(volatile uint32_t *)0x40048044) // System Clock Divider Register 1
#define SIM_CLKDIV1_OUTDIV1(n)		((uint32_t)(((n) & 0x0F) << 28)) // divide value for the core/system clock
#define SIM_CLKDIV1_OUTDIV2(n)		((uint32_t)(((n) & 0x0F) << 24)) // divide value for the peripheral clock
#define SIM_CLKDIV1_OUTDIV3(n)		((uint32_t)(((n) & 0x0F) << 20)) // divide value for the flexbus clock
#define SIM_CLKDIV1_OUTDIV4(n)		((uint32_t)(((n) & 0x0F) << 16)) // divide value for the flash clock
#define SIM_CLKDIV1_OUTDIVS(n1, n2, n3, n4) \
					(SIM_CLKDIV1_OUTDIV1(n1) | SIM_CLKDIV1_OUTDIV2(n2) | \
					SIM_CLKDIV1_OUTDIV3(n3) | SIM_CLKDIV1_OUTDIV4(n4))
#define SIM_CLKDIV2		(*(volatile uint32_t *)0x40048048) // System Clock Divider Register 2
#define SIM_CLKDIV2_USBDIV(n)		((uint32_t)(((n) & 0x07) << 1))
#define SIM_CLKDIV2_USBFRAC		((uint32_t)0x01)
#define SIM_FCFG1		(*(const uint32_t *)0x4004804C)    // Flash Configuration Register 1
#define SIM_FCFG1_FLASHDOZE		((uint32_t)0x00000002)		// Flash Doze (disabled during wait)
#define SIM_FCFG1_FLASHDIS		((uint32_t)0x00000001)		// Flash Disable
#define SIM_FCFG2		(*(const uint32_t *)0x40048050)    // Flash Configuration Register 2
#define SIM_UIDH		(*(const uint32_t *)0x40048054)    // Unique Identification Register High
#define SIM_UIDMH		(*(const uint32_t *)0x40048058)    // Unique Identification Register Mid-High
#define SIM_UIDML		(*(const uint32_t *)0x4004805C)    // Unique Identification Register Mid Low
#define SIM_UIDL		(*(const uint32_t *)0x40048060)    // Unique Identification Register Low
#define SIM_CLKDIV3		(*(volatile uint32_t *)0x40048064) // System Clock Divider Register 3 (LPUART & TPM)
#define SIM_CLKDIV3_PLLFLLDIV(n)		((uint32_t)(((n) & 0x07) << 1))
#define SIM_CLKDIV3_PLLFLLFRAC		((uint32_t)0x01)
#define SIM_CLKDIV4		(*(volatile uint32_t *)0x40048068) // System Clock Divider Register 4 (Trace)
#define SIM_CLKDIV4_TRACEDIV(n)		((uint32_t)(((n) & 0x07) << 1))
#define SIM_CLKDIV4_TRACEFRAC		((uint32_t)0x01)

#endif /* TEENSY32_MK20DX256_SIM_H_ */
