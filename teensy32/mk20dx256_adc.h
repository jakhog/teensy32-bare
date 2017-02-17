/*
 * mk20dx256_adc.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_ADC_H_
#define TEENSY32_MK20DX256_ADC_H_

// Analog-to-Digital Converter (ADC)

#define ADC0_SC1A		(*(volatile uint32_t *)0x4003B000) // ADC status and control registers 1
#define ADC0_SC1B		(*(volatile uint32_t *)0x4003B004) // ADC status and control registers 1
#define ADC_SC1_COCO			((uint32_t)0x80)		// Conversion complete flag
#define ADC_SC1_AIEN			((uint32_t)0x40)		// Interrupt enable
#define ADC_SC1_DIFF			((uint32_t)0x20)		// Differential mode enable
#define ADC_SC1_ADCH(n)			((uint32_t)((n) & 0x1F))		// Input channel select
#define ADC0_CFG1		(*(volatile uint32_t *)0x4003B008) // ADC configuration register 1
#define ADC_CFG1_ADLPC			((uint32_t)0x80)		// Low-power configuration
#define ADC_CFG1_ADIV(n)		((uint32_t)(((n) & 3) << 5))	// Clock divide select, 0=direct, 1=div2, 2=div4, 3=div8
#define ADC_CFG1_ADLSMP			((uint32_t)0x10)		// Sample time configuration, 0=Short, 1=Long
#define ADC_CFG1_MODE(n)		((uint32_t)(((n) & 3) << 2))	// Conversion mode, 0=8 bit, 1=12 bit, 2=10 bit, 3=16 bit
#define ADC_CFG1_ADICLK(n)		((uint32_t)(((n) & 3) << 0))	// Input clock, 0=bus, 1=bus/2, 2=OSCERCLK, 3=async
#define ADC0_CFG2		(*(volatile uint32_t *)0x4003B00C) // Configuration register 2
#define ADC_CFG2_MUXSEL			((uint32_t)0x10)		// 0=a channels, 1=b channels
#define ADC_CFG2_ADACKEN		((uint32_t)0x08)		// async clock enable
#define ADC_CFG2_ADHSC			((uint32_t)0x04)		// High speed configuration
#define ADC_CFG2_ADLSTS(n)		((uint32_t)(((n) & 3) << 0))	// Sample time, 0=24 cycles, 1=12 cycles, 2=6 cycles, 3=2 cycles
#define ADC0_RA			(*(volatile uint32_t *)0x4003B010) // ADC data result register
#define ADC0_RB			(*(volatile uint32_t *)0x4003B014) // ADC data result register
#define ADC0_CV1		(*(volatile uint32_t *)0x4003B018) // Compare value registers
#define ADC0_CV2		(*(volatile uint32_t *)0x4003B01C) // Compare value registers
#define ADC0_SC2		(*(volatile uint32_t *)0x4003B020) // Status and control register 2
#define ADC_SC2_ADACT			((uint32_t)0x80)		// Conversion active
#define ADC_SC2_ADTRG			((uint32_t)0x40)		// Conversion trigger select, 0=software, 1=hardware
#define ADC_SC2_ACFE			((uint32_t)0x20)		// Compare function enable
#define ADC_SC2_ACFGT			((uint32_t)0x10)		// Compare function greater than enable
#define ADC_SC2_ACREN			((uint32_t)0x08)		// Compare function range enable
#define ADC_SC2_DMAEN			((uint32_t)0x04)		// DMA enable
#define ADC_SC2_REFSEL(n)		((uint32_t)(((n) & 3) << 0))	// Voltage reference, 0=vcc/external, 1=1.2 volts
#define ADC0_SC3		(*(volatile uint32_t *)0x4003B024) // Status and control register 3
#define ADC_SC3_CAL			((uint32_t)0x80)		// Calibration, 1=begin, stays set while cal in progress
#define ADC_SC3_CALF			((uint32_t)0x40)		// Calibration failed flag
#define ADC_SC3_ADCO			((uint32_t)0x08)		// Continuous conversion enable
#define ADC_SC3_AVGE			((uint32_t)0x04)		// Hardware average enable
#define ADC_SC3_AVGS(n)			((uint32_t)(((n) & 3) << 0))	// avg select, 0=4 samples, 1=8 samples, 2=16 samples, 3=32 samples
#define ADC0_OFS		(*(volatile uint32_t *)0x4003B028) // ADC offset correction register
#define ADC0_PG			(*(volatile uint32_t *)0x4003B02C) // ADC plus-side gain register
#define ADC0_MG			(*(volatile uint32_t *)0x4003B030) // ADC minus-side gain register
#define ADC0_CLPD		(*(volatile uint32_t *)0x4003B034) // ADC plus-side general calibration value register
#define ADC0_CLPS		(*(volatile uint32_t *)0x4003B038) // ADC plus-side general calibration value register
#define ADC0_CLP4		(*(volatile uint32_t *)0x4003B03C) // ADC plus-side general calibration value register
#define ADC0_CLP3		(*(volatile uint32_t *)0x4003B040) // ADC plus-side general calibration value register
#define ADC0_CLP2		(*(volatile uint32_t *)0x4003B044) // ADC plus-side general calibration value register
#define ADC0_CLP1		(*(volatile uint32_t *)0x4003B048) // ADC plus-side general calibration value register
#define ADC0_CLP0		(*(volatile uint32_t *)0x4003B04C) // ADC plus-side general calibration value register
#define ADC0_PGA		(*(volatile uint32_t *)0x4003B050) // ADC Programmable Gain Amplifier
#define ADC_PGA_PGAEN			((uint32_t)0x00800000)		// Enable
#define ADC_PGA_PGALPB			((uint32_t)0x00100000)		// Low-Power Mode Control, 0=low power, 1=normal
#define ADC_PGA_PGAG(n)			((uint32_t)(((n) & 15) << 16))	// Gain, 0=1X, 1=2X, 2=4X, 3=8X, 4=16X, 5=32X, 6=64X
#define ADC0_CLMD		(*(volatile uint32_t *)0x4003B054) // ADC minus-side general calibration value register
#define ADC0_CLMS		(*(volatile uint32_t *)0x4003B058) // ADC minus-side general calibration value register
#define ADC0_CLM4		(*(volatile uint32_t *)0x4003B05C) // ADC minus-side general calibration value register
#define ADC0_CLM3		(*(volatile uint32_t *)0x4003B060) // ADC minus-side general calibration value register
#define ADC0_CLM2		(*(volatile uint32_t *)0x4003B064) // ADC minus-side general calibration value register
#define ADC0_CLM1		(*(volatile uint32_t *)0x4003B068) // ADC minus-side general calibration value register
#define ADC0_CLM0		(*(volatile uint32_t *)0x4003B06C) // ADC minus-side general calibration value register

#define ADC1_SC1A		(*(volatile uint32_t *)0x400BB000) // ADC status and control registers 1
#define ADC1_SC1B		(*(volatile uint32_t *)0x400BB004) // ADC status and control registers 1
#define ADC1_CFG1		(*(volatile uint32_t *)0x400BB008) // ADC configuration register 1
#define ADC1_CFG2		(*(volatile uint32_t *)0x400BB00C) // Configuration register 2
#define ADC1_RA			(*(volatile uint32_t *)0x400BB010) // ADC data result register
#define ADC1_RB			(*(volatile uint32_t *)0x400BB014) // ADC data result register
#define ADC1_CV1		(*(volatile uint32_t *)0x400BB018) // Compare value registers
#define ADC1_CV2		(*(volatile uint32_t *)0x400BB01C) // Compare value registers
#define ADC1_SC2		(*(volatile uint32_t *)0x400BB020) // Status and control register 2
#define ADC1_SC3		(*(volatile uint32_t *)0x400BB024) // Status and control register 3
#define ADC1_OFS		(*(volatile uint32_t *)0x400BB028) // ADC offset correction register
#define ADC1_PG			(*(volatile uint32_t *)0x400BB02C) // ADC plus-side gain register
#define ADC1_MG			(*(volatile uint32_t *)0x400BB030) // ADC minus-side gain register
#define ADC1_CLPD		(*(volatile uint32_t *)0x400BB034) // ADC plus-side general calibration value register
#define ADC1_CLPS		(*(volatile uint32_t *)0x400BB038) // ADC plus-side general calibration value register
#define ADC1_CLP4		(*(volatile uint32_t *)0x400BB03C) // ADC plus-side general calibration value register
#define ADC1_CLP3		(*(volatile uint32_t *)0x400BB040) // ADC plus-side general calibration value register
#define ADC1_CLP2		(*(volatile uint32_t *)0x400BB044) // ADC plus-side general calibration value register
#define ADC1_CLP1		(*(volatile uint32_t *)0x400BB048) // ADC plus-side general calibration value register
#define ADC1_CLP0		(*(volatile uint32_t *)0x400BB04C) // ADC plus-side general calibration value register
#define ADC1_PGA		(*(volatile uint32_t *)0x400BB050) // ADC Programmable Gain Amplifier
#define ADC1_CLMD		(*(volatile uint32_t *)0x400BB054) // ADC minus-side general calibration value register
#define ADC1_CLMS		(*(volatile uint32_t *)0x400BB058) // ADC minus-side general calibration value register
#define ADC1_CLM4		(*(volatile uint32_t *)0x400BB05C) // ADC minus-side general calibration value register
#define ADC1_CLM3		(*(volatile uint32_t *)0x400BB060) // ADC minus-side general calibration value register
#define ADC1_CLM2		(*(volatile uint32_t *)0x400BB064) // ADC minus-side general calibration value register
#define ADC1_CLM1		(*(volatile uint32_t *)0x400BB068) // ADC minus-side general calibration value register
#define ADC1_CLM0		(*(volatile uint32_t *)0x400BB06C) // ADC minus-side general calibration value register


// 12-bit Digital-to-Analog Converter (DAC)

#define DAC0_DAT0L		(*(volatile uint8_t  *)0x400CC000) // DAC Data Low Register
#define DAC0_DATH		(*(volatile uint8_t  *)0x400CC001) // DAC Data High Register
#define DAC0_DAT1L		(*(volatile uint8_t  *)0x400CC002) // DAC Data Low Register
#define DAC0_DAT2L		(*(volatile uint8_t  *)0x400CC004) // DAC Data Low Register
#define DAC0_DAT3L		(*(volatile uint8_t  *)0x400CC006) // DAC Data Low Register
#define DAC0_DAT4L		(*(volatile uint8_t  *)0x400CC008) // DAC Data Low Register
#define DAC0_DAT5L		(*(volatile uint8_t  *)0x400CC00A) // DAC Data Low Register
#define DAC0_DAT6L		(*(volatile uint8_t  *)0x400CC00C) // DAC Data Low Register
#define DAC0_DAT7L		(*(volatile uint8_t  *)0x400CC00E) // DAC Data Low Register
#define DAC0_DAT8L		(*(volatile uint8_t  *)0x400CC010) // DAC Data Low Register
#define DAC0_DAT9L		(*(volatile uint8_t  *)0x400CC012) // DAC Data Low Register
#define DAC0_DAT10L		(*(volatile uint8_t  *)0x400CC014) // DAC Data Low Register
#define DAC0_DAT11L		(*(volatile uint8_t  *)0x400CC016) // DAC Data Low Register
#define DAC0_DAT12L		(*(volatile uint8_t  *)0x400CC018) // DAC Data Low Register
#define DAC0_DAT13L		(*(volatile uint8_t  *)0x400CC01A) // DAC Data Low Register
#define DAC0_DAT14L		(*(volatile uint8_t  *)0x400CC01C) // DAC Data Low Register
#define DAC0_DAT15L		(*(volatile uint8_t  *)0x400CC01E) // DAC Data Low Register
#define DAC0_SR			(*(volatile uint8_t  *)0x400CC020) // DAC Status Register
#define DAC0_C0			(*(volatile uint8_t  *)0x400CC021) // DAC Control Register
#define DAC_C0_DACEN			0x80				// DAC Enable
#define DAC_C0_DACRFS			0x40				// DAC Reference Select
#define DAC_C0_DACTRGSEL		0x20				// DAC Trigger Select
#define DAC_C0_DACSWTRG			0x10				// DAC Software Trigger
#define DAC_C0_LPEN			0x08				// DAC Low Power Control
#define DAC_C0_DACBWIEN			0x04				// DAC Buffer Watermark Interrupt Enable
#define DAC_C0_DACBTIEN			0x02				// DAC Buffer Read Pointer Top Flag Interrupt Enable
#define DAC_C0_DACBBIEN			0x01				// DAC Buffer Read Pointer Bottom Flag Interrupt Enable
#define DAC0_C1			(*(volatile uint8_t  *)0x400CC022) // DAC Control Register 1
#define DAC_C1_DMAEN			0x80				// DMA Enable Select
#define DAC_C1_DACBFWM(n)		((((n) & 3) << 3))		// DAC Buffer Watermark Select
#define DAC_C1_DACBFMD(n)		((((n) & 3) << 1))		// DAC Buffer Work Mode Select
#define DAC_C1_DACBFEN			0x01				// DAC Buffer Enable
#define DAC0_C2			(*(volatile uint8_t  *)0x400CC023) // DAC Control Register 2
#define DAC_C2_DACBFRP(n)		((((n) & 15) << 4))		// DAC Buffer Read Pointer
#define DAC_C2_DACBFUP(n)		((((n) & 15) << 0))		// DAC Buffer Upper Limit
#define DAC1_DAT0L		(*(volatile uint8_t  *)0x400CD000) // DAC Data Low Register
#define DAC1_DATH		(*(volatile uint8_t  *)0x400CD001) // DAC Data High Register
#define DAC1_DAT1L		(*(volatile uint8_t  *)0x400CD002) // DAC Data Low Register
#define DAC1_DAT2L		(*(volatile uint8_t  *)0x400CD004) // DAC Data Low Register
#define DAC1_DAT3L		(*(volatile uint8_t  *)0x400CD006) // DAC Data Low Register
#define DAC1_DAT4L		(*(volatile uint8_t  *)0x400CD008) // DAC Data Low Register
#define DAC1_DAT5L		(*(volatile uint8_t  *)0x400CD00A) // DAC Data Low Register
#define DAC1_DAT6L		(*(volatile uint8_t  *)0x400CD00C) // DAC Data Low Register
#define DAC1_DAT7L		(*(volatile uint8_t  *)0x400CD00E) // DAC Data Low Register
#define DAC1_DAT8L		(*(volatile uint8_t  *)0x400CD010) // DAC Data Low Register
#define DAC1_DAT9L		(*(volatile uint8_t  *)0x400CD012) // DAC Data Low Register
#define DAC1_DAT10L		(*(volatile uint8_t  *)0x400CD014) // DAC Data Low Register
#define DAC1_DAT11L		(*(volatile uint8_t  *)0x400CD016) // DAC Data Low Register
#define DAC1_DAT12L		(*(volatile uint8_t  *)0x400CD018) // DAC Data Low Register
#define DAC1_DAT13L		(*(volatile uint8_t  *)0x400CD01A) // DAC Data Low Register
#define DAC1_DAT14L		(*(volatile uint8_t  *)0x400CD01C) // DAC Data Low Register
#define DAC1_DAT15L		(*(volatile uint8_t  *)0x400CD01E) // DAC Data Low Register
#define DAC1_SR			(*(volatile uint8_t  *)0x400CD020) // DAC Status Register
#define DAC1_C0			(*(volatile uint8_t  *)0x400CD021) // DAC Control Register
#define DAC1_C1			(*(volatile uint8_t  *)0x400CD022) // DAC Control Register 1
#define DAC1_C2			(*(volatile uint8_t  *)0x400CD023) // DAC Control Register 2


// Analog Comparator (CMP)

#define CMP0_CR0		(*(volatile uint8_t  *)0x40073000) // CMP Control Register 0
#define CMP_CR0_FILTER_CNT(n)   (uint8_t)(((n) & 0x07) << 4)
#define CMP_CR0_HYSTCTR(n)      (uint8_t)(((n) & 0x03) << 0)
#define CMP0_CR1		(*(volatile uint8_t  *)0x40073001) // CMP Control Register
#define CMP_CR1_SE              (uint8_t)0x80 // Sample Enable
#define CMP_CR1_WE              (uint8_t)0x40 // Windowing Enable
#define CMP_CR1_TRIGM           (uint8_t)0x20 // Trigger Mode Enable
#define CMP_CR1_PMODE           (uint8_t)0x10 // Power Mode Select
#define CMP_CR1_INV             (uint8_t)0x08 // Comparator INVERT
#define CMP_CR1_COS             (uint8_t)0x04 // Comparator Output Select
#define CMP_CR1_OPE             (uint8_t)0x02 // Comparator Output Pin Enable
#define CMP_CR1_EN              (uint8_t)0x01 // Comparator Module Enable
#define CMP0_FPR		(*(volatile uint8_t  *)0x40073002) // CMP Filter Period Register
#define CMP0_SCR		(*(volatile uint8_t  *)0x40073003) // CMP Status and Control Register
#define CMP_SCR_DMAEN           (uint8_t)0x40 // DMA Enable Control
#define CMP_SCR_IER             (uint8_t)0x10 // Comparator Interrupt Enable Rising
#define CMP_SCR_IEF             (uint8_t)0x08 // Comparator Interrupt Enable Falling
#define CMP_SCR_CFR             (uint8_t)0x04 // Analog Comparator Flag Rising
#define CMP_SCR_CFF             (uint8_t)0x02 // Analog Comparator Flag Falling
#define CMP_SCR_COUT            (uint8_t)0x01 // Analog Comparator Output
#define CMP0_DACCR		(*(volatile uint8_t  *)0x40073004) // DAC Control Register
#define CMP_DACCR_DACEN         (uint8_t)0x80 // DAC Enable
#define CMP_DACCR_VRSEL         (uint8_t)0x40 // Supply Voltage Reference Source Select
#define CMP_DACCR_VOSEL(n)      (uint8_t)(((n) & 0x3F) << 0) // DAC Output Voltage Select
#define CMP0_MUXCR		(*(volatile uint8_t  *)0x40073005) // MUX Control Register
#define CMP_MUXCR_PSTM          (uint8_t)0x40 // Pass Through Mode Enable
#define CMP_MUXCR_PSEL(n)       (uint8_t)(((n) & 0x07) << 3) // Plus Input Mux Control
#define CMP_MUXCR_MSEL(n)       (uint8_t)(((n) & 0x07) << 0) // Minus Input Mux Control
#define CMP1_CR0		(*(volatile uint8_t  *)0x40073008) // CMP Control Register 0
#define CMP1_CR1		(*(volatile uint8_t  *)0x40073009) // CMP Control Register 1
#define CMP1_FPR		(*(volatile uint8_t  *)0x4007300A) // CMP Filter Period Register
#define CMP1_SCR		(*(volatile uint8_t  *)0x4007300B) // CMP Status and Control Register
#define CMP1_DACCR		(*(volatile uint8_t  *)0x4007300C) // DAC Control Register
#define CMP1_MUXCR		(*(volatile uint8_t  *)0x4007300D) // MUX Control Register
#define CMP2_CR0		(*(volatile uint8_t  *)0x40073010) // CMP Control Register 0
#define CMP2_CR1		(*(volatile uint8_t  *)0x40073011) // CMP Control Register 1
#define CMP2_FPR		(*(volatile uint8_t  *)0x40073012) // CMP Filter Period Register
#define CMP2_SCR		(*(volatile uint8_t  *)0x40073013) // CMP Status and Control Register
#define CMP2_DACCR		(*(volatile uint8_t  *)0x40073014) // DAC Control Register
#define CMP2_MUXCR		(*(volatile uint8_t  *)0x40073015) // MUX Control Register
#define CMP3_CR0		(*(volatile uint8_t  *)0x40073018) // CMP Control Register 0
#define CMP3_CR1		(*(volatile uint8_t  *)0x40073019) // CMP Control Register 1
#define CMP3_FPR		(*(volatile uint8_t  *)0x4007301A) // CMP Filter Period Register
#define CMP3_SCR		(*(volatile uint8_t  *)0x4007301B) // CMP Status and Control Register
#define CMP3_DACCR		(*(volatile uint8_t  *)0x4007301C) // DAC Control Register
#define CMP3_MUXCR		(*(volatile uint8_t  *)0x4007301D) // MUX Control Register

// Analog Voltage Reference (VREFV1)

#define VREF_TRM		(*(volatile uint8_t  *)0x40074000) // VREF Trim Register
#define VREF_TRM_CHOPEN			((uint8_t)0x40)			// Chop oscillator enable
#define VREF_TRM_TRIM(n)		((n) & 0x3F)			// Trim bits
#define VREF_SC			(*(volatile uint8_t  *)0x40074001) // VREF Status and Control Register
#define VREF_SC_VREFEN			((uint8_t)0x80)			// Internal Voltage Reference enable
#define VREF_SC_REGEN			((uint8_t)0x40)			// Regulator enable
#define VREF_SC_ICOMPEN			((uint8_t)0x20)			// Second order curvature compensation enable
#define VREF_SC_VREFST			((uint8_t)0x04)			// Internal Voltage Reference stable flag
#define VREF_SC_MODE_LV(n)		(uint8_t)(((n) & 3) << 0)	// Buffer Mode selection: 0=Bandgap on only
									//  2=Low-power buffer mode

#endif /* TEENSY32_MK20DX256_ADC_H_ */
