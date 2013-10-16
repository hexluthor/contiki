#ifndef SFRS_EXT_H
#define SFRS_EXT_H

#define ADM2     (*(volatile unsigned char  *)0xF0010)
#define ADUL     (*(volatile unsigned char  *)0xF0011)
#define ADLL     (*(volatile unsigned char  *)0xF0012)
#define ADTES    (*(volatile unsigned char  *)0xF0013)
#define PU0      (*(volatile unsigned char  *)0xF0030)
#define PU1      (*(volatile unsigned char  *)0xF0031)
#define PU3      (*(volatile unsigned char  *)0xF0033)
#define PU4      (*(volatile unsigned char  *)0xF0034)
#define PU5      (*(volatile unsigned char  *)0xF0035)
#define PU6      (*(volatile unsigned char  *)0xF0036)
#define PU7      (*(volatile unsigned char  *)0xF0037)
#define PU8      (*(volatile unsigned char  *)0xF0038)
#define PU9      (*(volatile unsigned char  *)0xF0039)
#define PU10     (*(volatile unsigned char  *)0xF003A)
#define PU11     (*(volatile unsigned char  *)0xF003B)
#define PU12     (*(volatile unsigned char  *)0xF003C)
#define PU14     (*(volatile unsigned char  *)0xF003E)
#define PIM0     (*(volatile unsigned char  *)0xF0040)
#define PIM1     (*(volatile unsigned char  *)0xF0041)
#define PIM4     (*(volatile unsigned char  *)0xF0044)
#define PIM5     (*(volatile unsigned char  *)0xF0045)
#define PIM8     (*(volatile unsigned char  *)0xF0048)
#define PIM14    (*(volatile unsigned char  *)0xF004E)
#define POM0     (*(volatile unsigned char  *)0xF0050)
#define POM1     (*(volatile unsigned char  *)0xF0051)
#define POM4     (*(volatile unsigned char  *)0xF0054)
#define POM5     (*(volatile unsigned char  *)0xF0055)
#define POM7     (*(volatile unsigned char  *)0xF0057)
#define POM8     (*(volatile unsigned char  *)0xF0058)
#define POM9     (*(volatile unsigned char  *)0xF0059)
#define POM14    (*(volatile unsigned char  *)0xF005E)
#define PMC0     (*(volatile unsigned char  *)0xF0060)
#define PMC3     (*(volatile unsigned char  *)0xF0063)
#define PMC10    (*(volatile unsigned char  *)0xF006A)
#define PMC11    (*(volatile unsigned char  *)0xF006B)
#define PMC12    (*(volatile unsigned char  *)0xF006C)
#define PMC14    (*(volatile unsigned char  *)0xF006E)
#define NFEN0    (*(volatile unsigned char  *)0xF0070)
#define NFEN1    (*(volatile unsigned char  *)0xF0071)
#define NFEN2    (*(volatile unsigned char  *)0xF0072)
#define ISC      (*(volatile unsigned char  *)0xF0073)
#define TIS0     (*(volatile unsigned char  *)0xF0074)
#define ADPC     (*(volatile unsigned char  *)0xF0076)
#define PIOR     (*(volatile unsigned char  *)0xF0077)
#define IAWCTL   (*(volatile unsigned char  *)0xF0078)
#define GDIDIS   (*(volatile unsigned char  *)0xF007D)
#define PRDSEL   (*(volatile unsigned short *)0xF007E)
#define TOOLEN   (*(volatile unsigned char  *)0xF0080)
#define BPAL0    (*(volatile unsigned char  *)0xF0081)
#define BPAH0    (*(volatile unsigned char  *)0xF0082)
#define BPAS0    (*(volatile unsigned char  *)0xF0083)
#define BACDVL0  (*(volatile unsigned char  *)0xF0084)
#define BACDVH0  (*(volatile unsigned char  *)0xF0085)
#define BACDML0  (*(volatile unsigned char  *)0xF0086)
#define BACDMH0  (*(volatile unsigned char  *)0xF0087)
#define MONMOD   (*(volatile unsigned char  *)0xF0088)
#define DFLCTL   (*(volatile unsigned char  *)0xF0090)
#define HIOTRM   (*(volatile unsigned char  *)0xF00A0)
#define BECTL    (*(volatile unsigned char  *)0xF00A1)
#define HOCODIV  (*(volatile unsigned char  *)0xF00A8)
#define TEMPCAL0 (*(volatile unsigned char  *)0xF00AC)
#define TEMPCAL1 (*(volatile unsigned char  *)0xF00AD)
#define TEMPCAL2 (*(volatile unsigned char  *)0xF00AE)
#define TEMPCAL3 (*(volatile unsigned char  *)0xF00AF)
#define FLSEC    (*(volatile unsigned short *)0xF00B0)
#define FLFSWS   (*(volatile unsigned short *)0xF00B2)
#define FLFSWE   (*(volatile unsigned short *)0xF00B4)
#define FSSET    (*(volatile unsigned char  *)0xF00B6)
#define FSSE     (*(volatile unsigned char  *)0xF00B7)
#define FLFADL   (*(volatile unsigned short *)0xF00B8)
#define FLFADH   (*(volatile unsigned char  *)0xF00BA)
#define PFCMD    (*(volatile unsigned char  *)0xF00C0)
#define PFS      (*(volatile unsigned char  *)0xF00C1)
#define FLRL     (*(volatile unsigned short *)0xF00C2)
#define FLRH     (*(volatile unsigned short *)0xF00C4)
#define FLWE     (*(volatile unsigned char  *)0xF00C6)
#define FLRE     (*(volatile unsigned char  *)0xF00C7)
#define FLTMS    (*(volatile unsigned short *)0xF00C8)
#define DFLMC    (*(volatile unsigned short *)0xF00CA)
#define FLMCL    (*(volatile unsigned short *)0xF00CC)
#define FLMCH    (*(volatile unsigned char  *)0xF00CE)
#define FSCTL    (*(volatile unsigned char  *)0xF00CF)
#define ICEADR   (*(volatile unsigned short *)0xF00D0)
#define ICEDAT   (*(volatile unsigned short *)0xF00D2)
#define MDCL     (*(volatile unsigned short *)0xF00E0)
#define MDCH     (*(volatile unsigned short *)0xF00E2)
#define MDUC     (*(volatile unsigned char  *)0xF00E8)
#define PER0     (*(volatile unsigned char  *)0xF00F0)
#define OSMC     (*(volatile unsigned char  *)0xF00F3)
#define RMC      (*(volatile unsigned char  *)0xF00F4)
#define RPECTL   (*(volatile unsigned char  *)0xF00F5)
#define BCDADJ   (*(volatile unsigned char  *)0xF00FE)
#define VECTCTRL (*(volatile unsigned char  *)0xF00FF)
#define SSR00    (*(volatile unsigned short *)0xF0100)
#define SSR00L   (*(volatile unsigned char  *)0xF0100)
#define SSR01    (*(volatile unsigned short *)0xF0102)
#define SSR01L   (*(volatile unsigned char  *)0xF0102)
#define SSR02    (*(volatile unsigned short *)0xF0104)
#define SSR02L   (*(volatile unsigned char  *)0xF0104)
#define SSR03    (*(volatile unsigned short *)0xF0106)
#define SSR03L   (*(volatile unsigned char  *)0xF0106)
#define SIR00    (*(volatile unsigned short *)0xF0108)
#define SIR00L   (*(volatile unsigned char  *)0xF0108)
#define SIR01    (*(volatile unsigned short *)0xF010A)
#define SIR01L   (*(volatile unsigned char  *)0xF010A)
#define SIR02    (*(volatile unsigned short *)0xF010C)
#define SIR02L   (*(volatile unsigned char  *)0xF010C)
#define SIR03    (*(volatile unsigned short *)0xF010E)
#define SIR03L   (*(volatile unsigned char  *)0xF010E)
#define SMR00    (*(volatile unsigned short *)0xF0110)
#define SMR01    (*(volatile unsigned short *)0xF0112)
#define SMR02    (*(volatile unsigned short *)0xF0114)
#define SMR03    (*(volatile unsigned short *)0xF0116)
#define SCR00    (*(volatile unsigned short *)0xF0118)
#define SCR01    (*(volatile unsigned short *)0xF011A)
#define SCR02    (*(volatile unsigned short *)0xF011C)
#define SCR03    (*(volatile unsigned short *)0xF011E)
#define SE0      (*(volatile unsigned short *)0xF0120)
#define SE0L     (*(volatile unsigned char  *)0xF0120)
#define SS0      (*(volatile unsigned short *)0xF0122)
#define SS0L     (*(volatile unsigned char  *)0xF0122)
#define ST0      (*(volatile unsigned short *)0xF0124)
#define ST0L     (*(volatile unsigned char  *)0xF0124)
#define SPS0     (*(volatile unsigned short *)0xF0126)
#define SPS0L    (*(volatile unsigned char  *)0xF0126)
#define SO0      (*(volatile unsigned short *)0xF0128)
#define SOE0     (*(volatile unsigned short *)0xF012A)
#define SOE0L    (*(volatile unsigned char  *)0xF012A)
#define EDR00    (*(volatile unsigned short *)0xF012C)
#define EDR00L   (*(volatile unsigned char  *)0xF012C)
#define EDR01    (*(volatile unsigned short *)0xF012E)
#define EDR01L   (*(volatile unsigned char  *)0xF012E)
#define EDR02    (*(volatile unsigned short *)0xF0130)
#define EDR02L   (*(volatile unsigned char  *)0xF0130)
#define EDR03    (*(volatile unsigned short *)0xF0132)
#define EDR03L   (*(volatile unsigned char  *)0xF0132)
#define SOL0     (*(volatile unsigned short *)0xF0134)
#define SOL0L    (*(volatile unsigned char  *)0xF0134)
#define SSC0     (*(volatile unsigned short *)0xF0138)
#define SSC0L    (*(volatile unsigned char  *)0xF0138)
#define SSR10    (*(volatile unsigned short *)0xF0140)
#define SSR10L   (*(volatile unsigned char  *)0xF0140)
#define SSR11    (*(volatile unsigned short *)0xF0142)
#define SSR11L   (*(volatile unsigned char  *)0xF0142)
#define SSR12    (*(volatile unsigned short *)0xF0144)
#define SSR12L   (*(volatile unsigned char  *)0xF0144)
#define SSR13    (*(volatile unsigned short *)0xF0146)
#define SSR13L   (*(volatile unsigned char  *)0xF0146)
#define SIR10    (*(volatile unsigned short *)0xF0148)
#define SIR10L   (*(volatile unsigned char  *)0xF0148)
#define SIR11    (*(volatile unsigned short *)0xF014A)
#define SIR11L   (*(volatile unsigned char  *)0xF014A)
#define SIR12    (*(volatile unsigned short *)0xF014C)
#define SIR12L   (*(volatile unsigned char  *)0xF014C)
#define SIR13    (*(volatile unsigned short *)0xF014E)
#define SIR13L   (*(volatile unsigned char  *)0xF014E)
#define SMR10    (*(volatile unsigned short *)0xF0150)
#define SMR11    (*(volatile unsigned short *)0xF0152)
#define SMR12    (*(volatile unsigned short *)0xF0154)
#define SMR13    (*(volatile unsigned short *)0xF0156)
#define SCR10    (*(volatile unsigned short *)0xF0158)
#define SCR11    (*(volatile unsigned short *)0xF015A)
#define SCR12    (*(volatile unsigned short *)0xF015C)
#define SCR13    (*(volatile unsigned short *)0xF015E)
#define SE1      (*(volatile unsigned short *)0xF0160)
#define SE1L     (*(volatile unsigned char  *)0xF0160)
#define SS1      (*(volatile unsigned short *)0xF0162)
#define SS1L     (*(volatile unsigned char  *)0xF0162)
#define ST1      (*(volatile unsigned short *)0xF0164)
#define ST1L     (*(volatile unsigned char  *)0xF0164)
#define SPS1     (*(volatile unsigned short *)0xF0166)
#define SPS1L    (*(volatile unsigned char  *)0xF0166)
#define SO1      (*(volatile unsigned short *)0xF0168)
#define SOE1     (*(volatile unsigned short *)0xF016A)
#define SOE1L    (*(volatile unsigned char  *)0xF016A)
#define EDR10    (*(volatile unsigned short *)0xF016C)
#define EDR10L   (*(volatile unsigned char  *)0xF016C)
#define EDR11    (*(volatile unsigned short *)0xF016E)
#define EDR11L   (*(volatile unsigned char  *)0xF016E)
#define EDR12    (*(volatile unsigned short *)0xF0170)
#define EDR12L   (*(volatile unsigned char  *)0xF0170)
#define EDR13    (*(volatile unsigned short *)0xF0172)
#define EDR13L   (*(volatile unsigned char  *)0xF0172)
#define SOL1     (*(volatile unsigned short *)0xF0174)
#define SOL1L    (*(volatile unsigned char  *)0xF0174)
#define SSC1     (*(volatile unsigned short *)0xF0178)
#define SSC1L    (*(volatile unsigned char  *)0xF0178)
#define TCR00    (*(volatile unsigned short *)0xF0180)
#define TCR01    (*(volatile unsigned short *)0xF0182)
#define TCR02    (*(volatile unsigned short *)0xF0184)
#define TCR03    (*(volatile unsigned short *)0xF0186)
#define TCR04    (*(volatile unsigned short *)0xF0188)
#define TCR05    (*(volatile unsigned short *)0xF018A)
#define TCR06    (*(volatile unsigned short *)0xF018C)
#define TCR07    (*(volatile unsigned short *)0xF018E)
#define TMR00    (*(volatile unsigned short *)0xF0190)
#define TMR01    (*(volatile unsigned short *)0xF0192)
#define TMR02    (*(volatile unsigned short *)0xF0194)
#define TMR03    (*(volatile unsigned short *)0xF0196)
#define TMR04    (*(volatile unsigned short *)0xF0198)
#define TMR05    (*(volatile unsigned short *)0xF019A)
#define TMR06    (*(volatile unsigned short *)0xF019C)
#define TMR07    (*(volatile unsigned short *)0xF019E)
#define TSR00    (*(volatile unsigned short *)0xF01A0)
#define TSR00L   (*(volatile unsigned char  *)0xF01A0)
#define TSR01    (*(volatile unsigned short *)0xF01A2)
#define TSR01L   (*(volatile unsigned char  *)0xF01A2)
#define TSR02    (*(volatile unsigned short *)0xF01A4)
#define TSR02L   (*(volatile unsigned char  *)0xF01A4)
#define TSR03    (*(volatile unsigned short *)0xF01A6)
#define TSR03L   (*(volatile unsigned char  *)0xF01A6)
#define TSR04    (*(volatile unsigned short *)0xF01A8)
#define TSR04L   (*(volatile unsigned char  *)0xF01A8)
#define TSR05    (*(volatile unsigned short *)0xF01AA)
#define TSR05L   (*(volatile unsigned char  *)0xF01AA)
#define TSR06    (*(volatile unsigned short *)0xF01AC)
#define TSR06L   (*(volatile unsigned char  *)0xF01AC)
#define TSR07    (*(volatile unsigned short *)0xF01AE)
#define TSR07L   (*(volatile unsigned char  *)0xF01AE)
#define TE0      (*(volatile unsigned short *)0xF01B0)
#define TE0L     (*(volatile unsigned char  *)0xF01B0)
#define TS0      (*(volatile unsigned short *)0xF01B2)
#define TS0L     (*(volatile unsigned char  *)0xF01B2)
#define TT0      (*(volatile unsigned short *)0xF01B4)
#define TT0L     (*(volatile unsigned char  *)0xF01B4)
#define TPS0     (*(volatile unsigned short *)0xF01B6)
#define TO0      (*(volatile unsigned short *)0xF01B8)
#define TO0L     (*(volatile unsigned char  *)0xF01B8)
#define TOE0     (*(volatile unsigned short *)0xF01BA)
#define TOE0L    (*(volatile unsigned char  *)0xF01BA)
#define TOL0     (*(volatile unsigned short *)0xF01BC)
#define TOL0L    (*(volatile unsigned char  *)0xF01BC)
#define TOM0     (*(volatile unsigned short *)0xF01BE)
#define TOM0L    (*(volatile unsigned char  *)0xF01BE)
#define TCR10    (*(volatile unsigned short *)0xF01C0)
#define TCR11    (*(volatile unsigned short *)0xF01C2)
#define TCR12    (*(volatile unsigned short *)0xF01C4)
#define TCR13    (*(volatile unsigned short *)0xF01C6)
#define TCR14    (*(volatile unsigned short *)0xF01C8)
#define TCR15    (*(volatile unsigned short *)0xF01CA)
#define TCR16    (*(volatile unsigned short *)0xF01CC)
#define TCR17    (*(volatile unsigned short *)0xF01CE)
#define TMR10    (*(volatile unsigned short *)0xF01D0)
#define TMR11    (*(volatile unsigned short *)0xF01D2)
#define TMR12    (*(volatile unsigned short *)0xF01D4)
#define TMR13    (*(volatile unsigned short *)0xF01D6)
#define TMR14    (*(volatile unsigned short *)0xF01D8)
#define TMR15    (*(volatile unsigned short *)0xF01DA)
#define TMR16    (*(volatile unsigned short *)0xF01DC)
#define TMR17    (*(volatile unsigned short *)0xF01DE)
#define TSR10    (*(volatile unsigned short *)0xF01E0)
#define TSR10L   (*(volatile unsigned char  *)0xF01E0)
#define TSR11    (*(volatile unsigned short *)0xF01E2)
#define TSR11L   (*(volatile unsigned char  *)0xF01E2)
#define TSR12    (*(volatile unsigned short *)0xF01E4)
#define TSR12L   (*(volatile unsigned char  *)0xF01E4)
#define TSR13    (*(volatile unsigned short *)0xF01E6)
#define TSR13L   (*(volatile unsigned char  *)0xF01E6)
#define TSR14    (*(volatile unsigned short *)0xF01E8)
#define TSR14L   (*(volatile unsigned char  *)0xF01E8)
#define TSR15    (*(volatile unsigned short *)0xF01EA)
#define TSR15L   (*(volatile unsigned char  *)0xF01EA)
#define TSR16    (*(volatile unsigned short *)0xF01EC)
#define TSR16L   (*(volatile unsigned char  *)0xF01EC)
#define TSR17    (*(volatile unsigned short *)0xF01EE)
#define TSR17L   (*(volatile unsigned char  *)0xF01EE)
#define TE1      (*(volatile unsigned short *)0xF01F0)
#define TE1L     (*(volatile unsigned char  *)0xF01F0)
#define TS1      (*(volatile unsigned short *)0xF01F2)
#define TS1L     (*(volatile unsigned char  *)0xF01F2)
#define TT1      (*(volatile unsigned short *)0xF01F4)
#define TT1L     (*(volatile unsigned char  *)0xF01F4)
#define TPS1     (*(volatile unsigned short *)0xF01F6)
#define TO1      (*(volatile unsigned short *)0xF01F8)
#define TO1L     (*(volatile unsigned char  *)0xF01F8)
#define TOE1     (*(volatile unsigned short *)0xF01FA)
#define TOE1L    (*(volatile unsigned char  *)0xF01FA)
#define TOL1     (*(volatile unsigned short *)0xF01FC)
#define TOL1L    (*(volatile unsigned char  *)0xF01FC)
#define TOM1     (*(volatile unsigned short *)0xF01FE)
#define TOM1L    (*(volatile unsigned char  *)0xF01FE)
#define DSA2     (*(volatile unsigned char  *)0xF0200)
#define DSA3     (*(volatile unsigned char  *)0xF0201)
#define DRA2     (*(volatile unsigned short *)0xF0202)
#define DRA2L    (*(volatile unsigned char  *)0xF0202)
#define DRA2H    (*(volatile unsigned char  *)0xF0203)
#define DRA3     (*(volatile unsigned short *)0xF0204)
#define DRA3L    (*(volatile unsigned char  *)0xF0204)
#define DRA3H    (*(volatile unsigned char  *)0xF0205)
#define DBC2     (*(volatile unsigned short *)0xF0206)
#define DBC2L    (*(volatile unsigned char  *)0xF0206)
#define DBC2H    (*(volatile unsigned char  *)0xF0207)
#define DBC3     (*(volatile unsigned short *)0xF0208)
#define DBC3L    (*(volatile unsigned char  *)0xF0208)
#define DBC3H    (*(volatile unsigned char  *)0xF0209)
#define DMC2     (*(volatile unsigned char  *)0xF020A)
#define DMC3     (*(volatile unsigned char  *)0xF020B)
#define DRC2     (*(volatile unsigned char  *)0xF020C)
#define DRC3     (*(volatile unsigned char  *)0xF020D)
#define DWAITALL (*(volatile unsigned char  *)0xF020F)
#define IICCTL00 (*(volatile unsigned char  *)0xF0230)
#define IICCTL01 (*(volatile unsigned char  *)0xF0231)
#define IICWL0   (*(volatile unsigned char  *)0xF0232)
#define IICWH0   (*(volatile unsigned char  *)0xF0233)
#define SVA0     (*(volatile unsigned char  *)0xF0234)
#define IICSE0   (*(volatile unsigned char  *)0xF0235)
#define IICCTL10 (*(volatile unsigned char  *)0xF0238)
#define IICCTL11 (*(volatile unsigned char  *)0xF0239)
#define IICWL1   (*(volatile unsigned char  *)0xF023A)
#define IICWH1   (*(volatile unsigned char  *)0xF023B)
#define SVA1     (*(volatile unsigned char  *)0xF023C)
#define IICSE1   (*(volatile unsigned char  *)0xF023D)
#define CRC0CTL  (*(volatile unsigned char  *)0xF02F0)
#define PGCRCL   (*(volatile unsigned short *)0xF02F2)
#define CRCD     (*(volatile unsigned short *)0xF02FA)


union ADM2union {
	unsigned char  adtyp     : 1;
	unsigned char            : 1;
	unsigned char  awc       : 1;
	unsigned char  adrck     : 1;
};

union ADULunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union ADLLunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union ADTESunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PU0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PU1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PU3union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PU4union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PU5union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PU6union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PU7union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PU8union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PU9union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PU10union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PU11union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PU12union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PU14union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PIM0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PIM1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PIM4union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PIM5union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PIM8union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PIM14union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union POM0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union POM1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union POM4union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union POM5union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union POM7union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union POM8union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union POM9union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union POM14union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PMC0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PMC3union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PMC10union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PMC11union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PMC12union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PMC14union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union NFEN0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union NFEN1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union NFEN2union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union ISCunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TIS0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union ADPCunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PIORunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union IAWCTLunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union GDIDISunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PRDSELunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TOOLENunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union BPAL0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union BPAH0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union BPAS0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union BACDVL0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union BACDVH0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union BACDML0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union BACDMH0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union MONMODunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DFLCTLunion {
	unsigned char  dflen     : 1;
};

union HIOTRMunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union BECTLunion {
	unsigned char  brsam     : 1;
};

union HOCODIVunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TEMPCAL0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TEMPCAL1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TEMPCAL2union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TEMPCAL3union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union FLSECunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union FLFSWSunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union FLFSWEunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union FSSETunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union FSSEunion {
	unsigned char            : 1;
	unsigned char  esqst     : 1;
};

union FLFADLunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union FLFADHunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PFCMDunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PFSunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union FLRLunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union FLRHunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union FLWEunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union FLREunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union FLTMSunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union DFLMCunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union FLMCLunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union FLMCHunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union FSCTLunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union ICEADRunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union ICEDATunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union MDCLunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union MDCHunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union MDUCunion {
	unsigned char  divst     : 1;
	unsigned char  macsf     : 1;
	unsigned char  macof     : 1;
	unsigned char  mdsm      : 1;
	unsigned char            : 1;
	unsigned char  macmode   : 1;
	unsigned char  divmode   : 1;
};

union PER0union {
	unsigned char  tau0en    : 1;
	unsigned char  tau1en    : 1;
	unsigned char  sau0en    : 1;
	unsigned char  sau1en    : 1;
	unsigned char  iica0en   : 1;
	unsigned char  adcen     : 1;
	unsigned char  iica1en   : 1;
	unsigned char  rtcen     : 1;
};

union OSMCunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union RMCunion {
	unsigned char  paenb     : 1;
	unsigned char            : 1;
	unsigned char  wdvol     : 1;
};

union RPECTLunion {
	unsigned char  rpef      : 1;
	unsigned char            : 1;
	unsigned char  rperdis   : 1;
};

union BCDADJunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union VECTCTRLunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SSR00union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SSR00Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SSR01union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SSR01Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SSR02union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SSR02Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SSR03union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SSR03Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SIR00union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SIR00Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SIR01union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SIR01Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SIR02union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SIR02Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SIR03union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SIR03Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SMR00union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SMR01union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SMR02union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SMR03union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SCR00union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SCR01union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SCR02union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SCR03union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SE0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SE0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SS0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SS0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union ST0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union ST0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SPS0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SPS0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SO0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SOE0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SOE0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union EDR00union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union EDR00Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union EDR01union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union EDR01Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union EDR02union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union EDR02Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union EDR03union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union EDR03Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SOL0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SOL0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SSC0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SSC0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SSR10union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SSR10Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SSR11union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SSR11Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SSR12union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SSR12Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SSR13union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SSR13Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SIR10union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SIR10Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SIR11union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SIR11Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SIR12union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SIR12Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SIR13union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SIR13Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SMR10union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SMR11union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SMR12union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SMR13union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SCR10union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SCR11union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SCR12union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SCR13union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SE1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SE1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SS1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SS1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union ST1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union ST1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SPS1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SPS1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SO1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SOE1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SOE1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union EDR10union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union EDR10Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union EDR11union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union EDR11Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union EDR12union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union EDR12Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union EDR13union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union EDR13Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SOL1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SOL1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SSC1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union SSC1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TCR00union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TCR01union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TCR02union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TCR03union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TCR04union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TCR05union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TCR06union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TCR07union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR00union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR01union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR02union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR03union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR04union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR05union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR06union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR07union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR00union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR00Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TSR01union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR01Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TSR02union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR02Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TSR03union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR03Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TSR04union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR04Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TSR05union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR05Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TSR06union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR06Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TSR07union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR07Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TE0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TE0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TS0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TS0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TT0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TT0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TPS0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TO0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TO0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TOE0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TOE0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TOL0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TOL0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TOM0union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TOM0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TCR10union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TCR11union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TCR12union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TCR13union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TCR14union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TCR15union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TCR16union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TCR17union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR10union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR11union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR12union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR13union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR14union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR15union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR16union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TMR17union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR10union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR10Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TSR11union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR11Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TSR12union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR12Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TSR13union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR13Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TSR14union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR14Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TSR15union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR15Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TSR16union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR16Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TSR17union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TSR17Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TE1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TE1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TS1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TS1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TT1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TT1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TPS1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TO1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TO1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TOE1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TOE1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TOL1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TOL1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TOM1union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union TOM1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DSA2union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DSA3union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DRA2union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union DRA2Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DRA2Hunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DRA3union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union DRA3Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DRA3Hunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DBC2union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union DBC2Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DBC2Hunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DBC3union {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union DBC3Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DBC3Hunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DMC2union {
	unsigned char            : 1;
	unsigned char  dwait2    : 1;
	unsigned char  ds2       : 1;
	unsigned char  drs2      : 1;
	unsigned char  stg2      : 1;
};

union DMC3union {
	unsigned char            : 1;
	unsigned char  dwait3    : 1;
	unsigned char  ds3       : 1;
	unsigned char  drs3      : 1;
	unsigned char  stg3      : 1;
};

union DRC2union {
	unsigned char  dst2      : 1;
	unsigned char            : 1;
	unsigned char  den2      : 1;
};

union DRC3union {
	unsigned char  dst3      : 1;
	unsigned char            : 1;
	unsigned char  den3      : 1;
};

union DWAITALLunion {
	unsigned char  dwaitall0 : 1;
	unsigned char            : 1;
	unsigned char  prvari    : 1;
};

union IICCTL00union {
	unsigned char  spt0      : 1;
	unsigned char  stt0      : 1;
	unsigned char  acke0     : 1;
	unsigned char  wtim0     : 1;
	unsigned char  spie0     : 1;
	unsigned char  wrel0     : 1;
	unsigned char  lrel0     : 1;
	unsigned char  iice0     : 1;
};

union IICCTL01union {
	unsigned char  prs0      : 1;
	unsigned char            : 1;
	unsigned char  dfc0      : 1;
	unsigned char  smc0      : 1;
	unsigned char  dad0      : 1;
	unsigned char  cld0      : 1;
	unsigned char            : 1;
	unsigned char  wup0      : 1;
};

union IICWL0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union IICWH0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SVA0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union IICSE0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union IICCTL10union {
	unsigned char  spt1      : 1;
	unsigned char  stt1      : 1;
	unsigned char  acke1     : 1;
	unsigned char  wtim1     : 1;
	unsigned char  spie1     : 1;
	unsigned char  wrel1     : 1;
	unsigned char  lrel1     : 1;
	unsigned char  iice1     : 1;
};

union IICCTL11union {
	unsigned char  prs1      : 1;
	unsigned char            : 1;
	unsigned char  dfc1      : 1;
	unsigned char  smc1      : 1;
	unsigned char  dad1      : 1;
	unsigned char  cld1      : 1;
	unsigned char            : 1;
	unsigned char  wup1      : 1;
};

union IICWL1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union IICWH1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SVA1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union IICSE1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union CRC0CTLunion {
	unsigned char            : 1;
	unsigned char  crc0en    : 1;
};

union PGCRCLunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};

union CRCDunion {
	unsigned short bit0      : 1;
	unsigned short bit1      : 1;
	unsigned short bit2      : 1;
	unsigned short bit3      : 1;
	unsigned short bit4      : 1;
	unsigned short bit5      : 1;
	unsigned short bit6      : 1;
	unsigned short bit7      : 1;
	unsigned short bit8      : 1;
	unsigned short bit9      : 1;
	unsigned short bit10     : 1;
	unsigned short bit11     : 1;
	unsigned short bit12     : 1;
	unsigned short bit13     : 1;
	unsigned short bit14     : 1;
	unsigned short bit15     : 1;
};



#define ADM2bits     (*(volatile union ADM2union    *)0xF0010)
#define ADULbits     (*(volatile union ADULunion    *)0xF0011)
#define ADLLbits     (*(volatile union ADLLunion    *)0xF0012)
#define ADTESbits    (*(volatile union ADTESunion   *)0xF0013)
#define PU0bits      (*(volatile union PU0union     *)0xF0030)
#define PU1bits      (*(volatile union PU1union     *)0xF0031)
#define PU3bits      (*(volatile union PU3union     *)0xF0033)
#define PU4bits      (*(volatile union PU4union     *)0xF0034)
#define PU5bits      (*(volatile union PU5union     *)0xF0035)
#define PU6bits      (*(volatile union PU6union     *)0xF0036)
#define PU7bits      (*(volatile union PU7union     *)0xF0037)
#define PU8bits      (*(volatile union PU8union     *)0xF0038)
#define PU9bits      (*(volatile union PU9union     *)0xF0039)
#define PU10bits     (*(volatile union PU10union    *)0xF003A)
#define PU11bits     (*(volatile union PU11union    *)0xF003B)
#define PU12bits     (*(volatile union PU12union    *)0xF003C)
#define PU14bits     (*(volatile union PU14union    *)0xF003E)
#define PIM0bits     (*(volatile union PIM0union    *)0xF0040)
#define PIM1bits     (*(volatile union PIM1union    *)0xF0041)
#define PIM4bits     (*(volatile union PIM4union    *)0xF0044)
#define PIM5bits     (*(volatile union PIM5union    *)0xF0045)
#define PIM8bits     (*(volatile union PIM8union    *)0xF0048)
#define PIM14bits    (*(volatile union PIM14union   *)0xF004E)
#define POM0bits     (*(volatile union POM0union    *)0xF0050)
#define POM1bits     (*(volatile union POM1union    *)0xF0051)
#define POM4bits     (*(volatile union POM4union    *)0xF0054)
#define POM5bits     (*(volatile union POM5union    *)0xF0055)
#define POM7bits     (*(volatile union POM7union    *)0xF0057)
#define POM8bits     (*(volatile union POM8union    *)0xF0058)
#define POM9bits     (*(volatile union POM9union    *)0xF0059)
#define POM14bits    (*(volatile union POM14union   *)0xF005E)
#define PMC0bits     (*(volatile union PMC0union    *)0xF0060)
#define PMC3bits     (*(volatile union PMC3union    *)0xF0063)
#define PMC10bits    (*(volatile union PMC10union   *)0xF006A)
#define PMC11bits    (*(volatile union PMC11union   *)0xF006B)
#define PMC12bits    (*(volatile union PMC12union   *)0xF006C)
#define PMC14bits    (*(volatile union PMC14union   *)0xF006E)
#define NFEN0bits    (*(volatile union NFEN0union   *)0xF0070)
#define NFEN1bits    (*(volatile union NFEN1union   *)0xF0071)
#define NFEN2bits    (*(volatile union NFEN2union   *)0xF0072)
#define ISCbits      (*(volatile union ISCunion     *)0xF0073)
#define TIS0bits     (*(volatile union TIS0union    *)0xF0074)
#define ADPCbits     (*(volatile union ADPCunion    *)0xF0076)
#define PIORbits     (*(volatile union PIORunion    *)0xF0077)
#define IAWCTLbits   (*(volatile union IAWCTLunion  *)0xF0078)
#define GDIDISbits   (*(volatile union GDIDISunion  *)0xF007D)
#define PRDSELbits   (*(volatile union PRDSELunion  *)0xF007E)
#define TOOLENbits   (*(volatile union TOOLENunion  *)0xF0080)
#define BPAL0bits    (*(volatile union BPAL0union   *)0xF0081)
#define BPAH0bits    (*(volatile union BPAH0union   *)0xF0082)
#define BPAS0bits    (*(volatile union BPAS0union   *)0xF0083)
#define BACDVL0bits  (*(volatile union BACDVL0union *)0xF0084)
#define BACDVH0bits  (*(volatile union BACDVH0union *)0xF0085)
#define BACDML0bits  (*(volatile union BACDML0union *)0xF0086)
#define BACDMH0bits  (*(volatile union BACDMH0union *)0xF0087)
#define MONMODbits   (*(volatile union MONMODunion  *)0xF0088)
#define DFLCTLbits   (*(volatile union DFLCTLunion  *)0xF0090)
#define HIOTRMbits   (*(volatile union HIOTRMunion  *)0xF00A0)
#define BECTLbits    (*(volatile union BECTLunion   *)0xF00A1)
#define HOCODIVbits  (*(volatile union HOCODIVunion *)0xF00A8)
#define TEMPCAL0bits (*(volatile union TEMPCAL0union*)0xF00AC)
#define TEMPCAL1bits (*(volatile union TEMPCAL1union*)0xF00AD)
#define TEMPCAL2bits (*(volatile union TEMPCAL2union*)0xF00AE)
#define TEMPCAL3bits (*(volatile union TEMPCAL3union*)0xF00AF)
#define FLSECbits    (*(volatile union FLSECunion   *)0xF00B0)
#define FLFSWSbits   (*(volatile union FLFSWSunion  *)0xF00B2)
#define FLFSWEbits   (*(volatile union FLFSWEunion  *)0xF00B4)
#define FSSETbits    (*(volatile union FSSETunion   *)0xF00B6)
#define FSSEbits     (*(volatile union FSSEunion    *)0xF00B7)
#define FLFADLbits   (*(volatile union FLFADLunion  *)0xF00B8)
#define FLFADHbits   (*(volatile union FLFADHunion  *)0xF00BA)
#define PFCMDbits    (*(volatile union PFCMDunion   *)0xF00C0)
#define PFSbits      (*(volatile union PFSunion     *)0xF00C1)
#define FLRLbits     (*(volatile union FLRLunion    *)0xF00C2)
#define FLRHbits     (*(volatile union FLRHunion    *)0xF00C4)
#define FLWEbits     (*(volatile union FLWEunion    *)0xF00C6)
#define FLREbits     (*(volatile union FLREunion    *)0xF00C7)
#define FLTMSbits    (*(volatile union FLTMSunion   *)0xF00C8)
#define DFLMCbits    (*(volatile union DFLMCunion   *)0xF00CA)
#define FLMCLbits    (*(volatile union FLMCLunion   *)0xF00CC)
#define FLMCHbits    (*(volatile union FLMCHunion   *)0xF00CE)
#define FSCTLbits    (*(volatile union FSCTLunion   *)0xF00CF)
#define ICEADRbits   (*(volatile union ICEADRunion  *)0xF00D0)
#define ICEDATbits   (*(volatile union ICEDATunion  *)0xF00D2)
#define MDCLbits     (*(volatile union MDCLunion    *)0xF00E0)
#define MDCHbits     (*(volatile union MDCHunion    *)0xF00E2)
#define MDUCbits     (*(volatile union MDUCunion    *)0xF00E8)
#define PER0bits     (*(volatile union PER0union    *)0xF00F0)
#define OSMCbits     (*(volatile union OSMCunion    *)0xF00F3)
#define RMCbits      (*(volatile union RMCunion     *)0xF00F4)
#define RPECTLbits   (*(volatile union RPECTLunion  *)0xF00F5)
#define BCDADJbits   (*(volatile union BCDADJunion  *)0xF00FE)
#define VECTCTRLbits (*(volatile union VECTCTRLunion*)0xF00FF)
#define SSR00bits    (*(volatile union SSR00union   *)0xF0100)
#define SSR00Lbits   (*(volatile union SSR00Lunion  *)0xF0100)
#define SSR01bits    (*(volatile union SSR01union   *)0xF0102)
#define SSR01Lbits   (*(volatile union SSR01Lunion  *)0xF0102)
#define SSR02bits    (*(volatile union SSR02union   *)0xF0104)
#define SSR02Lbits   (*(volatile union SSR02Lunion  *)0xF0104)
#define SSR03bits    (*(volatile union SSR03union   *)0xF0106)
#define SSR03Lbits   (*(volatile union SSR03Lunion  *)0xF0106)
#define SIR00bits    (*(volatile union SIR00union   *)0xF0108)
#define SIR00Lbits   (*(volatile union SIR00Lunion  *)0xF0108)
#define SIR01bits    (*(volatile union SIR01union   *)0xF010A)
#define SIR01Lbits   (*(volatile union SIR01Lunion  *)0xF010A)
#define SIR02bits    (*(volatile union SIR02union   *)0xF010C)
#define SIR02Lbits   (*(volatile union SIR02Lunion  *)0xF010C)
#define SIR03bits    (*(volatile union SIR03union   *)0xF010E)
#define SIR03Lbits   (*(volatile union SIR03Lunion  *)0xF010E)
#define SMR00bits    (*(volatile union SMR00union   *)0xF0110)
#define SMR01bits    (*(volatile union SMR01union   *)0xF0112)
#define SMR02bits    (*(volatile union SMR02union   *)0xF0114)
#define SMR03bits    (*(volatile union SMR03union   *)0xF0116)
#define SCR00bits    (*(volatile union SCR00union   *)0xF0118)
#define SCR01bits    (*(volatile union SCR01union   *)0xF011A)
#define SCR02bits    (*(volatile union SCR02union   *)0xF011C)
#define SCR03bits    (*(volatile union SCR03union   *)0xF011E)
#define SE0bits      (*(volatile union SE0union     *)0xF0120)
#define SE0Lbits     (*(volatile union SE0Lunion    *)0xF0120)
#define SS0bits      (*(volatile union SS0union     *)0xF0122)
#define SS0Lbits     (*(volatile union SS0Lunion    *)0xF0122)
#define ST0bits      (*(volatile union ST0union     *)0xF0124)
#define ST0Lbits     (*(volatile union ST0Lunion    *)0xF0124)
#define SPS0bits     (*(volatile union SPS0union    *)0xF0126)
#define SPS0Lbits    (*(volatile union SPS0Lunion   *)0xF0126)
#define SO0bits      (*(volatile union SO0union     *)0xF0128)
#define SOE0bits     (*(volatile union SOE0union    *)0xF012A)
#define SOE0Lbits    (*(volatile union SOE0Lunion   *)0xF012A)
#define EDR00bits    (*(volatile union EDR00union   *)0xF012C)
#define EDR00Lbits   (*(volatile union EDR00Lunion  *)0xF012C)
#define EDR01bits    (*(volatile union EDR01union   *)0xF012E)
#define EDR01Lbits   (*(volatile union EDR01Lunion  *)0xF012E)
#define EDR02bits    (*(volatile union EDR02union   *)0xF0130)
#define EDR02Lbits   (*(volatile union EDR02Lunion  *)0xF0130)
#define EDR03bits    (*(volatile union EDR03union   *)0xF0132)
#define EDR03Lbits   (*(volatile union EDR03Lunion  *)0xF0132)
#define SOL0bits     (*(volatile union SOL0union    *)0xF0134)
#define SOL0Lbits    (*(volatile union SOL0Lunion   *)0xF0134)
#define SSC0bits     (*(volatile union SSC0union    *)0xF0138)
#define SSC0Lbits    (*(volatile union SSC0Lunion   *)0xF0138)
#define SSR10bits    (*(volatile union SSR10union   *)0xF0140)
#define SSR10Lbits   (*(volatile union SSR10Lunion  *)0xF0140)
#define SSR11bits    (*(volatile union SSR11union   *)0xF0142)
#define SSR11Lbits   (*(volatile union SSR11Lunion  *)0xF0142)
#define SSR12bits    (*(volatile union SSR12union   *)0xF0144)
#define SSR12Lbits   (*(volatile union SSR12Lunion  *)0xF0144)
#define SSR13bits    (*(volatile union SSR13union   *)0xF0146)
#define SSR13Lbits   (*(volatile union SSR13Lunion  *)0xF0146)
#define SIR10bits    (*(volatile union SIR10union   *)0xF0148)
#define SIR10Lbits   (*(volatile union SIR10Lunion  *)0xF0148)
#define SIR11bits    (*(volatile union SIR11union   *)0xF014A)
#define SIR11Lbits   (*(volatile union SIR11Lunion  *)0xF014A)
#define SIR12bits    (*(volatile union SIR12union   *)0xF014C)
#define SIR12Lbits   (*(volatile union SIR12Lunion  *)0xF014C)
#define SIR13bits    (*(volatile union SIR13union   *)0xF014E)
#define SIR13Lbits   (*(volatile union SIR13Lunion  *)0xF014E)
#define SMR10bits    (*(volatile union SMR10union   *)0xF0150)
#define SMR11bits    (*(volatile union SMR11union   *)0xF0152)
#define SMR12bits    (*(volatile union SMR12union   *)0xF0154)
#define SMR13bits    (*(volatile union SMR13union   *)0xF0156)
#define SCR10bits    (*(volatile union SCR10union   *)0xF0158)
#define SCR11bits    (*(volatile union SCR11union   *)0xF015A)
#define SCR12bits    (*(volatile union SCR12union   *)0xF015C)
#define SCR13bits    (*(volatile union SCR13union   *)0xF015E)
#define SE1bits      (*(volatile union SE1union     *)0xF0160)
#define SE1Lbits     (*(volatile union SE1Lunion    *)0xF0160)
#define SS1bits      (*(volatile union SS1union     *)0xF0162)
#define SS1Lbits     (*(volatile union SS1Lunion    *)0xF0162)
#define ST1bits      (*(volatile union ST1union     *)0xF0164)
#define ST1Lbits     (*(volatile union ST1Lunion    *)0xF0164)
#define SPS1bits     (*(volatile union SPS1union    *)0xF0166)
#define SPS1Lbits    (*(volatile union SPS1Lunion   *)0xF0166)
#define SO1bits      (*(volatile union SO1union     *)0xF0168)
#define SOE1bits     (*(volatile union SOE1union    *)0xF016A)
#define SOE1Lbits    (*(volatile union SOE1Lunion   *)0xF016A)
#define EDR10bits    (*(volatile union EDR10union   *)0xF016C)
#define EDR10Lbits   (*(volatile union EDR10Lunion  *)0xF016C)
#define EDR11bits    (*(volatile union EDR11union   *)0xF016E)
#define EDR11Lbits   (*(volatile union EDR11Lunion  *)0xF016E)
#define EDR12bits    (*(volatile union EDR12union   *)0xF0170)
#define EDR12Lbits   (*(volatile union EDR12Lunion  *)0xF0170)
#define EDR13bits    (*(volatile union EDR13union   *)0xF0172)
#define EDR13Lbits   (*(volatile union EDR13Lunion  *)0xF0172)
#define SOL1bits     (*(volatile union SOL1union    *)0xF0174)
#define SOL1Lbits    (*(volatile union SOL1Lunion   *)0xF0174)
#define SSC1bits     (*(volatile union SSC1union    *)0xF0178)
#define SSC1Lbits    (*(volatile union SSC1Lunion   *)0xF0178)
#define TCR00bits    (*(volatile union TCR00union   *)0xF0180)
#define TCR01bits    (*(volatile union TCR01union   *)0xF0182)
#define TCR02bits    (*(volatile union TCR02union   *)0xF0184)
#define TCR03bits    (*(volatile union TCR03union   *)0xF0186)
#define TCR04bits    (*(volatile union TCR04union   *)0xF0188)
#define TCR05bits    (*(volatile union TCR05union   *)0xF018A)
#define TCR06bits    (*(volatile union TCR06union   *)0xF018C)
#define TCR07bits    (*(volatile union TCR07union   *)0xF018E)
#define TMR00bits    (*(volatile union TMR00union   *)0xF0190)
#define TMR01bits    (*(volatile union TMR01union   *)0xF0192)
#define TMR02bits    (*(volatile union TMR02union   *)0xF0194)
#define TMR03bits    (*(volatile union TMR03union   *)0xF0196)
#define TMR04bits    (*(volatile union TMR04union   *)0xF0198)
#define TMR05bits    (*(volatile union TMR05union   *)0xF019A)
#define TMR06bits    (*(volatile union TMR06union   *)0xF019C)
#define TMR07bits    (*(volatile union TMR07union   *)0xF019E)
#define TSR00bits    (*(volatile union TSR00union   *)0xF01A0)
#define TSR00Lbits   (*(volatile union TSR00Lunion  *)0xF01A0)
#define TSR01bits    (*(volatile union TSR01union   *)0xF01A2)
#define TSR01Lbits   (*(volatile union TSR01Lunion  *)0xF01A2)
#define TSR02bits    (*(volatile union TSR02union   *)0xF01A4)
#define TSR02Lbits   (*(volatile union TSR02Lunion  *)0xF01A4)
#define TSR03bits    (*(volatile union TSR03union   *)0xF01A6)
#define TSR03Lbits   (*(volatile union TSR03Lunion  *)0xF01A6)
#define TSR04bits    (*(volatile union TSR04union   *)0xF01A8)
#define TSR04Lbits   (*(volatile union TSR04Lunion  *)0xF01A8)
#define TSR05bits    (*(volatile union TSR05union   *)0xF01AA)
#define TSR05Lbits   (*(volatile union TSR05Lunion  *)0xF01AA)
#define TSR06bits    (*(volatile union TSR06union   *)0xF01AC)
#define TSR06Lbits   (*(volatile union TSR06Lunion  *)0xF01AC)
#define TSR07bits    (*(volatile union TSR07union   *)0xF01AE)
#define TSR07Lbits   (*(volatile union TSR07Lunion  *)0xF01AE)
#define TE0bits      (*(volatile union TE0union     *)0xF01B0)
#define TE0Lbits     (*(volatile union TE0Lunion    *)0xF01B0)
#define TS0bits      (*(volatile union TS0union     *)0xF01B2)
#define TS0Lbits     (*(volatile union TS0Lunion    *)0xF01B2)
#define TT0bits      (*(volatile union TT0union     *)0xF01B4)
#define TT0Lbits     (*(volatile union TT0Lunion    *)0xF01B4)
#define TPS0bits     (*(volatile union TPS0union    *)0xF01B6)
#define TO0bits      (*(volatile union TO0union     *)0xF01B8)
#define TO0Lbits     (*(volatile union TO0Lunion    *)0xF01B8)
#define TOE0bits     (*(volatile union TOE0union    *)0xF01BA)
#define TOE0Lbits    (*(volatile union TOE0Lunion   *)0xF01BA)
#define TOL0bits     (*(volatile union TOL0union    *)0xF01BC)
#define TOL0Lbits    (*(volatile union TOL0Lunion   *)0xF01BC)
#define TOM0bits     (*(volatile union TOM0union    *)0xF01BE)
#define TOM0Lbits    (*(volatile union TOM0Lunion   *)0xF01BE)
#define TCR10bits    (*(volatile union TCR10union   *)0xF01C0)
#define TCR11bits    (*(volatile union TCR11union   *)0xF01C2)
#define TCR12bits    (*(volatile union TCR12union   *)0xF01C4)
#define TCR13bits    (*(volatile union TCR13union   *)0xF01C6)
#define TCR14bits    (*(volatile union TCR14union   *)0xF01C8)
#define TCR15bits    (*(volatile union TCR15union   *)0xF01CA)
#define TCR16bits    (*(volatile union TCR16union   *)0xF01CC)
#define TCR17bits    (*(volatile union TCR17union   *)0xF01CE)
#define TMR10bits    (*(volatile union TMR10union   *)0xF01D0)
#define TMR11bits    (*(volatile union TMR11union   *)0xF01D2)
#define TMR12bits    (*(volatile union TMR12union   *)0xF01D4)
#define TMR13bits    (*(volatile union TMR13union   *)0xF01D6)
#define TMR14bits    (*(volatile union TMR14union   *)0xF01D8)
#define TMR15bits    (*(volatile union TMR15union   *)0xF01DA)
#define TMR16bits    (*(volatile union TMR16union   *)0xF01DC)
#define TMR17bits    (*(volatile union TMR17union   *)0xF01DE)
#define TSR10bits    (*(volatile union TSR10union   *)0xF01E0)
#define TSR10Lbits   (*(volatile union TSR10Lunion  *)0xF01E0)
#define TSR11bits    (*(volatile union TSR11union   *)0xF01E2)
#define TSR11Lbits   (*(volatile union TSR11Lunion  *)0xF01E2)
#define TSR12bits    (*(volatile union TSR12union   *)0xF01E4)
#define TSR12Lbits   (*(volatile union TSR12Lunion  *)0xF01E4)
#define TSR13bits    (*(volatile union TSR13union   *)0xF01E6)
#define TSR13Lbits   (*(volatile union TSR13Lunion  *)0xF01E6)
#define TSR14bits    (*(volatile union TSR14union   *)0xF01E8)
#define TSR14Lbits   (*(volatile union TSR14Lunion  *)0xF01E8)
#define TSR15bits    (*(volatile union TSR15union   *)0xF01EA)
#define TSR15Lbits   (*(volatile union TSR15Lunion  *)0xF01EA)
#define TSR16bits    (*(volatile union TSR16union   *)0xF01EC)
#define TSR16Lbits   (*(volatile union TSR16Lunion  *)0xF01EC)
#define TSR17bits    (*(volatile union TSR17union   *)0xF01EE)
#define TSR17Lbits   (*(volatile union TSR17Lunion  *)0xF01EE)
#define TE1bits      (*(volatile union TE1union     *)0xF01F0)
#define TE1Lbits     (*(volatile union TE1Lunion    *)0xF01F0)
#define TS1bits      (*(volatile union TS1union     *)0xF01F2)
#define TS1Lbits     (*(volatile union TS1Lunion    *)0xF01F2)
#define TT1bits      (*(volatile union TT1union     *)0xF01F4)
#define TT1Lbits     (*(volatile union TT1Lunion    *)0xF01F4)
#define TPS1bits     (*(volatile union TPS1union    *)0xF01F6)
#define TO1bits      (*(volatile union TO1union     *)0xF01F8)
#define TO1Lbits     (*(volatile union TO1Lunion    *)0xF01F8)
#define TOE1bits     (*(volatile union TOE1union    *)0xF01FA)
#define TOE1Lbits    (*(volatile union TOE1Lunion   *)0xF01FA)
#define TOL1bits     (*(volatile union TOL1union    *)0xF01FC)
#define TOL1Lbits    (*(volatile union TOL1Lunion   *)0xF01FC)
#define TOM1bits     (*(volatile union TOM1union    *)0xF01FE)
#define TOM1Lbits    (*(volatile union TOM1Lunion   *)0xF01FE)
#define DSA2bits     (*(volatile union DSA2union    *)0xF0200)
#define DSA3bits     (*(volatile union DSA3union    *)0xF0201)
#define DRA2bits     (*(volatile union DRA2union    *)0xF0202)
#define DRA2Lbits    (*(volatile union DRA2Lunion   *)0xF0202)
#define DRA2Hbits    (*(volatile union DRA2Hunion   *)0xF0203)
#define DRA3bits     (*(volatile union DRA3union    *)0xF0204)
#define DRA3Lbits    (*(volatile union DRA3Lunion   *)0xF0204)
#define DRA3Hbits    (*(volatile union DRA3Hunion   *)0xF0205)
#define DBC2bits     (*(volatile union DBC2union    *)0xF0206)
#define DBC2Lbits    (*(volatile union DBC2Lunion   *)0xF0206)
#define DBC2Hbits    (*(volatile union DBC2Hunion   *)0xF0207)
#define DBC3bits     (*(volatile union DBC3union    *)0xF0208)
#define DBC3Lbits    (*(volatile union DBC3Lunion   *)0xF0208)
#define DBC3Hbits    (*(volatile union DBC3Hunion   *)0xF0209)
#define DMC2bits     (*(volatile union DMC2union    *)0xF020A)
#define DMC3bits     (*(volatile union DMC3union    *)0xF020B)
#define DRC2bits     (*(volatile union DRC2union    *)0xF020C)
#define DRC3bits     (*(volatile union DRC3union    *)0xF020D)
#define DWAITALLbits (*(volatile union DWAITALLunion*)0xF020F)
#define IICCTL00bits (*(volatile union IICCTL00union*)0xF0230)
#define IICCTL01bits (*(volatile union IICCTL01union*)0xF0231)
#define IICWL0bits   (*(volatile union IICWL0union  *)0xF0232)
#define IICWH0bits   (*(volatile union IICWH0union  *)0xF0233)
#define SVA0bits     (*(volatile union SVA0union    *)0xF0234)
#define IICSE0bits   (*(volatile union IICSE0union  *)0xF0235)
#define IICCTL10bits (*(volatile union IICCTL10union*)0xF0238)
#define IICCTL11bits (*(volatile union IICCTL11union*)0xF0239)
#define IICWL1bits   (*(volatile union IICWL1union  *)0xF023A)
#define IICWH1bits   (*(volatile union IICWH1union  *)0xF023B)
#define SVA1bits     (*(volatile union SVA1union    *)0xF023C)
#define IICSE1bits   (*(volatile union IICSE1union  *)0xF023D)
#define CRC0CTLbits  (*(volatile union CRC0CTLunion *)0xF02F0)
#define PGCRCLbits   (*(volatile union PGCRCLunion  *)0xF02F2)
#define CRCDbits     (*(volatile union CRCDunion    *)0xF02FA)


#define ADTYP     (ADM2bits.adtyp)
#define AWC       (ADM2bits.awc)
#define ADRCK     (ADM2bits.adrck)
#define DFLEN     (DFLCTLbits.dflen)
#define BRSAM     (BECTLbits.brsam)
#define ESQST     (FSSEbits.esqst)
#define DIVST     (MDUCbits.divst)
#define MACSF     (MDUCbits.macsf)
#define MACOF     (MDUCbits.macof)
#define MDSM      (MDUCbits.mdsm)
#define MACMODE   (MDUCbits.macmode)
#define DIVMODE   (MDUCbits.divmode)
#define TAU0EN    (PER0bits.tau0en)
#define TAU1EN    (PER0bits.tau1en)
#define SAU0EN    (PER0bits.sau0en)
#define SAU1EN    (PER0bits.sau1en)
#define IICA0EN   (PER0bits.iica0en)
#define ADCEN     (PER0bits.adcen)
#define IICA1EN   (PER0bits.iica1en)
#define RTCEN     (PER0bits.rtcen)
#define PAENB     (RMCbits.paenb)
#define WDVOL     (RMCbits.wdvol)
#define RPEF      (RPECTLbits.rpef)
#define RPERDIS   (RPECTLbits.rperdis)
#define DWAIT2    (DMC2bits.dwait2)
#define DS2       (DMC2bits.ds2)
#define DRS2      (DMC2bits.drs2)
#define STG2      (DMC2bits.stg2)
#define DWAIT3    (DMC3bits.dwait3)
#define DS3       (DMC3bits.ds3)
#define DRS3      (DMC3bits.drs3)
#define STG3      (DMC3bits.stg3)
#define DST2      (DRC2bits.dst2)
#define DEN2      (DRC2bits.den2)
#define DST3      (DRC3bits.dst3)
#define DEN3      (DRC3bits.den3)
#define DWAITALL0 (DWAITALLbits.dwaitall0)
#define PRVARI    (DWAITALLbits.prvari)
#define SPT0      (IICCTL00bits.spt0)
#define STT0      (IICCTL00bits.stt0)
#define ACKE0     (IICCTL00bits.acke0)
#define WTIM0     (IICCTL00bits.wtim0)
#define SPIE0     (IICCTL00bits.spie0)
#define WREL0     (IICCTL00bits.wrel0)
#define LREL0     (IICCTL00bits.lrel0)
#define IICE0     (IICCTL00bits.iice0)
#define PRS0      (IICCTL01bits.prs0)
#define DFC0      (IICCTL01bits.dfc0)
#define SMC0      (IICCTL01bits.smc0)
#define DAD0      (IICCTL01bits.dad0)
#define CLD0      (IICCTL01bits.cld0)
#define WUP0      (IICCTL01bits.wup0)
#define SPT1      (IICCTL10bits.spt1)
#define STT1      (IICCTL10bits.stt1)
#define ACKE1     (IICCTL10bits.acke1)
#define WTIM1     (IICCTL10bits.wtim1)
#define SPIE1     (IICCTL10bits.spie1)
#define WREL1     (IICCTL10bits.wrel1)
#define LREL1     (IICCTL10bits.lrel1)
#define IICE1     (IICCTL10bits.iice1)
#define PRS1      (IICCTL11bits.prs1)
#define DFC1      (IICCTL11bits.dfc1)
#define SMC1      (IICCTL11bits.smc1)
#define DAD1      (IICCTL11bits.dad1)
#define CLD1      (IICCTL11bits.cld1)
#define WUP1      (IICCTL11bits.wup1)
#define CRC0EN    (CRC0CTLbits.crc0en)

#endif // SFRS_EXT_H
