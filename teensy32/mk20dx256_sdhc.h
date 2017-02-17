/*
 * mk20dx256_sdhc.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_SDHC_H_
#define TEENSY32_MK20DX256_SDHC_H_

// Secured digital host controller (SDHC)

#define SDHC_DSADDR		(*(volatile uint32_t *)0x400B1000) // DMA System Address register
#define SDHC_BLKATTR		(*(volatile uint32_t *)0x400B1004) // Block Attributes register
#define SDHC_BLKATTR_BLKCNT(n)		(uint32_t)(((n) & 0xFFFF)<<16)	// Blocks Count For Current Transfer
#define SDHC_BLKATTR_BLKCNT_MASK	((uint32_t)0xFFFF0000)
#define SDHC_BLKATTR_BLKSIZE(n)		(uint32_t)(((n) & 0x1FFF)<<0)	// Transfer Block Size
#define SDHC_CMDARG		(*(volatile uint32_t *)0x400B1008) // Command Argument register
#define SDHC_XFERTYP		(*(volatile uint32_t *)0x400B100C) // Transfer Type register
#define SDHC_XFERTYP_CMDINX(n)		(uint32_t)(((n) & 0x3F)<<24)	// Command Index
#define SDHC_XFERTYP_CMDTYP(n)		(uint32_t)(((n) & 0x3)<<22)	// Command Type
#define SDHC_XFERTYP_DPSEL		((uint32_t)0x00200000)		// Data Present Select
#define SDHC_XFERTYP_CICEN		((uint32_t)0x00100000)		// Command Index Check Enable
#define SDHC_XFERTYP_CCCEN		((uint32_t)0x00080000)		// Command CRC Check Enable
#define SDHC_XFERTYP_RSPTYP(n)		(uint32_t)(((n) & 0x3)<<16)	// Response Type Select
#define SDHC_XFERTYP_MSBSEL		((uint32_t)0x00000020)		// Multi/Single Block Select
#define SDHC_XFERTYP_DTDSEL		((uint32_t)0x00000010)		// Data Transfer Direction Select
#define SDHC_XFERTYP_AC12EN		((uint32_t)0x00000004)		// Auto CMD12 Enable
#define SDHC_XFERTYP_BCEN		((uint32_t)0x00000002)		// Block Count Enable
#define SDHC_XFERTYP_DMAEN		((uint32_t)0x00000001)		// DMA Enable
#define SDHC_CMDRSP0		(*(volatile uint32_t *)0x400B1010) // Command Response 0
#define SDHC_CMDRSP1		(*(volatile uint32_t *)0x400B1014) // Command Response 1
#define SDHC_CMDRSP2		(*(volatile uint32_t *)0x400B1018) // Command Response 2
#define SDHC_CMDRSP3		(*(volatile uint32_t *)0x400B101C) // Command Response 3
#define SDHC_DATPORT		(*(volatile uint32_t *)0x400B1020) // Buffer Data Port register
#define SDHC_PRSSTAT		(*(volatile uint32_t *)0x400B1024) // Present State register
#define SDHC_PRSSTAT_DLSL_MASK		((uint32_t)0xFF000000)		// DAT Line Signal Level
#define SDHC_PRSSTAT_CLSL		((uint32_t)0x00800000)		// CMD Line Signal Level
#define SDHC_PRSSTAT_CINS		((uint32_t)0x00010000)		// Card Inserted
#define SDHC_PRSSTAT_BREN		((uint32_t)0x00000800)		// Buffer Read Enable
#define SDHC_PRSSTAT_BWEN		((uint32_t)0x00000400)		// Buffer Write Enable
#define SDHC_PRSSTAT_RTA		((uint32_t)0x00000200)		// Read Transfer Active
#define SDHC_PRSSTAT_WTA		((uint32_t)0x00000100)		// Write Transfer Active
#define SDHC_PRSSTAT_SDOFF		((uint32_t)0x00000080)		// SD Clock Gated Off Internally
#define SDHC_PRSSTAT_PEROFF		((uint32_t)0x00000040)		// SDHC clock Gated Off Internally
#define SDHC_PRSSTAT_HCKOFF		((uint32_t)0x00000020)		// System Clock Gated Off Internally
#define SDHC_PRSSTAT_IPGOFF		((uint32_t)0x00000010)		// Bus Clock Gated Off Internally
#define SDHC_PRSSTAT_SDSTB		((uint32_t)0x00000008)		// SD Clock Stable
#define SDHC_PRSSTAT_DLA		((uint32_t)0x00000004)		// Data Line Active
#define SDHC_PRSSTAT_CDIHB		((uint32_t)0x00000002)		// Command Inhibit (DAT)
#define SDHC_PRSSTAT_CIHB		((uint32_t)0x00000001)		// Command Inhibit (CMD)
#define SDHC_PROCTL		(*(volatile uint32_t *)0x400B1028) // Protocol Control register
#define SDHC_PROCTL_WECRM		((uint32_t)0x04000000)		// Wakeup Event Enable On SD Card Removal
#define SDHC_PROCTL_WECINS		((uint32_t)0x02000000)		// Wakeup Event Enable On SD Card Insertion
#define SDHC_PROCTL_WECINT		((uint32_t)0x01000000)		// Wakeup Event Enable On Card Interrupt
#define SDHC_PROCTL_IABG		((uint32_t)0x00080000)		// Interrupt At Block Gap
#define SDHC_PROCTL_RWCTL		((uint32_t)0x00040000)		// Read Wait Control
#define SDHC_PROCTL_CREQ		((uint32_t)0x00020000)		// Continue Request
#define SDHC_PROCTL_SABGREQ		((uint32_t)0x00010000)		// Stop At Block Gap Request
#define SDHC_PROCTL_DMAS(n)		(uint32_t)(((n) & 0x3)<<8)	// DMA Select
#define SDHC_PROCTL_CDSS		((uint32_t)0x00000080)		// Card Detect Signal Selection
#define SDHC_PROCTL_CDTL		((uint32_t)0x00000040)		// Card Detect Test Level
#define SDHC_PROCTL_EMODE(n)		(uint32_t)(((n) & 0x3)<<4)	// Endian Mode
#define SDHC_PROCTL_D3CD		((uint32_t)0x00000008)		// DAT3 As Card Detection Pin
#define SDHC_PROCTL_DTW(n)		(uint32_t)(((n) & 0x3)<<1)	// Data Transfer Width, 0=1bit, 1=4bit, 2=8bit
#define SDHC_PROCTL_DTW_MASK		((uint32_t)0x00000006)
#define SDHC_PROCTL_LCTL		((uint32_t)0x00000001)		// LED Control
#define SDHC_SYSCTL		(*(volatile uint32_t *)0x400B102C) // System Control register
#define SDHC_SYSCTL_INITA		((uint32_t)0x08000000)		// Initialization Active
#define SDHC_SYSCTL_RSTD		((uint32_t)0x04000000)		// Software Reset For DAT Line
#define SDHC_SYSCTL_RSTC		((uint32_t)0x02000000)		// Software Reset For CMD Line
#define SDHC_SYSCTL_RSTA		((uint32_t)0x01000000)		// Software Reset For ALL
#define SDHC_SYSCTL_DTOCV(n)		(uint32_t)(((n) & 0xF)<<16)	// Data Timeout Counter Value
#define SDHC_SYSCTL_DTOCV_MASK		((uint32_t)0x000F0000)
#define SDHC_SYSCTL_SDCLKFS(n)		(uint32_t)(((n) & 0xFF)<<8)	// SDCLK Frequency Select
#define SDHC_SYSCTL_SDCLKFS_MASK	((uint32_t)0x0000FF00)
#define SDHC_SYSCTL_DVS(n)		(uint32_t)(((n) & 0xF)<<4)	// Divisor
#define SDHC_SYSCTL_DVS_MASK		((uint32_t)0x000000F0)
#define SDHC_SYSCTL_SDCLKEN		((uint32_t)0x00000008)		// SD Clock Enable
#define SDHC_SYSCTL_PEREN		((uint32_t)0x00000004)		// Peripheral Clock Enable
#define SDHC_SYSCTL_HCKEN		((uint32_t)0x00000002)		// System Clock Enable
#define SDHC_SYSCTL_IPGEN		((uint32_t)0x00000001)		// IPG Clock Enable
#define SDHC_IRQSTAT		(*(volatile uint32_t *)0x400B1030) // Interrupt Status register
#define SDHC_IRQSTAT_DMAE		((uint32_t)0x10000000)		// DMA Error
#define SDHC_IRQSTAT_AC12E		((uint32_t)0x01000000)		// Auto CMD12 Error
#define SDHC_IRQSTAT_DEBE		((uint32_t)0x00400000)		// Data End Bit Error
#define SDHC_IRQSTAT_DCE		((uint32_t)0x00200000)		// Data CRC Error
#define SDHC_IRQSTAT_DTOE		((uint32_t)0x00100000)		// Data Timeout Error
#define SDHC_IRQSTAT_CIE		((uint32_t)0x00080000)		// Command Index Error
#define SDHC_IRQSTAT_CEBE		((uint32_t)0x00040000)		// Command End Bit Error
#define SDHC_IRQSTAT_CCE		((uint32_t)0x00020000)		// Command CRC Error
#define SDHC_IRQSTAT_CTOE		((uint32_t)0x00010000)		// Command Timeout Error
#define SDHC_IRQSTAT_CINT		((uint32_t)0x00000100)		// Card Interrupt
#define SDHC_IRQSTAT_CRM		((uint32_t)0x00000080)		// Card Removal
#define SDHC_IRQSTAT_CINS		((uint32_t)0x00000040)		// Card Insertion
#define SDHC_IRQSTAT_BRR		((uint32_t)0x00000020)		// Buffer Read Ready
#define SDHC_IRQSTAT_BWR		((uint32_t)0x00000010)		// Buffer Write Ready
#define SDHC_IRQSTAT_DINT		((uint32_t)0x00000008)		// DMA Interrupt
#define SDHC_IRQSTAT_BGE		((uint32_t)0x00000004)		// Block Gap Event
#define SDHC_IRQSTAT_TC			((uint32_t)0x00000002)		// Transfer Complete
#define SDHC_IRQSTAT_CC			((uint32_t)0x00000001)		// Command Complete
#define SDHC_IRQSTATEN		(*(volatile uint32_t *)0x400B1034) // Interrupt Status Enable register
#define SDHC_IRQSTATEN_DMAESEN		((uint32_t)0x10000000)		// DMA Error Status Enable
#define SDHC_IRQSTATEN_AC12ESEN		((uint32_t)0x01000000)		// Auto CMD12 Error Status Enable
#define SDHC_IRQSTATEN_DEBESEN		((uint32_t)0x00400000)		// Data End Bit Error Status Enable
#define SDHC_IRQSTATEN_DCESEN		((uint32_t)0x00200000)		// Data CRC Error Status Enable
#define SDHC_IRQSTATEN_DTOESEN		((uint32_t)0x00100000)		// Data Timeout Error Status Enable
#define SDHC_IRQSTATEN_CIESEN		((uint32_t)0x00080000)		// Command Index Error Status Enable
#define SDHC_IRQSTATEN_CEBESEN		((uint32_t)0x00040000)		// Command End Bit Error Status Enable
#define SDHC_IRQSTATEN_CCESEN		((uint32_t)0x00020000)		// Command CRC Error Status Enable
#define SDHC_IRQSTATEN_CTOESEN		((uint32_t)0x00010000)		// Command Timeout Error Status Enable
#define SDHC_IRQSTATEN_CINTSEN		((uint32_t)0x00000100)		// Card Interrupt Status Enable
#define SDHC_IRQSTATEN_CRMSEN		((uint32_t)0x00000080)		// Card Removal Status Enable
#define SDHC_IRQSTATEN_CINSEN		((uint32_t)0x00000040)		// Card Insertion Status Enable
#define SDHC_IRQSTATEN_BRRSEN		((uint32_t)0x00000020)		// Buffer Read Ready Status Enable
#define SDHC_IRQSTATEN_BWRSEN		((uint32_t)0x00000010)		// Buffer Write Ready Status Enable
#define SDHC_IRQSTATEN_DINTSEN		((uint32_t)0x00000008)		// DMA Interrupt Status Enable
#define SDHC_IRQSTATEN_BGESEN		((uint32_t)0x00000004)		// Block Gap Event Status Enable
#define SDHC_IRQSTATEN_TCSEN		((uint32_t)0x00000002)		// Transfer Complete Status Enable
#define SDHC_IRQSTATEN_CCSEN		((uint32_t)0x00000001)		// Command Complete Status Enable
#define SDHC_IRQSIGEN		(*(volatile uint32_t *)0x400B1038) // Interrupt Signal Enable register
#define SDHC_IRQSIGEN_DMAEIEN		((uint32_t)0x10000000)		// DMA Error Interrupt Enable
#define SDHC_IRQSIGEN_AC12EIEN		((uint32_t)0x01000000)		// Auto CMD12 Error Interrupt Enable
#define SDHC_IRQSIGEN_DEBEIEN		((uint32_t)0x00400000)		// Data End Bit Error Interrupt Enable
#define SDHC_IRQSIGEN_DCEIEN		((uint32_t)0x00200000)		// Data CRC Error Interrupt Enable
#define SDHC_IRQSIGEN_DTOEIEN		((uint32_t)0x00100000)		// Data Timeout Error Interrupt Enable
#define SDHC_IRQSIGEN_CIEIEN		((uint32_t)0x00080000)		// Command Index Error Interrupt Enable
#define SDHC_IRQSIGEN_CEBEIEN		((uint32_t)0x00040000)		// Command End Bit Error Interrupt Enable
#define SDHC_IRQSIGEN_CCEIEN		((uint32_t)0x00020000)		// Command CRC Error Interrupt Enable
#define SDHC_IRQSIGEN_CTOEIEN		((uint32_t)0x00010000)		// Command Timeout Error Interrupt Enable
#define SDHC_IRQSIGEN_CINTIEN		((uint32_t)0x00000100)		// Card Interrupt Interrupt Enable
#define SDHC_IRQSIGEN_CRMIEN		((uint32_t)0x00000080)		// Card Removal Interrupt Enable
#define SDHC_IRQSIGEN_CINSIEN		((uint32_t)0x00000040)		// Card Insertion Interrupt Enable
#define SDHC_IRQSIGEN_BRRIEN		((uint32_t)0x00000020)		// Buffer Read Ready Interrupt Enable
#define SDHC_IRQSIGEN_BWRIEN		((uint32_t)0x00000010)		// Buffer Write Ready Interrupt Enable
#define SDHC_IRQSIGEN_DINTIEN		((uint32_t)0x00000008)		// DMA Interrupt Interrupt Enable
#define SDHC_IRQSIGEN_BGEIEN		((uint32_t)0x00000004)		// Block Gap Event Interrupt Enable
#define SDHC_IRQSIGEN_TCIEN		((uint32_t)0x00000002)		// Transfer Complete Interrupt Enable
#define SDHC_IRQSIGEN_CCIEN		((uint32_t)0x00000001)		// Command Complete Interrupt Enable
#define SDHC_AC12ERR		(*(volatile uint32_t *)0x400B103C) // Auto CMD12 Error Status Register
#define SDHC_AC12ERR_CNIBAC12E		((uint32_t)0x00000080)		// Command Not Issued By Auto CMD12 Error
#define SDHC_AC12ERR_AC12IE		((uint32_t)0x00000010)		// Auto CMD12 Index Error
#define SDHC_AC12ERR_AC12CE		((uint32_t)0x00000008)		// Auto CMD12 CRC Error
#define SDHC_AC12ERR_AC12EBE		((uint32_t)0x00000004)		// Auto CMD12 End Bit Error
#define SDHC_AC12ERR_AC12TOE		((uint32_t)0x00000002)		// Auto CMD12 Timeout Error
#define SDHC_AC12ERR_AC12NE		((uint32_t)0x00000001)		// Auto CMD12 Not Executed
#define SDHC_HTCAPBLT		(*(volatile uint32_t *)0x400B1040) // Host Controller Capabilities
#define SDHC_WML		(*(volatile uint32_t *)0x400B1044) // Watermark Level Register
#define SDHC_WML_WRWML(n)		(uint32_t)(((n) & 0x7F)<<16)	// Write Watermark Level
#define SDHC_WML_RDWML(n)		(uint32_t)(((n) & 0x7F)<<0)	// Read Watermark Level
#define SDHC_FEVT		(*(volatile uint32_t *)0x400B1050) // Force Event register
#define SDHC_FEVT_CINT			((uint32_t)0x80000000)		// Force Event Card Interrupt
#define SDHC_FEVT_DMAE			((uint32_t)0x10000000)		// Force Event DMA Error
#define SDHC_FEVT_AC12E			((uint32_t)0x01000000)		// Force Event Auto CMD12 Error
#define SDHC_FEVT_DEBE			((uint32_t)0x00400000)		// Force Event Data End Bit Error
#define SDHC_FEVT_DCE			((uint32_t)0x00200000)		// Force Event Data CRC Error
#define SDHC_FEVT_DTOE			((uint32_t)0x00100000)		// Force Event Data Timeout Error
#define SDHC_FEVT_CIE			((uint32_t)0x00080000)		// Force Event Command Index Error
#define SDHC_FEVT_CEBE			((uint32_t)0x00040000)		// Force Event Command End Bit Error
#define SDHC_FEVT_CCE			((uint32_t)0x00020000)		// Force Event Command CRC Error
#define SDHC_FEVT_CTOE			((uint32_t)0x00010000)		// Force Event Command Timeout Error
#define SDHC_FEVT_CNIBAC12E		((uint32_t)0x00000080)		// Force Event Command Not Executed By Auto Command 12 Error
#define SDHC_FEVT_AC12IE		((uint32_t)0x00000010)		// Force Event Auto Command 12 Index Error
#define SDHC_FEVT_AC12EBE		((uint32_t)0x00000008)		// Force Event Auto Command 12 End Bit Error
#define SDHC_FEVT_AC12CE		((uint32_t)0x00000004)		// Force Event Auto Command 12 CRC Error
#define SDHC_FEVT_AC12TOE		((uint32_t)0x00000002)		// Force Event Auto Command 12 Time Out Error
#define SDHC_FEVT_AC12NE		((uint32_t)0x00000001)		// Force Event Auto Command 12 Not Executed
#define SDHC_ADMAES		(*(volatile uint32_t *)0x400B1054) // ADMA Error Status register
#define SDHC_ADMAES_ADMADCE		((uint32_t)0x00000008)
#define SDHC_ADMAES_ADMALME		((uint32_t)0x00000004)
#define SDHC_ADMAES_ADMAES_MASK		((uint32_t)0x00000003)
#define SDHC_ADSADDR		(*(volatile uint32_t *)0x400B1058) // ADMA System Addressregister
#define SDHC_VENDOR		(*(volatile uint32_t *)0x400B10C0) // Vendor Specific register
#define SDHC_VENDOR_INTSTVAL_MASK	((uint32_t)0x00FF0000)
#define SDHC_VENDOR_EXBLKNU		((uint32_t)0x00000002)
#define SDHC_MMCBOOT		(*(volatile uint32_t *)0x400B10C4) // MMC Boot register
#define SDHC_MMCBOOT_BOOTBLKCNT(n)	(uint32_t)(((n) & 0xFFF)<<16)	// stop at block gap value of automatic mode
#define SDHC_MMCBOOT_AUTOSABGEN 	((uint32_t)0x00000080)		// enable auto stop at block gap function
#define SDHC_MMCBOOT_BOOTEN		((uint32_t)0x00000040)		// Boot Mode Enable
#define SDHC_MMCBOOT_BOOTMODE		((uint32_t)0x00000020)		// Boot Mode Select
#define SDHC_MMCBOOT_BOOTACK		((uint32_t)0x00000010)		// Boot Ack Mode Select
#define SDHC_MMCBOOT_DTOCVACK(n)	(uint32_t)(((n) & 0xF)<<0)	// Boot ACK Time Out Counter Value
#define SDHC_HOSTVER		(*(volatile uint32_t *)0x400B10FC) // Host Controller Version

#endif /* TEENSY32_MK20DX256_SDHC_H_ */
