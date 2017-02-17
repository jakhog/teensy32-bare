/*
 * mk20dx256.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_H_
#define TEENSY32_MK20DX256_H_

#ifndef NULL
#define NULL (0)
#endif

#include "mk20dx256_interrupts.h"
#include "mk20dx256_dma.h"
#include "mk20dx256_clock.h"
#include "mk20dx256_ports.h"
#include "mk20dx256_sim.h"
#include "mk20dx256_rcm.h"
#include "mk20dx256_smc.h"
#include "mk20dx256_pmc.h"
#include "mk20dx256_llwu.h"
#include "mk20dx256_mcm.h"
#include "mk20dx256_axbs.h"
#include "mk20dx256_aips.h"
#include "mk20dx256_wdog.h"
#include "mk20dx256_mem.h"
#include "mk20dx256_adc.h"
#include "mk20dx256_usb.h"
#include "mk20dx256_coms.h"
#include "mk20dx256_i2c.h"
#include "mk20dx256_spi.h"
#include "mk20dx256_uart.h"
#include "mk20dx256_sdhc.h"
#include "mk20dx256_touch.h"
#include "mk20dx256_sys.h"
#include "mk20dx256_gpio.h"






#define KINETISK
#define HAS_KINETISK_UART0
#define HAS_KINETISK_UART0_FIFO
#define HAS_KINETISK_UART1
#define HAS_KINETISK_UART1_FIFO
#define HAS_KINETISK_UART2
#define HAS_KINETIS_I2C0
#define HAS_KINETIS_I2C1
#define HAS_KINETIS_ADC0
#define HAS_KINETIS_ADC1

#define HAS_KINETIS_FLASH_FTFL


#define HAS_KINETIS_LLWU_16CH
#define HAS_KINETIS_TSI



#endif /* TEENSY32_MK20DX256_H_ */
