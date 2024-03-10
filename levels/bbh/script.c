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
#include "levels/bbh/header.h"
extern u8 _bbh_segment_ESegmentRomStart[]; 
extern u8 _bbh_segment_ESegmentRomEnd[];
#include "levels/hmc/header.h"
const LevelScript level_bbh_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _bbh_segment_ESegmentRomStart, _bbh_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bbh_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bbh_1_[] = {
AREA(1,Geo_bbh_1_0x1201700),
TERRAIN(col_bbh_1_0xe0f4778),
SET_BACKGROUND_MUSIC(0,60),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bbh_1_),
JUMP_LINK(local_warps_bbh_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bbh_1_[] = {
OBJECT_WITH_ACTS(0,4276,3453,13360,0,-104,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,2779,2270,15629,0,180,0,0x10000, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(207,3443,3996,-10752,0,-90,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(137,-4902,3286,-11930,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2999,2577,16025,0,0,0,0x350000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,7356,4149,2366,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-2698,3032,-4228,0,0,0,0x4000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(122,442,5576,13691,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,3090,6572,-8554,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-8539,5582,8587,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-6884,5124,-17978,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(116,-2206,3131,-2523,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-2206,3131,-2523,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-4480,2786,-5966,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-4480,2786,-5966,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-6391,2968,-5851,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-6391,2968,-5851,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-7555,3178,-3945,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-7555,3178,-3945,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-7621,3208,4026,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-7621,3208,4026,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(207,-9870,2166,-16526,0,45,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(207,-2696,4612,7911,0,180,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-6805,2729,-16204,0,45,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-6944,2729,-16066,0,45,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-6800,2729,-15926,0,45,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-6661,2729,-16064,0,45,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(188,-191,2796,-142,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3115,4686,-1198,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-192,2796,1449,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-553,3246,-10939,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-1615,3246,-10807,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,4442,5616,2256,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-944,2196,6350,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2049,3126,8609,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3473,4326,5347,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-9041,2275,-5747,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(86,823,2106,10098,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,3000,2556,10521,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,71,5190,12004,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,3720,2550,14711,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-4726,4926,4377,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(212,-8018,3516,7801,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-2673,3004,-9978,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(137,560,5020,4686,0,12,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-6645,3229,-2142,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-7930,2760,-6074,0,63,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4903,4277,-15996,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2500,1915,11965,0,-7,0,0x200000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,553,3055,-4243,0,0,0,0x1f0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1273,3505,-12553,0,12,0,0x120000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,8936,1626,4455,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(101,2417,4716,3568,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-5204,2228,5612,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,2294,2035,14734,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-8376,2228,6141,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-8014,5145,9309,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,290,6186,-4954,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-385,2099,8194,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-7475,2955,-11663,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(137,9930,2945,7803,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,8323,3267,3398,0,180,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(122,8323,3382,3398,0,180,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(0,1920,1569,2192,0,0,0,0x0, bhvFish2,31),
OBJECT_WITH_ACTS(194,-7939,4542,11433,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-6157,3335,12722,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-4735,2683,13166,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-450,4951,2552,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-4058,3091,-4224,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-1116,5131,-3621,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,9915,3340,4881,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(0,2525,3237,-10742,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-384,2637,-1985,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1248,1703,2950,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2564,1711,12323,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4639,3012,-3903,0,-51,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3624,2285,7576,0,-8,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3752,4743,6363,0,53,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4798,1436,3730,0,93,0,0x100000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4000,5637,873,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1104,5211,12844,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-8430,1583,-14753,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-8869,3252,-9479,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-8188,3252,-8870,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-5191,5269,2290,0,23,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(223,-465,2796,-5190,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-2920,4716,4240,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(206,-1791,3256,-294,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,1012,2819,4100,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,6445,3818,2769,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,11061,2948,7383,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-2567,4935,7451,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-5704,3374,-3558,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,2098,6509,-7950,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(195,-4035,2955,-11051,0,0,0,0x240000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(195,-406,2796,-3523,0,0,0,0x270000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(195,-8460,3090,-9363,0,0,0,0x280000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(140,-9576,2621,-4716,0,153,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-9703,2830,-5448,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-8611,2710,-6355,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-9035,2258,-5739,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,5775,3704,13390,0,0,0,0x320a0000, bhvWarp,31),
OBJECT_WITH_ACTS(129,-2233,4438,9258,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2033,4438,9258,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2233,4438,9458,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2033,4438,9458,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1298,4588,9842,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1098,4588,9842,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1298,4588,10042,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1098,4588,10042,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-513,4738,10583,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-313,4738,10583,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-513,4738,10783,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-313,4738,10783,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(137,2547,2577,16036,0,0,0,0x350000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-8015,2142,8111,0,180,0,0xa820000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-8021,2565,7435,0,0,0,0x830000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(31,-8089,2228,6781,0,0,0,0x14140000, bhvDoor,31),
OBJECT_WITH_ACTS(31,-7943,2228,6781,0,180,0,0x14140000, bhvDoor,31),
OBJECT_WITH_ACTS(0,-8022,2504,7314,0,180,0,0xf00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,14976,0,12288,0,0,0,0x102a0048, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15168,0,9216,0,0,0,0x4c3a002e, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15168,0,8448,0,0,0,0x5b1a00be, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15168,0,9216,0,0,0,0x66fa006f, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15168,0,8704,0,0,0,0x6dea0090, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15168,0,9216,0,0,0,0x76ea028b, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15168,0,10240,0,0,0,0xc1da016e, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bbh_1_[] = {
WARP_NODE(10,5,1,150,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,5,1,151,0),
WARP_NODE(130,13,1,10,0),
WARP_NODE(131,4,1,131,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
