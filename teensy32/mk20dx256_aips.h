/*
 * mk20dx256_aips.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_AIPS_H_
#define TEENSY32_MK20DX256_AIPS_H_

// Peripheral Bridge (AIPS-Lite)

#define AIPS0_MPRA		(*(volatile uint32_t *)0x40000000) // Master Privilege Register A
#define AIPS0_PACRA		(*(volatile uint32_t *)0x40000020) // Peripheral Access Control Register
#define AIPS0_PACRB		(*(volatile uint32_t *)0x40000024) // Peripheral Access Control Register
#define AIPS0_PACRC		(*(volatile uint32_t *)0x40000028) // Peripheral Access Control Register
#define AIPS0_PACRD		(*(volatile uint32_t *)0x4000002C) // Peripheral Access Control Register
#define AIPS0_PACRE		(*(volatile uint32_t *)0x40000040) // Peripheral Access Control Register
#define AIPS0_PACRF		(*(volatile uint32_t *)0x40000044) // Peripheral Access Control Register
#define AIPS0_PACRG		(*(volatile uint32_t *)0x40000048) // Peripheral Access Control Register
#define AIPS0_PACRH		(*(volatile uint32_t *)0x4000004C) // Peripheral Access Control Register
#define AIPS0_PACRI		(*(volatile uint32_t *)0x40000050) // Peripheral Access Control Register
#define AIPS0_PACRJ		(*(volatile uint32_t *)0x40000054) // Peripheral Access Control Register
#define AIPS0_PACRK		(*(volatile uint32_t *)0x40000058) // Peripheral Access Control Register
#define AIPS0_PACRL		(*(volatile uint32_t *)0x4000005C) // Peripheral Access Control Register
#define AIPS0_PACRM		(*(volatile uint32_t *)0x40000060) // Peripheral Access Control Register
#define AIPS0_PACRN		(*(volatile uint32_t *)0x40000064) // Peripheral Access Control Register
#define AIPS0_PACRO		(*(volatile uint32_t *)0x40000068) // Peripheral Access Control Register
#define AIPS0_PACRP		(*(volatile uint32_t *)0x4000006C) // Peripheral Access Control Register
#define AIPS1_MPRA		(*(volatile uint32_t *)0x40080000) // Master Privilege Register A
#define AIPS1_PACRA		(*(volatile uint32_t *)0x40080020) // Peripheral Access Control Register
#define AIPS1_PACRB		(*(volatile uint32_t *)0x40080024) // Peripheral Access Control Register
#define AIPS1_PACRC		(*(volatile uint32_t *)0x40080028) // Peripheral Access Control Register
#define AIPS1_PACRD		(*(volatile uint32_t *)0x4008002C) // Peripheral Access Control Register
#define AIPS1_PACRE		(*(volatile uint32_t *)0x40080040) // Peripheral Access Control Register
#define AIPS1_PACRF		(*(volatile uint32_t *)0x40080044) // Peripheral Access Control Register
#define AIPS1_PACRG		(*(volatile uint32_t *)0x40080048) // Peripheral Access Control Register
#define AIPS1_PACRH		(*(volatile uint32_t *)0x4008004C) // Peripheral Access Control Register
#define AIPS1_PACRI		(*(volatile uint32_t *)0x40080050) // Peripheral Access Control Register
#define AIPS1_PACRJ		(*(volatile uint32_t *)0x40080054) // Peripheral Access Control Register
#define AIPS1_PACRK		(*(volatile uint32_t *)0x40080058) // Peripheral Access Control Register
#define AIPS1_PACRL		(*(volatile uint32_t *)0x4008005C) // Peripheral Access Control Register
#define AIPS1_PACRM		(*(volatile uint32_t *)0x40080060) // Peripheral Access Control Register
#define AIPS1_PACRN		(*(volatile uint32_t *)0x40080064) // Peripheral Access Control Register
#define AIPS1_PACRO		(*(volatile uint32_t *)0x40080068) // Peripheral Access Control Register
#define AIPS1_PACRP		(*(volatile uint32_t *)0x4008006C) // Peripheral Access Control Register

#endif /* TEENSY32_MK20DX256_AIPS_H_ */
