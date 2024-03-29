#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "levels/ttc/header.h"
extern u8 _ttc_segment_ESegmentRomStart[]; 
extern u8 _ttc_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_ttc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _ttc_segment_ESegmentRomStart, _ttc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom34569920_skybox_mio0SegmentRomStart,_SkyboxCustom34569920_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           rr_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           rr_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           rr_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           rr_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           rr_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           rr_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           rr_geo_0006F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           rr_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           rr_geo_000720),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           rr_geo_000738),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           rr_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           rr_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           rr_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           rr_geo_0007A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           rr_geo_0007B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           rr_geo_0007D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           rr_geo_0007E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           rr_geo_000800),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,           rr_geo_000818),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,           rr_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM,         rr_geo_0008C0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET,            rr_geo_000848),
    LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM,       rr_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM,        rr_geo_0008D8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING,             rr_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM,          rr_geo_000908),
    LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM,        rr_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM,        rr_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM,           rr_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM,        rr_geo_0008F0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES,         rr_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1,  rr_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2,  rr_geo_000988),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3,  rr_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4,  rr_geo_0009B8),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_ttc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ttc_1_[] = {
AREA(1,Geo_ttc_1_0x1fc1700),
TERRAIN(col_ttc_1_0xe0df9e0),
SET_BACKGROUND_MUSIC(0,67),
TERRAIN_TYPE(4),
JUMP_LINK(local_objects_ttc_1_),
JUMP_LINK(local_warps_ttc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ttc_1_[] = {
OBJECT_WITH_ACTS(0,0,0,0,0,-90,0,0xa0a0000, bhvWarp,15),
OBJECT_WITH_ACTS(0,0,3387,0,0,0,0,0x0, bhvPenguinRaceFinishLine,15),
OBJECT_WITH_ACTS(122,-5686,-1944,0,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,5602,3777,0,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,1798,1258,0,0,0,0,0x2000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(137,-6502,6862,0,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-7753,371,0,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-5964,-1918,0,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(120,-5626,1605,0,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(137,-6740,4354,0,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,0,-3152,3295,0,90,0,0xa0a0000, bhvWarp,16),
OBJECT_WITH_ACTS(0,-3300,-349,-6,0,0,0,0x40000, bhvFlamethrower,47),
OBJECT_WITH_ACTS(0,-4197,-227,-2,0,0,0,0x40000, bhvFlamethrower,47),
OBJECT_WITH_ACTS(0,-4649,-169,-4,0,0,0,0x40000, bhvFlamethrower,47),
OBJECT_WITH_ACTS(0,-5806,-401,0,0,-90,0,0x20000, bhvFlamethrower,47),
OBJECT_WITH_ACTS(0,-8546,-649,-75,0,0,0,0x40000, bhvFlamethrower,47),
OBJECT_WITH_ACTS(0,3868,6836,1,0,0,0,0x40000, bhvFlamethrower,47),
OBJECT_WITH_ACTS(0,4464,7135,-6,0,0,0,0x40000, bhvFlamethrower,47),
OBJECT_WITH_ACTS(0,718,7584,0,0,-90,0,0x20000, bhvFlamethrower,47),
OBJECT_WITH_ACTS(0,-1685,3303,-4,0,0,0,0x40000, bhvFlamethrower,47),
OBJECT_WITH_ACTS(0,-4199,1388,-3,0,0,0,0x40000, bhvFlamethrower,47),
OBJECT_WITH_ACTS(0,77,1878,3295,0,0,0,0x40000, bhvFlamethrower,16),
OBJECT_WITH_ACTS(0,2050,-3154,3295,0,-90,0,0x20000, bhvFlamethrower,16),
OBJECT_WITH_ACTS(0,-2285,-665,3295,0,-90,0,0x20000, bhvFlamethrower,16),
OBJECT_WITH_ACTS(20,-1767,-1450,7503,0,-90,0,0x0, Bhv_Custom_0x80403700,32),
OBJECT_WITH_ACTS(0,-2285,907,3295,0,-90,0,0x20000, bhvFlamethrower,16),
OBJECT_WITH_ACTS(0,-2285,2258,3295,0,-90,0,0x20000, bhvFlamethrower,16),
OBJECT_WITH_ACTS(22,9613,652,3300,0,90,0,0x140000, bhvWarpPipe,16),
OBJECT_WITH_ACTS(22,-1161,-1276,3295,0,-90,0,0x1e0000, bhvWarpPipe,16),
OBJECT_WITH_ACTS(22,9622,-3396,3295,0,90,0,0x280000, bhvWarpPipe,16),
OBJECT_WITH_ACTS(22,-151,-1724,3301,0,90,0,0x320000, bhvWarpPipe,16),
OBJECT_WITH_ACTS(122,9625,-966,3295,0,0,0,0x4000000, bhvBalconyBigBoo,16),
OBJECT_WITH_ACTS(84,-451,2005,0,0,90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,-3017,-1942,0,0,-90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,-4182,4787,0,0,90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,-4473,8236,0,0,90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,-5304,7742,0,0,-90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(212,-4997,7278,0,2,-90,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(84,7677,288,0,0,-90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,-6355,4388,0,0,90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,-6355,4107,0,0,90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,7186,6550,0,0,-90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,7186,6832,0,0,-90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,7186,7111,0,0,-90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,7186,7392,0,0,-90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,7186,7673,0,0,-90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,6320,2958,0,0,90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,5605,3287,0,0,90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,5717,-1659,0,0,-90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,-170,-1743,4,0,90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,1055,-1492,0,0,-90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,1922,-1490,0,0,90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,1932,-2390,0,0,90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,3203,-2390,0,0,-90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,3540,-2108,0,0,-90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,3878,-1828,0,0,-90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,3866,-1021,0,0,90,0,0x0, bhvBulletBill,47),
OBJECT_WITH_ACTS(84,1519,-752,3295,0,90,0,0x0, bhvBulletBill,16),
// OBJECT_WITH_ACTS(54,764,-772,7503,0,0,90,0x0,0x80403a00,32),
OBJECT_WITH_ACTS(84,2982,-152,3295,0,-90,0,0x0, bhvBulletBill,16),
OBJECT_WITH_ACTS(84,1331,828,3295,0,-90,0,0x0, bhvBulletBill,16),
OBJECT_WITH_ACTS(84,2237,1754,3295,0,-90,0,0x0, bhvBulletBill,16),
OBJECT_WITH_ACTS(84,2237,459,3295,0,-90,0,0x0, bhvBulletBill,16),
OBJECT_WITH_ACTS(84,-2983,-2611,3295,0,90,0,0x0, bhvBulletBill,16),
OBJECT_WITH_ACTS(84,8634,-1078,2260,0,45,0,0x0, bhvBulletBill,16),
OBJECT_WITH_ACTS(84,9674,-1078,1835,0,0,0,0x0, bhvBulletBill,16),
OBJECT_WITH_ACTS(84,10704,-1078,2266,0,-45,0,0x0, bhvBulletBill,16),
OBJECT_WITH_ACTS(84,8213,-1078,3295,0,90,0,0x0, bhvBulletBill,16),
OBJECT_WITH_ACTS(84,11125,-1078,3295,0,-90,0,0x0, bhvBulletBill,16),
OBJECT_WITH_ACTS(215,5315,1319,0,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,3672,5854,0,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,1541,7801,0,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,8932,3767,0,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,8922,5332,0,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,5142,7574,0,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,7321,8364,0,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,1875,5628,0,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(140,-9895,1049,-9,0,90,0,0x0, bhvBlueCoinSwitch,47),
OBJECT_WITH_ACTS(118,-9138,-643,0,0,0,0,0x0, bhvHiddenBlueCoin,47),
OBJECT_WITH_ACTS(118,-9138,-280,0,0,0,0,0x0, bhvHiddenBlueCoin,47),
OBJECT_WITH_ACTS(118,-8549,-420,0,0,0,0,0x0, bhvHiddenBlueCoin,47),
OBJECT_WITH_ACTS(118,-8549,4,0,0,0,0,0x0, bhvHiddenBlueCoin,47),
OBJECT_WITH_ACTS(118,-7751,-460,0,0,0,0,0x0, bhvHiddenBlueCoin,47),
OBJECT_WITH_ACTS(0,-4803,-2099,7503,0,90,0,0xa0a0000, bhvWarp,32),
OBJECT_WITH_ACTS(118,-9150,834,0,0,0,0,0x0, bhvHiddenBlueCoin,47),
OBJECT_WITH_ACTS(0,-1342,-1387,0,0,0,0,0x110000, bhvCoinFormation,47),
OBJECT_WITH_ACTS(0,2785,2735,0,0,0,0,0x130000, bhvCoinFormation,47),
OBJECT_WITH_ACTS(0,4946,-2130,0,0,0,0,0x110000, bhvCoinFormation,47),
OBJECT_WITH_ACTS(0,6529,1382,0,0,0,0,0x110000, bhvCoinFormation,47),
OBJECT_WITH_ACTS(0,-5430,-475,0,0,0,0,0x110000, bhvCoinFormation,47),
OBJECT_WITH_ACTS(0,-5673,3311,0,0,90,0,0x0, bhvCoinFormation,47),
OBJECT_WITH_ACTS(0,-2768,3919,0,0,90,0,0x0, bhvCoinFormation,47),
OBJECT_WITH_ACTS(0,1314,6962,0,0,90,0,0x0, bhvCoinFormation,47),
OBJECT_WITH_ACTS(0,5746,6040,0,0,90,0,0x0, bhvCoinFormation,47),
OBJECT_WITH_ACTS(0,8929,6565,0,0,90,0,0x0, bhvCoinFormation,47),
OBJECT_WITH_ACTS(0,2768,814,3295,0,0,0,0x110000, bhvCoinFormation,16),
OBJECT_WITH_ACTS(120,682,2028,3295,0,0,0,0x0, bhvRecoveryHeart,16),
OBJECT_WITH_ACTS(212,-1566,1724,3295,0,0,0,0x0, bhv1Up,16),
OBJECT_WITH_ACTS(0,9154,-188,3295,0,0,0,0x110000, bhvCoinFormation,16),
OBJECT_WITH_ACTS(0,10086,-188,3295,0,0,0,0x110000, bhvCoinFormation,16),
OBJECT_WITH_ACTS(137,77,2338,3295,0,0,0,0x20000, bhvExclamationBox,16),
OBJECT_WITH_ACTS(120,311,5361,5,0,0,0,0x0, bhvRecoveryHeart,63),
OBJECT_WITH_ACTS(137,-8478,1797,3,0,0,0,0x50000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(101,1810,2352,-25,0,0,0,0x0, bhvScuttlebug,47),
OBJECT_WITH_ACTS(101,10263,2397,18,0,0,0,0x0, bhvScuttlebug,47),
OBJECT_WITH_ACTS(212,-1496,1184,3308,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(223,-2027,7614,-17,0,0,0,0x0, bhvChuckya,47),
OBJECT_WITH_ACTS(223,-3387,8021,6,0,0,0,0x0, bhvChuckya,47),
OBJECT_WITH_ACTS(120,9676,-1142,3295,0,0,0,0x0, bhvRecoveryHeart,16),
OBJECT_WITH_ACTS(0,8495,-2451,3295,0,0,0,0x110000, bhvCoinFormation,16),
OBJECT_WITH_ACTS(116,8495,-1128,3295,0,0,0,0x0, bhvOneCoin,16),
OBJECT_WITH_ACTS(0,10859,-2635,3295,0,0,0,0x110000, bhvCoinFormation,16),
OBJECT_WITH_ACTS(137,-1189,-2974,3295,0,0,0,0x50000, bhvExclamationBox,16),
OBJECT_WITH_ACTS(116,10859,-1128,3295,0,0,0,0x0, bhvOneCoin,16),
OBJECT_WITH_ACTS(137,8933,2671,0,0,0,0,0x60000, bhvExclamationBox,47),
OBJECT_WITH_ACTS(212,305,6898,0,0,0,0,0x0, bhv1Up,47),
OBJECT_WITH_ACTS(0,0,6019,3295,0,0,0,0x0, bhvPenguinRaceFinishLine,16),
OBJECT_WITH_ACTS(120,2273,-2753,3295,0,0,0,0x0, bhvRecoveryHeart,16),
OBJECT_WITH_ACTS(120,-2727,-1774,3295,0,0,0,0x0, bhvRecoveryHeart,16),
OBJECT_WITH_ACTS(0,-1080,-3325,7503,0,0,0,0x0, bhvPenguinRaceFinishLine,32),
OBJECT_WITH_ACTS(122,2537,5933,7500,0,0,0,0x5000000, bhvStar,32),
OBJECT_WITH_ACTS(84,3869,2611,7503,0,90,0,0x0, bhvBulletBill,32),
OBJECT_WITH_ACTS(84,-2552,-814,7503,0,90,0,0x0, bhvBulletBill,32),
OBJECT_WITH_ACTS(84,-2552,-1093,7503,0,90,0,0x0, bhvBulletBill,32),
OBJECT_WITH_ACTS(84,5876,2878,7503,0,-90,0,0x0, bhvBulletBill,32),
OBJECT_WITH_ACTS(84,5873,4681,7503,0,-90,0,0x0, bhvBulletBill,32),
OBJECT_WITH_ACTS(84,3326,2827,7503,0,-90,0,0x0, bhvBulletBill,32),
OBJECT_WITH_ACTS(84,3326,3109,7503,0,-90,0,0x0, bhvBulletBill,32),
OBJECT_WITH_ACTS(84,-583,5083,7503,0,90,0,0x0, bhvBulletBill,32),
// OBJECT_WITH_ACTS(16,5023,2252,7503,0,0,0,0x1,0x80403a00,32),
// OBJECT_WITH_ACTS(54,4952,3529,7503,0,0,-90,0x0,0x80403a00,32),
// OBJECT_WITH_ACTS(54,3297,4162,7503,0,0,-90,0x0,0x80403a00,32),
// OBJECT_WITH_ACTS(54,-299,3611,7503,0,0,-90,0x0,0x80403a00,32),
// OBJECT_WITH_ACTS(16,988,5702,7500,0,0,-90,0x1,0x80403a00,32),
// OBJECT_WITH_ACTS(15,556,2490,7503,0,0,0,0x1, Bhv_Custom_0x80403700,32),
OBJECT_WITH_ACTS(212,-2435,972,7503,0,0,0,0x0, bhv1Up,32),
OBJECT_WITH_ACTS(0,14784,0,8448,0,0,0,0xd3fa00ee, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15104,0,9216,0,0,0,0x4d28001a, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15104,0,9216,0,0,0,0x94aa0054, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15104,0,12288,0,0,0,0x9f1801d8, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15104,0,12288,0,0,0,0xbc9802d0, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15104,0,8704,0,0,0,0xe9d8001a, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15104,0,8704,0,0,0,0xeb780016, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15104,0,8704,0,0,0,0xecd8001a, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15104,0,9216,0,0,0,0xf45a0150, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_ttc_1_[] = {
WARP_NODE(10,7,1,140,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,7,1,141,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(20,14,1,30,0),
WARP_NODE(30,14,1,20,0),
WARP_NODE(40,14,1,50,0),
WARP_NODE(50,14,1,40,0),
RETURN()
};
