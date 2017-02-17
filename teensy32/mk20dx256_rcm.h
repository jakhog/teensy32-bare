/*
 * mk20dx256_rcm.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_RCM_H_
#define TEENSY32_MK20DX256_RCM_H_

// Reset Control Module (RCM)

#define RCM_SRS0		(*(volatile uint8_t  *)0x4007F000) // System Reset Status Register 0
#define RCM_SRS0_POR			((uint8_t)0x80)
#define RCM_SRS0_PIN			((uint8_t)0x40)
#define RCM_SRS0_WDOG			((uint8_t)0x20)
#define RCM_SRS0_LOL			((uint8_t)0x08)
#define RCM_SRS0_LOC			((uint8_t)0x04)
#define RCM_SRS0_LVD			((uint8_t)0x02)
#define RCM_SRS0_WAKEUP			((uint8_t)0x01)
#define RCM_SRS1		(*(volatile uint8_t  *)0x4007F001) // System Reset Status Register 1
#define RCM_SRS1_SACKERR		((uint8_t)0x20)
#define RCM_SRS1_EZPT			((uint8_t)0x10)
#define RCM_SRS1_MDM_AP			((uint8_t)0x08)
#define RCM_SRS1_SW			((uint8_t)0x04)
#define RCM_SRS1_LOCKUP			((uint8_t)0x02)
#define RCM_SRS1_JTAG			((uint8_t)0x01)
#define RCM_RPFC		(*(volatile uint8_t  *)0x4007F004) // Reset Pin Filter Control Register
#define RCM_RPFW		(*(volatile uint8_t  *)0x4007F005) // Reset Pin Filter Width Register
#define RCM_MR			(*(volatile uint8_t  *)0x4007F007) // Mode Register
#define RCM_SSRS0		(*(volatile uint8_t  *)0x4007F008) // Sticky System Reset Status Register 0
#define RCM_SSRS1		(*(volatile uint8_t  *)0x4007F009) // Sticky System Reset Status Register 0

#endif /* TEENSY32_MK20DX256_RCM_H_ */
