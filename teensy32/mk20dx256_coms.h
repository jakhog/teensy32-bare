/*
 * mk20dx256_coms.h
 *
 *  Created on: 17. feb. 2017
 *      Author: jakobho
 */

#ifndef TEENSY32_MK20DX256_COMS_H_
#define TEENSY32_MK20DX256_COMS_H_

// Carrier Modulator Transmitter (CMT)

#define CMT_CGH1		(*(volatile uint8_t  *)0x40062000) // CMT Carrier Generator High Data Register 1
#define CMT_CGL1		(*(volatile uint8_t  *)0x40062001) // CMT Carrier Generator Low Data Register 1
#define CMT_CGH2		(*(volatile uint8_t  *)0x40062002) // CMT Carrier Generator High Data Register 2
#define CMT_CGL2		(*(volatile uint8_t  *)0x40062003) // CMT Carrier Generator Low Data Register 2
#define CMT_OC			(*(volatile uint8_t  *)0x40062004) // CMT Output Control Register
#define CMT_MSC			(*(volatile uint8_t  *)0x40062005) // CMT Modulator Status and Control Register
#define CMT_CMD1		(*(volatile uint8_t  *)0x40062006) // CMT Modulator Data Register Mark High
#define CMT_CMD2		(*(volatile uint8_t  *)0x40062007) // CMT Modulator Data Register Mark Low
#define CMT_CMD3		(*(volatile uint8_t  *)0x40062008) // CMT Modulator Data Register Space High
#define CMT_CMD4		(*(volatile uint8_t  *)0x40062009) // CMT Modulator Data Register Space Low
#define CMT_PPS			(*(volatile uint8_t  *)0x4006200A) // CMT Primary Prescaler Register
#define CMT_DMA			(*(volatile uint8_t  *)0x4006200B) // CMT Direct Memory Access Register


// 10/100-Mbps Ethernet MAC (ENET)

#define ENET_EIR		(*(volatile uint32_t *)0x400C0004) // Interrupt Event Register
#define ENET_EIR_BABR			((uint32_t)0x40000000)		// Babbling Receive Error
#define ENET_EIR_BABT			((uint32_t)0x20000000)		// Babbling Transmit Error
#define ENET_EIR_GRA			((uint32_t)0x10000000)		// Graceful Stop Complete
#define ENET_EIR_TXF			((uint32_t)0x08000000)		// Transmit Frame Interrupt
#define ENET_EIR_TXB			((uint32_t)0x04000000)		// Transmit Buffer Interrupt
#define ENET_EIR_RXF			((uint32_t)0x02000000)		// Receive Frame Interrupt
#define ENET_EIR_RXB			((uint32_t)0x01000000)		// Receive Buffer Interrupt
#define ENET_EIR_MII			((uint32_t)0x00800000)		// MII Interrupt
#define ENET_EIR_EBERR			((uint32_t)0x00400000)		// Ethernet Bus Error
#define ENET_EIR_LC			((uint32_t)0x00200000)		// Late Collision
#define ENET_EIR_RL			((uint32_t)0x00100000)		// Collision Retry Limit
#define ENET_EIR_UN			((uint32_t)0x00080000)		// Transmit FIFO Underrun
#define ENET_EIR_PLR			((uint32_t)0x00040000)		// Payload Receive Error
#define ENET_EIR_WAKEUP			((uint32_t)0x00020000)		// Node Wakeup Request Indication
#define ENET_EIR_TS_AVAIL		((uint32_t)0x00010000)		// Transmit Timestamp Available
#define ENET_EIR_TS_TIMER		((uint32_t)0x00008000)		// Timestamp Timer
#define ENET_EIMR		(*(volatile uint32_t *)0x400C0008) // Interrupt Mask Register
#define ENET_EIRM_BABR			((uint32_t)0x40000000)		// Babbling Receive Error Mask
#define ENET_EIRM_BABT			((uint32_t)0x20000000)		// Babbling Transmit Error Mask
#define ENET_EIRM_GRA			((uint32_t)0x10000000)		// Graceful Stop Complete Mask
#define ENET_EIRM_TXF			((uint32_t)0x08000000)		// Transmit Frame Interrupt Mask
#define ENET_EIRM_TXB			((uint32_t)0x04000000)		// Transmit Buffer Interrupt Mask
#define ENET_EIRM_RXF			((uint32_t)0x02000000)		// Receive Frame Interrupt Mask
#define ENET_EIRM_RXB			((uint32_t)0x01000000)		// Receive Buffer Interrupt Mask
#define ENET_EIRM_MII			((uint32_t)0x00800000)		// MII Interrupt Mask
#define ENET_EIRM_EBERR			((uint32_t)0x00400000)		// Ethernet Bus Error Mask
#define ENET_EIRM_LC			((uint32_t)0x00200000)		// Late Collision Mask
#define ENET_EIRM_RL			((uint32_t)0x00100000)		// Collision Retry Limit Mask
#define ENET_EIRM_UN			((uint32_t)0x00080000)		// Transmit FIFO Underrun Mask
#define ENET_EIRM_PLR			((uint32_t)0x00040000)		// Payload Receive Error Mask
#define ENET_EIRM_WAKEUP		((uint32_t)0x00020000)		// Node Wakeup Request Indication Mask
#define ENET_EIRM_TS_AVAIL		((uint32_t)0x00010000)		// Transmit Timestamp Available Mask
#define ENET_EIRM_TS_TIMER		((uint32_t)0x00008000)		// Timestamp Timer Mask
#define ENET_RDAR		(*(volatile uint32_t *)0x400C0010) // Receive Descriptor Active Register
#define ENET_RDAR_RDAR			((uint32_t)0x01000000)
#define ENET_TDAR		(*(volatile uint32_t *)0x400C0014) // Transmit Descriptor Active Register
#define ENET_TDAR_TDAR			((uint32_t)0x01000000)
#define ENET_ECR		(*(volatile uint32_t *)0x400C0024) // Ethernet Control Register
#define ENET_ECR_DBSWP			((uint32_t)0x00000100)		// Descriptor Byte Swapping Enable
#define ENET_ECR_STOPEN			((uint32_t)0x00000080)		// STOPEN Signal Control
#define ENET_ECR_DBGEN			((uint32_t)0x00000040)		// Debug Enable
#define ENET_ECR_EN1588			((uint32_t)0x00000010)		// EN1588 Enable
#define ENET_ECR_SLEEP			((uint32_t)0x00000008)		// Sleep Mode Enable
#define ENET_ECR_MAGICEN		((uint32_t)0x00000004)		// Magic Packet Detection Enable
#define ENET_ECR_ETHEREN		((uint32_t)0x00000002)		// Ethernet Enable
#define ENET_ECR_RESET			((uint32_t)0x00000001)		// Ethernet MAC Reset
#define ENET_MMFR		(*(volatile uint32_t *)0x400C0040) // MII Management Frame Register
#define ENET_MMFR_ST(n)			(uint32_t)(((n) & 0x3) << 30)
#define ENET_MMFR_OP(n)			(uint32_t)(((n) & 0x3) << 28)
#define ENET_MMFR_PA(n)			(uint32_t)(((n) & 0x1F) << 23)
#define ENET_MMFR_RA(n)			(uint32_t)(((n) & 0x1F) << 18)
#define ENET_MMFR_TA(n)			(uint32_t)(((n) & 0x3) << 16)
#define ENET_MMFR_DATA(n)		(uint32_t)(((n) & 0xFFFF) << 0)
#define ENET_MMFR_DATA_MASK		((uint32_t)0x0000FFFF)
#define ENET_MSCR		(*(volatile uint32_t *)0x400C0044) // MII Speed Control Register
#define ENET_MSCR_HOLDTIME(n)		(uint32_t)(((n) & 0x7) << 8)
#define ENET_MSCR_DIS_PRE		((uint32_t)0x00000080)
#define ENET_MSCR_MII_SPEED(n)		(uint32_t)(((n) & 0x3F) << 1)
#define ENET_MIBC		(*(volatile uint32_t *)0x400C0064) // MIB Control Register
#define ENET_MIBC_MIB_DIS		((uint32_t)0x80000000)		// Disable MIB Logic
#define ENET_MIBC_MIB_IDLE		((uint32_t)0x40000000)		// MIB Idle
#define ENET_MIBC_MIB_CLEAR		((uint32_t)0x20000000)		// MIB Clear
#define ENET_RCR		(*(volatile uint32_t *)0x400C0084) // Receive Control Register
#define ENET_RCR_GRS			((uint32_t)0x80000000)		// Graceful Receive Stopped
#define ENET_RCR_NLC			((uint32_t)0x40000000)		// Payload Length Check Disable
#define ENET_RCR_MAX_FL(n)		(uint32_t)(((n) & 0x3FFF)<<16)	// Maximum Frame Length
#define ENET_RCR_CFEN			((uint32_t)0x00008000)		// MAC Control Frame Enable
#define ENET_RCR_CRCFWD			((uint32_t)0x00004000)		// Terminate/Forward Received CRC
#define ENET_RCR_PAUFWD			((uint32_t)0x00002000)		// Terminate/Forward Pause Frames
#define ENET_RCR_PADEN			((uint32_t)0x00001000)		// Enable Frame Padding Remove On Receive
#define ENET_RCR_RMII_10T		((uint32_t)0x00000200)		// Enables 10-Mbps mode of the RMII
#define ENET_RCR_RMII_MODE		((uint32_t)0x00000100)		// RMII Mode Enable
#define ENET_RCR_FCE			((uint32_t)0x00000020)		// Flow Control Enable
#define ENET_RCR_BC_REJ			((uint32_t)0x00000010)		// Broadcast Frame Reject
#define ENET_RCR_PROM			((uint32_t)0x00000008)		// Promiscuous Mode
#define ENET_RCR_MII_MODE		((uint32_t)0x00000004)		// Media Independent Interface Mode
#define ENET_RCR_DRT			((uint32_t)0x00000002)		// Disable Receive On Transmit
#define ENET_RCR_LOOP			((uint32_t)0x00000001)		// Internal Loopback
#define ENET_TCR		(*(volatile uint32_t *)0x400C00C4) // Transmit Control Register
#define ENET_TCR_CRCFWD			((uint32_t)0x00000200)		// Forward Frame From Application With CRC
#define ENET_TCR_ADDINS			((uint32_t)0x00000100)		// Set MAC Address On Transmit
#define ENET_TCR_ADDSEL(n)		(uint32_t)(((n) & 0x7)<<5)	// Source MAC Address Select On Transmit
#define ENET_TCR_RFC_PAUSE		((uint32_t)0x00000010)		// Receive Frame Control Pause
#define ENET_TCR_TFC_PAUSE		((uint32_t)0x00000008)		// Transmit Frame Control Pause
#define ENET_TCR_FDEN			((uint32_t)0x00000004)		// Full-Duplex Enable
#define ENET_TCR_GTS			((uint32_t)0x00000001)		// Graceful Transmit Stop
#define ENET_PALR		(*(volatile uint32_t *)0x400C00E4) // Physical Address Lower Register
#define ENET_PAUR		(*(volatile uint32_t *)0x400C00E8) // Physical Address Upper Register
#define ENET_OPD		(*(volatile uint32_t *)0x400C00EC) // Opcode/Pause Duration Register
#define ENET_IAUR		(*(volatile uint32_t *)0x400C0118) // Descriptor Individual Upper Address Register
#define ENET_IALR		(*(volatile uint32_t *)0x400C011C) // Descriptor Individual Lower Address Register
#define ENET_GAUR		(*(volatile uint32_t *)0x400C0120) // Descriptor Group Upper Address Register
#define ENET_GALR		(*(volatile uint32_t *)0x400C0124) // Descriptor Group Lower Address Register
#define ENET_TFWR		(*(volatile uint32_t *)0x400C0144) // Transmit FIFO Watermark Register
#define ENET_TFWR_STRFWD		((uint32_t)0x00000100)		// Store And Forward Enable
#define ENET_TFWR_TFWR(n)		(uint32_t)(((n) & 0x3F)<<0)	// Transmit FIFO Write (X64 bytes)
#define ENET_RDSR		(*(volatile uint32_t *)0x400C0180) // Receive Descriptor Ring Start Register
#define ENET_TDSR		(*(volatile uint32_t *)0x400C0184) // Transmit Buffer Descriptor Ring Start Register
#define ENET_MRBR		(*(volatile uint32_t *)0x400C0188) // Maximum Receive Buffer Size Register
#define ENET_RSFL		(*(volatile uint32_t *)0x400C0190) // Receive FIFO Section Full Threshold
#define ENET_RSEM		(*(volatile uint32_t *)0x400C0194) // Receive FIFO Section Empty Threshold
#define ENET_RSEM_STAT_SECTION_EMPTY(n)	(uint32_t)(((n) & 0x7)<<5)	// RX Status FIFO Section Empty Threshold
#define ENET_RSEM_RX_SECTION_EMPTY(n)	(uint32_t)(((n) & 0x7)<<5)	// Value Of The Receive FIFO Section Empty Threshold
#define ENET_RAEM		(*(volatile uint32_t *)0x400C0198) // Receive FIFO Almost Empty Threshold
#define ENET_RAFL		(*(volatile uint32_t *)0x400C019C) // Receive FIFO Almost Full Threshold
#define ENET_TSEM		(*(volatile uint32_t *)0x400C01A0) // Transmit FIFO Section Empty Threshold
#define ENET_TAEM		(*(volatile uint32_t *)0x400C01A4) // Transmit FIFO Almost Empty Threshold
#define ENET_TAFL		(*(volatile uint32_t *)0x400C01A8) // Transmit FIFO Almost Full Threshold
#define ENET_TIPG		(*(volatile uint32_t *)0x400C01AC) // Transmit Inter-Packet Gap
#define ENET_FTRL		(*(volatile uint32_t *)0x400C01B0) // Frame Truncation Length
#define ENET_TACC		(*(volatile uint32_t *)0x400C01C0) // Transmit Accelerator Function Configuration
#define ENET_TACC_PROCHK		((uint32_t)0x00000010)		// Enables insertion of protocol checksum
#define ENET_TACC_IPCHK			((uint32_t)0x00000008)		// Enables insertion of IP header checksum
#define ENET_TACC_SHIFT16		((uint32_t)0x00000001)		// TX FIFO Shift-16 (align data to 32 bits)
#define ENET_RACC		(*(volatile uint32_t *)0x400C01C4) // Receive Accelerator Function Configuration
#define ENET_RACC_SHIFT16		((uint32_t)0x00000080)		// RX FIFO Shift-16 (align data to 32 bits)
#define ENET_RACC_LINEDIS		((uint32_t)0x00000040)		// Enable Discard Of Frames With MAC Layer Errors
#define ENET_RACC_PRODIS		((uint32_t)0x00000004)		// Enable Discard Of Frames With Wrong Protocol Checksum
#define ENET_RACC_IPDIS			((uint32_t)0x00000002)		// Enable Discard Of Frames With Wrong IPv4 Header Checksum
#define ENET_RACC_PADREM		((uint32_t)0x00000001)		// Enable Padding Removal For Short IP Frames
#define ENET_RMON_T_DROP	(*(volatile uint32_t *)0x400C0200) // Reserved Statistic Register
#define ENET_RMON_T_PACKETS	(*(volatile uint32_t *)0x400C0204) // Tx Packet Count Statistic Register
#define ENET_RMON_T_BC_PKT	(*(volatile uint32_t *)0x400C0208) // Tx Broadcast Packets Statistic Register
#define ENET_RMON_T_MC_PKT	(*(volatile uint32_t *)0x400C020C) // Tx Multicast Packets Statistic Register
#define ENET_RMON_T_CRC_ALIGN	(*(volatile uint32_t *)0x400C0210) // Tx Packets with CRC/Align Error Statistic Register
#define ENET_RMON_T_UNDERSIZE	(*(volatile uint32_t *)0x400C0214) // Tx Packets Less Than Bytes and Good CRC Statistic Register
#define ENET_RMON_T_OVERSIZE	(*(volatile uint32_t *)0x400C0218) // Tx Packets GT MAX_FL bytes and Good CRC Statistic Register
#define ENET_RMON_T_FRAG	(*(volatile uint32_t *)0x400C021C) // Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register
#define ENET_RMON_T_JAB		(*(volatile uint32_t *)0x400C0220) // Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register
#define ENET_RMON_T_COL		(*(volatile uint32_t *)0x400C0224) // Tx Collision Count Statistic Register
#define ENET_RMON_T_P64		(*(volatile uint32_t *)0x400C0228) // Tx 64-Byte Packets Statistic Register
#define ENET_RMON_T_P65TO127	(*(volatile uint32_t *)0x400C022C) // Tx 65- to 127-byte Packets Statistic Register
#define ENET_RMON_T_P128TO255	(*(volatile uint32_t *)0x400C0230) // Tx 128- to 255-byte Packets Statistic Register
#define ENET_RMON_T_P256TO511	(*(volatile uint32_t *)0x400C0234) // Tx 256- to 511-byte Packets Statistic Register
#define ENET_RMON_T_P512TO1023	(*(volatile uint32_t *)0x400C0238) // Tx 512- to 1023-byte Packets Statistic Register
#define ENET_RMON_T_P1024TO2047	(*(volatile uint32_t *)0x400C023C) // Tx 1024- to 2047-byte Packets Statistic Register
#define ENET_RMON_T_P_GTE2048	(*(volatile uint32_t *)0x400C0240) // Tx Packets Greater Than 2048 Bytes Statistic Register
#define ENET_RMON_T_OCTETS	(*(volatile uint32_t *)0x400C0244) // Tx Octets Statistic Register
#define ENET_IEEE_T_DROP	(*(volatile uint32_t *)0x400C0248) // IEEE_T_DROP Reserved Statistic Register
#define ENET_IEEE_T_FRAME_OK	(*(volatile uint32_t *)0x400C024C) // Frames Transmitted OK Statistic Register
#define ENET_IEEE_T_1COL	(*(volatile uint32_t *)0x400C0250) // Frames Transmitted with Single Collision Statistic Register
#define ENET_IEEE_T_MCOL	(*(volatile uint32_t *)0x400C0254) // Frames Transmitted with Multiple Collisions Statistic Register
#define ENET_IEEE_T_DEF		(*(volatile uint32_t *)0x400C0258) // Frames Transmitted after Deferral Delay Statistic Register
#define ENET_IEEE_T_LCOL	(*(volatile uint32_t *)0x400C025C) // Frames Transmitted with Late Collision Statistic Register
#define ENET_IEEE_T_EXCOL	(*(volatile uint32_t *)0x400C0260) // Frames Transmitted with Excessive Collisions Statistic Register
#define ENET_IEEE_T_MACERR	(*(volatile uint32_t *)0x400C0264) // Frames Transmitted with Tx FIFO Underrun Statistic Register
#define ENET_IEEE_T_CSERR	(*(volatile uint32_t *)0x400C0268) // Frames Transmitted with Carrier Sense Error Statistic Register
#define ENET_IEEE_T_SQE		(*(volatile uint32_t *)0x400C026C) // ??
#define ENET_IEEE_T_FDXFC	(*(volatile uint32_t *)0x400C0270) // Flow Control Pause Frames Transmitted Statistic Register
#define ENET_IEEE_T_OCTETS_OK	(*(volatile uint32_t *)0x400C0274) // Octet Count for Frames Transmitted w/o Error Statistic Register
#define ENET_RMON_R_PACKETS	(*(volatile uint32_t *)0x400C0284) // Rx Packet Count Statistic Register
#define ENET_RMON_R_BC_PKT	(*(volatile uint32_t *)0x400C0288) // Rx Broadcast Packets Statistic Register
#define ENET_RMON_R_MC_PKT	(*(volatile uint32_t *)0x400C028C) // Rx Multicast Packets Statistic Register
#define ENET_RMON_R_CRC_ALIGN	(*(volatile uint32_t *)0x400C0290) // Rx Packets with CRC/Align Error Statistic Register
#define ENET_RMON_R_UNDERSIZE	(*(volatile uint32_t *)0x400C0294) // Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register
#define ENET_RMON_R_OVERSIZE	(*(volatile uint32_t *)0x400C0298) // Rx Packets Greater Than MAX_FL and Good CRC Statistic Register
#define ENET_RMON_R_FRAG	(*(volatile uint32_t *)0x400C029C) // Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register
#define ENET_RMON_R_JAB		(*(volatile uint32_t *)0x400C02A0) // Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register
#define ENET_RMON_R_RESVD_0	(*(volatile uint32_t *)0x400C02A4) // Reserved Statistic Register
#define ENET_RMON_R_P64		(*(volatile uint32_t *)0x400C02A8) // Rx 64-Byte Packets Statistic Register
#define ENET_RMON_R_P65TO127	(*(volatile uint32_t *)0x400C02AC) // Rx 65- to 127-Byte Packets Statistic Register
#define ENET_RMON_R_P128TO255	(*(volatile uint32_t *)0x400C02B0) // Rx 128- to 255-Byte Packets Statistic Register
#define ENET_RMON_R_P256TO511	(*(volatile uint32_t *)0x400C02B4) // Rx 256- to 511-Byte Packets Statistic Register
#define ENET_RMON_R_P512TO1023	(*(volatile uint32_t *)0x400C02B8) // Rx 512- to 1023-Byte Packets Statistic Register
#define ENET_RMON_R_P1024TO2047	(*(volatile uint32_t *)0x400C02BC) // Rx 1024- to 2047-Byte Packets Statistic Register
#define ENET_RMON_R_P_GTE2048	(*(volatile uint32_t *)0x400C02C0) // Rx Packets Greater than 2048 Bytes Statistic Register
#define ENET_RMON_R_OCTETS	(*(volatile uint32_t *)0x400C02C4) // Rx Octets Statistic Register
#define ENET_IEEE_R_DROP	(*(volatile uint32_t *)0x400C02C8) // Frames not Counted Correctly Statistic Register
#define ENET_IEEE_R_FRAME_OK	(*(volatile uint32_t *)0x400C02CC) // Frames Received OK Statistic Register
#define ENET_IEEE_R_CRC		(*(volatile uint32_t *)0x400C02D0) // Frames Received with CRC Error Statistic Register
#define ENET_IEEE_R_ALIGN	(*(volatile uint32_t *)0x400C02D4) // Frames Received with Alignment Error Statistic Register
#define ENET_IEEE_R_MACERR	(*(volatile uint32_t *)0x400C02D8) // Receive FIFO Overflow Count Statistic Register
#define ENET_IEEE_R_FDXFC	(*(volatile uint32_t *)0x400C02DC) // Flow Control Pause Frames Received Statistic Register
#define ENET_IEEE_R_OCTETS_OK	(*(volatile uint32_t *)0x400C02E0) // Octet Count for Frames Received without Error Statistic Register
#define ENET_ATCR		(*(volatile uint32_t *)0x400C0400) // Adjustable Timer Control Register
#define ENET_ATCR_SLAVE			((uint32_t)0x00002000)		// Enable Timer Slave Mode
#define ENET_ATCR_CAPTURE		((uint32_t)0x00000800)		// Capture Timer Value
#define ENET_ATCR_RESTART		((uint32_t)0x00000400)		// Reset Timer
#define ENET_ATCR_PINPER		((uint32_t)0x00000080)		// Enables event signal output assertion on period event
#define ENET_ATCR_PEREN			((uint32_t)0x00000010)		// Enable Periodical Event
#define ENET_ATCR_OFFRST		((uint32_t)0x00000008)		// Reset Timer On Offset Event
#define ENET_ATCR_OFFEN			((uint32_t)0x00000004)		// Enable One-Shot Offset Event
#define ENET_ATCR_EN			((uint32_t)0x00000001)		// Enable Timer
#define ENET_ATVR		(*(volatile uint32_t *)0x400C0404) // Timer Value Register
#define ENET_ATOFF		(*(volatile uint32_t *)0x400C0408) // Timer Offset Register
#define ENET_ATPER		(*(volatile uint32_t *)0x400C040C) // Timer Period Register
#define ENET_ATCOR		(*(volatile uint32_t *)0x400C0410) // Timer Correction Register
#define ENET_ATINC		(*(volatile uint32_t *)0x400C0414) // Time-Stamping Clock Period Register
#define ENET_ATINC_INC_CORR(n)		(uint32_t)(((n) & 0x7F)<<8)	// Correction Increment Value
#define ENET_ATINC_INC(n)		(uint32_t)(((n) & 0x7F)<<0)	// Clock Period Of The Timestamping Clock (ts_clk) In Nanoseconds
#define ENET_ATSTMP		(*(volatile uint32_t *)0x400C0418) // Timestamp of Last Transmitted Frame
#define ENET_TGSR		(*(volatile uint32_t *)0x400C0604) // Timer Global Status Register
#define ENET_TGSR_TF3			((uint32_t)0x00000008)		// Timer Flag For Channel 3
#define ENET_TGSR_TF2			((uint32_t)0x00000004)		// Timer Flag For Channel 2
#define ENET_TGSR_TF1			((uint32_t)0x00000002)		// Timer Flag For Channel 1
#define ENET_TGSR_TF0			((uint32_t)0x00000001)		// Timer Flag For Channel 0
#define ENET_TCSR0		(*(volatile uint32_t *)0x400C0608) // Timer Control Status Register
#define ENET_TCSR_TF			((uint32_t)0x00000080)		// Timer Flag
#define ENET_TCSR_TIR			((uint32_t)0x00000040)		// Timer Interrupt Enable
#define ENET_TCSR_TMODE(n)		(uint32_t)(((n) & 0xF)<<2)	// Timer Mode
#define ENET_TCSR_TDRE			((uint32_t)0x00000001)		// Timer DMA Request Enable
#define ENET_TCCR0		(*(volatile uint32_t *)0x400C060C) // Timer Compare Capture Register
#define ENET_TCSR1		(*(volatile uint32_t *)0x400C0610) // Timer Control Status Register
#define ENET_TCCR1		(*(volatile uint32_t *)0x400C0614) // Timer Compare Capture Register
#define ENET_TCSR2		(*(volatile uint32_t *)0x400C0618) // Timer Control Status Register
#define ENET_TCCR2		(*(volatile uint32_t *)0x400C061C) // Timer Compare Capture Register
#define ENET_TCSR3		(*(volatile uint32_t *)0x400C0620) // Timer Control Status Register
#define ENET_TCCR3		(*(volatile uint32_t *)0x400C0624) // Timer Compare Capture Register



// CAN - Controller Area Network (FlexCAN)

#define CAN0_MCR		(*(volatile uint32_t *)0x40024000) // Module Configuration Register
#define CAN0_CTRL1		(*(volatile uint32_t *)0x40024004) // Control 1 register
#define CAN0_TIMER		(*(volatile uint32_t *)0x40024008) // Free Running Timer
#define CAN0_RXMGMASK		(*(volatile uint32_t *)0x40024010) // Rx Mailboxes Global Mask Register
#define CAN0_RX14MASK		(*(volatile uint32_t *)0x40024014) // Rx 14 Mask register
#define CAN0_RX15MASK		(*(volatile uint32_t *)0x40024018) // Rx 15 Mask register
#define CAN0_ECR		(*(volatile uint32_t *)0x4002401C) // Error Counter
#define CAN0_ESR1		(*(volatile uint32_t *)0x40024020) // Error and Status 1 register
#define CAN0_IMASK1		(*(volatile uint32_t *)0x40024028) // Interrupt Masks 1 register
#define CAN0_IFLAG1		(*(volatile uint32_t *)0x40024030) // Interrupt Flags 1 register
#define CAN0_CTRL2		(*(volatile uint32_t *)0x40024034) // Control 2 register
#define CAN0_ESR2		(*(volatile uint32_t *)0x40024038) // Error and Status 2 register
#define CAN0_CRCR		(*(volatile uint32_t *)0x40024044) // CRC Register
#define CAN0_RXFGMASK		(*(volatile uint32_t *)0x40024048) // Rx FIFO Global Mask register
#define CAN0_RXFIR		(*(volatile uint32_t *)0x4002404C) // Rx FIFO Information Register
#define CAN0_RXIMR0		(*(volatile uint32_t *)0x40024880) // Rx Individual Mask Registers
#define CAN0_RXIMR1		(*(volatile uint32_t *)0x40024884) // Rx Individual Mask Registers
#define CAN0_RXIMR2		(*(volatile uint32_t *)0x40024888) // Rx Individual Mask Registers
#define CAN0_RXIMR3		(*(volatile uint32_t *)0x4002488C) // Rx Individual Mask Registers
#define CAN0_RXIMR4		(*(volatile uint32_t *)0x40024890) // Rx Individual Mask Registers
#define CAN0_RXIMR5		(*(volatile uint32_t *)0x40024894) // Rx Individual Mask Registers
#define CAN0_RXIMR6		(*(volatile uint32_t *)0x40024898) // Rx Individual Mask Registers
#define CAN0_RXIMR7		(*(volatile uint32_t *)0x4002489C) // Rx Individual Mask Registers
#define CAN0_RXIMR8		(*(volatile uint32_t *)0x400248A0) // Rx Individual Mask Registers
#define CAN0_RXIMR9		(*(volatile uint32_t *)0x400248A4) // Rx Individual Mask Registers
#define CAN0_RXIMR10		(*(volatile uint32_t *)0x400248A8) // Rx Individual Mask Registers
#define CAN0_RXIMR11		(*(volatile uint32_t *)0x400248AC) // Rx Individual Mask Registers
#define CAN0_RXIMR12		(*(volatile uint32_t *)0x400248B0) // Rx Individual Mask Registers
#define CAN0_RXIMR13		(*(volatile uint32_t *)0x400248B4) // Rx Individual Mask Registers
#define CAN0_RXIMR14		(*(volatile uint32_t *)0x400248B8) // Rx Individual Mask Registers
#define CAN0_RXIMR15		(*(volatile uint32_t *)0x400248BC) // Rx Individual Mask Registers
#define CAN1_MCR		(*(volatile uint32_t *)0x400A4000) // Module Configuration Register
#define CAN1_CTRL1		(*(volatile uint32_t *)0x400A4004) // Control 1 register
#define CAN1_TIMER		(*(volatile uint32_t *)0x400A4008) // Free Running Timer
#define CAN1_RXMGMASK		(*(volatile uint32_t *)0x400A4010) // Rx Mailboxes Global Mask Register
#define CAN1_RX14MASK		(*(volatile uint32_t *)0x400A4014) // Rx 14 Mask register
#define CAN1_RX15MASK		(*(volatile uint32_t *)0x400A4018) // Rx 15 Mask register
#define CAN1_ECR		(*(volatile uint32_t *)0x400A401C) // Error Counter
#define CAN1_ESR1		(*(volatile uint32_t *)0x400A4020) // Error and Status 1 register
#define CAN1_IMASK1		(*(volatile uint32_t *)0x400A4028) // Interrupt Masks 1 register
#define CAN1_IFLAG1		(*(volatile uint32_t *)0x400A4030) // Interrupt Flags 1 register
#define CAN1_CTRL2		(*(volatile uint32_t *)0x400A4034) // Control 2 register
#define CAN1_ESR2		(*(volatile uint32_t *)0x400A4038) // Error and Status 2 register
#define CAN1_CRCR		(*(volatile uint32_t *)0x400A4044) // CRC Register
#define CAN1_RXFGMASK		(*(volatile uint32_t *)0x400A4048) // Rx FIFO Global Mask register
#define CAN1_RXFIR		(*(volatile uint32_t *)0x400A404C) // Rx FIFO Information Register
#define CAN1_RXIMR0		(*(volatile uint32_t *)0x400A4880) // Rx Individual Mask Registers
#define CAN1_RXIMR1		(*(volatile uint32_t *)0x400A4884) // Rx Individual Mask Registers
#define CAN1_RXIMR2		(*(volatile uint32_t *)0x400A4888) // Rx Individual Mask Registers
#define CAN1_RXIMR3		(*(volatile uint32_t *)0x400A488C) // Rx Individual Mask Registers
#define CAN1_RXIMR4		(*(volatile uint32_t *)0x400A4890) // Rx Individual Mask Registers
#define CAN1_RXIMR5		(*(volatile uint32_t *)0x400A4894) // Rx Individual Mask Registers
#define CAN1_RXIMR6		(*(volatile uint32_t *)0x400A4898) // Rx Individual Mask Registers
#define CAN1_RXIMR7		(*(volatile uint32_t *)0x400A489C) // Rx Individual Mask Registers
#define CAN1_RXIMR8		(*(volatile uint32_t *)0x400A48A0) // Rx Individual Mask Registers
#define CAN1_RXIMR9		(*(volatile uint32_t *)0x400A48A4) // Rx Individual Mask Registers
#define CAN1_RXIMR10		(*(volatile uint32_t *)0x400A48A8) // Rx Individual Mask Registers
#define CAN1_RXIMR11		(*(volatile uint32_t *)0x400A48AC) // Rx Individual Mask Registers
#define CAN1_RXIMR12		(*(volatile uint32_t *)0x400A48B0) // Rx Individual Mask Registers
#define CAN1_RXIMR13		(*(volatile uint32_t *)0x400A48B4) // Rx Individual Mask Registers
#define CAN1_RXIMR14		(*(volatile uint32_t *)0x400A48B8) // Rx Individual Mask Registers
#define CAN1_RXIMR15		(*(volatile uint32_t *)0x400A48BC) // Rx Individual Mask Registers


// Synchronous Audio Interface (SAI)

#define I2S0_TCSR		(*(volatile uint32_t *)0x4002F000) // SAI Transmit Control Register
#define I2S_TCSR_TE			((uint32_t)0x80000000)		// Transmitter Enable
#define I2S_TCSR_STOPE			((uint32_t)0x40000000)		// Transmitter Enable in Stop mode
#define I2S_TCSR_DBGE			((uint32_t)0x20000000)		// Transmitter Enable in Debug mode
#define I2S_TCSR_BCE			((uint32_t)0x10000000)		// Bit Clock Enable
#define I2S_TCSR_FR			((uint32_t)0x02000000)		// FIFO Reset
#define I2S_TCSR_SR			((uint32_t)0x01000000)		// Software Reset
#define I2S_TCSR_WSF			((uint32_t)0x00100000)		// Word Start Flag
#define I2S_TCSR_SEF			((uint32_t)0x00080000)		// Sync Error Flag
#define I2S_TCSR_FEF			((uint32_t)0x00040000)		// FIFO Error Flag (underrun)
#define I2S_TCSR_FWF			((uint32_t)0x00020000)		// FIFO Warning Flag (empty)
#define I2S_TCSR_FRF			((uint32_t)0x00010000)		// FIFO Request Flag (Data Ready)
#define I2S_TCSR_WSIE			((uint32_t)0x00001000)		// Word Start Interrupt Enable
#define I2S_TCSR_SEIE			((uint32_t)0x00000800)		// Sync Error Interrupt Enable
#define I2S_TCSR_FEIE			((uint32_t)0x00000400)		// FIFO Error Interrupt Enable
#define I2S_TCSR_FWIE			((uint32_t)0x00000200)		// FIFO Warning Interrupt Enable
#define I2S_TCSR_FRIE			((uint32_t)0x00000100)		// FIFO Request Interrupt Enable
#define I2S_TCSR_FWDE			((uint32_t)0x00000002)		// FIFO Warning DMA Enable
#define I2S_TCSR_FRDE			((uint32_t)0x00000001)		// FIFO Request DMA Enable
#define I2S0_TCR1		(*(volatile uint32_t *)0x4002F004) // SAI Transmit Configuration 1 Register
#define I2S_TCR1_TFW(n)			((uint32_t)n & 0x03)		// Transmit FIFO watermark
#define I2S0_TCR2		(*(volatile uint32_t *)0x4002F008) // SAI Transmit Configuration 2 Register
#define I2S_TCR2_DIV(n)			((uint32_t)n & 0xff)		// Bit clock divide by (DIV+1)*2
#define I2S_TCR2_BCD			((uint32_t)1<<24)		// Bit clock direction
#define I2S_TCR2_BCP			((uint32_t)1<<25)		// Bit clock polarity
#define I2S_TCR2_MSEL(n)		((uint32_t)(n & 3)<<26)		// MCLK select, 0=bus clock, 1=I2S0_MCLK
#define I2S_TCR2_BCI			((uint32_t)1<<28)		// Bit clock input
#define I2S_TCR2_BCS			((uint32_t)1<<29)		// Bit clock swap
#define I2S_TCR2_SYNC(n)		((uint32_t)(n & 3)<<30)		// 0=async 1=sync with receiver
#define I2S0_TCR3		(*(volatile uint32_t *)0x4002F00C) // SAI Transmit Configuration 3 Register
#define I2S_TCR3_WDFL(n)		((uint32_t)n & 0x0f)		// word flag configuration
#define I2S_TCR3_TCE			((uint32_t)0x10000)		// transmit channel enable
#define I2S_TCR3_TCE_2CH		((uint32_t)0x30000)		// transmit 2 channel enable
#define I2S0_TCR4		(*(volatile uint32_t *)0x4002F010) // SAI Transmit Configuration 4 Register
#define I2S_TCR4_FSD			((uint32_t)1)			// Frame Sync Direction
#define I2S_TCR4_FSP			((uint32_t)2)			// Frame Sync Polarity
#define I2S_TCR4_FSE			((uint32_t)8)			// Frame Sync Early
#define I2S_TCR4_MF			((uint32_t)0x10)		// MSB First
#define I2S_TCR4_SYWD(n)		((uint32_t)(n & 0x1f)<<8)	// Sync Width
#define I2S_TCR4_FRSZ(n)		((uint32_t)(n & 0x0f)<<16)	// Frame Size
#define I2S0_TCR5		(*(volatile uint32_t *)0x4002F014) // SAI Transmit Configuration 5 Register
#define I2S_TCR5_FBT(n)			((uint32_t)(n & 0x1f)<<8)	// First Bit Shifted
#define I2S_TCR5_W0W(n)			((uint32_t)(n & 0x1f)<<16)	// Word 0 Width
#define I2S_TCR5_WNW(n)			((uint32_t)(n & 0x1f)<<24)	// Word N Width
#define I2S0_TDR0		(*(volatile uint32_t *)0x4002F020) // SAI Transmit Data Register
#define I2S0_TDR1		(*(volatile uint32_t *)0x4002F024) // SAI Transmit Data Register
#define I2S0_TFR0		(*(volatile uint32_t *)0x4002F040) // SAI Transmit FIFO Register
#define I2S0_TFR1		(*(volatile uint32_t *)0x4002F044) // SAI Transmit FIFO Register
#define I2S_TFR_RFP(n)			((uint32_t)n & 7)		// read FIFO pointer
#define I2S_TFR_WFP(n)			((uint32_t)(n & 7)<<16)		// write FIFO pointer
#define I2S0_TMR		(*(volatile uint32_t *)0x4002F060) // SAI Transmit Mask Register
#define I2S_TMR_TWM(n)			((uint32_t)n & 0xFFFFFFFF)	//
#define I2S0_RCSR		(*(volatile uint32_t *)0x4002F080) // SAI Receive Control Register
#define I2S_RCSR_RE			((uint32_t)0x80000000)		// Receiver Enable
#define I2S_RCSR_STOPE			((uint32_t)0x40000000)		// Receiver Enable in Stop mode
#define I2S_RCSR_DBGE			((uint32_t)0x20000000)		// Receiver Enable in Debug mode
#define I2S_RCSR_BCE			((uint32_t)0x10000000)		// Bit Clock Enable
#define I2S_RCSR_FR			((uint32_t)0x02000000)		// FIFO Reset
#define I2S_RCSR_SR			((uint32_t)0x01000000)		// Software Reset
#define I2S_RCSR_WSF			((uint32_t)0x00100000)		// Word Start Flag
#define I2S_RCSR_SEF			((uint32_t)0x00080000)		// Sync Error Flag
#define I2S_RCSR_FEF			((uint32_t)0x00040000)		// FIFO Error Flag (underrun)
#define I2S_RCSR_FWF			((uint32_t)0x00020000)		// FIFO Warning Flag (empty)
#define I2S_RCSR_FRF			((uint32_t)0x00010000)		// FIFO Request Flag (Data Ready)
#define I2S_RCSR_WSIE			((uint32_t)0x00001000)		// Word Start Interrupt Enable
#define I2S_RCSR_SEIE			((uint32_t)0x00000800)		// Sync Error Interrupt Enable
#define I2S_RCSR_FEIE			((uint32_t)0x00000400)		// FIFO Error Interrupt Enable
#define I2S_RCSR_FWIE			((uint32_t)0x00000200)		// FIFO Warning Interrupt Enable
#define I2S_RCSR_FRIE			((uint32_t)0x00000100)		// FIFO Request Interrupt Enable
#define I2S_RCSR_FWDE			((uint32_t)0x00000002)		// FIFO Warning DMA Enable
#define I2S_RCSR_FRDE			((uint32_t)0x00000001)		// FIFO Request DMA Enable
#define I2S0_RCR1		(*(volatile uint32_t *)0x4002F084) // SAI Receive Configuration 1 Register
#define I2S_RCR1_RFW(n)			((uint32_t)n & 0x03)		// Receive FIFO watermark
#define I2S0_RCR2		(*(volatile uint32_t *)0x4002F088) // SAI Receive Configuration 2 Register
#define I2S_RCR2_DIV(n)			((uint32_t)n & 0xff)		// Bit clock divide by (DIV+1)*2
#define I2S_RCR2_BCD			((uint32_t)1<<24)		// Bit clock direction
#define I2S_RCR2_BCP			((uint32_t)1<<25)		// Bit clock polarity
#define I2S_RCR2_MSEL(n)		((uint32_t)(n & 3)<<26)		// MCLK select, 0=bus clock, 1=I2S0_MCLK
#define I2S_RCR2_BCI			((uint32_t)1<<28)		// Bit clock input
#define I2S_RCR2_BCS			((uint32_t)1<<29)		// Bit clock swap
#define I2S_RCR2_SYNC(n)		((uint32_t)(n & 3)<<30)		// 0=async 1=sync with receiver
#define I2S0_RCR3		(*(volatile uint32_t *)0x4002F08C) // SAI Receive Configuration 3 Register
#define I2S_RCR3_WDFL(n)		((uint32_t)n & 0x0f)		// word flag configuration
#define I2S_RCR3_RCE			((uint32_t)0x10000)		// receive channel enable
#define I2S_RCR3_RCE_2CH		((uint32_t)0x30000)		// receive 2 channel enable
#define I2S0_RCR4		(*(volatile uint32_t *)0x4002F090) // SAI Receive Configuration 4 Register
#define I2S_RCR4_FSD			((uint32_t)1)			// Frame Sync Direction
#define I2S_RCR4_FSP			((uint32_t)2)			// Frame Sync Polarity
#define I2S_RCR4_FSE			((uint32_t)8)			// Frame Sync Early
#define I2S_RCR4_MF			((uint32_t)0x10)		// MSB First
#define I2S_RCR4_SYWD(n)		((uint32_t)(n & 0x1f)<<8)	// Sync Width
#define I2S_RCR4_FRSZ(n)		((uint32_t)(n & 0x0f)<<16)	// Frame Size
#define I2S0_RCR5		(*(volatile uint32_t *)0x4002F094) // SAI Receive Configuration 5 Register
#define I2S_RCR5_FBT(n)			((uint32_t)(n & 0x1f)<<8)	// First Bit Shifted
#define I2S_RCR5_W0W(n)			((uint32_t)(n & 0x1f)<<16)	// Word 0 Width
#define I2S_RCR5_WNW(n)			((uint32_t)(n & 0x1f)<<24)	// Word N Width
#define I2S0_RDR0		(*(volatile uint32_t *)0x4002F0A0) // SAI Receive Data Register
#define I2S0_RDR1		(*(volatile uint32_t *)0x4002F0A4) // SAI Receive Data Register
#define I2S0_RFR0		(*(volatile uint32_t *)0x4002F0C0) // SAI Receive FIFO Register
#define I2S0_RFR1		(*(volatile uint32_t *)0x4002F0C4) // SAI Receive FIFO Register
#define I2S_RFR_RFP(n)			((uint32_t)n & 7)		// read FIFO pointer
#define I2S_RFR_WFP(n)			((uint32_t)(n & 7)<<16)		// write FIFO pointer
#define I2S0_RMR		(*(volatile uint32_t *)0x4002F0E0) // SAI Receive Mask Register
#define I2S_RMR_RWM(n)			((uint32_t)n & 0xFFFFFFFF)	//
#define I2S0_MCR		(*(volatile uint32_t *)0x4002F100) // SAI MCLK Control Register
#define I2S_MCR_DUF			((uint32_t)1<<31)		// Divider Update Flag
#define I2S_MCR_MOE			((uint32_t)1<<30)		// MCLK Output Enable
#define I2S_MCR_MICS(n)			((uint32_t)(n & 3)<<24)		// MCLK Input Clock Select
#define I2S0_MDR		(*(volatile uint32_t *)0x4002F104) // SAI MCLK Divide Register
#define I2S_MDR_FRACT(n)		((uint32_t)(n & 0xff)<<12)	// MCLK Fraction
#define I2S_MDR_DIVIDE(n)		((uint32_t)(n & 0xfff))		// MCLK Divide

#endif /* TEENSY32_MK20DX256_COMS_H_ */
