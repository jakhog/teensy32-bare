/*
 * mk20dx256_axbs.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_AXBS_H_
#define TEENSY32_MK20DX256_AXBS_H_

// Crossbar Switch (AXBS)

#define AXBS_PRS0		(*(volatile uint32_t *)0x40004000) // Priority Registers Slave 0
#define AXBS_CRS0		(*(volatile uint32_t *)0x40004010) // Control Register 0
#define AXBS_PRS1		(*(volatile uint32_t *)0x40004100) // Priority Registers Slave 1
#define AXBS_CRS1		(*(volatile uint32_t *)0x40004110) // Control Register 1
#define AXBS_PRS2		(*(volatile uint32_t *)0x40004200) // Priority Registers Slave 2
#define AXBS_CRS2		(*(volatile uint32_t *)0x40004210) // Control Register 2
#define AXBS_PRS3		(*(volatile uint32_t *)0x40004300) // Priority Registers Slave 3
#define AXBS_CRS3		(*(volatile uint32_t *)0x40004310) // Control Register 3
#define AXBS_PRS4		(*(volatile uint32_t *)0x40004400) // Priority Registers Slave 4
#define AXBS_CRS4		(*(volatile uint32_t *)0x40004410) // Control Register 4
#define AXBS_PRS5		(*(volatile uint32_t *)0x40004500) // Priority Registers Slave 5
#define AXBS_CRS5		(*(volatile uint32_t *)0x40004510) // Control Register 5
#define AXBS_PRS6		(*(volatile uint32_t *)0x40004600) // Priority Registers Slave 6
#define AXBS_CRS6		(*(volatile uint32_t *)0x40004610) // Control Register 6
#define AXBS_PRS7		(*(volatile uint32_t *)0x40004700) // Priority Registers Slave 7
#define AXBS_CRS7		(*(volatile uint32_t *)0x40004710) // Control Register 7
#define AXBS_MGPCR0		(*(volatile uint32_t *)0x40004800) // Master 0 General Purpose Control Register
#define AXBS_MGPCR1		(*(volatile uint32_t *)0x40004900) // Master 1 General Purpose Control Register
#define AXBS_MGPCR2		(*(volatile uint32_t *)0x40004A00) // Master 2 General Purpose Control Register
#define AXBS_MGPCR3		(*(volatile uint32_t *)0x40004B00) // Master 3 General Purpose Control Register
#define AXBS_MGPCR4		(*(volatile uint32_t *)0x40004C00) // Master 4 General Purpose Control Register
#define AXBS_MGPCR5		(*(volatile uint32_t *)0x40004D00) // Master 5 General Purpose Control Register
#define AXBS_MGPCR6		(*(volatile uint32_t *)0x40004E00) // Master 6 General Purpose Control Register
#define AXBS_MGPCR7		(*(volatile uint32_t *)0x40004F00) // Master 7 General Purpose Control Register
#define AXBS_CRS_READONLY		((uint32_t)0x80000000)
#define AXBS_CRS_HALTLOWPRIORITY	((uint32_t)0x40000000)
#define AXBS_CRS_ARB_FIXED		((uint32_t)0x00000000)
#define AXBS_CRS_ARB_ROUNDROBIN		((uint32_t)0x00010000)
#define AXBS_CRS_PARK_FIXED		((uint32_t)0x00000000)
#define AXBS_CRS_PARK_PREVIOUS		((uint32_t)0x00000010)
#define AXBS_CRS_PARK_NONE		((uint32_t)0x00000020)
#define AXBS_CRS_PARK(n)		((uint32_t)(((n) & 7) << 0))

#endif /* TEENSY32_MK20DX256_AXBS_H_ */
