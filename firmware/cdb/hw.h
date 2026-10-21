/* MMIO of the HLE CD block (rtl: src/fpga/saturn/Saturn/CD/hle/cdb_hle.sv, docs/cdb-hle.md section 3) */
#ifndef HW_H
#define HW_H
#include <stdint.h>
typedef uint8_t u8; typedef uint16_t u16; typedef uint32_t u32; typedef int32_t s32;

#define MM(i) (*(volatile u32 *)(0x40000000u + ((i) << 2)))
enum {
	R_HIRQ = 0x00, R_HMASK = 0x01, R_CR0 = 0x02, R_RR0 = 0x06, R_RR3 = 0x09, R_EV = 0x0A, R_EVCLR = 0x0B, R_TICKS = 0x0C,
	R_XF_MODE = 0x10, R_XF_A = 0x11, R_XF_B = 0x12, R_XF_CNT = 0x13, R_XF_HCNT = 0x14,
	R_DR_A = 0x18, R_DR_D = 0x19, R_SK_BASE = 0x1C, R_HDR_A = 0x1D, R_HDR_B = 0x1E,
	R_LK_X = 0x20, R_LK_IDX = 0x21, R_LK_CTL = 0x22, R_LK_R0 = 0x23, R_LK_START = 0x24, R_NTR = 0x25, R_TOCEND = 0x26,
	R_PF_FAD = 0x28, R_PF_CTL = 0x29, R_SD_CTL = 0x2A, R_SD_HDR = 0x2B, R_OVR_CLR = 0x2C, R_DBG = 0x3F
};
/* R_EV bits */
enum {
	EV_CMD = 1u << 0, EV_RRD = 1u << 1, EV_SEC = 1u << 2, EV_DCHG = 1u << 3, EV_FEMPTY = 1u << 4, EV_SEG1FREE = 1u << 5,
	EV_XFIDLE = 1u << 6, EV_LKBUSY = 1u << 7, EV_DISC = 1u << 8, EV_PFRDY = 1u << 9, EV_FDBUSY = 1u << 10, EV_ENGBUSY = 1u << 11,
	EV_OVR = 1u << 12, EV_TO = 1u << 13, EV_ARMED = 1u << 14
};
/* R_EVCLR bits */
enum { CLR_CMD = 1, CLR_SEC = 2, CLR_DCHG = 4, CLR_TO = 8 };
#endif
