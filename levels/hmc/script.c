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
#include "levels/hmc/header.h"
extern u8 _hmc_segment_ESegmentRomStart[]; 
extern u8 _hmc_segment_ESegmentRomEnd[];
const LevelScript level_hmc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _hmc_segment_ESegmentRomStart, _hmc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom24477376_skybox_mio0SegmentRomStart,_SkyboxCustom24477376_skybox_mio0SegmentRomEnd),
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
JUMP_LINK(local_area_hmc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_hmc_1_[] = {
AREA(1,Geo_hmc_1_0x1621700),
TERRAIN(col_hmc_1_0xe0eb948),
SET_BACKGROUND_MUSIC(0,68),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_hmc_1_),
JUMP_LINK(local_warps_hmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_hmc_1_[] = {
OBJECT_WITH_ACTS(0,-4275,-1319,-8658,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,3782,-769,5937,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1295,-169,6018,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,6045,284,7915,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3299,-778,9338,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,6727,-1590,-3507,0,90,0,0x140000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,3489,629,691,0,-90,0,0x1e0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-30,-428,-1033,0,90,0,0x280000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,4613,-1650,2716,0,0,0,0x280000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(22,-9525,-688,-1340,0,90,0,0x960000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-8850,-388,-1327,0,-90,0,0x970000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-5293,-716,7492,0,180,0,0xaa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-5293,-716,7492,0,0,0,0xab0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-5434,-1061,8125,0,0,0,0xaaa0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-5157,-1061,8125,0,0,0,0xaaa0000, bhvWarp,31),
OBJECT_WITH_ACTS(122,2818,-588,-219,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,3041,1091,692,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(137,10186,3107,1529,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,6069,-954,7216,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(122,4614,-1272,2716,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-951,911,7142,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(37,-4343,-1601,-9996,0,0,0,0x20a0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-4193,-1601,-9996,0,180,0,0x20a0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,9230,-431,-3437,0,-90,0,0xa8c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,8758,-141,-3433,0,90,0,0x8d0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(140,1158,-611,-1938,0,180,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,1748,-531,-1937,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1748,-862,-1937,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1748,-1194,-1937,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1748,-1525,-1937,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,2080,-1724,-1938,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,2484,-1724,-1934,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(207,6185,-761,-4053,0,180,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,6132,-960,-2578,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,6132,-960,-2378,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,6132,-960,-2178,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5932,-960,-2578,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5932,-960,-2378,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5932,-960,-2178,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,6025,-960,-1397,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,6025,-960,-1197,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4815,-960,-174,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5016,-960,-174,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5873,-960,-383,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5873,-960,-182,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,6073,-960,-383,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,6073,-960,-182,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4047,-960,-161,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,3847,-960,-161,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,6048,-2410,5211,0,-90,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,5970,-1962,6815,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5970,-1762,7015,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5970,-1562,7215,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,6170,-1962,6815,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,6170,-1762,7015,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,6170,-1562,7215,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,-3520,-1124,-4551,0,39,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7886,-679,-3065,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6192,-1592,-7886,0,-90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1326,-302,1363,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6604,-752,-287,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4467,-1202,-3429,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3942,-452,914,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5287,-902,5891,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3267,-1052,8117,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,9404,-1280,4029,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,10188,1239,5730,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4390,-1052,2114,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2060,897,6922,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-186,-2038,4152,0,0,0,0x100000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3973,-3288,-945,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(84,-975,-925,-748,0,45,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,190,-920,-4756,0,0,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,-7750,-386,-5083,0,0,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,3565,-1070,-2559,0,180,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,8836,-1012,598,0,45,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,8830,-449,603,0,-135,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,6983,-220,-4518,0,0,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,1310,-320,3784,0,180,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,1313,-41,4423,0,180,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,-2512,129,2470,0,0,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,-3515,-620,6009,0,90,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,1414,-3153,-1821,0,-135,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,1414,-3433,-1821,0,-135,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,1414,-3711,-1821,0,-135,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,1414,-3994,-1821,0,-135,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,2532,-3153,2054,0,45,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,2532,-3433,2054,0,45,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,2532,-3711,2054,0,45,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,2532,-3994,2054,0,45,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,-6143,-370,537,0,45,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(188,651,-1061,-3905,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-4886,-1601,-6984,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-3671,-1601,-7011,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-7936,-688,-3429,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-8149,-1108,-6761,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-2028,-1061,-3860,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-5492,-611,1171,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-4909,-1061,4505,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3483,-1061,3672,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(223,10194,248,1565,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-4213,-1061,2931,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-7756,-688,-1218,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(137,-3968,-292,7344,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-6675,-260,6615,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,6979,276,-4518,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-7752,76,-5076,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,4327,-1010,3959,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,10646,-440,1019,0,0,0,0x100000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-6039,-1047,-4758,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-2342,-1601,-6101,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1607,-480,890,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,-6400,-611,7173,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,9335,-1241,2562,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,6609,-812,569,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,3717,-575,3020,0,0,0,0x250000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(180,1154,-667,-1023,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1308,-367,4966,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-40,-967,1216,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6046,827,6408,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5286,-893,6546,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2904,-517,920,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(100,-6330,-1061,2678,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-3843,-570,7648,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,4768,-610,9433,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,6727,-668,-1124,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,8914,-157,-1414,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,10123,-506,-669,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-8694,-808,-4317,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-5767,-1108,-3232,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-9009,-897,-7647,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-4494,-1461,-4612,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(54,8437,-431,-3436,0,180,0,0x46000000, bhvTowerDoor,31),
OBJECT_WITH_ACTS(0,14912,0,9216,0,0,0,0xa28a0034, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15104,0,9216,0,0,0,0xd2ba0018, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15232,0,8448,0,0,0,0x910a0010, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15232,0,9216,0,0,0,0x923a0067, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15232,0,9216,0,0,0,0xa02a0070, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_hmc_1_[] = {
WARP_NODE(10,5,1,160,0),
WARP_NODE(170,22,1,10,0),
WARP_NODE(171,7,1,171,0),
WARP_NODE(150,29,1,10,0),
WARP_NODE(151,7,1,151,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,5,1,161,0),
WARP_NODE(20,7,1,30,0),
WARP_NODE(30,7,1,40,0),
WARP_NODE(40,7,1,40,0),
WARP_NODE(140,14,1,10,0),
WARP_NODE(141,7,1,141,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
