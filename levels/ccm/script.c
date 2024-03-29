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
#include "levels/ccm/header.h"
extern u8 _ccm_segment_ESegmentRomStart[]; 
extern u8 _ccm_segment_ESegmentRomEnd[];
#include "levels/hmc/header.h"
const LevelScript level_ccm_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _ccm_segment_ESegmentRomStart, _ccm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR,          wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR,           metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR,       hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM,       hmc_geo_0005A0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM,    hmc_geo_0005D0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK,         hmc_geo_000548),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE,           hmc_geo_000570),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE,     hmc_geo_000588),
LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS,           hmc_geo_000530),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
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
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_ccm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ccm_1_[] = {
AREA(1,Geo_ccm_1_0x1361700),
TERRAIN(col_ccm_1_0xe0f4ba0),
SET_BACKGROUND_MUSIC(0,41),
TERRAIN_TYPE(4),
JUMP_LINK(local_objects_ccm_1_),
JUMP_LINK(local_warps_ccm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_1_[] = {
OBJECT_WITH_ACTS(0,0,675,5213,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(37,-75,376,5736,0,0,0,0xa0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,76,376,5736,0,180,0,0xa0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,-268,3415,-11869,0,0,0,0x1e0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,7322,-648,-3522,0,-25,0,0x140000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,7681,9,-4144,0,-24,0,0x2140000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-261,4223,-11859,0,0,0,0xa1e0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,997,0,0,0,0,0xa00000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(37,76,598,-339,0,180,0,0x2a00000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,-5925,426,10235,0,-43,0,0x960000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-6750,-212,11092,0,-43,0,0x32960000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-5927,423,10230,0,-44,0,0x970000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(37,-76,598,-339,0,0,0,0x2a00000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,0,995,0,0,180,0,0xa10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-5552,2580,3151,0,0,0,0xc730000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-5133,3016,3145,0,-90,0,0x6f0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,0,2550,2848,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(215,326,2192,-11544,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1530,1014,-9505,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-132,3040,-9302,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1549,1529,-11717,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-897,2045,-7789,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-218,498,-10521,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-790,2542,-10631,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,42,1493,-9005,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,5992,3626,1329,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-7644,2009,-2013,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(0,0,2300,282,0,0,0,0x1000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(122,3026,1697,-3625,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-268,3835,-11861,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-3762,-24,4530,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(22,-3751,-451,4047,0,0,0,0x280000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,4800,-1529,4226,0,0,0,0x320000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,4798,-1154,4751,0,180,0,0x330000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(137,7273,2893,2108,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1798,1602,-2396,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-284,2294,5673,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3024,1694,5093,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-5972,3042,3150,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(195,-5224,-574,-2502,0,0,0,0x20000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(195,4358,34,-3346,0,0,0,0x300000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(195,-543,642,49,0,0,0,0x310000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(195,1956,1349,733,0,0,0,0x320000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(195,4857,2677,3223,0,0,0,0x330000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(195,183,375,4903,0,-110,0,0x350000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(195,-2951,322,4458,0,-101,0,0x360000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(195,-4258,1470,-2282,0,0,0,0x2e0000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(195,-3108,1470,-2281,0,0,0,0x2a0000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(195,-5324,1470,-2302,0,0,0,0x2b0000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(140,6914,-300,-1167,0,180,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,7499,0,-1199,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,7501,150,-610,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,6902,150,-612,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,6897,300,-7,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,7502,450,-7,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(212,260,2034,-364,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,4095,43,-1761,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6564,2881,4226,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1639,2555,2381,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1650,2555,3285,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4845,-29,9194,0,-45,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,0,1949,-686,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4492,1070,4482,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4512,326,1776,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6213,1200,-1757,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1,83,2854,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,-3762,2760,1794,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3633,2760,3911,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(89,5555,-29,4562,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(180,-98,3359,5110,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(89,-2924,1349,726,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(89,-3496,1470,-1411,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(212,-3689,2526,-1708,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(137,4654,1505,4801,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,4929,2886,4766,0,0,0,0x120000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2249,3485,5255,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3001,2886,4495,0,0,0,0x130000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-5355,1806,-1711,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1500,1685,4977,0,0,0,0x100000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,9141,3485,3750,0,0,0,0x130000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,8259,3485,3747,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,5246,-1193,5655,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(103,-3531,150,8037,0,135,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(192,-4818,1470,-1104,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,7346,-300,823,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(102,6550,-300,-2797,0,0,0,0x0, bhvChainChomp,31),
OBJECT_WITH_ACTS(180,-3562,21,502,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1648,1479,2412,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1660,1479,3286,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(129,-2822,300,5274,0,0,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(129,-5013,150,10877,0,-15,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(180,2401,1419,-1800,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3598,1419,-597,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4809,1419,-3,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(129,6001,1200,-27,0,0,0,0x30000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(144,6055,1278,-248,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,5942,1278,-248,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(0,-1892,1826,-7951,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,-1034,2459,-10297,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,-1196,539,-11255,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,217,1147,-9815,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(124,-2374,3149,5249,0,90,0,0x440000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-5663,3149,3784,0,45,0,0x450000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,4958,-1529,4423,0,0,0,0x460000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-3,397,4869,0,0,0,0x470000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,6259,1200,-601,0,-90,0,0x600000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,15168,0,8448,0,0,0,0x785a001a, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15232,0,9216,0,0,0,0x796a006f, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15232,0,8448,0,0,0,0x805a0016, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15232,0,10240,0,0,0,0x91d80022, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15232,0,8704,0,0,0,0x93fa00ce, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15232,0,10240,0,0,0,0xa49a0154, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15232,0,9216,0,0,0,0xb9da0009, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_ccm_1_[] = {
WARP_NODE(150,4,1,10,0),
WARP_NODE(151,5,1,151,0),
WARP_NODE(40,5,1,50,0),
WARP_NODE(20,5,1,30,0),
WARP_NODE(30,5,1,20,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,12,1,141,0),
WARP_NODE(10,12,1,140,0),
WARP_NODE(160,7,1,10,0),
WARP_NODE(161,5,1,161,0),
WARP_NODE(51,5,1,51,0),
WARP_NODE(111,5,1,111,0),
WARP_NODE(115,36,1,10,0),
WARP_NODE(50,27,1,10,0),
RETURN()
};
