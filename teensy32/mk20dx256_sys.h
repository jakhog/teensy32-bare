/*
 * mk20dx256_sys.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_SYS_H_
#define TEENSY32_MK20DX256_SYS_H_

// System Control Space (SCS), ARMv7 ref manual, B3.2, page 708
#define SCB_CPUID		(*(const    uint32_t *)0xE000ED00) // CPUID Base Register
#define SCB_ICSR		(*(volatile uint32_t *)0xE000ED04) // Interrupt Control and State
#define SCB_ICSR_PENDSTSET		((uint32_t)0x04000000)
#define SCB_VTOR		(*(volatile uint32_t *)0xE000ED08) // Vector Table Offset
#define SCB_AIRCR		(*(volatile uint32_t *)0xE000ED0C) // Application Interrupt and Reset Control
#define SCB_SCR			(*(volatile uint32_t *)0xE000ED10) // System Control Register
#define SCB_SCR_SEVONPEND   ((uint8_t)0x10)	   // Send Event on Pending bit
#define SCB_SCR_SLEEPDEEP   ((uint8_t)0x04)	   // Sleep or Deep Sleep
#define SCB_SCR_SLEEPONEXIT ((uint8_t)0x02)	   // Sleep-on-exit
#define SCB_CCR			(*(volatile uint32_t *)0xE000ED14) // Configuration and Control
#define SCB_SHPR1		(*(volatile uint32_t *)0xE000ED18) // System Handler Priority Register 1
#define SCB_SHPR2		(*(volatile uint32_t *)0xE000ED1C) // System Handler Priority Register 2
#define SCB_SHPR3		(*(volatile uint32_t *)0xE000ED20) // System Handler Priority Register 3
#define SCB_SHCSR		(*(volatile uint32_t *)0xE000ED24) // System Handler Control and State
#define SCB_CFSR		(*(volatile uint32_t *)0xE000ED28) // Configurable Fault Status Register
#define SCB_HFSR		(*(volatile uint32_t *)0xE000ED2C) // HardFault Status
#define SCB_DFSR		(*(volatile uint32_t *)0xE000ED30) // Debug Fault Status
#define SCB_MMFAR		(*(volatile uint32_t *)0xE000ED34) // MemManage Fault Address
#define SCB_BFAR		(*(volatile uint32_t *)0xE000ED38) // Bus Fault Address
#define SCB_AFAR		(*(volatile uint32_t *)0xE000ED3C) // Aux Fault Address
#define SCB_CPACR		(*(volatile uint32_t *)0xE000ED88) // Coprocessor Access Control
#define SCB_FPCCR		(*(volatile uint32_t *)0xE000EF34) // FP Context Control
#define SCB_FPCAR		(*(volatile uint32_t *)0xE000EF38) // FP Context Address
#define SCB_FPDSCR		(*(volatile uint32_t *)0xE000EF3C) // FP Default Status Control
#define SCB_MVFR0		(*(volatile uint32_t *)0xE000EF40) // Media & FP Feature 0
#define SCB_MVFR1		(*(volatile uint32_t *)0xE000EF44) // Media & FP Feature 1
#define SCB_MVFR2		(*(volatile uint32_t *)0xE000EF48) // Media & FP Feature 2

#define SYST_CSR		(*(volatile uint32_t *)0xE000E010) // SysTick Control and Status
#define SYST_CSR_COUNTFLAG		((uint32_t)0x00010000)
#define SYST_CSR_CLKSOURCE		((uint32_t)0x00000004)
#define SYST_CSR_TICKINT		((uint32_t)0x00000002)
#define SYST_CSR_ENABLE			((uint32_t)0x00000001)
#define SYST_RVR		(*(volatile uint32_t *)0xE000E014) // SysTick Reload Value Register
#define SYST_CVR		(*(volatile uint32_t *)0xE000E018) // SysTick Current Value Register
#define SYST_CALIB		(*(const    uint32_t *)0xE000E01C) // SysTick Calibration Value


#define ARM_DEMCR		(*(volatile uint32_t *)0xE000EDFC) // Debug Exception and Monitor Control
#define ARM_DEMCR_TRCENA		(1 << 24)	 // Enable debugging & monitoring blocks
#define ARM_DWT_CTRL		(*(volatile uint32_t *)0xE0001000) // DWT control register
#define ARM_DWT_CTRL_CYCCNTENA		(1 << 0)		// Enable cycle count
#define ARM_DWT_CYCCNT		(*(volatile uint32_t *)0xE0001004) // Cycle count register

__attribute__((always_inline)) static inline int kinetis_hsrun_disable(void) { return 0; }
__attribute__((always_inline)) static inline int kinetis_hsrun_enable(void)  { return 0; }

#endif /* TEENSY32_MK20DX256_SYS_H_ */
