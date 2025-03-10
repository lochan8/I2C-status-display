/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#ifndef __MACH_ROCKCHIP_RV1106_PM_H
#define __MACH_ROCKCHIP_RV1106_PM_H

#define RV1106_WAKEUP_TO_SYSTEM_RESET	0
#define RV1106_HPMCU_FAST_WKUP_TIMEOUT	2000 /* ms */

#define RV1106_PERIGRF_OFFSET		0x0
#define RV1106_VENCGRF_OFFSET		0x10000
#define RV1106_NPUGRF_OFFSET		0x18000
#define RV1106_PMUGRF_OFFSET		0x20000
#define RV1106_DDRGRF_OFFSET		0x30000
#define RV1106_COREGRF_OFFSET		0x40000
#define RV1106_VIGRF_OFFSET		0x50000
#define RV1106_VOGRF_OFFSET		0x60000

#define RV1106_PERISGRF_OFFSET		0x70000
#define RV1106_VISGRF_OFFSET		0x72000
#define RV1106_NPUSGRF_OFFSET		0x74000
#define RV1106_CORESGRF_OFFSET		0x76000
#define RV1106_VENCSGRF_OFFSET		0x78000
#define RV1106_VOSGRF_OFFSET		0x7a000
#define RV1106_PMUSGRF_OFFSET		0x80000

#define RV1106_GIC_OFFSET		0x1f0000
#define RV1106_HPTIMER_OFFSET		0x2f0000
#define RV1106_PMU_OFFSET		0x300000
#define RV1106_GPIO0_OFFSET		0x380000
#define RV1106_GPIO0IOC_OFFSET		0x388000
#define RV1106_PMUPVTM_OFFSET		0x390000

#define RV1106_PMUCRU_OFFSET		0x3a0000
#define RV1106_CRU_OFFSET		0x3b0000
#define RV1106_PVTPLLCRU_OFFSET		0x3b1000
#define RV1106_PERICRU_OFFSET		0x3b2000
#define RV1106_VICRU_OFFSET		0x3b4000
#define RV1106_NPUCRU_OFFSET		0x3b6000
#define RV1106_CORECRU_OFFSET		0x3b8000
#define RV1106_VENCCRU_OFFSET		0x3ba000
#define RV1106_VOCRU_OFFSET		0x3bc000

#define RV1106_UART2_OFFSET		0x4c0000

#define RV1106_GPIO1_OFFSET		0x530000
#define RV1106_GPIO1IOC_OFFSET		0x538000
#define RV1106_GPIO2_OFFSET		0x540000
#define RV1106_GPIO2IOC_OFFSET		0x548000
#define RV1106_GPIO3_OFFSET		0x550000
#define RV1106_GPIO3IOC_OFFSET		0x558000
#define RV1106_GPIO4_OFFSET		0x560000
#define RV1106_GPIO4IOC_OFFSET		0x568000

#define RV1106_NSTIMER_OFFSET		0x580000
#define RV1106_STIMER_OFFSET		0x590000
#define RV1106_MBOX_OFFSET		0x5c0000
#define RV1106_PMUSRAM_OFFSET		0x670000
#define RV1106_DDRC_OFFSET		0x800000
#define RV1106_FW_DDR_OFFSET		0x900000
#define RV1106_FW_SRAM_OFFSET		0x910000

#define RV1106_DEV_REG_BASE		0xff000000
#define RV1106_DEV_REG_SIZE		0x920000

#define RV1106_PMUSRAM_BASE		\
	(RV1106_DEV_REG_BASE + RV1106_PMUSRAM_OFFSET)

/* cru */
#define RV1106_CRU_PLL_CON(pll_id, i)	((pll_id) * 0x20 + (i) * 4)
#define RV1106_CRU_MODE_CON00		0x280
#define RV1106_CRU_GATE_CON(i)		(0x800 + (i) * 4)
#define RV1106_CRU_GATE_CON_NUM		4
#define RV1106_CRU_GLB_SRST_FST		0xc08
#define RV1106_CRU_GLB_RST_CON		0xc10

#define CRU_PLLCON1_PWRDOWN		BIT(13)
#define CRU_PLLCON1_LOCK_STATUS		BIT(10)

#define RV1106_PMUCRU_GATE_CON(i)	(0x800 + (i) * 4)
#define RV1106_PMUCRU_CLKSEL_CON(i)	(0x300 + (i) * 4)
#define RV1106_PMUCRU_GATE_CON_NUM	3

#define RV1106_PERICRU_GATE_CON(i)	(0x800 + (i) * 4)
#define RV1106_PERICRU_CLKSEL_CON(i)	(0x300 + (i) * 4)
#define RV1106_PERICRU_GATE_CON_NUM	8

#define RV1106_NPUCRU_GATE_CON(i)	(0x800 + (i) * 4)
#define RV1106_NPUCRU_CLKSEL_CON(i)	(0x300 + (i) * 4)
#define RV1106_NPUCRU_GATE_CON_NUM	2

#define RV1106_VENCCRU_GATE_CON(i)	(0x800 + (i) * 4)
#define RV1106_VENCCRU_CLKSEL_CON(i)	(0x300 + (i) * 4)
#define RV1106_VENCCRU_GATE_CON_NUM	3

#define RV1106_VICRU_GATE_CON(i)	(0x800 + (i) * 4)
#define RV1106_VICRU_CLKSEL_CON(i)	(0x300 + (i) * 4)
#define RV1106_VICRU_GATE_CON_NUM	3

#define RV1106_VOCRU_GATE_CON(i)	(0x800 + (i) * 4)
#define RV1106_VOCRU_CLKSEL_CON(i)	(0x300 + (i) * 4)
#define RV1106_VOCRU_GATE_CON_NUM	4

#define RV1106_CORECRU_GATE_CON(i)	(0x800 + (i) * 4)
#define RV1106_COERCRU_CLKSEL_CON(i)	(0x300 + (i) * 4)
#define RV1106_CORECRU_GATE_CON_NUM	2
#define RV1106_COERCRU_SFTRST_CON(i)	(0xa00 + (i) * 4)

/* grf */
#define RV1106_PMUGRF_SOC_CON(i)	((i) * 4)
#define RV1106_PMUGRF_OS_REG(i)		(0x200 + (i) * 4)

#define RV1106_PMUSGRF_SOC_CON(i)	((i) * 4)

#define RV1106_DDRGRF_CON(i)		((i) * 0x4)

#define RV1106_CORESGRF_HPMCU_BOOTADDR		0x44

#define RV1106_COREGRF_CACHE_PERI_ADDR_START	0x24
#define RV1106_COREGRF_CACHE_PERI_ADDR_END	0x28

/* pvmt */
#define RV1106_PVTM_CON(i)		(0x4 + (i) * 4)
#define RV1106_PVTM_INTEN		0x70
#define RV1106_PVTM_INTSTS		0x74
#define RV1106_PVTM_STATUS(i)		(0x80 + (i) * 4)

#define RV1106_PVTM_CALC_CNT		0x200

 /* gpio */
#define RV1106_GPIO_SWPORT_DR_L		0x0000
#define RV1106_GPIO_SWPORT_DR_H		0x0004
#define RV1106_GPIO_SWPORT_DDR_L	0x0008
#define RV1106_GPIO_SWPORT_DDR_H	0x000c
#define RV1106_GPIO_INT_EN_L		0x0010
#define RV1106_GPIO_INT_EN_H		0x0014
#define RV1106_GPIO_INT_MASK_L		0x0018
#define RV1106_GPIO_INT_MASK_H		0x001c
#define RV1106_GPIO_INT_TYPE_L		0x0020
#define RV1106_GPIO_INT_TYPE_H		0x0024
#define RV1106_GPIO_INT_POLARITY_L	0x0028
#define RV1106_GPIO_INT_POLARITY_H	0x002c
#define RV1106_GPIO_INT_BOTHEDGE_L	0x0030
#define RV1106_GPIO_INT_BOTHEDGE_H	0x0034
#define RV1106_GPIO_DEBOUNCE_L		0x0038
#define RV1106_GPIO_DEBOUNCE_H		0x003c
#define RV1106_GPIO_DBCLK_DIV_EN_L	0x0040
#define RV1106_GPIO_DBCLK_DIV_EN_H	0x0044
#define RV1106_GPIO_DBCLK_DIV_CON	0x0048
#define RV1106_GPIO_INT_STATUS		0x0050
#define RV1106_GPIO_INT_RAWSTATUS	0x0058

/* pmu */
#define RV1106_PMU_VERSION		0x000
#define RV1106_PMU_PWR_CON		0x004
#define RV1106_PMU_GLB_POWER_STS	0x008
#define RV1106_PMU_INT_MASK_CON		0x00c
#define RV1106_PMU_WAKEUP_INT_CON	0x010
#define RV1106_PMU_WAKEUP_INT_ST	0x014
#define RV1106_PMU_PMIC_STABLE_CNT	0x024
#define RV1106_PMU_OSC_STABLE_CNT	0x028
#define RV1106_PMU_WAKEUP_RSTCLR_CNT	0x02c
#define RV1106_PMU_PLL_LOCK_CNT		0x030
#define RV1106_PMU_WAKEUP_TIMEOUT_CNT	0x048
#define RV1106_PMU_PWM_SWITCH_CNT	0x04c
#define RV1106_PMU_SCU_PWR_CON		0x080
#define RV1106_PMU_SCU_STS		0x084
#define RV1106_PMU_BIU_IDLE_CON		0x0b0
#define RV1106_PMU_BIU_IDLE_SFTCON	0x0c0
#define RV1106_PMU_BIU_IDLE_ACK		0x0d0
#define RV1106_PMU_BIU_IDLE_ST		0x0d8
#define RV1106_PMU_BIU_AUTO_CON		0x0e0
#define RV1106_PMU_DDR_PWR_CON		0x0f0
#define RV1106_PMU_DDR_PWR_SFTCON	0x0f4
#define RV1106_PMU_DDR_POWER_STS	0x0f8
#define RV1106_PMU_DDR_STS		0x0fC
#define RV1106_PMU_CRU_PWR_CON0		0x120
#define RV1106_PMU_CRU_PWR_CON1		0x140
#define RV1106_PMU_CRU_PWR_SFTCON	0x124
#define RV1106_PMU_CRU_POWER_STS	0x128
#define RV1106_PMU_PLLPD_CON		0x130
#define RV1106_PMU_PLLPD_SFTCON		0x134
#define RV1106_PMU_INFO_TX_CON		0x150
#define RV1106_PMU_SYS_REG(i)		(0x1c0 + (i) * 4)

#define PMU_SUSPEND_MAGIC		0x02468ace
#define PMU_RESUME_MAGIC		0x13579bdf

/* mcu */
#define RV1106_MBOX_B2A_STATUS		0x2c
#define RV1106_MBOX_B2A_CMD_0		0x30

#define RV1106_HPMCU_MBOX_IRQ_AP	33

#define RV1106_HPMCU_BOOT_ADDR		0x40000
#define RV1106_MBOX_CMD_AP_SUSPEND	0x12345600
#define RV1106_MBOX_CMD_AP_RESUME	0x12345601
#define RV1106_SYS_IS_WKUP		0x87654300

#ifndef __ASSEMBLER__
extern unsigned long rkpm_bootdata_cpusp;
extern unsigned long rkpm_bootdata_cpu_code;
extern unsigned long rkpm_bootdata_l2ctlr_f;
extern unsigned long rkpm_bootdata_l2ctlr;
extern unsigned long rkpm_bootdata_ddr_code;
extern unsigned long rkpm_bootdata_ddr_data;
extern unsigned long rv1106_bootram_sz;

void rockchip_slp_cpu_resume(void);
void rv1106_rockchip_slp_cpu_resume(void);

#ifdef CONFIG_PM_SLEEP
void __init rockchip_suspend_init(void);
#else
static inline void rockchip_suspend_init(void)
{
}
#endif

enum rv1106_pwr_con {
	RV1106_PMU_PWRMODE_EN = 0,
	RV1106_PMU_BUS_BYPASS = 4,
	RV1106_PMU_DDR_BYPASS = 5,
	RV1106_PMU_CRU_BYPASS = 7,
};

enum rv1106_int_mask_con {
	RV1106_PMU_GLB_INT_MASK = 0,
};

enum rv1106_wakeup_init_con {
	RV1106_PMU_WAKEUP_CPU_INT_EN = 0,
	RV1106_PMU_WAKEUP_GPIO_INT_EN,
	RV1106_PMU_WAKEUP_SDMMC_EN,
	RV1106_PMU_WAKEUP_SDIO_EN,

	RV1106_PMU_WAKEUP_USBDEV_EN,
	RV1106_PMU_WAKEUP_TIMER_EN,
	RV1106_PMU_WAKEUP_TIMEOUT_EN,
	RV1106_PMU_WAKEUP_SFT_WAKEUP_CFG,
};

enum rv1106_scu_pwr_con {
	RV1106_PMU_SCU_INT_MASK_ENA = 0,
	RV1106_PMU_CPU_INT_MASK_ENA,
	RV1106_PMU_STANDBYWFI_BYPASS,
};

enum rv1106_scu_sts {
	RV1106_PMU_STANDBYWFI,
	RV1106_PMU_STANDBYWFIL2,
};

enum rv1106_biu_idle_con {
	RV1106_PMU_IDLE_REQ_MSCH = 0,
	RV1106_PMU_IDLE_REQ_DDR,
	RV1106_PMU_IDLE_REQ_NPU,
	RV1106_PMU_IDLE_REQ_NPU_ACLK,

	RV1106_PMU_IDLE_REQ_VI,
	RV1106_PMU_IDLE_REQ_VO,
	RV1106_PMU_IDLE_REQ_PERI,
	RV1106_PMU_IDLE_REQ_CRU,

	RV1106_PMU_IDLE_REQ_CPU,
	RV1106_PMU_IDLE_REQ_VENC_COM,
	RV1106_PMU_IDLE_REQ_VEPU,
};

enum rv1106_biu_auto_con {
	RV1106_PMU_AUTO_IDLE_MSCH = 0,
	RV1106_PMU_AUTO_IDLE_DDR,
	RV1106_PMU_AUTO_IDLE_NPU,
	RV1106_PMU_AUTO_IDLE_NPU_ACLK,

	RV1106_PMU_AUTO_IDLE_VI,
	RV1106_PMU_AUTO_IDLE_VO,
	RV1106_PMU_AUTO_IDLE_PERI,
	RV1106_PMU_AUTO_IDLE_CRU,

	RV1106_PMU_AUTO_IDLE_CPU,
	RV1106_PMU_AUTO_IDLE_VENC_COM,
	RV1106_PMU_AUTO_IDLE_VEPU,
};

enum rv1106_ddr_pwr_con {
	RV1106_PMU_DDR_SREF_C_ENA = 0,
	RV1106_PMU_DDRIO_RET_ENA,
	RV1106_PMU_DDRIO_EXIT_ENA,
	RV1106_PMU_DDRCTL_C_AUTO_GATING_ENA,

	RV1106_PMU_MSCH_AUTO_GATING_ENA = 5,
	RV1106_PMU_DDR_SREF_A_ENA,
	RV1106_PMU_DDRCTL_A_AUTO_GATING_ENA,
};

enum rv1106_cru_pwr_con0 {
	RV1106_PMU_ALIVE_32K_ENA = 0,
	RV1106_PMU_OSC_DIS_ENA,
	RV1106_PMU_WAKEUP_RST_ENA,
	RV1106_PMU_INPUT_CLAMP_ENA,

	RV1106_PMU_ALIVE_OSC_ENA,
	RV1106_PMU_POWER_OFF_ENA,
	RV1106_PMU_PWM_SWITCH_ENA,
	RV1106_PMU_GPIO_IOE_ENA,
	RV1106_PMU_PWM_SWITCH_IOUT,
};

enum rv1106_cru_pwr_con1 {
	RV1106_PMU_VI_CLK_SRC_GATE_ENA = 0,
	RV1106_PMU_VO_CLK_SRC_GATE_ENA,
	RV1106_PMU_VENC_CLK_SRC_GATE_ENA,
	RV1106_PMU_NPU_CLK_SRC_GATE_ENA,

	RV1106_PMU_DDR_CLK_SRC_CATE_ENA,
	RV1106_PMU_PERI_CLK_SRC_GATE_ENA,
	RV1106_PMU_CORE_CLK_SRC_GATE_ENA,
	RV1106_PMU_CRU_CLK_SRC_GATE_ENA,
};

enum rv1106_pllpd_con {
	RV1106_PMU_APLL_PD_ENA = 0,
	RV1106_PMU_DPLL_PD_ENA,
	RV1106_PMU_CPLL_PD_ENA,
	RV1106_PMU_GPLL_PD_ENA,
};

enum rv1106_pllid {
	RV1106_APLL_ID = 0,
	RV1106_CPLL_ID,
	RV1106_DPLL_ID,
	RV1106_GPLL_ID,
};

enum pvtm_con0 {
	PVTM_START = 0,
	PVTM_OSC_EN = 1,
	PVTM_OSC_SEL = 2,
	PVTM_RND_SEED_EN = 5,
};

#endif
#endif /* __MACH_ROCKCHIP_RV1106_PM_H */
