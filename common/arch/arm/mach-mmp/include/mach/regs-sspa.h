#ifndef __ASM_ARCH_REGS_SSPA_H
#define __ASM_ARCH_REGS_SSPA_H

/*
 * PXA688 SSPA Serial Port Registers
 */

#define SSPA_RXD			(0x00)
#define SSPA_RXID			(0x04)
#define SSPA_RXCTL			(0x08)
#define SSPA_RXSP			(0x0c)
#define SSPA_RXFIFO_UL		(0x10)
#define SSPA_RXINT_MASK		(0x14)
#define SSPA_RXC			(0x18)
#define SSPA_RXFIFO_NOFS	(0x1c)
#define SSPA_RXFIFO_SIZE	(0x20)

#define SSPA_TXD			(0x80)
#define SSPA_TXID			(0x84)
#define SSPA_TXCTL			(0x88)
#define SSPA_TXSP			(0x8c)
#define SSPA_TXFIFO_LL		(0x90)
#define SSPA_TXINT_MASK		(0x94)
#define SSPA_TXC			(0x98)
#define SSPA_TXFIFO_NOFS	(0x9c)
#define SSPA_TXFIFO_SIZE	(0xa0)

#define SSPA_AUD_CTRL		(0x34)
#define SSPA_AUD_PLL_CTRL0	(0x38)
#define SSPA_AUD_PLL_CTRL1	(0x3c)

/*SSPA CTL Control Register */
#define	SSPA_CTL_XPH		(1 << 31)	/* Read Phase */
/* Transmit Zeros when FIFO Empty */
#define	SSPA_CTL_XFIG		(1 << 15)
/* Audio Sample Justification */
#define	SSPA_CTL_JST		(1 << 3)
/* Transmit Frame Length in Phase 2 */
#define	SSPA_CTL_XFRLEN2(x)		((x) << 24)
/* Transmit Word Length in Phase 2 */
#define	SSPA_CTL_XWDLEN2(x)		((x) << 21)
/* Tansmit Data Delay */
#define	SSPA_CTL_XDATDLY(x)		((x) << 19)
/* Transmit Sample Audio Size */
#define	SSPA_CTL_XSSZ2(x)		((x) << 16)
/* Transmit Frame Length in Phase 1 */
#define	SSPA_CTL_XFRLEN1(x)		((x) << 8)
/* Transmit Word Length in Phase 1 */
#define	SSPA_CTL_XWDLEN1(x)		((x) << 5)
#define	SSPA_CTL_XSSZ1(x)		((x) << 0)	/* XSSZ1 */

/*	SSPA SP Serial Port Control Register */
#define	SSPA_SP_WEN		(1 << 31)	/* Write Configuration Enable */
#define	SSPA_SP_MSL		(1 << 18)	/* Master Slave Configuration */
#define	SSPA_SP_CLKP	(1 << 17)	/* CLKP Polarity Clock Edge Select */
/* FSP Polarity Clock Edge Select */
#define	SSPA_SP_FSP		(1 << 16)
#define	SSPA_SP_FFLUSH	(1 << 2)	/* FIFO Flush */
#define	SSPA_SP_S_RST	(1 << 1)	/* Active High Reset Signal */
#define	SSPA_SP_S_EN	(1 << 0)	/* Serial Clock Domain Enable */
#define	SSPA_SP_FWID(x)		((x) << 20)	/* Frame-Sync Width */
#define	SSPA_TXSP_FPER(x)	((x) << 4)	/* Frame-Sync Active */

#endif /* __ASM_ARCH_REGS_SSPA_H */
