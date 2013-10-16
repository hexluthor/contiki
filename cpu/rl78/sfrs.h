#ifndef SFRS_H
#define SFRS_H


#define P0       (*(volatile unsigned char  *)0xFFF00)
#define P1       (*(volatile unsigned char  *)0xFFF01)
#define P2       (*(volatile unsigned char  *)0xFFF02)
#define P3       (*(volatile unsigned char  *)0xFFF03)
#define P4       (*(volatile unsigned char  *)0xFFF04)
#define P5       (*(volatile unsigned char  *)0xFFF05)
#define P6       (*(volatile unsigned char  *)0xFFF06)
#define P7       (*(volatile unsigned char  *)0xFFF07)
#define P8       (*(volatile unsigned char  *)0xFFF08)
#define P9       (*(volatile unsigned char  *)0xFFF09)
#define P10      (*(volatile unsigned char  *)0xFFF0A)
#define P11      (*(volatile unsigned char  *)0xFFF0B)
#define P12      (*(volatile unsigned char  *)0xFFF0C)
#define P13      (*(volatile unsigned char  *)0xFFF0D)
#define P14      (*(volatile unsigned char  *)0xFFF0E)
#define P15      (*(volatile unsigned char  *)0xFFF0F)
#define SDR00    (*(volatile unsigned short *)0xFFF10)
#define SIO00    (*(volatile unsigned char  *)0xFFF10)
#define TXD0     (*(volatile unsigned char  *)0xFFF10)
#define SDR01    (*(volatile unsigned short *)0xFFF12)
#define RXD0     (*(volatile unsigned char  *)0xFFF12)
#define SIO01    (*(volatile unsigned char  *)0xFFF12)
#define SDR12    (*(volatile unsigned short *)0xFFF14)
#define SIO30    (*(volatile unsigned char  *)0xFFF14)
#define TXD3     (*(volatile unsigned char  *)0xFFF14)
#define SDR13    (*(volatile unsigned short *)0xFFF16)
#define RXD3     (*(volatile unsigned char  *)0xFFF16)
#define SIO31    (*(volatile unsigned char  *)0xFFF16)
#define TDR00    (*(volatile unsigned short *)0xFFF18)
#define TDR01    (*(volatile unsigned short *)0xFFF1A)
#define TDR01L   (*(volatile unsigned char  *)0xFFF1A)
#define TDR01H   (*(volatile unsigned char  *)0xFFF1B)
#define ADCR     (*(volatile unsigned short *)0xFFF1E)
#define ADCRH    (*(volatile unsigned char  *)0xFFF1F)
#define PM0      (*(volatile unsigned char  *)0xFFF20)
#define PM1      (*(volatile unsigned char  *)0xFFF21)
#define PM2      (*(volatile unsigned char  *)0xFFF22)
#define PM3      (*(volatile unsigned char  *)0xFFF23)
#define PM4      (*(volatile unsigned char  *)0xFFF24)
#define PM5      (*(volatile unsigned char  *)0xFFF25)
#define PM6      (*(volatile unsigned char  *)0xFFF26)
#define PM7      (*(volatile unsigned char  *)0xFFF27)
#define PM8      (*(volatile unsigned char  *)0xFFF28)
#define PM9      (*(volatile unsigned char  *)0xFFF29)
#define PM10     (*(volatile unsigned char  *)0xFFF2A)
#define PM11     (*(volatile unsigned char  *)0xFFF2B)
#define PM12     (*(volatile unsigned char  *)0xFFF2C)
#define PM14     (*(volatile unsigned char  *)0xFFF2E)
#define PM15     (*(volatile unsigned char  *)0xFFF2F)
#define ADM0     (*(volatile unsigned char  *)0xFFF30)
#define ADS      (*(volatile unsigned char  *)0xFFF31)
#define ADM1     (*(volatile unsigned char  *)0xFFF32)
#define KRM      (*(volatile unsigned char  *)0xFFF37)
#define EGP0     (*(volatile unsigned char  *)0xFFF38)
#define EGN0     (*(volatile unsigned char  *)0xFFF39)
#define EGP1     (*(volatile unsigned char  *)0xFFF3A)
#define EGN1     (*(volatile unsigned char  *)0xFFF3B)
#define SDR02    (*(volatile unsigned short *)0xFFF44)
#define SIO10    (*(volatile unsigned char  *)0xFFF44)
#define TXD1     (*(volatile unsigned char  *)0xFFF44)
#define SDR03    (*(volatile unsigned short *)0xFFF46)
#define RXD1     (*(volatile unsigned char  *)0xFFF46)
#define SIO11    (*(volatile unsigned char  *)0xFFF46)
#define SDR10    (*(volatile unsigned short *)0xFFF48)
#define SIO20    (*(volatile unsigned char  *)0xFFF48)
#define TXD2     (*(volatile unsigned char  *)0xFFF48)
#define SDR11    (*(volatile unsigned short *)0xFFF4A)
#define RXD2     (*(volatile unsigned char  *)0xFFF4A)
#define SIO21    (*(volatile unsigned char  *)0xFFF4A)
#define IICA0    (*(volatile unsigned char  *)0xFFF50)
#define IICS0    (*(volatile unsigned char  *)0xFFF51)
#define IICF0    (*(volatile unsigned char  *)0xFFF52)
#define IICA1    (*(volatile unsigned char  *)0xFFF54)
#define IICS1    (*(volatile unsigned char  *)0xFFF55)
#define IICF1    (*(volatile unsigned char  *)0xFFF56)
#define TDR02    (*(volatile unsigned short *)0xFFF64)
#define TDR03    (*(volatile unsigned short *)0xFFF66)
#define TDR03L   (*(volatile unsigned char  *)0xFFF66)
#define TDR03H   (*(volatile unsigned char  *)0xFFF67)
#define TDR04    (*(volatile unsigned short *)0xFFF68)
#define TDR05    (*(volatile unsigned short *)0xFFF6A)
#define TDR06    (*(volatile unsigned short *)0xFFF6C)
#define TDR07    (*(volatile unsigned short *)0xFFF6E)
#define TDR10    (*(volatile unsigned short *)0xFFF70)
#define TDR11    (*(volatile unsigned short *)0xFFF72)
#define TDR11L   (*(volatile unsigned char  *)0xFFF72)
#define TDR11H   (*(volatile unsigned char  *)0xFFF73)
#define TDR12    (*(volatile unsigned short *)0xFFF74)
#define TDR13    (*(volatile unsigned short *)0xFFF76)
#define TDR13L   (*(volatile unsigned char  *)0xFFF76)
#define TDR13H   (*(volatile unsigned char  *)0xFFF77)
#define TDR14    (*(volatile unsigned short *)0xFFF78)
#define TDR15    (*(volatile unsigned short *)0xFFF7A)
#define TDR16    (*(volatile unsigned short *)0xFFF7C)
#define TDR17    (*(volatile unsigned short *)0xFFF7E)
#define FLPMC    (*(volatile unsigned char  *)0xFFF80)
#define FLARS    (*(volatile unsigned char  *)0xFFF81)
#define FLAPL    (*(volatile unsigned short *)0xFFF82)
#define FLAPH    (*(volatile unsigned char  *)0xFFF84)
#define FSSQ     (*(volatile unsigned char  *)0xFFF85)
#define FLSEDL   (*(volatile unsigned short *)0xFFF86)
#define FLSEDH   (*(volatile unsigned char  *)0xFFF88)
#define FLRST    (*(volatile unsigned char  *)0xFFF89)
#define FSASTL   (*(volatile unsigned char  *)0xFFF8A)
#define FSASTH   (*(volatile unsigned char  *)0xFFF8B)
#define FLWL     (*(volatile unsigned short *)0xFFF8C)
#define FLWH     (*(volatile unsigned short *)0xFFF8E)
#define ITMC     (*(volatile unsigned short *)0xFFF90)
#define SEC      (*(volatile unsigned char  *)0xFFF92)
// #define MIN      (*(volatile unsigned char  *)0xFFF93) // TODO: naming conflict
#define HOUR     (*(volatile unsigned char  *)0xFFF94)
#define WEEK     (*(volatile unsigned char  *)0xFFF95)
#define DAY      (*(volatile unsigned char  *)0xFFF96)
#define MONTH    (*(volatile unsigned char  *)0xFFF97)
#define YEAR     (*(volatile unsigned char  *)0xFFF98)
#define SUBCUD   (*(volatile unsigned char  *)0xFFF99)
#define ALARMWM  (*(volatile unsigned char  *)0xFFF9A)
#define ALARMWH  (*(volatile unsigned char  *)0xFFF9B)
#define ALARMWW  (*(volatile unsigned char  *)0xFFF9C)
#define RTCC0    (*(volatile unsigned char  *)0xFFF9D)
#define RTCC1    (*(volatile unsigned char  *)0xFFF9E)
#define CMC      (*(volatile unsigned char  *)0xFFFA0)
#define CSC      (*(volatile unsigned char  *)0xFFFA1)
#define OSTC     (*(volatile unsigned char  *)0xFFFA2)
#define OSTS     (*(volatile unsigned char  *)0xFFFA3)
#define CKC      (*(volatile unsigned char  *)0xFFFA4)
#define CKS0     (*(volatile unsigned char  *)0xFFFA5)
#define CKS1     (*(volatile unsigned char  *)0xFFFA6)
#define RESF     (*(volatile unsigned char  *)0xFFFA8)
#define LVIM     (*(volatile unsigned char  *)0xFFFA9)
#define LVIS     (*(volatile unsigned char  *)0xFFFAA)
#define WDTE     (*(volatile unsigned char  *)0xFFFAB)
#define CRCIN    (*(volatile unsigned char  *)0xFFFAC)
#define RXB      (*(volatile unsigned char  *)0xFFFAD)
#define TXS      (*(volatile unsigned char  *)0xFFFAD)
#define MONSTA0  (*(volatile unsigned char  *)0xFFFAE)
#define ASIM     (*(volatile unsigned char  *)0xFFFAF)
#define DSA0     (*(volatile unsigned char  *)0xFFFB0)
#define DSA1     (*(volatile unsigned char  *)0xFFFB1)
#define DRA0     (*(volatile unsigned short *)0xFFFB2)
#define DRA0L    (*(volatile unsigned char  *)0xFFFB2)
#define DRA0H    (*(volatile unsigned char  *)0xFFFB3)
#define DRA1     (*(volatile unsigned short *)0xFFFB4)
#define DRA1L    (*(volatile unsigned char  *)0xFFFB4)
#define DRA1H    (*(volatile unsigned char  *)0xFFFB5)
#define DBC0     (*(volatile unsigned short *)0xFFFB6)
#define DBC0L    (*(volatile unsigned char  *)0xFFFB6)
#define DBC0H    (*(volatile unsigned char  *)0xFFFB7)
#define DBC1     (*(volatile unsigned short *)0xFFFB8)
#define DBC1L    (*(volatile unsigned char  *)0xFFFB8)
#define DBC1H    (*(volatile unsigned char  *)0xFFFB9)
#define DMC0     (*(volatile unsigned char  *)0xFFFBA)
#define DMC1     (*(volatile unsigned char  *)0xFFFBB)
#define DRC0     (*(volatile unsigned char  *)0xFFFBC)
#define DRC1     (*(volatile unsigned char  *)0xFFFBD)
#define IF2      (*(volatile unsigned short *)0xFFFD0)
#define IF2L     (*(volatile unsigned char  *)0xFFFD0)
#define IF2H     (*(volatile unsigned char  *)0xFFFD1)
#define IF3      (*(volatile unsigned short *)0xFFFD2)
#define IF3L     (*(volatile unsigned char  *)0xFFFD2)
#define MK2      (*(volatile unsigned short *)0xFFFD4)
#define MK2L     (*(volatile unsigned char  *)0xFFFD4)
#define MK2H     (*(volatile unsigned char  *)0xFFFD5)
#define MK3      (*(volatile unsigned short *)0xFFFD6)
#define MK3L     (*(volatile unsigned char  *)0xFFFD6)
#define PR02     (*(volatile unsigned short *)0xFFFD8)
#define PR02L    (*(volatile unsigned char  *)0xFFFD8)
#define PR02H    (*(volatile unsigned char  *)0xFFFD9)
#define PR03     (*(volatile unsigned short *)0xFFFDA)
#define PR03L    (*(volatile unsigned char  *)0xFFFDA)
#define PR12     (*(volatile unsigned short *)0xFFFDC)
#define PR12L    (*(volatile unsigned char  *)0xFFFDC)
#define PR12H    (*(volatile unsigned char  *)0xFFFDD)
#define PR13     (*(volatile unsigned short *)0xFFFDE)
#define PR13L    (*(volatile unsigned char  *)0xFFFDE)
#define IF0      (*(volatile unsigned short *)0xFFFE0)
#define IF0L     (*(volatile unsigned char  *)0xFFFE0)
#define IF0H     (*(volatile unsigned char  *)0xFFFE1)
#define IF1      (*(volatile unsigned short *)0xFFFE2)
#define IF1L     (*(volatile unsigned char  *)0xFFFE2)
#define IF1H     (*(volatile unsigned char  *)0xFFFE3)
#define MK0      (*(volatile unsigned short *)0xFFFE4)
#define MK0L     (*(volatile unsigned char  *)0xFFFE4)
#define MK0H     (*(volatile unsigned char  *)0xFFFE5)
#define MK1      (*(volatile unsigned short *)0xFFFE6)
#define MK1L     (*(volatile unsigned char  *)0xFFFE6)
#define MK1H     (*(volatile unsigned char  *)0xFFFE7)
#define PR00     (*(volatile unsigned short *)0xFFFE8)
#define PR00L    (*(volatile unsigned char  *)0xFFFE8)
#define PR00H    (*(volatile unsigned char  *)0xFFFE9)
#define PR01     (*(volatile unsigned short *)0xFFFEA)
#define PR01L    (*(volatile unsigned char  *)0xFFFEA)
#define PR01H    (*(volatile unsigned char  *)0xFFFEB)
#define PR10     (*(volatile unsigned short *)0xFFFEC)
#define PR10L    (*(volatile unsigned char  *)0xFFFEC)
#define PR10H    (*(volatile unsigned char  *)0xFFFED)
#define PR11     (*(volatile unsigned short *)0xFFFEE)
#define PR11L    (*(volatile unsigned char  *)0xFFFEE)
#define PR11H    (*(volatile unsigned char  *)0xFFFEF)
#define MDAL     (*(volatile unsigned short *)0xFFFF0)
#define MULA     (*(volatile unsigned short *)0xFFFF0)
#define MDAH     (*(volatile unsigned short *)0xFFFF2)
#define MULB     (*(volatile unsigned short *)0xFFFF2)
#define MDBH     (*(volatile unsigned short *)0xFFFF4)
#define MULOH    (*(volatile unsigned short *)0xFFFF4)
#define MDBL     (*(volatile unsigned short *)0xFFFF6)
#define MULOL    (*(volatile unsigned short *)0xFFFF6)
#define PMC      (*(volatile unsigned char  *)0xFFFFE)


union P0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P2union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P3union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P4union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P5union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P6union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P7union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P8union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P9union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P10union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P11union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P12union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P13union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P14union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union P15union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SDR00union {
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

union SIO00union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TXD0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SDR01union {
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

union RXD0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SIO01union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SDR12union {
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

union SIO30union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TXD3union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SDR13union {
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

union RXD3union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SIO31union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TDR00union {
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

union TDR01union {
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

union TDR01Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TDR01Hunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union ADCRunion {
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

union ADCRHunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM2union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM3union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM4union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM5union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM6union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM7union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM8union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM9union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM10union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM11union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM12union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM14union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union PM15union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union ADM0union {
	unsigned char  adce      : 1;
	unsigned char            : 1;
	unsigned char  adcs      : 1;
};

union ADSunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union ADM1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union KRMunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union EGP0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union EGN0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union EGP1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union EGN1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SDR02union {
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

union SIO10union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TXD1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SDR03union {
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

union RXD1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SIO11union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SDR10union {
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

union SIO20union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TXD2union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SDR11union {
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

union RXD2union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SIO21union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union IICA0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union IICS0union {
	unsigned char  spd0      : 1;
	unsigned char  std0      : 1;
	unsigned char  ackd0     : 1;
	unsigned char  trc0      : 1;
	unsigned char  coi0      : 1;
	unsigned char  exc0      : 1;
	unsigned char  ald0      : 1;
	unsigned char  msts0     : 1;
};

union IICF0union {
	unsigned char  iicrsv0   : 1;
	unsigned char  stcen0    : 1;
	unsigned char            : 1;
	unsigned char  iicbsy0   : 1;
	unsigned char  stcf0     : 1;
};

union IICA1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union IICS1union {
	unsigned char  spd1      : 1;
	unsigned char  std1      : 1;
	unsigned char  ackd1     : 1;
	unsigned char  trc1      : 1;
	unsigned char  coi1      : 1;
	unsigned char  exc1      : 1;
	unsigned char  ald1      : 1;
	unsigned char  msts1     : 1;
};

union IICF1union {
	unsigned char  iicrsv1   : 1;
	unsigned char  stcen1    : 1;
	unsigned char            : 1;
	unsigned char  iicbsy1   : 1;
	unsigned char  stcf1     : 1;
};

union TDR02union {
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

union TDR03union {
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

union TDR03Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TDR03Hunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TDR04union {
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

union TDR05union {
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

union TDR06union {
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

union TDR07union {
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

union TDR10union {
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

union TDR11union {
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

union TDR11Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TDR11Hunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TDR12union {
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

union TDR13union {
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

union TDR13Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TDR13Hunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TDR14union {
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

union TDR15union {
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

union TDR16union {
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

union TDR17union {
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

union FLPMCunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union FLARSunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union FLAPLunion {
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

union FLAPHunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union FSSQunion {
	unsigned char            : 1;
	unsigned char  fsstp     : 1;
	unsigned char  sqst      : 1;
};

union FLSEDLunion {
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

union FLSEDHunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union FLRSTunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union FSASTLunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union FSASTHunion {
	unsigned char            : 1;
	unsigned char  sqend     : 1;
	unsigned char  esqend    : 1;
};

union FLWLunion {
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

union FLWHunion {
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

union ITMCunion {
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

union SECunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union MINunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union HOURunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union WEEKunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DAYunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union MONTHunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union YEARunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union SUBCUDunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union ALARMWMunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union ALARMWHunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union ALARMWWunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union RTCC0union {
	unsigned char            : 1;
	unsigned char  rcloe1    : 1;
	unsigned char            : 1;
	unsigned char  rtce      : 1;
};

union RTCC1union {
	unsigned char  rwait     : 1;
	unsigned char  rwst      : 1;
	unsigned char            : 1;
	unsigned char  rifg      : 1;
	unsigned char  wafg      : 1;
	unsigned char            : 1;
	unsigned char  walie     : 1;
	unsigned char  wale      : 1;
};

union CMCunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union CSCunion {
	unsigned char  hiostop   : 1;
	unsigned char            : 1;
	unsigned char  xtstop    : 1;
	unsigned char  mstop     : 1;
};

union OSTCunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union OSTSunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union CKCunion {
	unsigned char            : 1;
	unsigned char  sdiv      : 1;
	unsigned char  mcm0      : 1;
	unsigned char  mcs       : 1;
	unsigned char  css       : 1;
	unsigned char  cls       : 1;
};

union CKS0union {
	unsigned char            : 1;
	unsigned char  pcloe0    : 1;
};

union CKS1union {
	unsigned char            : 1;
	unsigned char  pcloe1    : 1;
};

union RESFunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union LVIMunion {
	unsigned char  lvif      : 1;
	unsigned char  lviomsk   : 1;
	unsigned char            : 1;
	unsigned char  lvisen    : 1;
};

union LVISunion {
	unsigned char  lvilv     : 1;
	unsigned char            : 1;
	unsigned char  lvimd     : 1;
};

union WDTEunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union CRCINunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union RXBunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union TXSunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union MONSTA0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union ASIMunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DSA0union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DSA1union {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DRA0union {
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

union DRA0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DRA0Hunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DRA1union {
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

union DRA1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DRA1Hunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DBC0union {
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

union DBC0Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DBC0Hunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DBC1union {
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

union DBC1Lunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DBC1Hunion {
	unsigned char  bit0      : 1;
	unsigned char  bit1      : 1;
	unsigned char  bit2      : 1;
	unsigned char  bit3      : 1;
	unsigned char  bit4      : 1;
	unsigned char  bit5      : 1;
	unsigned char  bit6      : 1;
	unsigned char  bit7      : 1;
};

union DMC0union {
	unsigned char            : 1;
	unsigned char  dwait0    : 1;
	unsigned char  ds0       : 1;
	unsigned char  drs0      : 1;
	unsigned char  stg0      : 1;
};

union DMC1union {
	unsigned char            : 1;
	unsigned char  dwait1    : 1;
	unsigned char  ds1       : 1;
	unsigned char  drs1      : 1;
	unsigned char  stg1      : 1;
};

union DRC0union {
	unsigned char  dst0      : 1;
	unsigned char            : 1;
	unsigned char  den0      : 1;
};

union DRC1union {
	unsigned char  dst1      : 1;
	unsigned char            : 1;
	unsigned char  den1      : 1;
};

union IF2union {
	unsigned short tmif05    : 1;
	unsigned short tmif06    : 1;
	unsigned short tmif07    : 1;
	unsigned short pif6      : 1;
	unsigned short pif7      : 1;
	unsigned short pif8      : 1;
	unsigned short pif9      : 1;
	unsigned short pif10     : 1;
};

union IF2Lunion {
	unsigned char  tmif05    : 1;
	unsigned char  tmif06    : 1;
	unsigned char  tmif07    : 1;
	unsigned char  pif6      : 1;
	unsigned char  pif7      : 1;
	unsigned char  pif8      : 1;
	unsigned char  pif9      : 1;
	unsigned char  pif10     : 1;
};

union IF2Hunion {
	unsigned char  pif11     : 1;
	unsigned char  tmif10    : 1;
	unsigned char  tmif11    : 1;
	unsigned char  tmif12    : 1;
	unsigned char  tmif13h   : 1;
	unsigned char  mdif      : 1;
	unsigned char  iicaif1   : 1;
	unsigned char  flif      : 1;
};

union IF3union {
	unsigned short dmaif2    : 1;
	unsigned short dmaif3    : 1;
	unsigned short tmif14    : 1;
	unsigned short tmif15    : 1;
	unsigned short tmif16    : 1;
	unsigned short tmif17    : 1;
};

union IF3Lunion {
	unsigned char  dmaif2    : 1;
	unsigned char  dmaif3    : 1;
	unsigned char  tmif14    : 1;
	unsigned char  tmif15    : 1;
	unsigned char  tmif16    : 1;
	unsigned char  tmif17    : 1;
};

union MK2union {
	unsigned short tmmk05    : 1;
	unsigned short tmmk06    : 1;
	unsigned short tmmk07    : 1;
	unsigned short pmk6      : 1;
	unsigned short pmk7      : 1;
	unsigned short pmk8      : 1;
	unsigned short pmk9      : 1;
	unsigned short pmk10     : 1;
};

union MK2Lunion {
	unsigned char  tmmk05    : 1;
	unsigned char  tmmk06    : 1;
	unsigned char  tmmk07    : 1;
	unsigned char  pmk6      : 1;
	unsigned char  pmk7      : 1;
	unsigned char  pmk8      : 1;
	unsigned char  pmk9      : 1;
	unsigned char  pmk10     : 1;
};

union MK2Hunion {
	unsigned char  pmk11     : 1;
	unsigned char  tmmk10    : 1;
	unsigned char  tmmk11    : 1;
	unsigned char  tmmk12    : 1;
	unsigned char  tmmk13h   : 1;
	unsigned char  mdmk      : 1;
	unsigned char  iicamk1   : 1;
	unsigned char  flmk      : 1;
};

union MK3union {
	unsigned short dmamk2    : 1;
	unsigned short dmamk3    : 1;
	unsigned short tmmk14    : 1;
	unsigned short tmmk15    : 1;
	unsigned short tmmk16    : 1;
	unsigned short tmmk17    : 1;
};

union MK3Lunion {
	unsigned char  dmamk2    : 1;
	unsigned char  dmamk3    : 1;
	unsigned char  tmmk14    : 1;
	unsigned char  tmmk15    : 1;
	unsigned char  tmmk16    : 1;
	unsigned char  tmmk17    : 1;
};

union PR02union {
	unsigned short tmpr005   : 1;
	unsigned short tmpr006   : 1;
	unsigned short tmpr007   : 1;
	unsigned short ppr06     : 1;
	unsigned short ppr07     : 1;
	unsigned short ppr08     : 1;
	unsigned short ppr09     : 1;
	unsigned short ppr010    : 1;
};

union PR02Lunion {
	unsigned char  tmpr005   : 1;
	unsigned char  tmpr006   : 1;
	unsigned char  tmpr007   : 1;
	unsigned char  ppr06     : 1;
	unsigned char  ppr07     : 1;
	unsigned char  ppr08     : 1;
	unsigned char  ppr09     : 1;
	unsigned char  ppr010    : 1;
};

union PR02Hunion {
	unsigned char  ppr011    : 1;
	unsigned char  tmpr010   : 1;
	unsigned char  tmpr011   : 1;
	unsigned char  tmpr012   : 1;
	unsigned char  tmpr013h  : 1;
	unsigned char  mdpr0     : 1;
	unsigned char  iicapr01  : 1;
	unsigned char  flpr0     : 1;
};

union PR03union {
	unsigned short dmapr02   : 1;
	unsigned short dmapr03   : 1;
	unsigned short tmpr014   : 1;
	unsigned short tmpr015   : 1;
	unsigned short tmpr016   : 1;
	unsigned short tmpr017   : 1;
};

union PR03Lunion {
	unsigned char  dmapr02   : 1;
	unsigned char  dmapr03   : 1;
	unsigned char  tmpr014   : 1;
	unsigned char  tmpr015   : 1;
	unsigned char  tmpr016   : 1;
	unsigned char  tmpr017   : 1;
};

union PR12union {
	unsigned short tmpr105   : 1;
	unsigned short tmpr106   : 1;
	unsigned short tmpr107   : 1;
	unsigned short ppr16     : 1;
	unsigned short ppr17     : 1;
	unsigned short ppr18     : 1;
	unsigned short ppr19     : 1;
	unsigned short ppr110    : 1;
};

union PR12Lunion {
	unsigned char  tmpr105   : 1;
	unsigned char  tmpr106   : 1;
	unsigned char  tmpr107   : 1;
	unsigned char  ppr16     : 1;
	unsigned char  ppr17     : 1;
	unsigned char  ppr18     : 1;
	unsigned char  ppr19     : 1;
	unsigned char  ppr110    : 1;
};

union PR12Hunion {
	unsigned char  ppr111    : 1;
	unsigned char  tmpr110   : 1;
	unsigned char  tmpr111   : 1;
	unsigned char  tmpr112   : 1;
	unsigned char  tmpr113h  : 1;
	unsigned char  mdpr1     : 1;
	unsigned char  iicapr11  : 1;
	unsigned char  flpr1     : 1;
};

union PR13union {
	unsigned short dmapr12   : 1;
	unsigned short dmapr13   : 1;
	unsigned short tmpr114   : 1;
	unsigned short tmpr115   : 1;
	unsigned short tmpr116   : 1;
	unsigned short tmpr117   : 1;
};

union PR13Lunion {
	unsigned char  dmapr12   : 1;
	unsigned char  dmapr13   : 1;
	unsigned char  tmpr114   : 1;
	unsigned char  tmpr115   : 1;
	unsigned char  tmpr116   : 1;
	unsigned char  tmpr117   : 1;
};

union IF0union {
	unsigned short wdtiif    : 1;
	unsigned short lviif     : 1;
	unsigned short pif0      : 1;
	unsigned short pif1      : 1;
	unsigned short pif2      : 1;
	unsigned short pif3      : 1;
	unsigned short pif4      : 1;
	unsigned short pif5      : 1;
};

union IF0Lunion {
	unsigned char  wdtiif    : 1;
	unsigned char  lviif     : 1;
	unsigned char  pif0      : 1;
	unsigned char  pif1      : 1;
	unsigned char  pif2      : 1;
	unsigned char  pif3      : 1;
	unsigned char  pif4      : 1;
	unsigned char  pif5      : 1;
};

union IF0Hunion {
	unsigned char  stif2     : 1;
	unsigned char  srif2     : 1;
	unsigned char  tmif11h   : 1;
	unsigned char  dmaif0    : 1;
	unsigned char  dmaif1    : 1;
	unsigned char  stif0     : 1;
	unsigned char  srif0     : 1;
	unsigned char  tmif01h   : 1;
};

union IF1union {
	unsigned short stif1     : 1;
	unsigned short srif1     : 1;
	unsigned short tmif03h   : 1;
	unsigned short iicaif0   : 1;
	unsigned short tmif00    : 1;
	unsigned short tmif01    : 1;
	unsigned short tmif02    : 1;
	unsigned short tmif03    : 1;
};

union IF1Lunion {
	unsigned char  stif1     : 1;
	unsigned char  srif1     : 1;
	unsigned char  tmif03h   : 1;
	unsigned char  iicaif0   : 1;
	unsigned char  tmif00    : 1;
	unsigned char  tmif01    : 1;
	unsigned char  tmif02    : 1;
	unsigned char  tmif03    : 1;
};

union IF1Hunion {
	unsigned char  adif      : 1;
	unsigned char  rtcif     : 1;
	unsigned char  itif      : 1;
	unsigned char  krif      : 1;
	unsigned char  stif3     : 1;
	unsigned char  srif3     : 1;
	unsigned char  tmif13    : 1;
	unsigned char  tmif04    : 1;
};

union MK0union {
	unsigned short wdtimk    : 1;
	unsigned short lvimk     : 1;
	unsigned short pmk0      : 1;
	unsigned short pmk1      : 1;
	unsigned short pmk2      : 1;
	unsigned short pmk3      : 1;
	unsigned short pmk4      : 1;
	unsigned short pmk5      : 1;
};

union MK0Lunion {
	unsigned char  wdtimk    : 1;
	unsigned char  lvimk     : 1;
	unsigned char  pmk0      : 1;
	unsigned char  pmk1      : 1;
	unsigned char  pmk2      : 1;
	unsigned char  pmk3      : 1;
	unsigned char  pmk4      : 1;
	unsigned char  pmk5      : 1;
};

union MK0Hunion {
	unsigned char  stmk2     : 1;
	unsigned char  srmk2     : 1;
	unsigned char  tmmk11h   : 1;
	unsigned char  dmamk0    : 1;
	unsigned char  dmamk1    : 1;
	unsigned char  stmk0     : 1;
	unsigned char  srmk0     : 1;
	unsigned char  tmmk01h   : 1;
};

union MK1union {
	unsigned short stmk1     : 1;
	unsigned short srmk1     : 1;
	unsigned short tmmk03h   : 1;
	unsigned short iicamk0   : 1;
	unsigned short tmmk00    : 1;
	unsigned short tmmk01    : 1;
	unsigned short tmmk02    : 1;
	unsigned short tmmk03    : 1;
};

union MK1Lunion {
	unsigned char  stmk1     : 1;
	unsigned char  srmk1     : 1;
	unsigned char  tmmk03h   : 1;
	unsigned char  iicamk0   : 1;
	unsigned char  tmmk00    : 1;
	unsigned char  tmmk01    : 1;
	unsigned char  tmmk02    : 1;
	unsigned char  tmmk03    : 1;
};

union MK1Hunion {
	unsigned char  admk      : 1;
	unsigned char  rtcmk     : 1;
	unsigned char  itmk      : 1;
	unsigned char  krmk      : 1;
	unsigned char  stmk3     : 1;
	unsigned char  srmk3     : 1;
	unsigned char  tmmk13    : 1;
	unsigned char  tmmk04    : 1;
};

union PR00union {
	unsigned short wdtipr0   : 1;
	unsigned short lvipr0    : 1;
	unsigned short ppr00     : 1;
	unsigned short ppr01     : 1;
	unsigned short ppr02     : 1;
	unsigned short ppr03     : 1;
	unsigned short ppr04     : 1;
	unsigned short ppr05     : 1;
};

union PR00Lunion {
	unsigned char  wdtipr0   : 1;
	unsigned char  lvipr0    : 1;
	unsigned char  ppr00     : 1;
	unsigned char  ppr01     : 1;
	unsigned char  ppr02     : 1;
	unsigned char  ppr03     : 1;
	unsigned char  ppr04     : 1;
	unsigned char  ppr05     : 1;
};

union PR00Hunion {
	unsigned char  stpr02    : 1;
	unsigned char  srpr02    : 1;
	unsigned char  tmpr011h  : 1;
	unsigned char  dmapr00   : 1;
	unsigned char  dmapr01   : 1;
	unsigned char  stpr00    : 1;
	unsigned char  srpr00    : 1;
	unsigned char  tmpr001h  : 1;
};

union PR01union {
	unsigned short stpr01    : 1;
	unsigned short srpr01    : 1;
	unsigned short tmpr003h  : 1;
	unsigned short iicapr00  : 1;
	unsigned short tmpr000   : 1;
	unsigned short tmpr001   : 1;
	unsigned short tmpr002   : 1;
	unsigned short tmpr003   : 1;
};

union PR01Lunion {
	unsigned char  stpr01    : 1;
	unsigned char  srpr01    : 1;
	unsigned char  tmpr003h  : 1;
	unsigned char  iicapr00  : 1;
	unsigned char  tmpr000   : 1;
	unsigned char  tmpr001   : 1;
	unsigned char  tmpr002   : 1;
	unsigned char  tmpr003   : 1;
};

union PR01Hunion {
	unsigned char  adpr0     : 1;
	unsigned char  rtcpr0    : 1;
	unsigned char  itpr0     : 1;
	unsigned char  krpr0     : 1;
	unsigned char  stpr03    : 1;
	unsigned char  srpr03    : 1;
	unsigned char  tmpr013   : 1;
	unsigned char  tmpr004   : 1;
};

union PR10union {
	unsigned short wdtipr1   : 1;
	unsigned short lvipr1    : 1;
	unsigned short ppr10     : 1;
	unsigned short ppr11     : 1;
	unsigned short ppr12     : 1;
	unsigned short ppr13     : 1;
	unsigned short ppr14     : 1;
	unsigned short ppr15     : 1;
};

union PR10Lunion {
	unsigned char  wdtipr1   : 1;
	unsigned char  lvipr1    : 1;
	unsigned char  ppr10     : 1;
	unsigned char  ppr11     : 1;
	unsigned char  ppr12     : 1;
	unsigned char  ppr13     : 1;
	unsigned char  ppr14     : 1;
	unsigned char  ppr15     : 1;
};

union PR10Hunion {
	unsigned char  stpr12    : 1;
	unsigned char  srpr12    : 1;
	unsigned char  tmpr111h  : 1;
	unsigned char  dmapr10   : 1;
	unsigned char  dmapr11   : 1;
	unsigned char  stpr10    : 1;
	unsigned char  srpr10    : 1;
	unsigned char  tmpr101h  : 1;
};

union PR11union {
	unsigned short stpr11    : 1;
	unsigned short srpr11    : 1;
	unsigned short tmpr103h  : 1;
	unsigned short iicapr10  : 1;
	unsigned short tmpr100   : 1;
	unsigned short tmpr101   : 1;
	unsigned short tmpr102   : 1;
	unsigned short tmpr103   : 1;
};

union PR11Lunion {
	unsigned char  stpr11    : 1;
	unsigned char  srpr11    : 1;
	unsigned char  tmpr103h  : 1;
	unsigned char  iicapr10  : 1;
	unsigned char  tmpr100   : 1;
	unsigned char  tmpr101   : 1;
	unsigned char  tmpr102   : 1;
	unsigned char  tmpr103   : 1;
};

union PR11Hunion {
	unsigned char  adpr1     : 1;
	unsigned char  rtcpr1    : 1;
	unsigned char  itpr1     : 1;
	unsigned char  krpr1     : 1;
	unsigned char  stpr13    : 1;
	unsigned char  srpr13    : 1;
	unsigned char  tmpr113   : 1;
	unsigned char  tmpr104   : 1;
};

union MDALunion {
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

union MULAunion {
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

union MDAHunion {
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

union MULBunion {
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

union MDBHunion {
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

union MULOHunion {
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

union MDBLunion {
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

union MULOLunion {
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

union PMCunion {
	unsigned char  maa       : 1;
};


#define P0bits       (*(volatile union P0union      *)0xFFF00)
#define P1bits       (*(volatile union P1union      *)0xFFF01)
#define P2bits       (*(volatile union P2union      *)0xFFF02)
#define P3bits       (*(volatile union P3union      *)0xFFF03)
#define P4bits       (*(volatile union P4union      *)0xFFF04)
#define P5bits       (*(volatile union P5union      *)0xFFF05)
#define P6bits       (*(volatile union P6union      *)0xFFF06)
#define P7bits       (*(volatile union P7union      *)0xFFF07)
#define P8bits       (*(volatile union P8union      *)0xFFF08)
#define P9bits       (*(volatile union P9union      *)0xFFF09)
#define P10bits      (*(volatile union P10union     *)0xFFF0A)
#define P11bits      (*(volatile union P11union     *)0xFFF0B)
#define P12bits      (*(volatile union P12union     *)0xFFF0C)
#define P13bits      (*(volatile union P13union     *)0xFFF0D)
#define P14bits      (*(volatile union P14union     *)0xFFF0E)
#define P15bits      (*(volatile union P15union     *)0xFFF0F)
#define SDR00bits    (*(volatile union SDR00union   *)0xFFF10)
#define SIO00bits    (*(volatile union SIO00union   *)0xFFF10)
#define TXD0bits     (*(volatile union TXD0union    *)0xFFF10)
#define SDR01bits    (*(volatile union SDR01union   *)0xFFF12)
#define RXD0bits     (*(volatile union RXD0union    *)0xFFF12)
#define SIO01bits    (*(volatile union SIO01union   *)0xFFF12)
#define SDR12bits    (*(volatile union SDR12union   *)0xFFF14)
#define SIO30bits    (*(volatile union SIO30union   *)0xFFF14)
#define TXD3bits     (*(volatile union TXD3union    *)0xFFF14)
#define SDR13bits    (*(volatile union SDR13union   *)0xFFF16)
#define RXD3bits     (*(volatile union RXD3union    *)0xFFF16)
#define SIO31bits    (*(volatile union SIO31union   *)0xFFF16)
#define TDR00bits    (*(volatile union TDR00union   *)0xFFF18)
#define TDR01bits    (*(volatile union TDR01union   *)0xFFF1A)
#define TDR01Lbits   (*(volatile union TDR01Lunion  *)0xFFF1A)
#define TDR01Hbits   (*(volatile union TDR01Hunion  *)0xFFF1B)
#define ADCRbits     (*(volatile union ADCRunion    *)0xFFF1E)
#define ADCRHbits    (*(volatile union ADCRHunion   *)0xFFF1F)
#define PM0bits      (*(volatile union PM0union     *)0xFFF20)
#define PM1bits      (*(volatile union PM1union     *)0xFFF21)
#define PM2bits      (*(volatile union PM2union     *)0xFFF22)
#define PM3bits      (*(volatile union PM3union     *)0xFFF23)
#define PM4bits      (*(volatile union PM4union     *)0xFFF24)
#define PM5bits      (*(volatile union PM5union     *)0xFFF25)
#define PM6bits      (*(volatile union PM6union     *)0xFFF26)
#define PM7bits      (*(volatile union PM7union     *)0xFFF27)
#define PM8bits      (*(volatile union PM8union     *)0xFFF28)
#define PM9bits      (*(volatile union PM9union     *)0xFFF29)
#define PM10bits     (*(volatile union PM10union    *)0xFFF2A)
#define PM11bits     (*(volatile union PM11union    *)0xFFF2B)
#define PM12bits     (*(volatile union PM12union    *)0xFFF2C)
#define PM14bits     (*(volatile union PM14union    *)0xFFF2E)
#define PM15bits     (*(volatile union PM15union    *)0xFFF2F)
#define ADM0bits     (*(volatile union ADM0union    *)0xFFF30)
#define ADSbits      (*(volatile union ADSunion     *)0xFFF31)
#define ADM1bits     (*(volatile union ADM1union    *)0xFFF32)
#define KRMbits      (*(volatile union KRMunion     *)0xFFF37)
#define EGP0bits     (*(volatile union EGP0union    *)0xFFF38)
#define EGN0bits     (*(volatile union EGN0union    *)0xFFF39)
#define EGP1bits     (*(volatile union EGP1union    *)0xFFF3A)
#define EGN1bits     (*(volatile union EGN1union    *)0xFFF3B)
#define SDR02bits    (*(volatile union SDR02union   *)0xFFF44)
#define SIO10bits    (*(volatile union SIO10union   *)0xFFF44)
#define TXD1bits     (*(volatile union TXD1union    *)0xFFF44)
#define SDR03bits    (*(volatile union SDR03union   *)0xFFF46)
#define RXD1bits     (*(volatile union RXD1union    *)0xFFF46)
#define SIO11bits    (*(volatile union SIO11union   *)0xFFF46)
#define SDR10bits    (*(volatile union SDR10union   *)0xFFF48)
#define SIO20bits    (*(volatile union SIO20union   *)0xFFF48)
#define TXD2bits     (*(volatile union TXD2union    *)0xFFF48)
#define SDR11bits    (*(volatile union SDR11union   *)0xFFF4A)
#define RXD2bits     (*(volatile union RXD2union    *)0xFFF4A)
#define SIO21bits    (*(volatile union SIO21union   *)0xFFF4A)
#define IICA0bits    (*(volatile union IICA0union   *)0xFFF50)
#define IICS0bits    (*(volatile union IICS0union   *)0xFFF51)
#define IICF0bits    (*(volatile union IICF0union   *)0xFFF52)
#define IICA1bits    (*(volatile union IICA1union   *)0xFFF54)
#define IICS1bits    (*(volatile union IICS1union   *)0xFFF55)
#define IICF1bits    (*(volatile union IICF1union   *)0xFFF56)
#define TDR02bits    (*(volatile union TDR02union   *)0xFFF64)
#define TDR03bits    (*(volatile union TDR03union   *)0xFFF66)
#define TDR03Lbits   (*(volatile union TDR03Lunion  *)0xFFF66)
#define TDR03Hbits   (*(volatile union TDR03Hunion  *)0xFFF67)
#define TDR04bits    (*(volatile union TDR04union   *)0xFFF68)
#define TDR05bits    (*(volatile union TDR05union   *)0xFFF6A)
#define TDR06bits    (*(volatile union TDR06union   *)0xFFF6C)
#define TDR07bits    (*(volatile union TDR07union   *)0xFFF6E)
#define TDR10bits    (*(volatile union TDR10union   *)0xFFF70)
#define TDR11bits    (*(volatile union TDR11union   *)0xFFF72)
#define TDR11Lbits   (*(volatile union TDR11Lunion  *)0xFFF72)
#define TDR11Hbits   (*(volatile union TDR11Hunion  *)0xFFF73)
#define TDR12bits    (*(volatile union TDR12union   *)0xFFF74)
#define TDR13bits    (*(volatile union TDR13union   *)0xFFF76)
#define TDR13Lbits   (*(volatile union TDR13Lunion  *)0xFFF76)
#define TDR13Hbits   (*(volatile union TDR13Hunion  *)0xFFF77)
#define TDR14bits    (*(volatile union TDR14union   *)0xFFF78)
#define TDR15bits    (*(volatile union TDR15union   *)0xFFF7A)
#define TDR16bits    (*(volatile union TDR16union   *)0xFFF7C)
#define TDR17bits    (*(volatile union TDR17union   *)0xFFF7E)
#define FLPMCbits    (*(volatile union FLPMCunion   *)0xFFF80)
#define FLARSbits    (*(volatile union FLARSunion   *)0xFFF81)
#define FLAPLbits    (*(volatile union FLAPLunion   *)0xFFF82)
#define FLAPHbits    (*(volatile union FLAPHunion   *)0xFFF84)
#define FSSQbits     (*(volatile union FSSQunion    *)0xFFF85)
#define FLSEDLbits   (*(volatile union FLSEDLunion  *)0xFFF86)
#define FLSEDHbits   (*(volatile union FLSEDHunion  *)0xFFF88)
#define FLRSTbits    (*(volatile union FLRSTunion   *)0xFFF89)
#define FSASTLbits   (*(volatile union FSASTLunion  *)0xFFF8A)
#define FSASTHbits   (*(volatile union FSASTHunion  *)0xFFF8B)
#define FLWLbits     (*(volatile union FLWLunion    *)0xFFF8C)
#define FLWHbits     (*(volatile union FLWHunion    *)0xFFF8E)
#define ITMCbits     (*(volatile union ITMCunion    *)0xFFF90)
#define SECbits      (*(volatile union SECunion     *)0xFFF92)
#define MINbits      (*(volatile union MINunion     *)0x)
#define HOURbits     (*(volatile union HOURunion    *)0xFFF94)
#define WEEKbits     (*(volatile union WEEKunion    *)0xFFF95)
#define DAYbits      (*(volatile union DAYunion     *)0xFFF96)
#define MONTHbits    (*(volatile union MONTHunion   *)0xFFF97)
#define YEARbits     (*(volatile union YEARunion    *)0xFFF98)
#define SUBCUDbits   (*(volatile union SUBCUDunion  *)0xFFF99)
#define ALARMWMbits  (*(volatile union ALARMWMunion *)0xFFF9A)
#define ALARMWHbits  (*(volatile union ALARMWHunion *)0xFFF9B)
#define ALARMWWbits  (*(volatile union ALARMWWunion *)0xFFF9C)
#define RTCC0bits    (*(volatile union RTCC0union   *)0xFFF9D)
#define RTCC1bits    (*(volatile union RTCC1union   *)0xFFF9E)
#define CMCbits      (*(volatile union CMCunion     *)0xFFFA0)
#define CSCbits      (*(volatile union CSCunion     *)0xFFFA1)
#define OSTCbits     (*(volatile union OSTCunion    *)0xFFFA2)
#define OSTSbits     (*(volatile union OSTSunion    *)0xFFFA3)
#define CKCbits      (*(volatile union CKCunion     *)0xFFFA4)
#define CKS0bits     (*(volatile union CKS0union    *)0xFFFA5)
#define CKS1bits     (*(volatile union CKS1union    *)0xFFFA6)
#define RESFbits     (*(volatile union RESFunion    *)0xFFFA8)
#define LVIMbits     (*(volatile union LVIMunion    *)0xFFFA9)
#define LVISbits     (*(volatile union LVISunion    *)0xFFFAA)
#define WDTEbits     (*(volatile union WDTEunion    *)0xFFFAB)
#define CRCINbits    (*(volatile union CRCINunion   *)0xFFFAC)
#define RXBbits      (*(volatile union RXBunion     *)0xFFFAD)
#define TXSbits      (*(volatile union TXSunion     *)0xFFFAD)
#define MONSTA0bits  (*(volatile union MONSTA0union *)0xFFFAE)
#define ASIMbits     (*(volatile union ASIMunion    *)0xFFFAF)
#define DSA0bits     (*(volatile union DSA0union    *)0xFFFB0)
#define DSA1bits     (*(volatile union DSA1union    *)0xFFFB1)
#define DRA0bits     (*(volatile union DRA0union    *)0xFFFB2)
#define DRA0Lbits    (*(volatile union DRA0Lunion   *)0xFFFB2)
#define DRA0Hbits    (*(volatile union DRA0Hunion   *)0xFFFB3)
#define DRA1bits     (*(volatile union DRA1union    *)0xFFFB4)
#define DRA1Lbits    (*(volatile union DRA1Lunion   *)0xFFFB4)
#define DRA1Hbits    (*(volatile union DRA1Hunion   *)0xFFFB5)
#define DBC0bits     (*(volatile union DBC0union    *)0xFFFB6)
#define DBC0Lbits    (*(volatile union DBC0Lunion   *)0xFFFB6)
#define DBC0Hbits    (*(volatile union DBC0Hunion   *)0xFFFB7)
#define DBC1bits     (*(volatile union DBC1union    *)0xFFFB8)
#define DBC1Lbits    (*(volatile union DBC1Lunion   *)0xFFFB8)
#define DBC1Hbits    (*(volatile union DBC1Hunion   *)0xFFFB9)
#define DMC0bits     (*(volatile union DMC0union    *)0xFFFBA)
#define DMC1bits     (*(volatile union DMC1union    *)0xFFFBB)
#define DRC0bits     (*(volatile union DRC0union    *)0xFFFBC)
#define DRC1bits     (*(volatile union DRC1union    *)0xFFFBD)
#define IF2bits      (*(volatile union IF2union     *)0xFFFD0)
#define IF2Lbits     (*(volatile union IF2Lunion    *)0xFFFD0)
#define IF2Hbits     (*(volatile union IF2Hunion    *)0xFFFD1)
#define IF3bits      (*(volatile union IF3union     *)0xFFFD2)
#define IF3Lbits     (*(volatile union IF3Lunion    *)0xFFFD2)
#define MK2bits      (*(volatile union MK2union     *)0xFFFD4)
#define MK2Lbits     (*(volatile union MK2Lunion    *)0xFFFD4)
#define MK2Hbits     (*(volatile union MK2Hunion    *)0xFFFD5)
#define MK3bits      (*(volatile union MK3union     *)0xFFFD6)
#define MK3Lbits     (*(volatile union MK3Lunion    *)0xFFFD6)
#define PR02bits     (*(volatile union PR02union    *)0xFFFD8)
#define PR02Lbits    (*(volatile union PR02Lunion   *)0xFFFD8)
#define PR02Hbits    (*(volatile union PR02Hunion   *)0xFFFD9)
#define PR03bits     (*(volatile union PR03union    *)0xFFFDA)
#define PR03Lbits    (*(volatile union PR03Lunion   *)0xFFFDA)
#define PR12bits     (*(volatile union PR12union    *)0xFFFDC)
#define PR12Lbits    (*(volatile union PR12Lunion   *)0xFFFDC)
#define PR12Hbits    (*(volatile union PR12Hunion   *)0xFFFDD)
#define PR13bits     (*(volatile union PR13union    *)0xFFFDE)
#define PR13Lbits    (*(volatile union PR13Lunion   *)0xFFFDE)
#define IF0bits      (*(volatile union IF0union     *)0xFFFE0)
#define IF0Lbits     (*(volatile union IF0Lunion    *)0xFFFE0)
#define IF0Hbits     (*(volatile union IF0Hunion    *)0xFFFE1)
#define IF1bits      (*(volatile union IF1union     *)0xFFFE2)
#define IF1Lbits     (*(volatile union IF1Lunion    *)0xFFFE2)
#define IF1Hbits     (*(volatile union IF1Hunion    *)0xFFFE3)
#define MK0bits      (*(volatile union MK0union     *)0xFFFE4)
#define MK0Lbits     (*(volatile union MK0Lunion    *)0xFFFE4)
#define MK0Hbits     (*(volatile union MK0Hunion    *)0xFFFE5)
#define MK1bits      (*(volatile union MK1union     *)0xFFFE6)
#define MK1Lbits     (*(volatile union MK1Lunion    *)0xFFFE6)
#define MK1Hbits     (*(volatile union MK1Hunion    *)0xFFFE7)
#define PR00bits     (*(volatile union PR00union    *)0xFFFE8)
#define PR00Lbits    (*(volatile union PR00Lunion   *)0xFFFE8)
#define PR00Hbits    (*(volatile union PR00Hunion   *)0xFFFE9)
#define PR01bits     (*(volatile union PR01union    *)0xFFFEA)
#define PR01Lbits    (*(volatile union PR01Lunion   *)0xFFFEA)
#define PR01Hbits    (*(volatile union PR01Hunion   *)0xFFFEB)
#define PR10bits     (*(volatile union PR10union    *)0xFFFEC)
#define PR10Lbits    (*(volatile union PR10Lunion   *)0xFFFEC)
#define PR10Hbits    (*(volatile union PR10Hunion   *)0xFFFED)
#define PR11bits     (*(volatile union PR11union    *)0xFFFEE)
#define PR11Lbits    (*(volatile union PR11Lunion   *)0xFFFEE)
#define PR11Hbits    (*(volatile union PR11Hunion   *)0xFFFEF)
#define MDALbits     (*(volatile union MDALunion    *)0xFFFF0)
#define MULAbits     (*(volatile union MULAunion    *)0xFFFF0)
#define MDAHbits     (*(volatile union MDAHunion    *)0xFFFF2)
#define MULBbits     (*(volatile union MULBunion    *)0xFFFF2)
#define MDBHbits     (*(volatile union MDBHunion    *)0xFFFF4)
#define MULOHbits    (*(volatile union MULOHunion   *)0xFFFF4)
#define MDBLbits     (*(volatile union MDBLunion    *)0xFFFF6)
#define MULOLbits    (*(volatile union MULOLunion   *)0xFFFF6)
#define PMCbits      (*(volatile union PMCunion     *)0xFFFFE)


// Named Register bits:
#define ADCE      (ADM0bits.adce)
#define ADCS      (ADM0bits.adcs)
#define SPD0      (IICS0bits.spd0)
#define STD0      (IICS0bits.std0)
#define ACKD0     (IICS0bits.ackd0)
#define TRC0      (IICS0bits.trc0)
#define COI0      (IICS0bits.coi0)
#define EXC0      (IICS0bits.exc0)
#define ALD0      (IICS0bits.ald0)
#define MSTS0     (IICS0bits.msts0)
#define IICRSV0   (IICF0bits.iicrsv0)
#define STCEN0    (IICF0bits.stcen0)
#define IICBSY0   (IICF0bits.iicbsy0)
#define STCF0     (IICF0bits.stcf0)
#define SPD1      (IICS1bits.spd1)
#define STD1      (IICS1bits.std1)
#define ACKD1     (IICS1bits.ackd1)
#define TRC1      (IICS1bits.trc1)
#define COI1      (IICS1bits.coi1)
#define EXC1      (IICS1bits.exc1)
#define ALD1      (IICS1bits.ald1)
#define MSTS1     (IICS1bits.msts1)
#define IICRSV1   (IICF1bits.iicrsv1)
#define STCEN1    (IICF1bits.stcen1)
#define IICBSY1   (IICF1bits.iicbsy1)
#define STCF1     (IICF1bits.stcf1)
#define FSSTP     (FSSQbits.fsstp)
#define SQST      (FSSQbits.sqst)
#define SQEND     (FSASTHbits.sqend)
#define ESQEND    (FSASTHbits.esqend)
#define RCLOE1    (RTCC0bits.rcloe1)
#define RTCE      (RTCC0bits.rtce)
#define RWAIT     (RTCC1bits.rwait)
#define RWST      (RTCC1bits.rwst)
#define RIFG      (RTCC1bits.rifg)
#define WAFG      (RTCC1bits.wafg)
#define WALIE     (RTCC1bits.walie)
#define WALE      (RTCC1bits.wale)
#define HIOSTOP   (CSCbits.hiostop)
#define XTSTOP    (CSCbits.xtstop)
#define MSTOP     (CSCbits.mstop)
#define SDIV      (CKCbits.sdiv)
#define MCM0      (CKCbits.mcm0)
#define MCS       (CKCbits.mcs)
#define CSS       (CKCbits.css)
#define CLS       (CKCbits.cls)
#define PCLOE0    (CKS0bits.pcloe0)
#define PCLOE1    (CKS1bits.pcloe1)
#define LVIF      (LVIMbits.lvif)
#define LVIOMSK   (LVIMbits.lviomsk)
#define LVISEN    (LVIMbits.lvisen)
#define LVILV     (LVISbits.lvilv)
#define LVIMD     (LVISbits.lvimd)
#define DWAIT0    (DMC0bits.dwait0)
#define DS0       (DMC0bits.ds0)
#define DRS0      (DMC0bits.drs0)
#define STG0      (DMC0bits.stg0)
#define DWAIT1    (DMC1bits.dwait1)
#define DS1       (DMC1bits.ds1)
#define DRS1      (DMC1bits.drs1)
#define STG1      (DMC1bits.stg1)
#define DST0      (DRC0bits.dst0)
#define DEN0      (DRC0bits.den0)
#define DST1      (DRC1bits.dst1)
#define DEN1      (DRC1bits.den1)
#define TMIF05    (IF2Lbits.tmif05)
#define TMIF06    (IF2Lbits.tmif06)
#define TMIF07    (IF2Lbits.tmif07)
#define PIF6      (IF2Lbits.pif6)
#define PIF7      (IF2Lbits.pif7)
#define PIF8      (IF2Lbits.pif8)
#define PIF9      (IF2Lbits.pif9)
#define PIF10     (IF2Lbits.pif10)
#define PIF11     (IF2Hbits.pif11)
#define TMIF10    (IF2Hbits.tmif10)
#define TMIF11    (IF2Hbits.tmif11)
#define TMIF12    (IF2Hbits.tmif12)
#define TMIF13H   (IF2Hbits.tmif13h)
#define MDIF      (IF2Hbits.mdif)
#define IICAIF1   (IF2Hbits.iicaif1)
#define FLIF      (IF2Hbits.flif)
#define DMAIF2    (IF3Lbits.dmaif2)
#define DMAIF3    (IF3Lbits.dmaif3)
#define TMIF14    (IF3Lbits.tmif14)
#define TMIF15    (IF3Lbits.tmif15)
#define TMIF16    (IF3Lbits.tmif16)
#define TMIF17    (IF3Lbits.tmif17)
#define TMMK05    (MK2Lbits.tmmk05)
#define TMMK06    (MK2Lbits.tmmk06)
#define TMMK07    (MK2Lbits.tmmk07)
#define PMK6      (MK2Lbits.pmk6)
#define PMK7      (MK2Lbits.pmk7)
#define PMK8      (MK2Lbits.pmk8)
#define PMK9      (MK2Lbits.pmk9)
#define PMK10     (MK2Lbits.pmk10)
#define PMK11     (MK2Hbits.pmk11)
#define TMMK10    (MK2Hbits.tmmk10)
#define TMMK11    (MK2Hbits.tmmk11)
#define TMMK12    (MK2Hbits.tmmk12)
#define TMMK13H   (MK2Hbits.tmmk13h)
#define MDMK      (MK2Hbits.mdmk)
#define IICAMK1   (MK2Hbits.iicamk1)
#define FLMK      (MK2Hbits.flmk)
#define DMAMK2    (MK3Lbits.dmamk2)
#define DMAMK3    (MK3Lbits.dmamk3)
#define TMMK14    (MK3Lbits.tmmk14)
#define TMMK15    (MK3Lbits.tmmk15)
#define TMMK16    (MK3Lbits.tmmk16)
#define TMMK17    (MK3Lbits.tmmk17)
#define TMPR005   (PR02Lbits.tmpr005)
#define TMPR006   (PR02Lbits.tmpr006)
#define TMPR007   (PR02Lbits.tmpr007)
#define PPR06     (PR02Lbits.ppr06)
#define PPR07     (PR02Lbits.ppr07)
#define PPR08     (PR02Lbits.ppr08)
#define PPR09     (PR02Lbits.ppr09)
#define PPR010    (PR02Lbits.ppr010)
#define PPR011    (PR02Hbits.ppr011)
#define TMPR010   (PR02Hbits.tmpr010)
#define TMPR011   (PR02Hbits.tmpr011)
#define TMPR012   (PR02Hbits.tmpr012)
#define TMPR013H  (PR02Hbits.tmpr013h)
#define MDPR0     (PR02Hbits.mdpr0)
#define IICAPR01  (PR02Hbits.iicapr01)
#define FLPR0     (PR02Hbits.flpr0)
#define DMAPR02   (PR03Lbits.dmapr02)
#define DMAPR03   (PR03Lbits.dmapr03)
#define TMPR014   (PR03Lbits.tmpr014)
#define TMPR015   (PR03Lbits.tmpr015)
#define TMPR016   (PR03Lbits.tmpr016)
#define TMPR017   (PR03Lbits.tmpr017)
#define TMPR105   (PR12Lbits.tmpr105)
#define TMPR106   (PR12Lbits.tmpr106)
#define TMPR107   (PR12Lbits.tmpr107)
#define PPR16     (PR12Lbits.ppr16)
#define PPR17     (PR12Lbits.ppr17)
#define PPR18     (PR12Lbits.ppr18)
#define PPR19     (PR12Lbits.ppr19)
#define PPR110    (PR12Lbits.ppr110)
#define PPR111    (PR12Hbits.ppr111)
#define TMPR110   (PR12Hbits.tmpr110)
#define TMPR111   (PR12Hbits.tmpr111)
#define TMPR112   (PR12Hbits.tmpr112)
#define TMPR113H  (PR12Hbits.tmpr113h)
#define MDPR1     (PR12Hbits.mdpr1)
#define IICAPR11  (PR12Hbits.iicapr11)
#define FLPR1     (PR12Hbits.flpr1)
#define DMAPR12   (PR13Lbits.dmapr12)
#define DMAPR13   (PR13Lbits.dmapr13)
#define TMPR114   (PR13Lbits.tmpr114)
#define TMPR115   (PR13Lbits.tmpr115)
#define TMPR116   (PR13Lbits.tmpr116)
#define TMPR117   (PR13Lbits.tmpr117)
#define WDTIIF    (IF0Lbits.wdtiif)
#define LVIIF     (IF0Lbits.lviif)
#define PIF0      (IF0Lbits.pif0)
#define PIF1      (IF0Lbits.pif1)
#define PIF2      (IF0Lbits.pif2)
#define PIF3      (IF0Lbits.pif3)
#define PIF4      (IF0Lbits.pif4)
#define PIF5      (IF0Lbits.pif5)
#define STIF2     (IF0Hbits.stif2)
#define SRIF2     (IF0Hbits.srif2)
#define TMIF11H   (IF0Hbits.tmif11h)
#define DMAIF0    (IF0Hbits.dmaif0)
#define DMAIF1    (IF0Hbits.dmaif1)
#define STIF0     (IF0Hbits.stif0)
#define SRIF0     (IF0Hbits.srif0)
#define TMIF01H   (IF0Hbits.tmif01h)
#define SREIF0    (IF0Hbits.tmif01h)
#define STIF1     (IF1Lbits.stif1)
#define SRIF1     (IF1Lbits.srif1)
#define TMIF03H   (IF1Lbits.tmif03h)
#define IICAIF0   (IF1Lbits.iicaif0)
#define TMIF00    (IF1Lbits.tmif00)
#define TMIF01    (IF1Lbits.tmif01)
#define TMIF02    (IF1Lbits.tmif02)
#define TMIF03    (IF1Lbits.tmif03)
#define ADIF      (IF1Hbits.adif)
#define RTCIF     (IF1Hbits.rtcif)
#define ITIF      (IF1Hbits.itif)
#define KRIF      (IF1Hbits.krif)
#define STIF3     (IF1Hbits.stif3)
#define SRIF3     (IF1Hbits.srif3)
#define TMIF13    (IF1Hbits.tmif13)
#define TMIF04    (IF1Hbits.tmif04)
#define WDTIMK    (MK0Lbits.wdtimk)
#define LVIMK     (MK0Lbits.lvimk)
#define PMK0      (MK0Lbits.pmk0)
#define PMK1      (MK0Lbits.pmk1)
#define PMK2      (MK0Lbits.pmk2)
#define PMK3      (MK0Lbits.pmk3)
#define PMK4      (MK0Lbits.pmk4)
#define PMK5      (MK0Lbits.pmk5)
#define STMK2     (MK0Hbits.stmk2)
#define SRMK2     (MK0Hbits.srmk2)
#define TMMK11H   (MK0Hbits.tmmk11h)
#define DMAMK0    (MK0Hbits.dmamk0)
#define DMAMK1    (MK0Hbits.dmamk1)
#define STMK0     (MK0Hbits.stmk0)
#define SRMK0     (MK0Hbits.srmk0)
#define TMMK01H   (MK0Hbits.tmmk01h)
#define SREMK0    (MK0Hbits.tmmk01h)
#define STMK1     (MK1Lbits.stmk1)
#define SRMK1     (MK1Lbits.srmk1)
#define TMMK03H   (MK1Lbits.tmmk03h)
#define IICAMK0   (MK1Lbits.iicamk0)
#define TMMK00    (MK1Lbits.tmmk00)
#define TMMK01    (MK1Lbits.tmmk01)
#define TMMK02    (MK1Lbits.tmmk02)
#define TMMK03    (MK1Lbits.tmmk03)
#define ADMK      (MK1Hbits.admk)
#define RTCMK     (MK1Hbits.rtcmk)
#define ITMK      (MK1Hbits.itmk)
#define KRMK      (MK1Hbits.krmk)
#define STMK3     (MK1Hbits.stmk3)
#define SRMK3     (MK1Hbits.srmk3)
#define TMMK13    (MK1Hbits.tmmk13)
#define TMMK04    (MK1Hbits.tmmk04)
#define WDTIPR0   (PR00Lbits.wdtipr0)
#define LVIPR0    (PR00Lbits.lvipr0)
#define PPR00     (PR00Lbits.ppr00)
#define PPR01     (PR00Lbits.ppr01)
#define PPR02     (PR00Lbits.ppr02)
#define PPR03     (PR00Lbits.ppr03)
#define PPR04     (PR00Lbits.ppr04)
#define PPR05     (PR00Lbits.ppr05)
#define STPR02    (PR00Hbits.stpr02)
#define SRPR02    (PR00Hbits.srpr02)
#define TMPR011H  (PR00Hbits.tmpr011h)
#define DMAPR00   (PR00Hbits.dmapr00)
#define DMAPR01   (PR00Hbits.dmapr01)
#define STPR00    (PR00Hbits.stpr00)
#define SRPR00    (PR00Hbits.srpr00)
#define TMPR001H  (PR00Hbits.tmpr001h)
#define SREPR00   (PR00Hbits.tmpr001h)
#define STPR01    (PR01Lbits.stpr01)
#define SRPR01    (PR01Lbits.srpr01)
#define TMPR003H  (PR01Lbits.tmpr003h)
#define IICAPR00  (PR01Lbits.iicapr00)
#define TMPR000   (PR01Lbits.tmpr000)
#define TMPR001   (PR01Lbits.tmpr001)
#define TMPR002   (PR01Lbits.tmpr002)
#define TMPR003   (PR01Lbits.tmpr003)
#define ADPR0     (PR01Hbits.adpr0)
#define RTCPR0    (PR01Hbits.rtcpr0)
#define ITPR0     (PR01Hbits.itpr0)
#define KRPR0     (PR01Hbits.krpr0)
#define STPR03    (PR01Hbits.stpr03)
#define SRPR03    (PR01Hbits.srpr03)
#define TMPR013   (PR01Hbits.tmpr013)
#define TMPR004   (PR01Hbits.tmpr004)
#define WDTIPR1   (PR10Lbits.wdtipr1)
#define LVIPR1    (PR10Lbits.lvipr1)
#define PPR10     (PR10Lbits.ppr10)
#define PPR11     (PR10Lbits.ppr11)
#define PPR12     (PR10Lbits.ppr12)
#define PPR13     (PR10Lbits.ppr13)
#define PPR14     (PR10Lbits.ppr14)
#define PPR15     (PR10Lbits.ppr15)
#define STPR12    (PR10Hbits.stpr12)
#define SRPR12    (PR10Hbits.srpr12)
#define TMPR111H  (PR10Hbits.tmpr111h)
#define DMAPR10   (PR10Hbits.dmapr10)
#define DMAPR11   (PR10Hbits.dmapr11)
#define STPR10    (PR10Hbits.stpr10)
#define SRPR10    (PR10Hbits.srpr10)
#define TMPR101H  (PR10Hbits.tmpr101h)
#define SREPR10   (PR10Hbits.tmpr101h)
#define STPR11    (PR11Lbits.stpr11)
#define SRPR11    (PR11Lbits.srpr11)
#define TMPR103H  (PR11Lbits.tmpr103h)
#define IICAPR10  (PR11Lbits.iicapr10)
#define TMPR100   (PR11Lbits.tmpr100)
#define TMPR101   (PR11Lbits.tmpr101)
#define TMPR102   (PR11Lbits.tmpr102)
#define TMPR103   (PR11Lbits.tmpr103)
#define ADPR1     (PR11Hbits.adpr1)
#define RTCPR1    (PR11Hbits.rtcpr1)
#define ITPR1     (PR11Hbits.itpr1)
#define KRPR1     (PR11Hbits.krpr1)
#define STPR13    (PR11Hbits.stpr13)
#define SRPR13    (PR11Hbits.srpr13)
#define TMPR113   (PR11Hbits.tmpr113)
#define TMPR104   (PR11Hbits.tmpr104)
#define MAA       (PMCbits.maa)

#endif // SFRS_H
