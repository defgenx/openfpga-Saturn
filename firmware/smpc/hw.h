/* MMIO of SMPC_SERV (rtl: src/fpga/saturn/Saturn/SMPC_SERV.sv, docs/smpc-serv.md). Word index at 0x40000000. */
#ifndef HW_H
#define HW_H
#include <stdint.h>
typedef uint8_t u8; typedef uint16_t u16; typedef uint32_t u32;
/* s0 = MMIO base, s1 = OREG window (set in start.S; the compiler may not touch them: -ffixed-s0 -ffixed-s1) */
register volatile u32 *mmio asm("s0");
register volatile u32 *oregs asm("s1");
#define MM(i) (mmio[i])
enum {
	R_EV = 0x00,    /* R: event bits, W: clear mask */
	R_TICKS = 0x01, /* R: 24-bit tick counter (4 MHz) */
	R_COM = 0x02,   /* R: COMREG */
	R_IN = 0x03,    /* R: status inputs */
	R_PDR = 0x04,   /* R: PDR1I | PDR2I << 8; W: port TH/TR control */
	R_PINS = 0x05,  /* R: output pins, W: set mask (bits as in PIN_*) */
	R_PCLR = 0x0B,  /* W: clear mask */
	R_TS = 0x0C,    /* R: TICKS[15:0] at the last COMREG write */
	R_SR = 0x06,    /* W: SR */
	R_SF = 0x07,    /* W: SF = bit0 */
	R_RTC = 0x08,   /* R: EXT_RTC[31:0], [63:32]; W 0x08: deadline (bit 24 = arm) */
	R_IREG = 0x10,  /* R: IREG0-6 */
	R_OREG = 0x00   /* W: OREG0-31 through oregs[] (MMIO word 0x20..0x3F) */
};
enum { EV_CMD = 1, EV_VBIN = 2, EV_VBOUT = 4, EV_RTC = 8, EV_I0 = 16, EV_TMR = 32 };
/* R_IN: [3:0] AC, 4 SRES_N, 5 IRQV_N, 7 TIME_SET, 8 IOSEL0, 9 IOSEL1, 10 RESD (RESENAB/RESDISA, in hardware) */
#endif
