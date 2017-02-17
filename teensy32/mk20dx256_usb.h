/*
 * mk20dx256_usb.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_USB_H_
#define TEENSY32_MK20DX256_USB_H_

// Universal Serial Bus OTG Controller (USBOTG)

#define USB0_PERID		(*(const    uint8_t  *)0x40072000) // Peripheral ID register
#define USB0_IDCOMP		(*(const    uint8_t  *)0x40072004) // Peripheral ID Complement register
#define USB0_REV		(*(const    uint8_t  *)0x40072008) // Peripheral Revision register
#define USB0_ADDINFO		(*(volatile uint8_t  *)0x4007200C) // Peripheral Additional Info register
#define USB0_OTGISTAT		(*(volatile uint8_t  *)0x40072010) // OTG Interrupt Status register
#define USB_OTGISTAT_IDCHG		((uint8_t)0x80)			//
#define USB_OTGISTAT_ONEMSEC		((uint8_t)0x40)			//
#define USB_OTGISTAT_LINE_STATE_CHG	((uint8_t)0x20)			//
#define USB_OTGISTAT_SESSVLDCHG		((uint8_t)0x08)			//
#define USB_OTGISTAT_B_SESS_CHG		((uint8_t)0x04)			//
#define USB_OTGISTAT_AVBUSCHG		((uint8_t)0x01)			//
#define USB0_OTGICR		(*(volatile uint8_t  *)0x40072014) // OTG Interrupt Control Register
#define USB_OTGICR_IDEN			((uint8_t)0x80)			//
#define USB_OTGICR_ONEMSECEN		((uint8_t)0x40)			//
#define USB_OTGICR_LINESTATEEN		((uint8_t)0x20)			//
#define USB_OTGICR_SESSVLDEN		((uint8_t)0x08)			//
#define USB_OTGICR_BSESSEN		((uint8_t)0x04)			//
#define USB_OTGICR_AVBUSEN		((uint8_t)0x01)			//
#define USB0_OTGSTAT		(*(volatile uint8_t  *)0x40072018) // OTG Status register
#define USB_OTGSTAT_ID			((uint8_t)0x80)			//
#define USB_OTGSTAT_ONEMSECEN		((uint8_t)0x40)			//
#define USB_OTGSTAT_LINESTATESTABLE	((uint8_t)0x20)			//
#define USB_OTGSTAT_SESS_VLD		((uint8_t)0x08)			//
#define USB_OTGSTAT_BSESSEND		((uint8_t)0x04)			//
#define USB_OTGSTAT_AVBUSVLD		((uint8_t)0x01)			//
#define USB0_OTGCTL		(*(volatile uint8_t  *)0x4007201C) // OTG Control Register
#define USB_OTGCTL_DPHIGH		((uint8_t)0x80)			//
#define USB_OTGCTL_DPLOW		((uint8_t)0x20)			//
#define USB_OTGCTL_DMLOW		((uint8_t)0x10)			//
#define USB_OTGCTL_OTGEN		((uint8_t)0x04)			//
#define USB0_ISTAT		(*(volatile uint8_t  *)0x40072080) // Interrupt Status Register
#define USB_ISTAT_STALL			((uint8_t)0x80)			//
#define USB_ISTAT_ATTACH		((uint8_t)0x40)			//
#define USB_ISTAT_RESUME		((uint8_t)0x20)			//
#define USB_ISTAT_SLEEP			((uint8_t)0x10)			//
#define USB_ISTAT_TOKDNE		((uint8_t)0x08)			//
#define USB_ISTAT_SOFTOK		((uint8_t)0x04)			//
#define USB_ISTAT_ERROR			((uint8_t)0x02)			//
#define USB_ISTAT_USBRST		((uint8_t)0x01)			//
#define USB0_INTEN		(*(volatile uint8_t  *)0x40072084) // Interrupt Enable Register
#define USB_INTEN_STALLEN		((uint8_t)0x80)			//
#define USB_INTEN_ATTACHEN		((uint8_t)0x40)			//
#define USB_INTEN_RESUMEEN		((uint8_t)0x20)			//
#define USB_INTEN_SLEEPEN		((uint8_t)0x10)			//
#define USB_INTEN_TOKDNEEN		((uint8_t)0x08)			//
#define USB_INTEN_SOFTOKEN		((uint8_t)0x04)			//
#define USB_INTEN_ERROREN		((uint8_t)0x02)			//
#define USB_INTEN_USBRSTEN		((uint8_t)0x01)			//
#define USB0_ERRSTAT		(*(volatile uint8_t  *)0x40072088) // Error Interrupt Status Register
#define USB_ERRSTAT_BTSERR		((uint8_t)0x80)			//
#define USB_ERRSTAT_DMAERR		((uint8_t)0x20)			//
#define USB_ERRSTAT_BTOERR		((uint8_t)0x10)			//
#define USB_ERRSTAT_DFN8		((uint8_t)0x08)			//
#define USB_ERRSTAT_CRC16		((uint8_t)0x04)			//
#define USB_ERRSTAT_CRC5EOF		((uint8_t)0x02)			//
#define USB_ERRSTAT_PIDERR		((uint8_t)0x01)			//
#define USB0_ERREN		(*(volatile uint8_t  *)0x4007208C) // Error Interrupt Enable Register
#define USB_ERREN_BTSERREN		((uint8_t)0x80)			//
#define USB_ERREN_DMAERREN		((uint8_t)0x20)			//
#define USB_ERREN_BTOERREN		((uint8_t)0x10)			//
#define USB_ERREN_DFN8EN		((uint8_t)0x08)			//
#define USB_ERREN_CRC16EN		((uint8_t)0x04)			//
#define USB_ERREN_CRC5EOFEN		((uint8_t)0x02)			//
#define USB_ERREN_PIDERREN		((uint8_t)0x01)			//
#define USB0_STAT		(*(volatile uint8_t  *)0x40072090) // Status Register
#define USB_STAT_TX			((uint8_t)0x08)			//
#define USB_STAT_ODD			((uint8_t)0x04)			//
#define USB_STAT_ENDP(n)		((uint8_t)((n) >> 4))		//
#define USB0_CTL		(*(volatile uint8_t  *)0x40072094) // Control Register
#define USB_CTL_JSTATE			((uint8_t)0x80)			//
#define USB_CTL_SE0			((uint8_t)0x40)			//
#define USB_CTL_TXSUSPENDTOKENBUSY	((uint8_t)0x20)			//
#define USB_CTL_RESET			((uint8_t)0x10)			//
#define USB_CTL_HOSTMODEEN		((uint8_t)0x08)			//
#define USB_CTL_RESUME			((uint8_t)0x04)			//
#define USB_CTL_ODDRST			((uint8_t)0x02)			//
#define USB_CTL_USBENSOFEN		((uint8_t)0x01)			//
#define USB0_ADDR		(*(volatile uint8_t  *)0x40072098) // Address Register
#define USB0_BDTPAGE1		(*(volatile uint8_t  *)0x4007209C) // BDT Page Register 1
#define USB0_FRMNUML		(*(volatile uint8_t  *)0x400720A0) // Frame Number Register Low
#define USB0_FRMNUMH		(*(volatile uint8_t  *)0x400720A4) // Frame Number Register High
#define USB0_TOKEN		(*(volatile uint8_t  *)0x400720A8) // Token Register
#define USB0_SOFTHLD		(*(volatile uint8_t  *)0x400720AC) // SOF Threshold Register
#define USB0_BDTPAGE2		(*(volatile uint8_t  *)0x400720B0) // BDT Page Register 2
#define USB0_BDTPAGE3		(*(volatile uint8_t  *)0x400720B4) // BDT Page Register 3
#define USB0_ENDPT0		(*(volatile uint8_t  *)0x400720C0) // Endpoint Control Register
#define USB_ENDPT_HOSTWOHUB		((uint8_t)0x80)			// host only, enable low speed
#define USB_ENDPT_RETRYDIS		((uint8_t)0x40)			// host only, set to disable NAK retry
#define USB_ENDPT_EPCTLDIS		((uint8_t)0x10)			// 0=control, 1=bulk, interrupt, isync
#define USB_ENDPT_EPRXEN		((uint8_t)0x08)			// enables the endpoint for RX transfers.
#define USB_ENDPT_EPTXEN		((uint8_t)0x04)			// enables the endpoint for TX transfers.
#define USB_ENDPT_EPSTALL		((uint8_t)0x02)			// set to stall endpoint
#define USB_ENDPT_EPHSHK		((uint8_t)0x01)			// enable handshaking during a transaction, generally set unless Isochronous
#define USB0_ENDPT1		(*(volatile uint8_t  *)0x400720C4) // Endpoint Control Register
#define USB0_ENDPT2		(*(volatile uint8_t  *)0x400720C8) // Endpoint Control Register
#define USB0_ENDPT3		(*(volatile uint8_t  *)0x400720CC) // Endpoint Control Register
#define USB0_ENDPT4		(*(volatile uint8_t  *)0x400720D0) // Endpoint Control Register
#define USB0_ENDPT5		(*(volatile uint8_t  *)0x400720D4) // Endpoint Control Register
#define USB0_ENDPT6		(*(volatile uint8_t  *)0x400720D8) // Endpoint Control Register
#define USB0_ENDPT7		(*(volatile uint8_t  *)0x400720DC) // Endpoint Control Register
#define USB0_ENDPT8		(*(volatile uint8_t  *)0x400720E0) // Endpoint Control Register
#define USB0_ENDPT9		(*(volatile uint8_t  *)0x400720E4) // Endpoint Control Register
#define USB0_ENDPT10		(*(volatile uint8_t  *)0x400720E8) // Endpoint Control Register
#define USB0_ENDPT11		(*(volatile uint8_t  *)0x400720EC) // Endpoint Control Register
#define USB0_ENDPT12		(*(volatile uint8_t  *)0x400720F0) // Endpoint Control Register
#define USB0_ENDPT13		(*(volatile uint8_t  *)0x400720F4) // Endpoint Control Register
#define USB0_ENDPT14		(*(volatile uint8_t  *)0x400720F8) // Endpoint Control Register
#define USB0_ENDPT15		(*(volatile uint8_t  *)0x400720FC) // Endpoint Control Register
#define USB0_USBCTRL		(*(volatile uint8_t  *)0x40072100) // USB Control Register
#define USB_USBCTRL_SUSP		((uint8_t)0x80)			// Places the USB transceiver into the suspend state.
#define USB_USBCTRL_PDE			((uint8_t)0x40)			// Enables the weak pulldowns on the USB transceiver.
#define USB0_OBSERVE		(*(volatile uint8_t  *)0x40072104) // USB OTG Observe Register
#define USB_OBSERVE_DPPU		((uint8_t)0x80)			//
#define USB_OBSERVE_DPPD		((uint8_t)0x40)			//
#define USB_OBSERVE_DMPD		((uint8_t)0x10)			//
#define USB0_CONTROL		(*(volatile uint8_t  *)0x40072108) // USB OTG Control Register
#define USB_CONTROL_DPPULLUPNONOTG	((uint8_t)0x10)			//  Provides control of the DP PULLUP in the USB OTG module, if USB is configured in non-OTG device mode.
#define USB0_USBTRC0		(*(volatile uint8_t  *)0x4007210C) // USB Transceiver Control Register 0
#define USB_USBTRC_USBRESET		((uint8_t)0x80)			//
#define USB_USBTRC_USBRESMEN		((uint8_t)0x20)			//
#define USB_USBTRC_SYNC_DET		((uint8_t)0x02)			//
#define USB_USBTRC_USB_RESUME_INT	((uint8_t)0x01)			//
#define USB0_USBFRMADJUST	(*(volatile uint8_t  *)0x40072114) // Frame Adjust Register
#define USB0_CLK_RECOVER_CTRL	(*(volatile uint8_t  *)0x40072140) // USB Clock recovery control
#define USB_CLK_RECOVER_CTRL_CLOCK_RECOVER_EN		((uint8_t)0x80)
#define USB_CLK_RECOVER_CTRL_RESET_RESUME_ROUGH_EN	((uint8_t)0x40)
#define USB_CLK_RECOVER_CTRL_RESTART_IFRTRIM_EN		((uint8_t)0x20)
#define USB0_CLK_RECOVER_IRC_EN	(*(volatile uint8_t  *)0x40072144) // IRC48M oscillator enable
#define USB_CLK_RECOVER_IRC_EN_IRC_EN			((uint8_t)0x02)
#define USB_CLK_RECOVER_IRC_EN_REG_EN			((uint8_t)0x01)
#define USB0_CLK_RECOVER_INT_EN	(*(volatile uint8_t  *)0x40072154) // Clock recovery combined interrupt enable
#define USB_CLK_RECOVER_INT_EN_OVF_ERROR_EN		((uint8_t)0x10)
#define USB0_CLK_RECOVER_INT_STATUS (*(volatile uint8_t  *)0x4007215C) // Clock recovery separated interrupt status
#define USB_CLK_RECOVER_INT_STATUS_OVF_ERROR		((uint8_t)0x10)


// USB Device Charger Detection Module (USBDCD)

#define USBDCD_CONTROL		(*(volatile uint32_t *)0x40035000) // Control register
#define USBDCD_CONTROL_SR		((uint32_t)0x02000000)
#define USBDCD_CONTROL_START		((uint32_t)0x01000000)
#define USBDCD_CONTROL_BC12		((uint32_t)0x00020000)
#define USBDCD_CONTROL_IE		((uint32_t)0x00010000)
#define USBDCD_CONTROL_IF		((uint32_t)0x00000100)
#define USBDCD_CONTROL_IACK		((uint32_t)0x00000001)
#define USBDCD_CLOCK		(*(volatile uint32_t *)0x40035004) // Clock register
#define USBDCD_CLOCK_CLOCK_SPEED(n)	(uint32_t)(((n) & 0x3FF) << 2)
#define USBDCD_CLOCK_CLOCK_UNIT		((uint32_t)0x00000001)
#define USBDCD_STATUS		(*(volatile uint32_t *)0x40035008) // Status register
#define USBDCD_STATUS_ACTIVE		((uint32_t)0x00400000)
#define USBDCD_STATUS_ID		((uint32_t)0x00200000)
#define USBDCD_STATUS_ERR		((uint32_t)0x00100000)
#define USBDCD_STATUS_SEQ_STAT(n)	(uint32_t)(((n) & 0x3) << 18)
#define USBDCD_STATUS_SEQ_STAT_MASK	((uint32_t)0x000C0000)
#define USBDCD_STATUS_SEQ_RES(n)	(uint32_t)(((n) & 0x3) << 16)
#define USBDCD_STATUS_SEQ_RES_MASK	((uint32_t)0x00030000)
#define USBDCD_TIMER0		(*(volatile uint32_t *)0x40035010) // TIMER0 register
#define USBDCD_TIMER1		(*(volatile uint32_t *)0x40035014) // TIMER1 register
#define USBDCD_TIMER2		(*(volatile uint32_t *)0x40035018) // TIMER2 register
#define USBHSDCD_CONTROL	(*(volatile uint32_t *)0x400A3000) // Control register
#define USBHSDCD_CLOCK		(*(volatile uint32_t *)0x400A3004) // Clock register
#define USBHSDCD_STATUS		(*(volatile uint32_t *)0x400A3008) // Status register
#define USBHSDCD_TIMER0		(*(volatile uint32_t *)0x400A3010) // TIMER0 register
#define USBHSDCD_TIMER1		(*(volatile uint32_t *)0x400A3014) // TIMER1 register
#define USBHSDCD_TIMER2		(*(volatile uint32_t *)0x400A3018) // TIMER2 register


// USB High Speed OTG Controller (USBHS)

#define USBHS_ID		(*(volatile uint32_t *)0x400A1000) // Identification Register
#define USBHS_HWGENERAL		(*(volatile uint32_t *)0x400A1004) // General Hardware Parameters Register
#define USBHS_HWHOST		(*(volatile uint32_t *)0x400A1008) // Host Hardware Parameters Register
#define USBHS_HWDEVICE		(*(volatile uint32_t *)0x400A100C) // Device Hardware Parameters Register
#define USBHS_HWTXBUF		(*(volatile uint32_t *)0x400A1010) // Transmit Buffer Hardware Parameters Register
#define USBHS_HWRXBUF		(*(volatile uint32_t *)0x400A1014) // Receive Buffer Hardware Parameters Register
#define USBHS_GPTIMER0LD	(*(volatile uint32_t *)0x400A1080) // General Purpose Timer n Load Register
#define USBHS_GPTIMER0CTL	(*(volatile uint32_t *)0x400A1084) // General Purpose Timer n Control Register
#define USBHS_GPTIMERCTL_RUN		((uint32_t)0x80000000)
#define USBHS_GPTIMERCTL_RST		((uint32_t)0x40000000)
#define USBHS_GPTIMERCTL_MODE		((uint32_t)0x01000000)
#define USBHS_GPTIMERCTL_GPTCNT(n)	(uint32_t)(((n) & 0xFFFFFF) << 0)
#define USBHS_GPTIMER1LD	(*(volatile uint32_t *)0x400A1088) // General Purpose Timer n Load Register
#define USBHS_GPTIMER1CTL	(*(volatile uint32_t *)0x400A108C) // General Purpose Timer n Control Register
#define USBHS_USB_SBUSCFG	(*(volatile uint32_t *)0x400A1090) // System Bus Interface Configuration Register
#define USBHS_HCIVERSION	(*(volatile uint32_t *)0x400A1100) // Host Controller Interface Version and Capability Registers Length Register
#define USBHS_HCSPARAMS		(*(volatile uint32_t *)0x400A1104) // Host Controller Structural Parameters Register
#define USBHS_HCCPARAMS		(*(volatile uint32_t *)0x400A1108) // Host Controller Capability Parameters Register
#define USBHS_DCIVERSION	(*(volatile uint16_t *)0x400A1122) // Device Controller Interface Version
#define USBHS_DCCPARAMS		(*(volatile uint32_t *)0x400A1124) // Device Controller Capability Parameters
#define USBHS_USBCMD		(*(volatile uint32_t *)0x400A1140) // USB Command Register
#define USBHS_USBCMD_ITC(n)		(uint32_t)(((n) & 0xFF) << 16)
#define USBHS_USBCMD_FS2		((uint32_t)0x00008000)
#define USBHS_USBCMD_ATDTW		((uint32_t)0x00004000)
#define USBHS_USBCMD_SUTW		((uint32_t)0x00002000)
#define USBHS_USBCMD_ASPE		((uint32_t)0x00000800)
#define USBHS_USBCMD_ASP(n)		(uint32_t)(((n) & 0x3) << 8)
#define USBHS_USBCMD_IAA		((uint32_t)0x00000040)
#define USBHS_USBCMD_ASE		((uint32_t)0x00000020)
#define USBHS_USBCMD_PSE		((uint32_t)0x00000010)
#define USBHS_USBCMD_FS(n)		(uint32_t)(((n) & 0x3) << 2)
#define USBHS_USBCMD_RST		((uint32_t)0x00000002)
#define USBHS_USBCMD_RS			((uint32_t)0x00000001)
#define USBHS_USBSTS		(*(volatile uint32_t *)0x400A1144) // USB Status Register
#define USBHS_USBSTS_TI1		((uint32_t)0x02000000)
#define USBHS_USBSTS_TI0		((uint32_t)0x01000000)
#define USBHS_USBSTS_UPI		((uint32_t)0x00080000)
#define USBHS_USBSTS_UAI		((uint32_t)0x00040000)
#define USBHS_USBSTS_NAKI		((uint32_t)0x00010000)
#define USBHS_USBSTS_AS			((uint32_t)0x00008000)
#define USBHS_USBSTS_PS			((uint32_t)0x00004000)
#define USBHS_USBSTS_RCL		((uint32_t)0x00002000)
#define USBHS_USBSTS_HCH		((uint32_t)0x00001000)
#define USBHS_USBSTS_SLI		((uint32_t)0x00000100)
#define USBHS_USBSTS_SRI		((uint32_t)0x00000080)
#define USBHS_USBSTS_URI		((uint32_t)0x00000040)
#define USBHS_USBSTS_AAI		((uint32_t)0x00000020)
#define USBHS_USBSTS_SEI		((uint32_t)0x00000010)
#define USBHS_USBSTS_FRI		((uint32_t)0x00000008)
#define USBHS_USBSTS_PCI		((uint32_t)0x00000004)
#define USBHS_USBSTS_UEI		((uint32_t)0x00000002)
#define USBHS_USBSTS_UI			((uint32_t)0x00000001)
#define USBHS_USBINTR		(*(volatile uint32_t *)0x400A1148) // USB Interrupt Enable Register
#define USBHS_USBINTR_TIE1		((uint32_t)0x02000000)
#define USBHS_USBINTR_TIE0		((uint32_t)0x01000000)
#define USBHS_USBINTR_UPIE		((uint32_t)0x00080000)
#define USBHS_USBINTR_UAIE		((uint32_t)0x00040000)
#define USBHS_USBINTR_NAKE		((uint32_t)0x00010000)
#define USBHS_USBINTR_SLE		((uint32_t)0x00000100)
#define USBHS_USBINTR_SRE		((uint32_t)0x00000080)
#define USBHS_USBINTR_URE		((uint32_t)0x00000040)
#define USBHS_USBINTR_AAE		((uint32_t)0x00000020)
#define USBHS_USBINTR_SEE		((uint32_t)0x00000010)
#define USBHS_USBINTR_FRE		((uint32_t)0x00000008)
#define USBHS_USBINTR_PCE		((uint32_t)0x00000004)
#define USBHS_USBINTR_UEE		((uint32_t)0x00000002)
#define USBHS_USBINTR_UE		((uint32_t)0x00000001)
#define USBHS_FRINDEX		(*(volatile uint32_t *)0x400A114C) // Frame Index Register
#define USBHS_PERIODICLISTBASE	(*(volatile uint32_t *)0x400A1154) // Periodic Frame List Base Address Register
#define USBHS_DEVICEADDR	(*(volatile uint32_t *)0x400A1154) // Device Address Register
#define USBHS_DEVICEADDR_USBADR(n)	(uint32_t)(((n) & 0x7F) << 25)
#define USBHS_DEVICEADDR_USBADRA	((uint32_t)0x01000000)
#define USBHS_ASYNCLISTADDR	(*(volatile uint32_t *)0x400A1158) // Current Asynchronous List Address Register
#define USBHS_EPLISTADDR	(*(volatile uint32_t *)0x400A1158) // Endpoint List Address Register
#define USBHS_TTCTRL		(*(volatile uint32_t *)0x400A115C) // Host TT Asynchronous Buffer Control
#define USBHS_TTCTRL_TTHA(n)		(uint32_t)(((n) & 0x7F) << 24)
#define USBHS_BURSTSIZE		(*(volatile uint32_t *)0x400A1160) // Master Interface Data Burst Size Register
#define USBHS_BURSTSIZE_TXPBURST(n)	(uint32_t)(((n) & 0xFF) << 8)
#define USBHS_BURSTSIZE_RXPBURST(n)	(uint32_t)(((n) & 0xFF) << 0)
#define USBHS_TXFILLTUNING	(*(volatile uint32_t *)0x400A1164) // Transmit FIFO Tuning Control Register
#define USBHS_TXFILLTUNING_TXFIFOTHRES(n) (uint32_t)(((n) & 0x3F) << 16)
#define USBHS_TXFILLTUNING_TXSCHHEALTH(n) (uint32_t)(((n) & 0x1F) << 8)
#define USBHS_TXFILLTUNING_TXSCHOH(n)	(uint32_t)(((n) & 0x7F) << 0)
#define USBHS_ENDPTNAK		(*(volatile uint32_t *)0x400A1178) // Endpoint NAK Register
#define USBHS_ENDPTNAKEN	(*(volatile uint32_t *)0x400A117C) // Endpoint NAK Enable Register
#define USBHS_CONFIGFLAG	(*(volatile uint32_t *)0x400A1180) // Configure Flag Register
#define USBHS_PORTSC1		(*(volatile uint32_t *)0x400A1184) // Port Status and Control Registers
#define USBHS_PORTSC_PTS(n)		(uint32_t)(((n) & 0x3) << 30)
#define USBHS_PORTSC_PSPD(n)		(uint32_t)(((n) & 0x3) << 26)
#define USBHS_PORTSC_PTS2		((uint32_t)0x02000000)
#define USBHS_PORTSC_PFSC		((uint32_t)0x01000000)
#define USBHS_PORTSC_PHCD		((uint32_t)0x00800000)
#define USBHS_PORTSC_WKOC		((uint32_t)0x00400000)
#define USBHS_PORTSC_WKDS		((uint32_t)0x00200000)
#define USBHS_PORTSC_WKCN		((uint32_t)0x00100000)
#define USBHS_PORTSC_PTC(n)		(uint32_t)(((n) & 0xF) << 16)
#define USBHS_PORTSC_PIC(n)		(uint32_t)(((n) & 0x3) << 14)
#define USBHS_PORTSC_PO			((uint32_t)0x00002000)
#define USBHS_PORTSC_PP			((uint32_t)0x00001000)
#define USBHS_PORTSC_LS(n)		(uint32_t)(((n) & 0x3) << 10)
#define USBHS_PORTSC_HSP		((uint32_t)0x00000200)
#define USBHS_PORTSC_PR			((uint32_t)0x00000100)
#define USBHS_PORTSC_SUSP		((uint32_t)0x00000080)
#define USBHS_PORTSC_FPR		((uint32_t)0x00000040)
#define USBHS_PORTSC_OCC		((uint32_t)0x00000020)
#define USBHS_PORTSC_OCA		((uint32_t)0x00000010)
#define USBHS_PORTSC_PEC		((uint32_t)0x00000008)
#define USBHS_PORTSC_PE			((uint32_t)0x00000004)
#define USBHS_PORTSC_CSC		((uint32_t)0x00000002)
#define USBHS_PORTSC_CCS		((uint32_t)0x00000001)
#define USBHS_OTGSC		(*(volatile uint32_t *)0x400A11A4) // On-the-Go Status and Control Register
#define USBHS_OTGSC_DPIE		((uint32_t)0x40000000)
#define USBHS_OTGSC_MSE			((uint32_t)0x20000000)
#define USBHS_OTGSC_BSEIE		((uint32_t)0x10000000)
#define USBHS_OTGSC_BSVIE		((uint32_t)0x08000000)
#define USBHS_OTGSC_ASVIE		((uint32_t)0x04000000)
#define USBHS_OTGSC_AVVIE		((uint32_t)0x02000000)
#define USBHS_OTGSC_IDIE		((uint32_t)0x01000000)
#define USBHS_OTGSC_DPIS		((uint32_t)0x00400000)
#define USBHS_OTGSC_MSS			((uint32_t)0x00200000)
#define USBHS_OTGSC_BSEIS		((uint32_t)0x00100000)
#define USBHS_OTGSC_BSVIS		((uint32_t)0x00080000)
#define USBHS_OTGSC_ASVIS		((uint32_t)0x00040000)
#define USBHS_OTGSC_AVVIS		((uint32_t)0x00020000)
#define USBHS_OTGSC_IDIS		((uint32_t)0x00010000)
#define USBHS_OTGSC_DPS			((uint32_t)0x00004000)
#define USBHS_OTGSC_MST			((uint32_t)0x00002000)
#define USBHS_OTGSC_BSE			((uint32_t)0x00001000)
#define USBHS_OTGSC_BSV			((uint32_t)0x00000800)
#define USBHS_OTGSC_ASV			((uint32_t)0x00000400)
#define USBHS_OTGSC_AVV			((uint32_t)0x00000200)
#define USBHS_OTGSC_ID			((uint32_t)0x00000100)
#define USBHS_OTGSC_HABA		((uint32_t)0x00000080)
#define USBHS_OTGSC_IDPU		((uint32_t)0x00000020)
#define USBHS_OTGSC_DP			((uint32_t)0x00000010)
#define USBHS_OTGSC_OT			((uint32_t)0x00000008)
#define USBHS_OTGSC_HAAR		((uint32_t)0x00000004)
#define USBHS_OTGSC_VC			((uint32_t)0x00000002)
#define USBHS_OTGSC_VD			((uint32_t)0x00000001)
#define USBHS_USBMODE		(*(volatile uint32_t *)0x400A11A8) // USB Mode Register
#define USBHS_USBMODE_TXHSD(n)		(uint32_t)(((n) & 0x7) << 12)
#define USBHS_USBMODE_SDIS		((uint32_t)0x00000010)
#define USBHS_USBMODE_SLOM		((uint32_t)0x00000008)
#define USBHS_USBMODE_ES		((uint32_t)0x00000004)
#define USBHS_USBMODE_CM(n)		(uint32_t)(((n) & 0x3) << 0)
#define USBHS_EPSETUPSR		(*(volatile uint32_t *)0x400A11AC) // Endpoint Setup Status Register
#define USBHS_EPPRIME		(*(volatile uint32_t *)0x400A11B0) // Endpoint Initialization Register
#define USBHS_EPFLUSH		(*(volatile uint32_t *)0x400A11B4) // Endpoint Flush Register
#define USBHS_EPSR		(*(volatile uint32_t *)0x400A11B8) // Endpoint Status Register
#define USBHS_EPCOMPLETE	(*(volatile uint32_t *)0x400A11BC) // Endpoint Complete Register
#define USBHS_EPCR0		(*(volatile uint32_t *)0x400A11C0) // Endpoint Control Register 0
#define USBHS_EPCR_TXE			((uint32_t)0x00800000)
#define USBHS_EPCR_TXR			((uint32_t)0x00400000)
#define USBHS_EPCR_TXI			((uint32_t)0x00200000)
#define USBHS_EPCR_TXT(n)		(uint32_t)(((n) & 0x3) << 18)
#define USBHS_EPCR_TXD			((uint32_t)0x00020000)
#define USBHS_EPCR_TXS			((uint32_t)0x00010000)
#define USBHS_EPCR_RXE			((uint32_t)0x00000080)
#define USBHS_EPCR_RXR			((uint32_t)0x00000040)
#define USBHS_EPCR_RXI			((uint32_t)0x00000020)
#define USBHS_EPCR_RXT(n)		(uint32_t)(((n) & 0x3) << 2)
#define USBHS_EPCR_RXD			((uint32_t)0x00000002)
#define USBHS_EPCR_RXS			((uint32_t)0x00000001)
#define USBHS_EPCR1		(*(volatile uint32_t *)0x400A11C4) // Endpoint Control Register 1
#define USBHS_EPCR2		(*(volatile uint32_t *)0x400A11C8) // Endpoint Control Register 2
#define USBHS_EPCR3		(*(volatile uint32_t *)0x400A11CC) // Endpoint Control Register 3
#define USBHS_EPCR4		(*(volatile uint32_t *)0x400A11D0) // Endpoint Control Register 4
#define USBHS_EPCR5		(*(volatile uint32_t *)0x400A11D4) // Endpoint Control Register 5
#define USBHS_EPCR6		(*(volatile uint32_t *)0x400A11D8) // Endpoint Control Register 6
#define USBHS_EPCR7		(*(volatile uint32_t *)0x400A11DC) // Endpoint Control Register 7
#define USBHS_USBGENCTRL	(*(volatile uint32_t *)0x400A1200) // USB General Control Register
#define USBHS_USBGENCTRL_WU_INT_CLR	((uint32_t)0x00000020)
#define USBHS_USBGENCTRL_WU_IE		((uint32_t)0x00000001)


// Universal Serial Bus 2.0 Integrated PHY (USB-PHY)

#define USBPHY_PWD		(*(volatile uint32_t *)0x400A2000) // USB PHY Power-Down Register
#define USBPHY_PWD_RXPWDRX			((uint32_t)0x00100000)
#define USBPHY_PWD_RXPWDDIFF			((uint32_t)0x00080000)
#define USBPHY_PWD_RXPWD1PT1			((uint32_t)0x00040000)
#define USBPHY_PWD_RXPWDENV			((uint32_t)0x00020000)
#define USBPHY_PWD_TXPWDV2I			((uint32_t)0x00001000)
#define USBPHY_PWD_TXPWDIBIAS			((uint32_t)0x00000800)
#define USBPHY_PWD_TXPWDFS			((uint32_t)0x00000400)
#define USBPHY_PWD_SET		(*(volatile uint32_t *)0x400A2004) // USB PHY Power-Down Register
#define USBPHY_PWD_CLR		(*(volatile uint32_t *)0x400A2008) // USB PHY Power-Down Register
#define USBPHY_PWD_TOG		(*(volatile uint32_t *)0x400A200C) // USB PHY Power-Down Register
#define USBPHY_TX		(*(volatile uint32_t *)0x400A2010) // USB PHY Transmitter Control Register
#define USBPHY_TX_SET		(*(volatile uint32_t *)0x400A2014) // USB PHY Transmitter Control Register
#define USBPHY_TX_CLR		(*(volatile uint32_t *)0x400A2018) // USB PHY Transmitter Control Register
#define USBPHY_TX_TOG		(*(volatile uint32_t *)0x400A201C) // USB PHY Transmitter Control Register
#define USBPHY_RX		(*(volatile uint32_t *)0x400A2020) // USB PHY Receiver Control Register
#define USBPHY_RX_SET		(*(volatile uint32_t *)0x400A2024) // USB PHY Receiver Control Register
#define USBPHY_RX_CLR		(*(volatile uint32_t *)0x400A2028) // USB PHY Receiver Control Register
#define USBPHY_RX_TOG		(*(volatile uint32_t *)0x400A202C) // USB PHY Receiver Control Register
#define USBPHY_CTRL		(*(volatile uint32_t *)0x400A2030) // USB PHY General Control Register
#define USBPHY_CTRL_SFTRST			((uint32_t)0x80000000)
#define USBPHY_CTRL_CLKGATE			((uint32_t)0x40000000)
#define USBPHY_CTRL_UTMI_SUSPENDM		((uint32_t)0x20000000)
#define USBPHY_CTRL_HOST_FORCE_LS_SE0		((uint32_t)0x10000000)
#define USBPHY_CTRL_OTG_ID_VALUE		((uint32_t)0x08000000)
#define USBPHY_CTRL_FSDLL_RST_EN		((uint32_t)0x01000000)
#define USBPHY_CTRL_ENAUTOCLR_PHY_PWD		((uint32_t)0x00100000)
#define USBPHY_CTRL_ENAUTOCLR_CLKGATE		((uint32_t)0x00080000)
#define USBPHY_CTRL_AUTORESUME_EN		((uint32_t)0x00040000)
#define USBPHY_CTRL_ENUTMILEVEL3		((uint32_t)0x00008000)
#define USBPHY_CTRL_ENUTMILEVEL2		((uint32_t)0x00004000)
#define USBPHY_CTRL_DEVPLUGIN_IRQ		((uint32_t)0x00001000)
#define USBPHY_CTRL_ENDEVPLUGINDET		((uint32_t)0x00000010)
#define USBPHY_CTRL_HOSTDISCONDETECT_IRQ	((uint32_t)0x00000008)
#define USBPHY_CTRL_ENHOSTDISCONDETECT		((uint32_t)0x00000002)
#define USBPHY_CTRL_SET		(*(volatile uint32_t *)0x400A2034) // USB PHY General Control Register
#define USBPHY_CTRL_CLR		(*(volatile uint32_t *)0x400A2038) // USB PHY General Control Register
#define USBPHY_CTRL_TOG		(*(volatile uint32_t *)0x400A203C) // USB PHY General Control Register
#define USBPHY_STATUS		(*(volatile uint32_t *)0x400A2040) // USB PHY Status Register
#define USBPHY_STATUS_RESUME_STATUS		((uint32_t)0x00000400)
#define USBPHY_STATUS_OTGID_STATUS		((uint32_t)0x00000100)
#define USBPHY_STATUS_DEVPLUGIN_STATUS		((uint32_t)0x00000040)
#define USBPHY_STATUS_HOSTDISCONDETECT_STATUS	((uint32_t)0x00000008)
#define USBPHY_DEBUG		(*(volatile uint32_t *)0x400A2050) // USB PHY Debug Register
#define USBPHY_DEBUG_SET	(*(volatile uint32_t *)0x400A2054) // USB PHY Debug Register
#define USBPHY_DEBUG_CLR	(*(volatile uint32_t *)0x400A2058) // USB PHY Debug Register
#define USBPHY_DEBUG_TOG	(*(volatile uint32_t *)0x400A205C) // USB PHY Debug Register
#define USBPHY_DEBUG0_STATUS	(*(volatile uint32_t *)0x400A2060) // UTMI Debug Status Register 0
#define USBPHY_DEBUG1		(*(volatile uint32_t *)0x400A2070) // UTMI Debug Status Register 1
#define USBPHY_DEBUG1_SET	(*(volatile uint32_t *)0x400A2074) // UTMI Debug Status Register 1
#define USBPHY_DEBUG1_CLR	(*(volatile uint32_t *)0x400A2078) // UTMI Debug Status Register 1
#define USBPHY_DEBUG1_TOG	(*(volatile uint32_t *)0x400A207C) // UTMI Debug Status Register 1
#define USBPHY_VERSION		(*(volatile uint32_t *)0x400A2080) // UTMI RTL Version
#define USBPHY_PLL_SIC		(*(volatile uint32_t *)0x400A20A0) // USB PHY PLL Control/Status Register
#define USBPHY_PLL_SIC_PLL_LOCK			((uint32_t)0x80000000)
#define USBPHY_PLL_SIC_PLL_BYPASS		((uint32_t)0x00010000)
#define USBPHY_PLL_SIC_PLL_ENABLE		((uint32_t)0x00002000)
#define USBPHY_PLL_SIC_PLL_POWER		((uint32_t)0x00001000)
#define USBPHY_PLL_SIC_PLL_HOLD_RING_OFF	((uint32_t)0x00000800)
#define USBPHY_PLL_SIC_PLL_EN_USB_CLKS		((uint32_t)0x00000040)
#define USBPHY_PLL_SIC_PLL_DIV_SEL(n)		(uint32_t)((n) & 3)
#define USBPHY_PLL_SIC_SET	(*(volatile uint32_t *)0x400A20A4) // USB PHY PLL Control/Status Register
#define USBPHY_PLL_SIC_CLR	(*(volatile uint32_t *)0x400A20A8) // USB PHY PLL Control/Status Register
#define USBPHY_PLL_SIC_TOG	(*(volatile uint32_t *)0x400A20AC) // USB PHY PLL Control/Status Register
#define USBPHY_USB1_VBUS_DETECT	(*(volatile uint32_t *)0x400A20C0) // USB PHY VBUS Detect Control Register
#define USBPHY_USB1_VBUS_DETECT_EN_CHARGER_RESISTOR	((uint32_t)0x80000000)
#define USBPHY_USB1_VBUS_DETECT_DISCHARGE_VBUS		((uint32_t)0x04000000)
#define USBPHY_USB1_VBUS_DETECT_PWRUP_CMPS		((uint32_t)0x00100000)
#define USBPHY_USB1_VBUS_DETECT_VBUSVALID_TO_SESSVALID	((uint32_t)0x00040000)
#define USBPHY_USB1_VBUS_DETECT_VBUS_SOURCE_SEL(n)	(uint32_t)(((n) & 3) << 9)
#define USBPHY_USB1_VBUS_DETECT_VBUSVALID_SEL		((uint32_t)0x00000100)
#define USBPHY_USB1_VBUS_DETECT_VBUSVALID_OVERRIDE	((uint32_t)0x00000080)
#define USBPHY_USB1_VBUS_DETECT_AVALID_OVERRIDE		((uint32_t)0x00000040)
#define USBPHY_USB1_VBUS_DETECT_BVALID_OVERRIDE		((uint32_t)0x00000020)
#define USBPHY_USB1_VBUS_DETECT_SESSEND_OVERRIDE	((uint32_t)0x00000010)
#define USBPHY_USB1_VBUS_DETECT_VBUS_OVERRIDE_EN	((uint32_t)0x00000008)
#define USBPHY_USB1_VBUS_DETECT_VBUSVALID_THRESH(n)	((uint32_t)((n) & 7)
#define USBPHY_USB1_VBUS_DETECT_SET	(*(volatile uint32_t *)0x400A20C4) // USB PHY VBUS Detect Control Register
#define USBPHY_USB1_VBUS_DETECT_CLR	(*(volatile uint32_t *)0x400A20C8) // USB PHY VBUS Detect Control Register
#define USBPHY_USB1_VBUS_DETECT_TOG	(*(volatile uint32_t *)0x400A20CC) // USB PHY VBUS Detect Control Register
#define USBPHY_USB1_VBUS_DET_STAT	(*(volatile uint32_t *)0x400A20D0) // USB PHY VBUS Detector Status Register
#define USBPHY_USB1_VBUS_DET_STAT_VBUS_VALID_3V		((uint32_t)0x00000010)
#define USBPHY_USB1_VBUS_DET_STAT_VBUS_VALID		((uint32_t)0x00000008)
#define USBPHY_USB1_VBUS_DET_STAT_AVALID		((uint32_t)0x00000004)
#define USBPHY_USB1_VBUS_DET_STAT_BVALID		((uint32_t)0x00000002)
#define USBPHY_USB1_VBUS_DET_STAT_SESSEND		((uint32_t)0x00000001)
#define USBPHY_USB1_CHRG_DET_STAT	(*(volatile uint32_t *)0x400A20F0) // USB PHY Charger Detect Status Register
#define USBPHY_USB1_CHRG_DET_STAT_SECDET_DCP		((uint32_t)0x00000010)
#define USBPHY_USB1_CHRG_DET_STAT_DP_STATE		((uint32_t)0x00000008)
#define USBPHY_USB1_CHRG_DET_STAT_DM_STATE		((uint32_t)0x00000004)
#define USBPHY_USB1_CHRG_DET_STAT_CHRG_DETECTED		((uint32_t)0x00000002)
#define USBPHY_USB1_CHRG_DET_STAT_PLUG_CONTACT		((uint32_t)0x00000001)
#define USBPHY_ANACTRL		(*(volatile uint32_t *)0x400A2100) // USB PHY Analog Control Register
#define USBPHY_ANACTRL_SET	(*(volatile uint32_t *)0x400A2104) // USB PHY Analog Control Register
#define USBPHY_ANACTRL_CLR	(*(volatile uint32_t *)0x400A2108) // USB PHY Analog Control Register
#define USBPHY_ANACTRL_TOG	(*(volatile uint32_t *)0x400A210C) // USB PHY Analog Control Register
#define USBPHY_USB1_LOOPBACK	(*(volatile uint32_t *)0x400A2110) // USB PHY Loopback Control/Status Register
#define USBPHY_USB1_LOOPBACK_SET	(*(volatile uint32_t *)0x400A2114) // USB PHY Loopback Control/Status Register
#define USBPHY_USB1_LOOPBACK_CLR	(*(volatile uint32_t *)0x400A2118) // USB PHY Loopback Control/Status Register
#define USBPHY_USB1_LOOPBACK_TOG	(*(volatile uint32_t *)0x400A211C) // USB PHY Loopback Control/Status Register
#define USBPHY_USB1_LOOPBACK_HSFSCNT	(*(volatile uint32_t *)0x400A2120) // USB PHY Loopback Packet Number Select Register
#define USBPHY_USB1_LOOPBACK_HSFSCNT_SET	(*(volatile uint32_t *)0x400A2124) // USB PHY Loopback Packet Number Select Register
#define USBPHY_USB1_LOOPBACK_HSFSCNT_CLR	(*(volatile uint32_t *)0x400A2128) // USB PHY Loopback Packet Number Select Register
#define USBPHY_USB1_LOOPBACK_HSFSCNT_TOG	(*(volatile uint32_t *)0x400A212C) // USB PHY Loopback Packet Number Select Register
#define USBPHY_TRIM_OVERRIDE_EN		(*(volatile uint32_t *)0x400A2130) // USB PHY Trim Override Enable Register
#define USBPHY_TRIM_OVERRIDE_EN_SET	(*(volatile uint32_t *)0x400A2134) // USB PHY Trim Override Enable Register
#define USBPHY_TRIM_OVERRIDE_EN_CLR	(*(volatile uint32_t *)0x400A2138) // USB PHY Trim Override Enable Register
#define USBPHY_TRIM_OVERRIDE_EN_TOG	(*(volatile uint32_t *)0x400A213C) // USB PHY Trim Override Enable Register



#endif /* TEENSY32_MK20DX256_USB_H_ */
