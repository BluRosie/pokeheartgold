#include "global.h"
#include <nitro/os/printf.h>

// declarations that i may need to put in a header
typedef struct PokeWalkerIrLib_Header {
    u8 command;
    u8 value;
    u8 sumLo;
    u8 sumHi;
    u32 uid;
} PokeWalkerIrLib_Header;

// external functions that i will need to make a header for
extern void CARD_SpiWaitInit(void);
extern void CARD_SetSpiWriteWaitCycles(u32 cycles);
extern void CARD_SetSpiReadWaitCycles(u32 cycles);
extern void CARD_SpiWaitReadRange(u8 *buf);
extern void CARD_SpiWaitWriteRange(u8 *buf, u32 length);

u32 PokeWalkerIrLib_021FF9E0[14];
u8 PokeWalkerIrLib_Buffer[sizeof(PokeWalkerIrLib_Header) + 132];

u8 PokeWalkerIrLib_021FF500 = 0xFF;
u8 PokeWalkerIrLib_021FF501 = 0xFF;
u8 PokeWalkerIrLib_021FF502 = 0;

// this file's functions
u16 PokeWalkerIrLib_CalcCheckSum(u8 *data, u32 length);
void PokeWalkerIrLib_Sub_021E5938(void);
void PokeWalkerIrLib_Sub_021E594C(void);
void PokeWalkerIrLib_021E5964_InitMaybe(void);
u32 ov112_021E59A8(void);
void ov112_021E59B4(const u8 *data, u8 size, u8 command, u8 value, u32 id);
void ov112_021E5A14(u32 a0);
void ov112_021E5A5C(void);
void ov112_021E5A68(const u8 *buf, u8 size, u8 command, u8 value);
void ov112_021E5A80_nullsub(void);
u32 ov112_021E5A84(u32 a0);

u16 PokeWalkerIrLib_CalcCheckSum(u8 *data, u32 length) {
    u32 ret, i;
    ret = 2;
    for (i = 0; i < length; i++) {
        u8 temp = *data++;
        if (i & 1) {
            ret += temp;
        } else {
            ret += (temp << 8);
        }
    }
    ret = (ret >> 16) + (ret & 0xFFFF);
    ret += (ret >> 16);
    return ret;
}

void PokeWalkerIrLib_Sub_021E5938(void) {
    PokeWalkerIrLib_021FF9E0[6] = TRUE;
    PokeWalkerIrLib_021FF9E0[4]++;
}

void PokeWalkerIrLib_Sub_021E594C(void) {
    ((u8 *)(PokeWalkerIrLib_021FF9E0))[0] = 0;
    PokeWalkerIrLib_021FF9E0[10] = 0;
    PokeWalkerIrLib_021FF9E0[11] = 0;
    PokeWalkerIrLib_021FF9E0[6] = FALSE;
    PokeWalkerIrLib_021FF9E0[9] = 0;
    PokeWalkerIrLib_021FF9E0[2] = 0;
    PokeWalkerIrLib_021FF9E0[4] = 0;
}

void PokeWalkerIrLib_021E5964_InitMaybe(void) {
    CARD_SpiWaitInit();
    CARD_SetSpiWriteWaitCycles(50);
    CARD_SetSpiReadWaitCycles(50);
    CARD_SpiWaitReadRange(PokeWalkerIrLib_Buffer);
    PokeWalkerIrLib_Sub_021E594C();
    PokeWalkerIrLib_021FF500 = 0xFF;
    PokeWalkerIrLib_021FF501 = 0xFF;
    PokeWalkerIrLib_021FF9E0[8] = OS_GetTick();
    PokeWalkerIrLib_021FF9E0[1] = PokeWalkerIrLib_021FF9E0[8];
    PokeWalkerIrLib_021FF9E0[3] = 0;
    PokeWalkerIrLib_021FF9E0[7] = 0;
}

u32 ov112_021E59A8(void) {
    return PokeWalkerIrLib_021FF9E0[11];
}

#ifdef NONMATCHING
// unsure how to get this to see PokeWalkerIrLib_Buffer[sizeof(PokeWalkerIrLib_Header)] as a different pointer
void ov112_021E59B4(const u8 *data, u8 size, u8 command, u8 value, u32 id) {
    u8 *tempPtr;
    u16 sum;
    int i;
    PokeWalkerIrLib_Header *header;

    header = (PokeWalkerIrLib_Header *)&PokeWalkerIrLib_Buffer[0];
    header->command = command;
    header->value = value;
    header->uid = id;
    header->sumLo = 0; header->sumHi = 0;
    tempPtr = &PokeWalkerIrLib_Buffer[sizeof(PokeWalkerIrLib_Header)];
    for (i = 0; i < size; i++) { *tempPtr++ = *data++; }

    size += sizeof(PokeWalkerIrLib_Header);
    sum = PokeWalkerIrLib_CalcCheckSum(&PokeWalkerIrLib_Buffer[0], size);

    header->sumLo = (u8)(sum & 0xFF); header->sumHi = (u8)((sum >> 8) & 0xFF);

    for (i = 0; i < size; i++) { PokeWalkerIrLib_Buffer[i] = (u8)(PokeWalkerIrLib_Buffer[i] ^ 0xAA); }
    CARD_SpiWaitWriteRange(PokeWalkerIrLib_Buffer, size);
}
#else
// clang-format off
asm void ov112_021E59B4(const u8 *data, u8 size, u8 command, u8 value, u32 id) {
	push {r3, r4, r5, lr}
	ldr r4, =PokeWalkerIrLib_Buffer
	add r5, r1, #0
	strb r2, [r4] // header->command = command
	strb r3, [r4, #1] // header->value = value
	ldr r1, [sp, #0x10]
	ldr r3, =PokeWalkerIrLib_Buffer+8
	str r1, [r4, #4] // header->uid = id
	mov r1, #0
	strb r1, [r4, #2] // header->sumLo = 0
	strb r1, [r4, #3] // header->sumHi = 0
	b _021E59D6
_021E59CC:
	ldrb r2, [r0]
	add r0, r0, #1
	add r1, r1, #1
	strb r2, [r3]
	add r3, r3, #1
_021E59D6:
	cmp r1, r5
	blt _021E59CC
	add r5, #8
	lsl r0, r5, #0x18
	lsr r5, r0, #0x18
	ldr r0, =PokeWalkerIrLib_Buffer
	add r1, r5, #0
	bl PokeWalkerIrLib_CalcCheckSum
	strb r0, [r4, #2]
	asr r0, r0, #8
	strb r0, [r4, #3]
	mov r1, #0
	ldr r3, =PokeWalkerIrLib_Buffer
	mov r0, #0xaa
	b _021E59FE
_021E59F6:
	ldrb r2, [r3, r1]
	eor r2, r0
	strb r2, [r3, r1]
	add r1, r1, #1
_021E59FE:
	cmp r1, r5
	blt _021E59F6
	ldr r0, =PokeWalkerIrLib_Buffer
	add r1, r5, #0
	bl CARD_SpiWaitWriteRange
	pop {r3, r4, r5, pc}
}
// clang-format on
#endif // NONMATCHING

// PokeWalkerIrLib_021FF9E0 definitely some sort of structure
void ov112_021E5A14(u32 a0) {
    if (PokeWalkerIrLib_021FF9E0[11] && !PokeWalkerIrLib_021FF9E0[2]) {
        if (!a0) {
            ov112_021E59B4(NULL, 0, 0xF4, PokeWalkerIrLib_021FF500, PokeWalkerIrLib_021FF9E0[1]);
        }
    }
    if (PokeWalkerIrLib_021FF9E0[5] != 0) {
        ((void (*)(u32))(PokeWalkerIrLib_021FF9E0[5]))(a0);
    }
    PokeWalkerIrLib_Sub_021E594C();
}

void ov112_021E5A5C(void) {
    ov112_021E5A14(FALSE);
}

void ov112_021E5A68(const u8 *buf, u8 size, u8 command, u8 value) {
    if (PokeWalkerIrLib_021FF9E0[11] == 0) {
        return;
    } else {
        ov112_021E59B4(buf, size, command, value, PokeWalkerIrLib_021FF9E0[1]);
    }
}

void ov112_021E5A80_nullsub(void) {
    return;
}

#ifdef NONMATCHING
u32 ov112_021E5A84(u32 a0) {
    u32 i;

    if (a0 == 1) {
        if (PokeWalkerIrLib_021FF9E0[11]) {
            return 1;
        }
        if (PokeWalkerIrLib_Buffer[0] != 0xFC) {
            return 1;
        }
        return 0;
    }
    if (a0 == 2 || a0 == 3) {
        // idfk these are being optimized out which makes sense
        i = 0;
        while (i < 4) {
            (void)(vu32)i++;
        }
        i = 0;
        while (i < (vu32)a0) {
            (void)(vu32)i++;
        }
        return 1;
    }
    return 0;
}
#else
asm u32 ov112_021E5A84(u32 a0) {
	cmp r0, #1
	bne _021E5AA4
	ldr r0, =PokeWalkerIrLib_021FF9E0
	ldr r0, [r0, #0x2c]
	cmp r0, #0
	beq _021E5A94
	mov r0, #1
	bx lr
_021E5A94:
	ldr r0, =PokeWalkerIrLib_Buffer
	ldrb r0, [r0]
	cmp r0, #0xfc
	beq _021E5AA0
	mov r0, #1
	bx lr
_021E5AA0:
	mov r0, #0
	bx lr
_021E5AA4:
	cmp r0, #2
	beq _021E5AAC
	cmp r0, #3
	bne _021E5AC4
_021E5AAC:
	mov r1, #0
	b _021E5AB2
_021E5AB0:
	add r1, r1, #1
_021E5AB2:
	cmp r1, #4
	blo _021E5AB0
	mov r1, #0
	b _021E5ABC
_021E5ABA:
	add r1, r1, #1
_021E5ABC:
	cmp r1, r0
	blo _021E5ABA
	mov r0, #1
	bx lr
_021E5AC4:
	mov r0, #0
	bx lr
}
#endif // NONMATCHING
