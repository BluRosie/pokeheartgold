#ifndef POKEHEARTGOLD_FILESYSTEM_FILES_DEF_H
#define POKEHEARTGOLD_FILESYSTEM_FILES_DEF_H

#include <nitro/fs/file.h>

typedef enum NarcId
{
    NARC_a_0_0_0 = 0,
    NARC_a_0_0_1,
    NARC_a_0_0_2,
    NARC_a_0_0_3,
    NARC_a_0_0_4,
    NARC_a_0_0_5,
    NARC_a_0_0_6,
    NARC_a_0_0_7,
    NARC_a_0_0_8,
    NARC_a_0_0_9,
    NARC_a_0_1_0,
    NARC_a_0_1_1,
    NARC_a_0_1_2,
    NARC_a_0_1_3,
    NARC_a_0_1_4,
    NARC_a_0_1_5,
    NARC_graphic_font,
    NARC_a_0_1_7,
    NARC_a_0_1_8,
    NARC_a_0_1_9,
    NARC_a_0_2_0,
    NARC_a_0_2_1,
    NARC_a_0_2_2,
    NARC_a_0_2_3,
    NARC_a_0_2_4,
    NARC_a_0_2_5,
    NARC_a_0_2_6,
    NARC_msgdata_msg,
    NARC_a_0_2_8,
    NARC_a_0_2_9,
    NARC_a_0_3_0,
    NARC_a_0_3_1,
    NARC_a_0_3_2,
    NARC_a_0_3_3,
    NARC_a_0_3_4,
    NARC_a_0_3_5,
    NARC_a_0_3_6,
    NARC_fielddata_encountdata_g_enc_data,
    NARC_a_0_3_8,
    NARC_a_0_3_9,
    NARC_a_0_4_0,
    NARC_a_0_4_1,
    NARC_a_0_4_2,
    NARC_a_0_4_3,
    NARC_a_0_4_4,
    NARC_a_0_4_5,
    NARC_a_0_4_6,
    NARC_a_0_4_7,
    NARC_a_0_4_8,
    NARC_a_0_4_9,
    NARC_a_0_5_0,
    NARC_a_0_5_1,
    NARC_a_0_5_2,
    NARC_a_0_5_3,
    NARC_a_0_5_4,
    NARC_a_0_5_5,
    NARC_a_0_5_6,
    NARC_a_0_5_7,
    NARC_a_0_5_8,
    NARC_a_0_5_9,
    NARC_a_0_6_0,
    NARC_a_0_6_1,
    NARC_a_0_6_2,
    NARC_a_0_6_3,
    NARC_a_0_6_4,
    NARC_a_0_6_5,
    NARC_a_0_6_6,
    NARC_a_0_6_7,
    NARC_a_0_6_8,
    NARC_a_0_6_9,
    NARC_a_0_7_0,
    NARC_a_0_7_1,
    NARC_a_0_7_2,
    NARC_a_0_7_3,
    NARC_application_zukanlist_zukan_data_zukan_data,
    NARC_a_0_7_5,
    NARC_a_0_7_6,
    NARC_a_0_7_7,
    NARC_a_0_7_8,
    NARC_a_0_7_9,
    NARC_a_0_8_0,
    NARC_a_0_8_1,
    NARC_a_0_8_2,
    NARC_a_0_8_3,
    NARC_a_0_8_4,
    NARC_a_0_8_5,
    NARC_a_0_8_6,
    NARC_a_0_8_7,
    NARC_a_0_8_8,
    NARC_a_0_8_9,
    NARC_a_0_9_0,
    NARC_a_0_9_1,
    NARC_a_0_9_2,
    NARC_a_0_9_3,
    NARC_a_0_9_4,
    NARC_a_0_9_5,
    NARC_a_0_9_6,
    NARC_a_0_9_7,
    NARC_a_0_9_8,
    NARC_a_0_9_9,
    NARC_a_1_0_0,
    NARC_a_1_0_1,
    NARC_a_1_0_2,
    NARC_a_1_0_3,
    NARC_a_1_0_4,
    NARC_a_1_0_5,
    NARC_a_1_0_6,
    NARC_a_1_0_7,
    NARC_a_1_0_8,
    NARC_a_1_0_9,
    NARC_a_1_1_0,
    NARC_a_1_1_1,
    NARC_a_1_1_2,
    NARC_a_1_1_3,
    NARC_a_1_1_4,
    NARC_a_1_1_5,
    NARC_a_1_1_6,
    NARC_a_1_1_7,
    NARC_a_1_1_8,
    NARC_a_1_1_9,
    NARC_a_1_2_0,
    NARC_a_1_2_1,
    NARC_a_1_2_2,
    NARC_a_1_2_3,
    NARC_a_1_2_4,
    NARC_a_1_2_5,
    NARC_a_1_2_6,
    NARC_a_1_2_7,
    NARC_a_1_2_8,
    NARC_a_1_2_9,
    NARC_a_1_3_0,
    NARC_a_1_3_1,
    NARC_a_1_3_2,
    NARC_a_1_3_3,
    NARC_a_1_3_4,
    NARC_a_1_3_5,
    NARC_fielddata_encountdata_s_enc_data,
    NARC_a_1_3_7,
    NARC_poketool_johtozukan,
    NARC_a_1_3_9,
    NARC_a_1_4_0,
    NARC_a_1_4_1,
    NARC_a_1_4_2,
    NARC_a_1_4_3,
    NARC_a_1_4_4,
    NARC_a_1_4_5,
    NARC_a_1_4_6,
    NARC_a_1_4_7,
    NARC_a_1_4_8,
    NARC_a_1_4_9,
    NARC_a_1_5_0,
    NARC_a_1_5_1,
    NARC_a_1_5_2,
    NARC_a_1_5_3,
    NARC_a_1_5_4,
    NARC_a_1_5_5,
    NARC_a_1_5_6,
    NARC_a_1_5_7,
    NARC_a_1_5_8,
    NARC_a_1_5_9,
    NARC_a_1_6_0,
    NARC_a_1_6_1,
    NARC_a_1_6_2,
    NARC_a_1_6_3,
    NARC_a_1_6_4,
    NARC_a_1_6_5,
    NARC_a_1_6_6,
    NARC_a_1_6_7,
    NARC_a_1_6_8,
    NARC_a_1_6_9,
    NARC_a_1_7_0,
    NARC_a_1_7_1,
    NARC_a_1_7_2,
    NARC_a_1_7_3,
    NARC_a_1_7_4,
    NARC_a_1_7_5,
    NARC_a_1_7_6,
    NARC_a_1_7_7,
    NARC_a_1_7_8,
    NARC_a_1_7_9,
    NARC_a_1_8_0,
    NARC_a_1_8_1,
    NARC_a_1_8_2,
    NARC_a_1_8_3,
    NARC_a_1_8_4,
    NARC_a_1_8_5,
    NARC_a_1_8_6,
    NARC_a_1_8_7,
    NARC_a_1_8_8,
    NARC_a_1_8_9,
    NARC_a_1_9_0,
    NARC_a_1_9_1,
    NARC_a_1_9_2,
    NARC_a_1_9_3,
    NARC_pbr_pokegra,
    NARC_pbr_otherpoke,
    NARC_a_1_9_4,
    NARC_a_1_9_5,
    NARC_a_1_9_6,
    NARC_a_1_9_7,
    NARC_a_1_9_8,
    NARC_a_1_9_9,
    NARC_a_2_0_0,
    NARC_a_2_0_1,
    NARC_a_2_0_2,
    NARC_a_2_0_3,
    NARC_a_2_0_4,
    NARC_a_2_0_5,
    NARC_a_2_0_6,
    NARC_a_2_0_7,
    NARC_a_2_0_8,
    NARC_a_2_0_9,
    NARC_a_2_1_0,
    NARC_a_2_1_1,
    NARC_a_2_1_2,
    NARC_a_2_1_3,
    NARC_application_zukanlist_zukan_data_zukan_data_gira,
    NARC_a_2_1_5,
    NARC_a_2_1_6,
    NARC_a_2_1_7,
    NARC_a_2_1_8,
    NARC_a_2_1_9,
    NARC_a_2_2_0,
    NARC_a_2_2_1,
    NARC_a_2_2_2,
    NARC_a_2_2_3,
    NARC_a_2_2_4,
    NARC_a_2_2_5,
    NARC_a_2_2_6,
    NARC_a_2_2_7,
    NARC_a_2_2_8,
    NARC_a_2_2_9,
    NARC_a_2_3_0,
    NARC_a_2_3_1,
    NARC_a_2_3_2,
    NARC_a_2_3_3,
    NARC_a_2_3_4,
    NARC_a_2_3_5,
    NARC_a_2_3_6,
    NARC_a_2_3_7,
    NARC_a_2_3_8,
    NARC_a_2_3_9,
    NARC_a_2_4_0,
    NARC_a_2_4_1,
    NARC_a_2_4_2,
    NARC_a_2_4_3,
    NARC_a_2_4_4,
    NARC_a_2_4_5,
    NARC_a_2_4_6,
    NARC_a_2_4_7,
    NARC_a_2_4_8,
    NARC_a_2_4_9,
    NARC_a_2_5_0,
    NARC_a_2_5_1,
    NARC_a_2_5_2,
    NARC_a_2_5_3,
    NARC_a_2_5_4,
    NARC_a_2_5_5,
    NARC_a_2_5_6,
    NARC_a_2_5_7,
    NARC_a_2_5_8,
    NARC_a_2_5_9,
    NARC_a_2_6_0,
    NARC_a_2_6_1,
    NARC_a_2_6_2,
    NARC_a_2_6_3,
    NARC_a_2_6_4,
} NarcId;

#ifdef _IN_FILESYSTEM_C
#undef _IN_FILESYSTEM_C // inverse guard
char * sNarcFileList[] = {
    "a/0/0/0",
    "a/0/0/1",
    "a/0/0/2",
    "a/0/0/3",
    "a/0/0/4",
    "a/0/0/5",
    "a/0/0/6",
    "a/0/0/7",
    "a/0/0/8",
    "a/0/0/9",
    "a/0/1/0",
    "a/0/1/1",
    "a/0/1/2",
    "a/0/1/3",
    "a/0/1/4",
    "a/0/1/5",
    "a/0/1/6",
    "a/0/1/7",
    "a/0/1/8",
    "a/0/1/9",
    "a/0/2/0",
    "a/0/2/1",
    "a/0/2/2",
    "a/0/2/3",
    "a/0/2/4",
    "a/0/2/5",
    "a/0/2/6",
    "a/0/2/7",
    "a/0/2/8",
    "a/0/2/9",
    "a/0/3/0",
    "a/0/3/1",
    "a/0/3/2",
    "a/0/3/3",
    "a/0/3/4",
    "a/0/3/5",
    "a/0/3/6",
    "a/0/3/7",
    "a/0/3/8",
    "a/0/3/9",
    "a/0/4/0",
    "a/0/4/1",
    "a/0/4/2",
    "a/0/4/3",
    "a/0/4/4",
    "a/0/4/5",
    "a/0/4/6",
    "a/0/4/7",
    "a/0/4/8",
    "a/0/4/9",
    "a/0/5/0",
    "a/0/5/1",
    "a/0/5/2",
    "a/0/5/3",
    "a/0/5/4",
    "a/0/5/5",
    "a/0/5/6",
    "a/0/5/7",
    "a/0/5/8",
    "a/0/5/9",
    "a/0/6/0",
    "a/0/6/1",
    "a/0/6/2",
    "a/0/6/3",
    "a/0/6/4",
    "a/0/6/5",
    "a/0/6/6",
    "a/0/6/7",
    "a/0/6/8",
    "a/0/6/9",
    "a/0/7/0",
    "a/0/7/1",
    "a/0/7/2",
    "a/0/7/3",
    "a/0/7/4",
    "a/0/7/5",
    "a/0/7/6",
    "a/0/7/7",
    "a/0/7/8",
    "a/0/7/9",
    "a/0/8/0",
    "a/0/8/1",
    "a/0/8/2",
    "a/0/8/3",
    "a/0/8/4",
    "a/0/8/5",
    "a/0/8/6",
    "a/0/8/7",
    "a/0/8/8",
    "a/0/8/9",
    "a/0/9/0",
    "a/0/9/1",
    "a/0/9/2",
    "a/0/9/3",
    "a/0/9/4",
    "a/0/9/5",
    "a/0/9/6",
    "a/0/9/7",
    "a/0/9/8",
    "a/0/9/9",
    "a/1/0/0",
    "a/1/0/1",
    "a/1/0/2",
    "a/1/0/3",
    "a/1/0/4",
    "a/1/0/5",
    "a/1/0/6",
    "a/1/0/7",
    "a/1/0/8",
    "a/1/0/9",
    "a/1/1/0",
    "a/1/1/1",
    "a/1/1/2",
    "a/1/1/3",
    "a/1/1/4",
    "a/1/1/5",
    "a/1/1/6",
    "a/1/1/7",
    "a/1/1/8",
    "a/1/1/9",
    "a/1/2/0",
    "a/1/2/1",
    "a/1/2/2",
    "a/1/2/3",
    "a/1/2/4",
    "a/1/2/5",
    "a/1/2/6",
    "a/1/2/7",
    "a/1/2/8",
    "a/1/2/9",
    "a/1/3/0",
    "a/1/3/1",
    "a/1/3/2",
    "a/1/3/3",
    "a/1/3/4",
    "a/1/3/5",
    "a/1/3/6",
    "a/1/3/7",
    "a/1/3/8",
    "a/1/3/9",
    "a/1/4/0",
    "a/1/4/1",
    "a/1/4/2",
    "a/1/4/3",
    "a/1/4/4",
    "a/1/4/5",
    "a/1/4/6",
    "a/1/4/7",
    "a/1/4/8",
    "a/1/4/9",
    "a/1/5/0",
    "a/1/5/1",
    "a/1/5/2",
    "a/1/5/3",
    "a/1/5/4",
    "a/1/5/5",
    "a/1/5/6",
    "a/1/5/7",
    "a/1/5/8",
    "a/1/5/9",
    "a/1/6/0",
    "a/1/6/1",
    "a/1/6/2",
    "a/1/6/3",
    "a/1/6/4",
    "a/1/6/5",
    "a/1/6/6",
    "a/1/6/7",
    "a/1/6/8",
    "a/1/6/9",
    "a/1/7/0",
    "a/1/7/1",
    "a/1/7/2",
    "a/1/7/3",
    "a/1/7/4",
    "a/1/7/5",
    "a/1/7/6",
    "a/1/7/7",
    "a/1/7/8",
    "a/1/7/9",
    "a/1/8/0",
    "a/1/8/1",
    "a/1/8/2",
    "a/1/8/3",
    "a/1/8/4",
    "a/1/8/5",
    "a/1/8/6",
    "a/1/8/7",
    "a/1/8/8",
    "a/1/8/9",
    "a/1/9/0",
    "a/1/9/1",
    "a/1/9/2",
    "a/1/9/3",
    "pbr/pokegra.narc",
    "pbr/otherpoke.narc",
    "a/1/9/4",
    "a/1/9/5",
    "a/1/9/6",
    "a/1/9/7",
    "a/1/9/8",
    "a/1/9/9",
    "a/2/0/0",
    "a/2/0/1",
    "a/2/0/2",
    "a/2/0/3",
    "a/2/0/4",
    "a/2/0/5",
    "a/2/0/6",
    "a/2/0/7",
    "a/2/0/8",
    "a/2/0/9",
    "a/2/1/0",
    "a/2/1/1",
    "a/2/1/2",
    "a/2/1/3",
    "a/2/1/4",
    "a/2/1/5",
    "a/2/1/6",
    "a/2/1/7",
    "a/2/1/8",
    "a/2/1/9",
    "a/2/2/0",
    "a/2/2/1",
    "a/2/2/2",
    "a/2/2/3",
    "a/2/2/4",
    "a/2/2/5",
    "a/2/2/6",
    "a/2/2/7",
    "a/2/2/8",
    "a/2/2/9",
    "a/2/3/0",
    "a/2/3/1",
    "a/2/3/2",
    "a/2/3/3",
    "a/2/3/4",
    "a/2/3/5",
    "a/2/3/6",
    "a/2/3/7",
    "a/2/3/8",
    "a/2/3/9",
    "a/2/4/0",
    "a/2/4/1",
    "a/2/4/2",
    "a/2/4/3",
    "a/2/4/4",
    "a/2/4/5",
    "a/2/4/6",
    "a/2/4/7",
    "a/2/4/8",
    "a/2/4/9",
    "a/2/5/0",
    "a/2/5/1",
    "a/2/5/2",
    "a/2/5/3",
    "a/2/5/4",
    "a/2/5/5",
    "a/2/5/6",
    "a/2/5/7",
    "a/2/5/8",
    "a/2/5/9",
    "a/2/6/0",
    "a/2/6/1",
    "a/2/6/2",
    "a/2/6/3",
    "a/2/6/4",
};
#else
extern char * sNarcFileList[];
#endif //_IN_FILESYSTEM_C
#endif //POKEHEARTGOLD_FILESYSTEM_FILES_DEF_H
