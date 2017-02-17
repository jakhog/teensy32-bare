/*
 * mk20dx256_smc.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_SMC_H_
#define TEENSY32_MK20DX256_SMC_H_

// System Mode Controller

#define SMC_PMPROT		(*(volatile uint8_t  *)0x4007E000) // Power Mode Protection Register
#define SMC_PMPROT_AHSRUN		((uint8_t)0x80)			// Allow high speed run mode
#define SMC_PMPROT_AVLP			((uint8_t)0x20)			// Allow very low power modes
#define SMC_PMPROT_ALLS			((uint8_t)0x08)			// Allow low leakage stop mode
#define SMC_PMPROT_AVLLS		((uint8_t)0x02)			// Allow very low leakage stop mode
#define SMC_PMCTRL		(*(volatile uint8_t  *)0x4007E001) // Power Mode Control Register
#define SMC_PMCTRL_LPWUI		((uint8_t)0x80)			// Low Power Wake Up on Interrupt
#define SMC_PMCTRL_RUNM(n)		((uint8_t)(((n) & 0x03) << 5))	// Run Mode Control
#define SMC_PMCTRL_STOPA		((uint8_t)0x08)			// Stop Aborted
#define SMC_PMCTRL_STOPM(n)		((uint8_t)((n) & 0x07))		// Stop Mode Control
#define SMC_VLLSCTRL		(*(volatile uint8_t  *)0x4007E002) // VLLS Control Register
#define SMC_VLLSCTRL_PORPO		((uint8_t)0x20)			// POR Power Option
#define SMC_VLLSCTRL_VLLSM(n)		((uint8_t)((n) & 0x07))		// VLLS Mode Control
#define SMC_PMSTAT		(*(volatile uint8_t  *)0x4007E003) // Power Mode Status Register
#define SMC_PMSTAT_RUN			((uint8_t)0x01)			// Current power mode is RUN
#define SMC_PMSTAT_STOP			((uint8_t)0x02)			// Current power mode is STOP
#define SMC_PMSTAT_VLPR			((uint8_t)0x04)			// Current power mode is VLPR
#define SMC_PMSTAT_VLPW			((uint8_t)0x08)			// Current power mode is VLPW
#define SMC_PMSTAT_VLPS			((uint8_t)0x10)			// Current power mode is VLPS
#define SMC_PMSTAT_LLS			((uint8_t)0x20)			// Current power mode is LLS
#define SMC_PMSTAT_VLLS			((uint8_t)0x40)			// Current power mode is VLLS
#define SMC_PMSTAT_HSRUN		((uint8_t)0x80)			// Current power mode is HSRUN

#endif /* TEENSY32_MK20DX256_SMC_H_ */
