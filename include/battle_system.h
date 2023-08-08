#ifndef POKEHEARTGOLD_BATTLE_SYSTEM_H
#define POKEHEARTGOLD_BATTLE_SYSTEM_H

#include "bag.h"
#include "battle.h"
#include "battle_setup.h"
#include "pokemon.h"

BgConfig *BattleSystem_GetBgConfig(BattleSystem *bsys);
Window *BattleSystem_GetWindow(BattleSystem *bsys, int index);
u32 BattleSystem_GetBattleType(BattleSystem *bsys);
BATTLECONTEXT *BattleSystem_GetBattleContext(BattleSystem *bsys);
OpponentData *BattleSystem_GetOpponentData(BattleSystem *bsys, int battlerId);
int BattleSystem_GetMaxBattlers(BattleSystem *bsys);
PARTY *BattleSystem_GetParty(BattleSystem *bsys, int battlerId);
int BattleSystem_GetPartySize(BattleSystem *bsys, int battlerId);
Pokemon *BattleSystem_GetPartyMon(BattleSystem *bsys, int battlerId, int index);
u32 *ov12_0223A8D4(BattleSystem *bsys);
u32 *ov12_0223A8DC(BattleSystem *bsys);
u32 *ov12_0223A8E4(BattleSystem *bsys);
u32 *ov12_0223A8EC(BattleSystem *bsys);
UnkBattleSystemSub17C *ov12_0223A8F4(BattleSystem *bsys, int index);
u32 *ov12_0223A900(BattleSystem *bsys);
u32 *ov12_0223A908(BattleSystem *bsys, int index);
void ov12_0223A914(BattleSystem *bsys, int index, u32 *a2);
FontID *BattleSystem_GetHpFont(BattleSystem *bsys);
FontID *BattleSystem_GetLevelFont(BattleSystem *bsys);
u32 *ov12_0223A930(BattleSystem *bsys);
u32 *ov12_0223A934(BattleSystem *bsys);
PaletteData *BattleSystem_GetPaletteData(BattleSystem *bsys);
Pokedex *BattleSystem_GetPokedex(BattleSystem *bsys);
u8 *BattleSystem_GetSendBufferPtr(BattleSystem *bsys);
u8 *BattleSystem_GetRecvBufferPtr(BattleSystem *bsys);
u16 *ov12_0223A954(BattleSystem *bsys);
u16 *ov12_0223A960(BattleSystem *bsys);
u16 *ov12_0223A96C(BattleSystem *bsys);
u16 *ov12_0223A978(BattleSystem *bsys);
u16 *ov12_0223A984(BattleSystem *bsys);
u16 *ov12_0223A990(BattleSystem *bsys);
UnkBattleSystemSub1D0 *ov12_0223A99C(BattleSystem *bsys);
u32 *ov12_0223A9A4(BattleSystem *bsys);
String *BattleSystem_GetMessageBuffer(BattleSystem *bsys);
u16 BattleSystem_GetTrainerIndex(BattleSystem *bsys, int battlerId);
TRAINER *BattleSystem_GetTrainer(BattleSystem *bsys, int battlerId);
PlayerProfile *BattleSystem_GetPlayerProfile(BattleSystem *bsys, int a1);
Bag *BattleSystem_GetBag(BattleSystem *bsys);
BagCursor *BattleSystem_GetBagCursor(BattleSystem *bsys);
u16 BattleSystem_GetMonBall(BattleSystem *bsys, Pokemon *mon);
u32 ov12_0223AAB8(BattleSystem *bsys);
u32 BattleSystem_GetTrainerGender(BattleSystem *bsys, int battlerId);
int ov12_0223AAD8(BattleSystem *bsys, int a1);
u8 ov12_0223AB0C(BattleSystem *bsys, int battlerId);
u8 BattleSystem_GetFieldSide(BattleSystem *bsys, int battlerId);
void *BattleSystem_GetMessageIcon(BattleSystem *bsys);
PC_STORAGE *BattleSystem_GetPcStorage(BattleSystem *bsys);
Terrain BattleSystem_GetTerrainId(BattleSystem *bsys);
int ov12_0223AB54(BattleSystem *bsys);
int BattleSystem_GetLocation(BattleSystem *bsys);
int BattleSystem_GetBattlerIdPartner(BattleSystem *bsys, int battlerId);
int ov12_0223ABB8(BattleSystem *bsys, int battlerId, int side);
BOOL BattleSystem_RecoverStatus(BattleSystem *bsys, int battlerId, int selectedMonIndex, int movePos, int item);
u32 BattleSystem_GetBattleSpecial(BattleSystem *bsys);
int BattleSystem_GetTimezone(BattleSystem *bsys);
int ov12_0223B52C(BattleSystem *bsys);
u8 ov12_0223B580(BattleSystem *bsys, int battlerId, u8 a2);
u16 BattleSystem_CheckEvolution(BATTLE_SETUP *setup, int *selectedMonIndex, int *evolutionCondition);
u8 ov12_0223B688(BattleSystem *bsys);
u8 ov12_0223B694(BattleSystem *bsys);
int BattleSystem_GetSafariBallCount(BattleSystem *bsys);
void BattleSystem_SetSafariBallCount(BattleSystem *bsys, int item);
OPTIONS *BattleSystem_GetOptions(BattleSystem *bsys);
BOOL BattleSystem_AreBattleAnimationsOn(BattleSystem *bsys);
u16 BattleSystem_GetFrame(BattleSystem *bsys);
u8 BattleSystem_GetTextFrameDelay(BattleSystem *bsys);
u16 BattleSystem_GetBattleStyle(BattleSystem *bsys);
void *ov12_0223B750(BattleSystem *bsys);
SOUND_CHATOT *BattleSystem_GetChatotVoice(BattleSystem *bsys, int battlerId);
void BattleSystem_TryChangeForm(BattleSystem *bsys);
void ov12_0223B854(BattleSystem *bsys, int battlerId, int selectedMonIndex);
void ov12_0223B870();
void BattleSystem_SetBackground(BattleSystem *bsys);
u8 *ov12_0223BAD0(BattleSystem *bsys);
u16 *ov12_0223BAD8(BattleSystem *bsys);
u16 *ov12_0223BAE0(BattleSystem *bsys);
u16 *ov12_0223BAEC(BattleSystem *bsys);
int BattleSystem_GetWeather(BattleSystem *bsys);
u8 ov12_0223BB04(BattleSystem *bsys);
void ov12_0223BB10(BattleSystem *bsys, u8 a1);
int ov12_0223BB1C(BattleSystem *bsys);
void BattleSystem_GameStatIncrement(BattleSystem *bsys, int id);
void ov12_0223BB44(BattleSystem *bsys);
void ov12_0223BB64(BattleSystem *bsys, int a1);
void ov12_0223BB6C(BattleSystem *bsys, u8 a1);
void *ov12_0223BB78(BattleSystem *bsys);
void ov12_0223BB80(BattleSystem *bsys, void *a1);
UnkBattleSystemSub1D0 *ov12_0223BB88(BattleSystem *bsys, int index);
u8 *ov12_0223BB94(UnkBattleSystemSub1D0 *ptr, int index);
void ov12_0223BBA8(UnkBattleSystemSub1D0 *ptr, int index, int a2);
void ov12_0223BBC0(UnkBattleSystemSub1D0 *ptr, int index, int a2);
void ov12_0223BBD8(UnkBattleSystemSub1D0 *ptr, int index, int a2);
void ov12_0223BBF0(BattleSystem *bsys, u8 a1);
void ov12_0223BBFC(BattleSystem *bsys, u8 *a1);
void ov12_0223BC08(BattleSystem *bsys, u8 *a1);
void ov12_0223BC14(BattleSystem *bsys, u8 a1);
void ov12_0223BC20(BattleSystem *bsys, u8 a1);
void ov12_0223BC2C(BattleSystem *bsys, u8 a1);
BattleHpBar *BattleSystem_GetHpBar(BattleSystem *bsys, int battlerId);
void BattleSystem_HpBar_Init(BattleSystem *bsys);
void BattleSystem_SetHpBarEnabled(BattleSystem *bsys);

//These functions haven't been decompiled
int BattleSystem_Random(BattleSystem *bsys);
void ov12_0223BDDC(BattleSystem *bsys, int battlerId, u8 a2);
void PokedexSetBattlerSeen(BattleSystem *bsys, int battlerId);
int BattleSystem_GetChatotVoiceParam(BattleSystem *bsys, int battlerId);
BOOL Link_QueueNotEmpty(BATTLECONTEXT *ctx);
BOOL ov12_0223C080(BattleSystem *bsys);
void ov12_0223BFFC(BattleSystem *bsys, u32 a1);
u32 BattleSystem_GetWinLoseFlags(BattleSystem *bsys);
void ov12_0223C0C4(BattleSystem *bsys);
BOOL ov12_0223BFEC(BattleSystem *bsys);
void ov12_02237ED0(BattleSystem *bsys, int a1);
void ov12_022642F0(BattleSystem *bsys);
BOOL ov12_022581BC(BattleSystem *bsys, BATTLECONTEXT *ctx);
void ov12_02263A1C(BattleSystem *bsys, BATTLECONTEXT *ctx, int battlerId);
void ov12_02266008(UnkBattleSystemSub17C *a0);
BattleHpBar *OpponentData_GetHpBar(OpponentData *opponentData);

#endif
