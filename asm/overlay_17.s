	.include "asm/macros.inc"
	.include "overlay_17.inc"
	.include "global.inc"

	.rodata

ov17_02203D50:
	.byte 0x02, 0x01, 0x00, 0x00

ov17_02203D54:
	.byte 0x05, 0x01, 0x00, 0x00

ov17_02203D58:
	.byte 0x03, 0x01, 0x00, 0x00

ov17_02203D5C:
	.byte 0x04, 0x03, 0x01, 0x00

	.public ov17_02203D60
ov17_02203D60: ; 0x02203D60
	.byte 0x00, 0x02, 0x01, 0x00, 0x00, 0x04, 0x03, 0x00, 0x00, 0x06, 0x05, 0x00, 0x03, 0x04, 0x00, 0x0B
	.byte 0x00, 0x00, 0x3A, 0x00, 0x1F, 0x00, 0x54, 0x00

	.public ov17_02203D78
ov17_02203D78: ; 0x02203D78
	.byte 0x1E, 0x00, 0x1F, 0x00, 0x1D, 0x00, 0x1C, 0x00
	.byte 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x00, 0x00, 0x00

	.public ov17_02203D88
ov17_02203D88: ; 0x02203D88
	.byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	.public ov17_02203D98
ov17_02203D98: ; 0x02203D98
	.byte 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x40, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00

	.public ov17_02203DAC
ov17_02203DAC: ; 0x02203DAC
	.byte 0x01, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00

	.public ov17_02203DC4
ov17_02203DC4: ; 0x02203DC4
	.byte 0x02, 0x19, 0x15, 0x06, 0x02, 0x09, 0xA2, 0x01, 0x00, 0x02, 0x13, 0x13
	.byte 0x04, 0x0C, 0xCA, 0x00, 0x00, 0x02, 0x13, 0x1B, 0x04, 0x0C, 0x36, 0x01

	.public ov17_02203DDC
ov17_02203DDC: ; 0x02203DDC
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x1E, 0x00
	.byte 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	.public ov17_02203DF8
ov17_02203DF8: ; 0x02203DF8
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x1F, 0x04, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00

	.public ov17_02203E14
ov17_02203E14: ; 0x02203E14
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x1E, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	.public ov17_02203E30
ov17_02203E30: ; 0x02203E30
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x1F, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	.public ov17_02203E4C
ov17_02203E4C: ; 0x02203E4C
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x1D, 0x00
	.byte 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	.public ov17_02203E68
ov17_02203E68: ; 0x02203E68
	.byte 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00

	.public ov17_02203E88
ov17_02203E88: ; 0x02203E88
	.word 3, ov17_02203D5C
	.word 2, ov17_02203D58
	.word 2, ov17_02203D50
	.word 2, ov17_02203D54

	.public ov17_02203EA8
ov17_02203EA8: ; 0x02203EA8
	.byte 0x00, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x60, 0x00
	.byte 0x00, 0x00, 0x05, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	.public ov17_02203ED0
ov17_02203ED0: ; 0x02203ED0
	.byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	.public ov17_02203EF8
ov17_02203EF8: ; 0x02203EF8
	.byte 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0xB0, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	.public ov17_02203F48
ov17_02203F48: ; 0x02203F48
	.byte 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x38, 0x00
	.byte 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	.public ov17_02203F70
ov17_02203F70: ; 0x02203F70
	.byte 0x00, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x63, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0E, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	.public ov17_02203F98
ov17_02203F98: ; 0x02203F98
	.byte 0x00, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x58, 0x00
	.byte 0x00, 0x00, 0x07, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	.public ov17_02203FC0
ov17_02203FC0: ; 0x02203FC0
	.byte 0xA0, 0xC0, 0xC0, 0x00
