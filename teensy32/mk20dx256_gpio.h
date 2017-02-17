/*
 * mk20dx256_gpio.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_GPIO_H_
#define TEENSY32_MK20DX256_GPIO_H_


// General-Purpose Input/Output (GPIO)

#define GPIOA_PDOR		(*(volatile uint32_t *)0x400FF000) // Port Data Output Register
#define GPIOA_PSOR		(*(volatile uint32_t *)0x400FF004) // Port Set Output Register
#define GPIOA_PCOR		(*(volatile uint32_t *)0x400FF008) // Port Clear Output Register
#define GPIOA_PTOR		(*(volatile uint32_t *)0x400FF00C) // Port Toggle Output Register
#define GPIOA_PDIR		(*(volatile uint32_t *)0x400FF010) // Port Data Input Register
#define GPIOA_PDDR		(*(volatile uint32_t *)0x400FF014) // Port Data Direction Register
#define GPIOB_PDOR		(*(volatile uint32_t *)0x400FF040) // Port Data Output Register
#define GPIOB_PSOR		(*(volatile uint32_t *)0x400FF044) // Port Set Output Register
#define GPIOB_PCOR		(*(volatile uint32_t *)0x400FF048) // Port Clear Output Register
#define GPIOB_PTOR		(*(volatile uint32_t *)0x400FF04C) // Port Toggle Output Register
#define GPIOB_PDIR		(*(volatile uint32_t *)0x400FF050) // Port Data Input Register
#define GPIOB_PDDR		(*(volatile uint32_t *)0x400FF054) // Port Data Direction Register
#define GPIOC_PDOR		(*(volatile uint32_t *)0x400FF080) // Port Data Output Register
#define GPIOC_PSOR		(*(volatile uint32_t *)0x400FF084) // Port Set Output Register
#define GPIOC_PCOR		(*(volatile uint32_t *)0x400FF088) // Port Clear Output Register
#define GPIOC_PTOR		(*(volatile uint32_t *)0x400FF08C) // Port Toggle Output Register
#define GPIOC_PDIR		(*(volatile uint32_t *)0x400FF090) // Port Data Input Register
#define GPIOC_PDDR		(*(volatile uint32_t *)0x400FF094) // Port Data Direction Register
#define GPIOD_PDOR		(*(volatile uint32_t *)0x400FF0C0) // Port Data Output Register
#define GPIOD_PSOR		(*(volatile uint32_t *)0x400FF0C4) // Port Set Output Register
#define GPIOD_PCOR		(*(volatile uint32_t *)0x400FF0C8) // Port Clear Output Register
#define GPIOD_PTOR		(*(volatile uint32_t *)0x400FF0CC) // Port Toggle Output Register
#define GPIOD_PDIR		(*(volatile uint32_t *)0x400FF0D0) // Port Data Input Register
#define GPIOD_PDDR		(*(volatile uint32_t *)0x400FF0D4) // Port Data Direction Register
#define GPIOE_PDOR		(*(volatile uint32_t *)0x400FF100) // Port Data Output Register
#define GPIOE_PSOR		(*(volatile uint32_t *)0x400FF104) // Port Set Output Register
#define GPIOE_PCOR		(*(volatile uint32_t *)0x400FF108) // Port Clear Output Register
#define GPIOE_PTOR		(*(volatile uint32_t *)0x400FF10C) // Port Toggle Output Register
#define GPIOE_PDIR		(*(volatile uint32_t *)0x400FF110) // Port Data Input Register
#define GPIOE_PDDR		(*(volatile uint32_t *)0x400FF114) // Port Data Direction Register

#endif /* TEENSY32_MK20DX256_GPIO_H_ */
