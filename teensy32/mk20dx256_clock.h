/*
 * mk20dx256_clock.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_CLOCK_H_
#define TEENSY32_MK20DX256_CLOCK_H_

#include <stdint.h>

/**
// 240 MHz
#define F_PLL 240000000
#define F_BUS 60000000
#define F_MEM 30000000

// 216 MHz
#define F_PLL 216000000
#define F_BUS 54000000
#define F_MEM 27000000

// 192 MHz
#define F_PLL 192000000
#define F_BUS 48000000
#define F_MEM 27428571

// 180 MHz
#define F_PLL 180000000
#define F_BUS 60000000
#define F_MEM 25714286

// 168 MHz
#define F_PLL 168000000
#define F_BUS 56000000
#define F_MEM 28000000

// 144 MHz
#define F_PLL 144000000
#define F_BUS 48000000
#define F_MEM 28800000

// 120 MHz
#define F_PLL 120000000
#define F_BUS 60000000
#define F_MEM 24000000

// 96 MHz
#define F_PLL 96000000
#define F_BUS 48000000
#define F_MEM 24000000
*/

// 72 MHz
#define F_PLL 72000000
#define F_BUS 36000000
#define F_MEM 24000000

/*
// 48 MHz
#define F_PLL 96000000
#define F_BUS 48000000
#define F_MEM 24000000

// 24 MHz
#define F_PLL 96000000
#define F_BUS 24000000
#define F_MEM 24000000

// 16 MHz
#define F_PLL 16000000
#define F_BUS 16000000
#define F_MEM 16000000

// 8 MHz
#define F_PLL 8000000
#define F_BUS 8000000
#define F_MEM 8000000

// 4 MHz
#define F_PLL 4000000
#define F_BUS 4000000
#define F_MEM 4000000

// 5 MHz
#define F_PLL 2000000
#define F_BUS 2000000
#define F_MEM 1000000
*/

// Multipurpose Clock Generator (MCG)

typedef struct {
	volatile uint8_t C1;
	volatile uint8_t C2;
	volatile uint8_t C3;
	volatile uint8_t C4;
	volatile uint8_t C5;
	volatile uint8_t C6;
	volatile uint8_t S;
	volatile uint8_t unused1;
	volatile uint8_t SC;
	volatile uint8_t unused2;
	volatile uint8_t ATCVH;
	volatile uint8_t ATCVL;
	volatile uint8_t C7;
	volatile uint8_t C8;
	volatile uint8_t C9;
	volatile uint8_t unused3;
	volatile uint8_t C11;
	volatile uint8_t C12;
	volatile uint8_t S2;
	volatile uint8_t T3;
} KINETIS_MCG_t;

#define KINETIS_MCG		(*(KINETIS_MCG_t *)0x40064000)
#define MCG_C1                  (KINETIS_MCG.C1)		// 40064000  MCG Control 1 Register
#define MCG_C1_IREFSTEN			(uint8_t)0x01			// Internal Reference Stop Enable, Controls whether or not the internal reference clock remains enabled when the MCG enters Stop mode.
#define MCG_C1_IRCLKEN			(uint8_t)0x02			// Internal Reference Clock Enable, Enables the internal reference clock for use as MCGIRCLK.
#define MCG_C1_IREFS			(uint8_t)0x04			// Internal Reference Select, Selects the reference clock source for the FLL.
#define MCG_C1_FRDIV(n)			(uint8_t)(((n) & 0x07) << 3)	// FLL External Reference Divider, Selects the amount to divide down the external reference clock for the FLL
#define MCG_C1_CLKS(n)			(uint8_t)(((n) & 0x03) << 6)	// Clock Source Select, Selects the clock source for MCGOUTCLK
#define MCG_C2                  (KINETIS_MCG.C2)		// 40064001  MCG Control 2 Register
#define MCG_C2_IRCS			(uint8_t)0x01			// Internal Reference Clock Select, Selects between the fast or slow internal reference clock source.
#define MCG_C2_LP			(uint8_t)0x02			// Low Power Select, Controls whether the FLL or PLL is disabled in BLPI and BLPE modes.
#define MCG_C2_EREFS			(uint8_t)0x04			// External Reference Select, Selects the source for the external reference clock.
#define MCG_C2_HGO0			(uint8_t)0x08			// High Gain Oscillator Select, Controls the crystal oscillator mode of operation
#define MCG_C2_RANGE0(n)		(uint8_t)(((n) & 0x03) << 4)	// Frequency Range Select, Selects the frequency range for the crystal oscillator
#define MCG_C2_LOCRE0			(uint8_t)0x80			// Loss of Clock Reset Enable, Determines whether an interrupt or a reset request is made following a loss of OSC0
#define MCG_C3                  (KINETIS_MCG.C3)		// 40064002  MCG Control 3 Register
#define MCG_C3_SCTRIM(n)		(uint8_t)(n)			// Slow Internal Reference Clock Trim Setting
#define MCG_C4                  (KINETIS_MCG.C4)		// 40064003  MCG Control 4 Register
#define MCG_C4_SCFTRIM			(uint8_t)0x01			// Slow Internal Reference Clock Fine Trim
#define MCG_C4_FCTRIM(n)		(uint8_t)(((n) & 0x0F) << 1)	// Fast Internal Reference Clock Trim Setting
#define MCG_C4_DRST_DRS(n)		(uint8_t)(((n) & 0x03) << 5)	// DCO Range Select
#define MCG_C4_DMX32			(uint8_t)0x80			// DCO Maximum Frequency with 32.768 kHz Reference, controls whether the DCO frequency range is narrowed
#define MCG_C5                  (KINETIS_MCG.C5)		// 40064004  MCG Control 5 Register
#define MCG_C5_PRDIV0(n)		(uint8_t)((n) & 0x1F)		// PLL External Reference Divider
#define MCG_C5_PLLSTEN0			(uint8_t)0x20			// PLL Stop Enable
#define MCG_C5_PLLCLKEN0		(uint8_t)0x40			// PLL Clock Enable
#define MCG_C6                  (KINETIS_MCG.C6)		// 40064005  MCG Control 6 Register
#define MCG_C6_VDIV0(n)			(uint8_t)((n) & 0x1F)		// VCO 0 Divider
#define MCG_C6_CME0			(uint8_t)0x20			// Clock Monitor Enable
#define MCG_C6_PLLS			(uint8_t)0x40			// PLL Select, Controls whether the PLL or FLL output is selected as the MCG source when CLKS[1:0]=00.
#define MCG_C6_LOLIE0			(uint8_t)0x80			// Loss of Lock Interrrupt Enable
#define MCG_S                   (KINETIS_MCG.S)			// 40064006  MCG Status Register
#define MCG_S_IRCST			(uint8_t)0x01			// Internal Reference Clock Status
#define MCG_S_OSCINIT0			(uint8_t)0x02			// OSC Initialization,  resets to 0, is set to 1 after the initialization cycles of the crystal oscillator
#define MCG_S_CLKST(n)			(uint8_t)(((n) & 0x03) << 2)	// Clock Mode Status, 0=FLL is selected, 1= Internal ref, 2=External ref, 3=PLL
#define MCG_S_CLKST_MASK		(uint8_t)0x0C
#define MCG_S_IREFST			(uint8_t)0x10			// Internal Reference Status
#define MCG_S_PLLST			(uint8_t)0x20			// PLL Select Status
#define MCG_S_LOCK0			(uint8_t)0x40			// Lock Status, 0=PLL Unlocked, 1=PLL Locked
#define MCG_S_LOLS0			(uint8_t)0x80			// Loss of Lock Status
#define MCG_SC                  (KINETIS_MCG.SC)		// 40064008  MCG Status and Control Register
#define MCG_SC_LOCS0			(uint8_t)0x01			// OSC0 Loss of Clock Status
#define MCG_SC_FCRDIV(n)		(uint8_t)(((n) & 0x07) << 1)	// Fast Clock Internal Reference Divider
#define MCG_SC_FLTPRSRV			(uint8_t)0x10			// FLL Filter Preserve Enable
#define MCG_SC_ATMF			(uint8_t)0x20			// Automatic Trim Machine Fail Flag
#define MCG_SC_ATMS			(uint8_t)0x40			// Automatic Trim Machine Select
#define MCG_SC_ATME			(uint8_t)0x80			// Automatic Trim Machine Enable
#define MCG_ATCVH               (KINETIS_MCG.ATCVH)		// 4006400A  MCG Auto Trim Compare Value High Register
#define MCG_ATCVL               (KINETIS_MCG.ATCVL)		// 4006400B  MCG Auto Trim Compare Value Low Register
#define MCG_C7                  (KINETIS_MCG.C7)		// 4006400C  MCG Control 7 Register
#define MCG_C8                  (KINETIS_MCG.C8)		// 4006400D  MCG Control 8 Register
#define MCG_C9			(KINETIS_MCG.C9)		// 4006400E  MCG Control 9 Register
#define MCG_C11			(KINETIS_MCG.C11)		// 40064010  MCG Control 11 Register
#define MCG_C12			(KINETIS_MCG.C12)		// 40064011  MCG Control 12 Register
#define MCG_S2			(KINETIS_MCG.S2)		// 40064012  MCG Status 2 Register
#define MCG_T3			(KINETIS_MCG.T3)		// 40064013  MCG Test 3 Register


// Oscillator (OSC)

#define OSC0_CR			(*(volatile uint8_t  *)0x40065000) // OSC Control Register
#define OSC_SC16P			((uint8_t)0x01)			// Oscillator 16 pF Capacitor Load Configure
#define OSC_SC8P			((uint8_t)0x02)			// Oscillator 8 pF Capacitor Load Configure
#define OSC_SC4P			((uint8_t)0x04)			// Oscillator 4 pF Capacitor Load Configure
#define OSC_SC2P			((uint8_t)0x08)			// Oscillator 2 pF Capacitor Load Configure
#define OSC_EREFSTEN			((uint8_t)0x20)			// External Reference Stop Enable, Controls whether or not the external reference clock (OSCERCLK) remains enabled when MCU enters Stop mode.
#define OSC_ERCLKEN			((uint8_t)0x80)			// External Reference Enable, Enables external reference clock (OSCERCLK).
#define OSC0_OSC_DIV		(*(volatile uint8_t  *)0x40065002) // Clock divider register


// Programmable Delay Block (PDB)

#define PDB0_SC			(*(volatile uint32_t *)0x40036000) // Status and Control Register
#define PDB_SC_LDMOD(n)			(((n) & 3) << 18)	// Load Mode Select
#define PDB_SC_PDBEIE			0x00020000		// Sequence Error Interrupt Enable
#define PDB_SC_SWTRIG			0x00010000		// Software Trigger
#define PDB_SC_DMAEN			0x00008000		// DMA Enable
#define PDB_SC_PRESCALER(n)		(((n) & 7) << 12)	// Prescaler Divider Select
#define PDB_SC_TRGSEL(n)		(((n) & 15) << 8)	// Trigger Input Source Select
#define PDB_SC_PDBEN			0x00000080		// PDB Enable
#define PDB_SC_PDBIF			0x00000040		// PDB Interrupt Flag
#define PDB_SC_PDBIE			0x00000020		// PDB Interrupt Enable.
#define PDB_SC_MULT(n)			(((n) & 3) << 2)	// Multiplication Factor
#define PDB_SC_CONT			0x00000002		// Continuous Mode Enable
#define PDB_SC_LDOK			0x00000001		// Load OK
#define PDB0_MOD		(*(volatile uint32_t *)0x40036004) // Modulus Register
#define PDB0_CNT		(*(volatile uint32_t *)0x40036008) // Counter Register
#define PDB0_IDLY		(*(volatile uint32_t *)0x4003600C) // Interrupt Delay Register
#define PDB0_CH0C1		(*(volatile uint32_t *)0x40036010) // Channel 0 Control Register 1
#define PDB0_CH0S		(*(volatile uint32_t *)0x40036014) // Channel 0 Status Register
#define PDB0_CH0DLY0		(*(volatile uint32_t *)0x40036018) // Channel 0 Delay 0 Register
#define PDB0_CH0DLY1		(*(volatile uint32_t *)0x4003601C) // Channel 0 Delay 1 Register
#define PDB0_CH1C1		(*(volatile uint32_t *)0x40036038) // Channel 1 Control Register 1
#define PDB0_CH1S		(*(volatile uint32_t *)0x4003603C) // Channel 1 Status Register
#define PDB0_CH1DLY0		(*(volatile uint32_t *)0x40036040) // Channel 1 Delay 0 Register
#define PDB0_CH1DLY1		(*(volatile uint32_t *)0x40036044) // Channel 1 Delay 1 Register
#define PDB0_DACINTC0		(*(volatile uint32_t *)0x40036150) // DAC Interval Trigger n Control Register
#define PDB0_DACINT0		(*(volatile uint32_t *)0x40036154) // DAC Interval n Register
#define PDB0_DACINTC1		(*(volatile uint32_t *)0x40036158) // DAC Interval Trigger n Control register
#define PDB0_DACINT1		(*(volatile uint32_t *)0x4003615C) // DAC Interval n register
#define PDB0_POEN		(*(volatile uint32_t *)0x40036190) // Pulse-Out n Enable Register
#define PDB0_PO0DLY		(*(volatile uint32_t *)0x40036194) // Pulse-Out n Delay Register
#define PDB0_PO1DLY		(*(volatile uint32_t *)0x40036198) // Pulse-Out n Delay Register
#define PDB0_PO2DLY		(*(volatile uint32_t *)0x4003619C) // Pulse-Out n Delay Register
#define PDB0_PO3DLY		(*(volatile uint32_t *)0x400361A0) // Pulse-Out n Delay Register


// Timer/PWM Module (TPM)

#define TPM1_SC			(*(volatile uint32_t *)0x400C9000) // Status And Control
#define TPM1_CNT		(*(volatile uint32_t *)0x400C9004) // Counter
#define TPM1_MOD		(*(volatile uint32_t *)0x400C9008) // Modulo
#define TPM1_C0SC		(*(volatile uint32_t *)0x400C900C) // Channel 0 Status And Control
#define TPM1_C0V		(*(volatile uint32_t *)0x400C9010) // Channel 0 Value
#define TPM1_C1SC		(*(volatile uint32_t *)0x400C9014) // Channel 1 Status And Control
#define TPM1_C1V		(*(volatile uint32_t *)0x400C9018) // Channel 1 Value
#define TPM1_STATUS		(*(volatile uint32_t *)0x400C9050) // Capture And Compare Status
#define TPM1_COMBINE		(*(volatile uint32_t *)0x400C9064) // Function For Linked Channels
#define TPM1_POL		(*(volatile uint32_t *)0x400C9070) // Channels Polarity
#define TPM1_FILTER		(*(volatile uint32_t *)0x400C9078) // Input Capture Filter Control
#define TPM1_QDCTRL		(*(volatile uint32_t *)0x400C9080) // Quadrature Decoder Control And Status
#define TPM1_CONF		(*(volatile uint32_t *)0x400C9084) // Configuration
#define TPM2_SC			(*(volatile uint32_t *)0x400CA000) // Status And Control
#define TPM2_CNT		(*(volatile uint32_t *)0x400CA004) // Counter
#define TPM2_MOD		(*(volatile uint32_t *)0x400CA008) // Modulo
#define TPM2_C0SC		(*(volatile uint32_t *)0x400CA00C) // Channel 0 Status And Control
#define TPM2_C0V		(*(volatile uint32_t *)0x400CA010) // Channel 0 Value
#define TPM2_C1SC		(*(volatile uint32_t *)0x400CA014) // Channel 1 Status And Control
#define TPM2_C1V		(*(volatile uint32_t *)0x400CA018) // Channel 1 Value
#define TPM2_STATUS		(*(volatile uint32_t *)0x400CA050) // Capture And Compare Status
#define TPM2_COMBINE		(*(volatile uint32_t *)0x400CA064) // Function For Linked Channels
#define TPM2_POL		(*(volatile uint32_t *)0x400CA070) // Channels Polarity
#define TPM2_FILTER		(*(volatile uint32_t *)0x400CA078) // Input Capture Filter Control
#define TPM2_QDCTRL		(*(volatile uint32_t *)0x400CA080) // Quadrature Decoder Control And Status
#define TPM2_CONF		(*(volatile uint32_t *)0x400CA084) // Configuration


// FlexTimer Module (FTM)

#define FTM0_SC			(*(volatile uint32_t *)0x40038000) // Status And Control
#define FTM_SC_TOF			0x80				// Timer Overflow Flag
#define FTM_SC_TOIE			0x40				// Timer Overflow Interrupt Enable
#define FTM_SC_CPWMS			0x20				// Center-Aligned PWM Select
#define FTM_SC_CLKS(n)			(((n) & 3) << 3)		// Clock Source Selection
#define FTM_SC_CLKS_MASK		0x18
#define FTM_SC_PS(n)			(((n) & 7) << 0)		// Prescale Factor Selection
#define FTM_SC_PS_MASK			0x07
#define FTM0_CNT		(*(volatile uint32_t *)0x40038004) // Counter
#define FTM0_MOD		(*(volatile uint32_t *)0x40038008) // Modulo
#define FTM0_C0SC		(*(volatile uint32_t *)0x4003800C) // Channel 0 Status And Control
#define FTM_CSC_CHF			0x80				// Channel Flag
#define FTM_CSC_CHIE			0x40				// Channel Interrupt Enable
#define FTM_CSC_MSB			0x20				// Channel Mode Select
#define FTM_CSC_MSA			0x10				// Channel Mode Select
#define FTM_CSC_ELSB			0x08				// Edge or Level Select
#define FTM_CSC_ELSA			0x04				// Edge or Level Select
#define FTM_CSC_DMA			0x01				// DMA Enable
#define FTM0_C0V		(*(volatile uint32_t *)0x40038010) // Channel 0 Value
#define FTM0_C1SC		(*(volatile uint32_t *)0x40038014) // Channel 1 Status And Control
#define FTM0_C1V		(*(volatile uint32_t *)0x40038018) // Channel 1 Value
#define FTM0_C2SC		(*(volatile uint32_t *)0x4003801C) // Channel 2 Status And Control
#define FTM0_C2V		(*(volatile uint32_t *)0x40038020) // Channel 2 Value
#define FTM0_C3SC		(*(volatile uint32_t *)0x40038024) // Channel 3 Status And Control
#define FTM0_C3V		(*(volatile uint32_t *)0x40038028) // Channel 3 Value
#define FTM0_C4SC		(*(volatile uint32_t *)0x4003802C) // Channel 4 Status And Control
#define FTM0_C4V		(*(volatile uint32_t *)0x40038030) // Channel 4 Value
#define FTM0_C5SC		(*(volatile uint32_t *)0x40038034) // Channel 5 Status And Control
#define FTM0_C5V		(*(volatile uint32_t *)0x40038038) // Channel 5 Value
#define FTM0_C6SC		(*(volatile uint32_t *)0x4003803C) // Channel 6 Status And Control
#define FTM0_C6V		(*(volatile uint32_t *)0x40038040) // Channel 6 Value
#define FTM0_C7SC		(*(volatile uint32_t *)0x40038044) // Channel 7 Status And Control
#define FTM0_C7V		(*(volatile uint32_t *)0x40038048) // Channel 7 Value
#define FTM0_CNTIN		(*(volatile uint32_t *)0x4003804C) // Counter Initial Value
#define FTM0_STATUS		(*(volatile uint32_t *)0x40038050) // Capture And Compare Status
#define FTM_STATUS_CH7F			0x80				//
#define FTM_STATUS_CH6F			0x40				//
#define FTM_STATUS_CH5F			0x20				//
#define FTM_STATUS_CH4F			0x10				//
#define FTM_STATUS_CH3F			0x08				//
#define FTM_STATUS_CH2F			0x04				//
#define FTM_STATUS_CH1F			0x02				//
#define FTM_STATUS_CH0F			0x01				//
#define FTM0_MODE		(*(volatile uint32_t *)0x40038054) // Features Mode Selection
#define FTM_MODE_FAULTIE		0x80				// Fault Interrupt Enable
#define FTM_MODE_FAULTM(n)		(((n) & 3) << 5)		// Fault Control Mode
#define FTM_MODE_FAULTM_MASK		0x60
#define FTM_MODE_CAPTEST		0x10				// Capture Test Mode Enable
#define FTM_MODE_PWMSYNC		0x08				// PWM Synchronization Mode
#define FTM_MODE_WPDIS			0x04				// Write Protection Disable
#define FTM_MODE_INIT			0x02				// Initialize The Channels Output
#define FTM_MODE_FTMEN			0x01				// FTM Enable
#define FTM0_SYNC		(*(volatile uint32_t *)0x40038058) // Synchronization
#define FTM_SYNC_SWSYNC			0x80				//
#define FTM_SYNC_TRIG2			0x40				//
#define FTM_SYNC_TRIG1			0x20				//
#define FTM_SYNC_TRIG0			0x10				//
#define FTM_SYNC_SYNCHOM		0x08				//
#define FTM_SYNC_REINIT			0x04				//
#define FTM_SYNC_CNTMAX			0x02				//
#define FTM_SYNC_CNTMIN			0x01				//
#define FTM0_OUTINIT		(*(volatile uint32_t *)0x4003805C) // Initial State For Channels Output
#define FTM_OUTINIT_CH7OI		0x80				//
#define FTM_OUTINIT_CH6OI		0x40				//
#define FTM_OUTINIT_CH5OI		0x20				//
#define FTM_OUTINIT_CH4OI		0x10				//
#define FTM_OUTINIT_CH3OI		0x08				//
#define FTM_OUTINIT_CH2OI		0x04				//
#define FTM_OUTINIT_CH1OI		0x02				//
#define FTM_OUTINIT_CH0OI		0x01				//
#define FTM0_OUTMASK		(*(volatile uint32_t *)0x40038060) // Output Mask
#define FTM_OUTMASK_CH7OM		0x80				//
#define FTM_OUTMASK_CH6OM		0x40				//
#define FTM_OUTMASK_CH5OM		0x20				//
#define FTM_OUTMASK_CH4OM		0x10				//
#define FTM_OUTMASK_CH3OM		0x08				//
#define FTM_OUTMASK_CH2OM		0x04				//
#define FTM_OUTMASK_CH1OM		0x02				//
#define FTM_OUTMASK_CH0OM		0x01				//
#define FTM0_COMBINE		(*(volatile uint32_t *)0x40038064) // Function For Linked Channels
#define FTM_COMBINE_FAULTEN3		0x40000000			// Enable the fault control, ch #6 & #7
#define FTM_COMBINE_SYNCEN3		0x20000000			// Enable PWM sync of C6V & C7V
#define FTM_COMBINE_DTEN3		0x10000000			// Enable deadtime insertion, ch #6 & #7
#define FTM_COMBINE_DECAP3		0x08000000			// Dual Edge Capture Mode
#define FTM_COMBINE_DECAPEN3		0x04000000			// Dual Edge Capture Mode Enable
#define FTM_COMBINE_COMP3		0x02000000			// Complement Of Channel #6 & #7
#define FTM_COMBINE_COMBINE3		0x01000000			// Combine Channels #6 & #7
#define FTM_COMBINE_FAULTEN2		0x00400000			// Enable the fault control, ch #4 & #5
#define FTM_COMBINE_SYNCEN2		0x00200000			// Enable PWM sync of C4V & C5V
#define FTM_COMBINE_DTEN2		0x00100000			// Enable deadtime insertion, ch #4 & #5
#define FTM_COMBINE_DECAP2		0x00080000			// Dual Edge Capture Mode
#define FTM_COMBINE_DECAPEN2		0x00040000			// Dual Edge Capture Mode Enable
#define FTM_COMBINE_COMP2		0x00020000			// Complement Of Channel #4 & #5
#define FTM_COMBINE_COMBINE2		0x00010000			// Combine Channels #4 & #5
#define FTM_COMBINE_FAULTEN1		0x00004000			// Enable the fault control, ch #2 & #3
#define FTM_COMBINE_SYNCEN1		0x00002000			// Enable PWM sync of C2V & C3V
#define FTM_COMBINE_DTEN1		0x00001000			// Enable deadtime insertion, ch #2 & #3
#define FTM_COMBINE_DECAP1		0x00000800			// Dual Edge Capture Mode
#define FTM_COMBINE_DECAPEN1		0x00000400			// Dual Edge Capture Mode Enable
#define FTM_COMBINE_COMP1		0x00000200			// Complement Of Channel #2 & #3
#define FTM_COMBINE_COMBINE1		0x00000100			// Combine Channels #2 & #3
#define FTM_COMBINE_FAULTEN0		0x00000040			// Enable the fault control, ch #0 & #1
#define FTM_COMBINE_SYNCEN0		0x00000020			// Enable PWM sync of C0V & C1V
#define FTM_COMBINE_DTEN0		0x00000010			// Enable deadtime insertion, ch #0 & #1
#define FTM_COMBINE_DECAP0		0x00000008			// Dual Edge Capture Mode
#define FTM_COMBINE_DECAPEN0		0x00000004			// Dual Edge Capture Mode Enable
#define FTM_COMBINE_COMP0		0x00000002			// Complement Of Channel #0 & #1
#define FTM_COMBINE_COMBINE0		0x00000001			// Combine Channels #0 & #1
#define FTM0_DEADTIME		(*(volatile uint32_t *)0x40038068) // Deadtime Insertion Control
#define FTM_DEADTIME_DTPS(n)		(((n) & 3) << 6)		// Prescaler Value, 0=1x, 2=4x, 3=16x
#define FTM_DEADTIME_DTPS_MASK		0xC0
#define FTM_DEADTIME_DTVAL(n)		(((n) & 63) << 0)		// Deadtime Value
#define FTM_DEADTIME_DTVAL_MASK		0x3F
#define FTM0_EXTTRIG		(*(volatile uint32_t *)0x4003806C) // FTM External Trigger
#define FTM_EXTTRIG_TRIGF		0x80				// Channel Trigger Flag
#define FTM_EXTTRIG_INITTRIGEN		0x40				// Initialization Trigger Enable
#define FTM_EXTTRIG_CH1TRIG		0x20				// Channel 1 Trigger Enable
#define FTM_EXTTRIG_CH0TRIG		0x10				// Channel 0 Trigger Enable
#define FTM_EXTTRIG_CH5TRIG		0x08				// Channel 5 Trigger Enable
#define FTM_EXTTRIG_CH4TRIG		0x04				// Channel 4 Trigger Enable
#define FTM_EXTTRIG_CH3TRIG		0x02				// Channel 3 Trigger Enable
#define FTM_EXTTRIG_CH2TRIG		0x01				// Channel 2 Trigger Enable
#define FTM0_POL		(*(volatile uint32_t *)0x40038070) // Channels Polarity
#define FTM_POL_POL7			0x80				// Channel 7 Polarity, 0=active high, 1=active low
#define FTM_POL_POL6			0x40				// Channel 6 Polarity, 0=active high, 1=active low
#define FTM_POL_POL5			0x20				// Channel 5 Polarity, 0=active high, 1=active low
#define FTM_POL_POL4			0x10				// Channel 4 Polarity, 0=active high, 1=active low
#define FTM_POL_POL3			0x08				// Channel 3 Polarity, 0=active high, 1=active low
#define FTM_POL_POL2			0x04				// Channel 2 Polarity, 0=active high, 1=active low
#define FTM_POL_POL1			0x02				// Channel 1 Polarity, 0=active high, 1=active low
#define FTM_POL_POL0			0x01				// Channel 0 Polarity, 0=active high, 1=active low
#define FTM0_FMS		(*(volatile uint32_t *)0x40038074) // Fault Mode Status
#define FTM_FMS_FAULTF			0x80				// Fault Detection Flag
#define FTM_FMS_WPEN			0x40				// Write Protection Enable
#define FTM_FMS_FAULTIN			0x20				// Fault Inputs
#define FTM_FMS_FAULTF3			0x08				// Fault Detection Flag 3
#define FTM_FMS_FAULTF2			0x04				// Fault Detection Flag 2
#define FTM_FMS_FAULTF1			0x02				// Fault Detection Flag 1
#define FTM_FMS_FAULTF0			0x01				// Fault Detection Flag 0
#define FTM0_FILTER		(*(volatile uint32_t *)0x40038078) // Input Capture Filter Control
#define FTM_FILTER_CH3FVAL(n)		(((n) & 15) << 12)		// Channel 3 Input Filter
#define FTM_FILTER_CH2FVAL(n)		(((n) & 15) << 8)		// Channel 2 Input Filter
#define FTM_FILTER_CH1FVAL(n)		(((n) & 15) << 4)		// Channel 1 Input Filter
#define FTM_FILTER_CH0FVAL(n)		(((n) & 15) << 0)		// Channel 0 Input Filter
#define FTM_FILTER_CH3FVAL_MASK		0xF000
#define FTM_FILTER_CH2FVAL_MASK		0x0F00
#define FTM_FILTER_CH1FVAL_MASK		0x00F0
#define FTM_FILTER_CH0FVAL_MASK		0x000F
#define FTM0_FLTCTRL		(*(volatile uint32_t *)0x4003807C) // Fault Control
#define FTM_FLTCTRL_FFVAL(n)		(((n) & 15) << 8)		// Fault Input Filter Value, 0=disable
#define FTM_FLTCTRL_FFVAL_MASK		0xF00
#define FTM_FLTCTRL_FFLTR3EN		0x80				// Fault Input 3 Filter Enable
#define FTM_FLTCTRL_FFLTR2EN		0x40				// Fault Input 2 Filter Enable
#define FTM_FLTCTRL_FFLTR1EN		0x20				// Fault Input 1 Filter Enable
#define FTM_FLTCTRL_FFLTR0EN		0x10				// Fault Input 0 Filter Enable
#define FTM_FLTCTRL_FAULT3EN		0x08				// Fault Input 3 Enable
#define FTM_FLTCTRL_FAULT2EN		0x04				// Fault Input 2 Enable
#define FTM_FLTCTRL_FAULT1EN		0x02				// Fault Input 1 Enable
#define FTM_FLTCTRL_FAULT0EN		0x01				// Fault Input 0 Enable
#define FTM0_QDCTRL		(*(volatile uint32_t *)0x40038080) // Quadrature Decoder Control And Status
#define FTM_QDCTRL_PHAFLTREN		0x80				// Phase A Input Filter Enable
#define FTM_QDCTRL_PHBFLTREN		0x40				// Phase B Input Filter Enable
#define FTM_QDCTRL_PHAPOL		0x20				// Phase A Input Polarity
#define FTM_QDCTRL_PHBPOL		0x10				// Phase B Input Polarity
#define FTM_QDCTRL_QUADMODE		0x08				// Quadrature Decoder Mode
#define FTM_QDCTRL_QUADIR		0x04				// FTM Counter Direction In Quadrature Decoder Mode
#define FTM_QDCTRL_TOFDIR		0x02				// Timer Overflow Direction In Quadrature Decoder Mode
#define FTM_QDCTRL_QUADEN		0x01				// Quadrature Decoder Mode Enable
#define FTM0_CONF		(*(volatile uint32_t *)0x40038084) // Configuration
#define FTM_CONF_GTBEOUT		0x400				// Global Time Base Output
#define FTM_CONF_GTBEEN			0x200				// Global Time Base Enable
#define FTM_CONF_BDMMODE		(((n) & 3) << 6)		// Behavior when in debug mode
#define FTM_CONF_NUMTOF			(((n) & 31) << 0)		// ratio of counter overflows to TOF bit set
#define FTM0_FLTPOL		(*(volatile uint32_t *)0x40038088) // FTM Fault Input Polarity
#define FTM_FLTPOL_FLT3POL		0x08				// Fault Input 3 Polarity
#define FTM_FLTPOL_FLT2POL		0x04				// Fault Input 2 Polarity
#define FTM_FLTPOL_FLT1POL		0x02				// Fault Input 1 Polarity
#define FTM_FLTPOL_FLT0POL		0x01				// Fault Input 0 Polarity
#define FTM0_SYNCONF		(*(volatile uint32_t *)0x4003808C) // Synchronization Configuration
#define FTM_SYNCONF_HWSOC		0x100000			// Software output control synchronization is activated by a hardware trigger.
#define FTM_SYNCONF_HWINVC		0x080000			// Inverting control synchronization is activated by a hardware trigger.
#define FTM_SYNCONF_HWOM		0x040000			// Output mask synchronization is activated by a hardware trigger.
#define FTM_SYNCONF_HWWRBUF		0x020000			// MOD, CNTIN, and CV registers synchronization is activated by a hardware trigger.
#define FTM_SYNCONF_HWRSTCNT		0x010000			// FTM counter synchronization is activated by a hardware trigger.
#define FTM_SYNCONF_SWSOC		0x001000			// Software output control synchronization is activated by the software trigger.
#define FTM_SYNCONF_SWINVC		0x000800			// Inverting control synchronization is activated by the software trigger.
#define FTM_SYNCONF_SWOM		0x000400			// Output mask synchronization is activated by the software trigger.
#define FTM_SYNCONF_SWWRBUF		0x000200			// MOD, CNTIN, and CV registers synchronization is activated by the software trigger.
#define FTM_SYNCONF_SWRSTCNT		0x000100			// FTM counter synchronization is activated by the software trigger.
#define FTM_SYNCONF_SYNCMODE		0x000080			// Synchronization Mode, 0=Legacy, 1=Enhanced PWM
#define FTM_SYNCONF_SWOC		0x000020			// SWOCTRL Register Synchronization
#define FTM_SYNCONF_INVC		0x000010			// INVCTRL Register Synchronization
#define FTM_SYNCONF_CNTINC		0x000004			// CNTIN Register Synchronization
#define FTM_SYNCONF_HWTRIGMODE		0x000001			// Hardware Trigger Mode
#define FTM0_INVCTRL		(*(volatile uint32_t *)0x40038090) // FTM Inverting Control
#define FTM_INVCTRL_INV3EN		0x08				// Pair Channels 3 Inverting Enable
#define FTM_INVCTRL_INV2EN		0x04				// Pair Channels 2 Inverting Enable
#define FTM_INVCTRL_INV1EN		0x02				// Pair Channels 1 Inverting Enable
#define FTM_INVCTRL_INV0EN		0x01				// Pair Channels 0 Inverting Enable
#define FTM0_SWOCTRL		(*(volatile uint32_t *)0x40038094) // FTM Software Output Control
#define FTM_SWOCTRL_CH7OCV		0x8000				// Channel 7 Software Output Control Value
#define FTM_SWOCTRL_CH6OCV		0x4000				// Channel 6 Software Output Control Value
#define FTM_SWOCTRL_CH5OCV		0x2000				// Channel 5 Software Output Control Value
#define FTM_SWOCTRL_CH4OCV		0x1000				// Channel 4 Software Output Control Value
#define FTM_SWOCTRL_CH3OCV		0x0800				// Channel 3 Software Output Control Value
#define FTM_SWOCTRL_CH2OCV		0x0400				// Channel 2 Software Output Control Value
#define FTM_SWOCTRL_CH1OCV		0x0200				// Channel 1 Software Output Control Value
#define FTM_SWOCTRL_CH0OCV		0x0100				// Channel 0 Software Output Control Value
#define FTM_SWOCTRL_CH7OC		0x0080				// Channel 7 Software Output Control Enable
#define FTM_SWOCTRL_CH6OC		0x0040				// Channel 6 Software Output Control Enable
#define FTM_SWOCTRL_CH5OC		0x0020				// Channel 5 Software Output Control Enable
#define FTM_SWOCTRL_CH4OC		0x0010				// Channel 4 Software Output Control Enable
#define FTM_SWOCTRL_CH3OC		0x0008				// Channel 3 Software Output Control Enable
#define FTM_SWOCTRL_CH2OC		0x0004				// Channel 2 Software Output Control Enable
#define FTM_SWOCTRL_CH1OC		0x0002				// Channel 1 Software Output Control Enable
#define FTM_SWOCTRL_CH0OC		0x0001				// Channel 0 Software Output Control Enable
#define FTM0_PWMLOAD		(*(volatile uint32_t *)0x40038098) // FTM PWM Load
#define FTM_PWMLOAD_LDOK		0x200				// Enables the loading of the MOD, CNTIN, and CV registers with the values of their write buffers
#define FTM_PWMLOAD_CH7SEL		0x80				// Channel 7 Select
#define FTM_PWMLOAD_CH6SEL		0x40				// Channel 6 Select
#define FTM_PWMLOAD_CH5SEL		0x20				// Channel 5 Select
#define FTM_PWMLOAD_CH4SEL		0x10				// Channel 4 Select
#define FTM_PWMLOAD_CH3SEL		0x08				// Channel 4 Select
#define FTM_PWMLOAD_CH2SEL		0x04				// Channel 3 Select
#define FTM_PWMLOAD_CH1SEL		0x02				// Channel 2 Select
#define FTM_PWMLOAD_CH0SEL		0x01				// Channel 1 Select
#define FTM1_SC			(*(volatile uint32_t *)0x40039000) // Status And Control
#define FTM1_CNT		(*(volatile uint32_t *)0x40039004) // Counter
#define FTM1_MOD		(*(volatile uint32_t *)0x40039008) // Modulo
#define FTM1_C0SC		(*(volatile uint32_t *)0x4003900C) // Channel 0 Status And Control
#define FTM1_C0V		(*(volatile uint32_t *)0x40039010) // Channel 0 Value
#define FTM1_C1SC		(*(volatile uint32_t *)0x40039014) // Channel 1 Status And Control
#define FTM1_C1V		(*(volatile uint32_t *)0x40039018) // Channel 1 Value
#define FTM1_CNTIN		(*(volatile uint32_t *)0x4003904C) // Counter Initial Value
#define FTM1_STATUS		(*(volatile uint32_t *)0x40039050) // Capture And Compare Status
#define FTM1_MODE		(*(volatile uint32_t *)0x40039054) // Features Mode Selection
#define FTM1_SYNC		(*(volatile uint32_t *)0x40039058) // Synchronization
#define FTM1_OUTINIT		(*(volatile uint32_t *)0x4003905C) // Initial State For Channels Output
#define FTM1_OUTMASK		(*(volatile uint32_t *)0x40039060) // Output Mask
#define FTM1_COMBINE		(*(volatile uint32_t *)0x40039064) // Function For Linked Channels
#define FTM1_DEADTIME		(*(volatile uint32_t *)0x40039068) // Deadtime Insertion Control
#define FTM1_EXTTRIG		(*(volatile uint32_t *)0x4003906C) // FTM External Trigger
#define FTM1_POL		(*(volatile uint32_t *)0x40039070) // Channels Polarity
#define FTM1_FMS		(*(volatile uint32_t *)0x40039074) // Fault Mode Status
#define FTM1_FILTER		(*(volatile uint32_t *)0x40039078) // Input Capture Filter Control
#define FTM1_FLTCTRL		(*(volatile uint32_t *)0x4003907C) // Fault Control
#define FTM1_QDCTRL		(*(volatile uint32_t *)0x40039080) // Quadrature Decoder Control And Status
#define FTM1_CONF		(*(volatile uint32_t *)0x40039084) // Configuration
#define FTM1_FLTPOL		(*(volatile uint32_t *)0x40039088) // FTM Fault Input Polarity
#define FTM1_SYNCONF		(*(volatile uint32_t *)0x4003908C) // Synchronization Configuration
#define FTM1_INVCTRL		(*(volatile uint32_t *)0x40039090) // FTM Inverting Control
#define FTM1_SWOCTRL		(*(volatile uint32_t *)0x40039094) // FTM Software Output Control
#define FTM1_PWMLOAD		(*(volatile uint32_t *)0x40039098) // FTM PWM Load
#define FTM2_SC			(*(volatile uint32_t *)0x400B8000) // Status And Control
#define FTM2_CNT		(*(volatile uint32_t *)0x400B8004) // Counter
#define FTM2_MOD		(*(volatile uint32_t *)0x400B8008) // Modulo
#define FTM2_C0SC		(*(volatile uint32_t *)0x400B800C) // Channel 0 Status And Control
#define FTM2_C0V		(*(volatile uint32_t *)0x400B8010) // Channel 0 Value
#define FTM2_C1SC		(*(volatile uint32_t *)0x400B8014) // Channel 1 Status And Control
#define FTM2_C1V		(*(volatile uint32_t *)0x400B8018) // Channel 1 Value
#define FTM2_CNTIN		(*(volatile uint32_t *)0x400B804C) // Counter Initial Value
#define FTM2_STATUS		(*(volatile uint32_t *)0x400B8050) // Capture And Compare Status
#define FTM2_MODE		(*(volatile uint32_t *)0x400B8054) // Features Mode Selection
#define FTM2_SYNC		(*(volatile uint32_t *)0x400B8058) // Synchronization
#define FTM2_OUTINIT		(*(volatile uint32_t *)0x400B805C) // Initial State For Channels Output
#define FTM2_OUTMASK		(*(volatile uint32_t *)0x400B8060) // Output Mask
#define FTM2_COMBINE		(*(volatile uint32_t *)0x400B8064) // Function For Linked Channels
#define FTM2_DEADTIME		(*(volatile uint32_t *)0x400B8068) // Deadtime Insertion Control
#define FTM2_EXTTRIG		(*(volatile uint32_t *)0x400B806C) // FTM External Trigger
#define FTM2_POL		(*(volatile uint32_t *)0x400B8070) // Channels Polarity
#define FTM2_FMS		(*(volatile uint32_t *)0x400B8074) // Fault Mode Status
#define FTM2_FILTER		(*(volatile uint32_t *)0x400B8078) // Input Capture Filter Control
#define FTM2_FLTCTRL		(*(volatile uint32_t *)0x400B807C) // Fault Control
#define FTM2_QDCTRL		(*(volatile uint32_t *)0x400B8080) // Quadrature Decoder Control And Status
#define FTM2_CONF		(*(volatile uint32_t *)0x400B8084) // Configuration
#define FTM2_FLTPOL		(*(volatile uint32_t *)0x400B8088) // FTM Fault Input Polarity
#define FTM2_SYNCONF		(*(volatile uint32_t *)0x400B808C) // Synchronization Configuration
#define FTM2_INVCTRL		(*(volatile uint32_t *)0x400B8090) // FTM Inverting Control
#define FTM2_SWOCTRL		(*(volatile uint32_t *)0x400B8094) // FTM Software Output Control
#define FTM2_PWMLOAD		(*(volatile uint32_t *)0x400B8098) // FTM PWM Load
#define FTM3_SC			(*(volatile uint32_t *)0x400B9000) // Status And Control
#define FTM3_CNT		(*(volatile uint32_t *)0x400B9004) // Counter
#define FTM3_MOD		(*(volatile uint32_t *)0x400B9008) // Modulo
#define FTM3_C0SC		(*(volatile uint32_t *)0x400B900C) // Channel 0 Status And Control
#define FTM3_C0V		(*(volatile uint32_t *)0x400B9010) // Channel 0 Value
#define FTM3_C1SC		(*(volatile uint32_t *)0x400B9014) // Channel 1 Status And Control
#define FTM3_C1V		(*(volatile uint32_t *)0x400B9018) // Channel 1 Value
#define FTM3_C2SC		(*(volatile uint32_t *)0x400B901C) // Channel 1 Status And Control
#define FTM3_C2V		(*(volatile uint32_t *)0x400B9020) // Channel 1 Value
#define FTM3_C3SC		(*(volatile uint32_t *)0x400B9024) // Channel 1 Status And Control
#define FTM3_C3V		(*(volatile uint32_t *)0x400B9028) // Channel 1 Value
#define FTM3_C4SC		(*(volatile uint32_t *)0x400B902C) // Channel 1 Status And Control
#define FTM3_C4V		(*(volatile uint32_t *)0x400B9030) // Channel 1 Value
#define FTM3_C5SC		(*(volatile uint32_t *)0x400B9034) // Channel 1 Status And Control
#define FTM3_C5V		(*(volatile uint32_t *)0x400B9038) // Channel 1 Value
#define FTM3_C6SC		(*(volatile uint32_t *)0x400B903C) // Channel 1 Status And Control
#define FTM3_C6V		(*(volatile uint32_t *)0x400B9040) // Channel 1 Value
#define FTM3_C7SC		(*(volatile uint32_t *)0x400B9044) // Channel 1 Status And Control
#define FTM3_C7V		(*(volatile uint32_t *)0x400B9048) // Channel 1 Value
#define FTM3_CNTIN		(*(volatile uint32_t *)0x400B904C) // Counter Initial Value
#define FTM3_STATUS		(*(volatile uint32_t *)0x400B9050) // Capture And Compare Status
#define FTM3_MODE		(*(volatile uint32_t *)0x400B9054) // Features Mode Selection
#define FTM3_SYNC		(*(volatile uint32_t *)0x400B9058) // Synchronization
#define FTM3_OUTINIT		(*(volatile uint32_t *)0x400B905C) // Initial State For Channels Output
#define FTM3_OUTMASK		(*(volatile uint32_t *)0x400B9060) // Output Mask
#define FTM3_COMBINE		(*(volatile uint32_t *)0x400B9064) // Function For Linked Channels
#define FTM3_DEADTIME		(*(volatile uint32_t *)0x400B9068) // Deadtime Insertion Control
#define FTM3_EXTTRIG		(*(volatile uint32_t *)0x400B906C) // FTM External Trigger
#define FTM3_POL		(*(volatile uint32_t *)0x400B9070) // Channels Polarity
#define FTM3_FMS		(*(volatile uint32_t *)0x400B9074) // Fault Mode Status
#define FTM3_FILTER		(*(volatile uint32_t *)0x400B9078) // Input Capture Filter Control
#define FTM3_FLTCTRL		(*(volatile uint32_t *)0x400B907C) // Fault Control
#define FTM3_QDCTRL		(*(volatile uint32_t *)0x400B9080) // Quadrature Decoder Control And Status
#define FTM3_CONF		(*(volatile uint32_t *)0x400B9084) // Configuration
#define FTM3_FLTPOL		(*(volatile uint32_t *)0x400B9088) // FTM Fault Input Polarity
#define FTM3_SYNCONF		(*(volatile uint32_t *)0x400B908C) // Synchronization Configuration
#define FTM3_INVCTRL		(*(volatile uint32_t *)0x400B9090) // FTM Inverting Control
#define FTM3_SWOCTRL		(*(volatile uint32_t *)0x400B9094) // FTM Software Output Control
#define FTM3_PWMLOAD		(*(volatile uint32_t *)0x400B9098) // FTM PWM Load


// Periodic Interrupt Timer (PIT)

#define PIT_MCR			(*(volatile uint32_t *)0x40037000) // PIT Module Control Register
#define PIT_MCR_MDIS            (1<<1)                               // Module disable
#define PIT_MCR_FRZ             (1<<0)                               // Freeze

typedef struct {
	volatile uint32_t	LDVAL;
	volatile uint32_t	CVAL;
	volatile uint32_t	TCTRL;
	volatile uint32_t	TFLG;
} KINETISK_PIT_CHANNEL_t;

#define KINETISK_PIT_CHANNELS	(KINETISK_PIT_CHANNEL_t *)(0x40037100)
#define PIT_LDVAL0		(*(volatile uint32_t *)0x40037100) // Timer Load Value Register
#define PIT_CVAL0		(*(volatile uint32_t *)0x40037104) // Current Timer Value Register
#define PIT_TCTRL0		(*(volatile uint32_t *)0x40037108) // Timer Control Register
#define PIT_TCTRL_CHN           (1<<2)                               // Chain Mode
#define PIT_TCTRL_TIE           (1<<1)                               // Timer Interrupt Enable
#define PIT_TCTRL_TEN           (1<<0)                               // Timer Enable
#define PIT_TFLG0		(*(volatile uint32_t *)0x4003710C) // Timer Flag Register
#define PIT_TFLG_TIF            (1<<0)                               // Timer Interrupt Flag (write 1 to clear)
#define PIT_LDVAL1		(*(volatile uint32_t *)0x40037110) // Timer Load Value Register
#define PIT_CVAL1		(*(volatile uint32_t *)0x40037114) // Current Timer Value Register
#define PIT_TCTRL1		(*(volatile uint32_t *)0x40037118) // Timer Control Register
#define PIT_TFLG1		(*(volatile uint32_t *)0x4003711C) // Timer Flag Register
#define PIT_LDVAL2		(*(volatile uint32_t *)0x40037120) // Timer Load Value Register
#define PIT_CVAL2		(*(volatile uint32_t *)0x40037124) // Current Timer Value Register
#define PIT_TCTRL2		(*(volatile uint32_t *)0x40037128) // Timer Control Register
#define PIT_TFLG2		(*(volatile uint32_t *)0x4003712C) // Timer Flag Register
#define PIT_LDVAL3		(*(volatile uint32_t *)0x40037130) // Timer Load Value Register
#define PIT_CVAL3		(*(volatile uint32_t *)0x40037134) // Current Timer Value Register
#define PIT_TCTRL3		(*(volatile uint32_t *)0x40037138) // Timer Control Register
#define PIT_TFLG3		(*(volatile uint32_t *)0x4003713C) // Timer Flag Register


// Low-Power Timer (LPTMR)

#define LPTMR0_CSR		(*(volatile uint32_t *)0x40040000) // Low Power Timer Control Status Register
#define LPTMR_CSR_TCF			0x80				// Compare Flag
#define LPTMR_CSR_TIE			0x40				// Interrupt Enable
#define LPTMR_CSR_TPS(n)		(((n) & 3) << 4)		// Pin: 0=CMP0, 1=xtal, 2=pin13
#define LPTMR_CSR_TPP			0x08				// Pin Polarity
#define LPTMR_CSR_TFC			0x04				// Free-Running Counter
#define LPTMR_CSR_TMS			0x02				// Mode Select, 0=timer, 1=counter
#define LPTMR_CSR_TEN			0x01				// Enable
#define LPTMR0_PSR		(*(volatile uint32_t *)0x40040004) // Low Power Timer Prescale Register
#define LPTMR_PSR_PRESCALE(n)		(((n) & 15) << 3)		// Prescaler value
#define LPTMR_PSR_PBYP			0x04				// Prescaler bypass
#define LPTMR_PSR_PCS(n)		(((n) & 3) << 0)		// Clock: 0=MCGIRCLK, 1=LPO(1kHz), 2=ERCLK32K, 3=OSCERCLK
#define LPTMR0_CMR		(*(volatile uint32_t *)0x40040008) // Low Power Timer Compare Register
#define LPTMR0_CNR		(*(volatile uint32_t *)0x4004000C) // Low Power Timer Counter Register

// Real Time Clock (RTC)

#define RTC_TSR			(*(volatile uint32_t *)0x4003D000) // RTC Time Seconds Register
#define RTC_TPR			(*(volatile uint32_t *)0x4003D004) // RTC Time Prescaler Register
#define RTC_TAR			(*(volatile uint32_t *)0x4003D008) // RTC Time Alarm Register
#define RTC_TCR			(*(volatile uint32_t *)0x4003D00C) // RTC Time Compensation Register
#define RTC_TCR_CIC(n)			(((n) & 255) << 24)		// Compensation Interval Counter
#define RTC_TCR_TCV(n)			(((n) & 255) << 16)		// Time Compensation Value
#define RTC_TCR_CIR(n)			(((n) & 255) << 8)		// Compensation Interval Register
#define RTC_TCR_TCR(n)			(((n) & 255) << 0)		// Time Compensation Register
#define RTC_CR			(*(volatile uint32_t *)0x4003D010) // RTC Control Register
#define RTC_CR_SC2P			((uint32_t)0x00002000)		//
#define RTC_CR_SC4P			((uint32_t)0x00001000)		//
#define RTC_CR_SC8P			((uint32_t)0x00000800)		//
#define RTC_CR_SC16P			((uint32_t)0x00000400)		//
#define RTC_CR_CLKO			((uint32_t)0x00000200)		//
#define RTC_CR_OSCE			((uint32_t)0x00000100)		//
#define RTC_CR_UM			((uint32_t)0x00000008)		//
#define RTC_CR_SUP			((uint32_t)0x00000004)		//
#define RTC_CR_WPE			((uint32_t)0x00000002)		//
#define RTC_CR_SWR			((uint32_t)0x00000001)		//
#define RTC_SR			(*(volatile uint32_t *)0x4003D014) // RTC Status Register
#define RTC_SR_TCE			((uint32_t)0x00000010)		//
#define RTC_SR_TAF			((uint32_t)0x00000004)		//
#define RTC_SR_TOF			((uint32_t)0x00000002)		//
#define RTC_SR_TIF			((uint32_t)0x00000001)		//
#define RTC_LR			(*(volatile uint32_t *)0x4003D018) // RTC Lock Register
#define RTC_IER			(*(volatile uint32_t *)0x4003D01C) // RTC Interrupt Enable Register
#define RTC_WAR			(*(volatile uint32_t *)0x4003D800) // RTC Write Access Register
#define RTC_RAR			(*(volatile uint32_t *)0x4003D804) // RTC Read Access Register

#endif /* TEENSY32_MK20DX256_CLOCK_H_ */
