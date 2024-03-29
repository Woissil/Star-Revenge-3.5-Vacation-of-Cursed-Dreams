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
#include "levels/castle_courtyard/header.h"
extern u8 _castle_courtyard_segment_ESegmentRomStart[]; 
extern u8 _castle_courtyard_segment_ESegmentRomEnd[];
#include "levels/hmc/header.h"
const LevelScript level_castle_courtyard_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _castle_courtyard_segment_ESegmentRomStart, _castle_courtyard_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom51871424_skybox_mio0SegmentRomStart,_SkyboxCustom51871424_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_castle_courtyard_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_courtyard_1_[] = {
AREA(1,Geo_castle_courtyard_1_0x3041700),
TERRAIN(col_castle_courtyard_1_0xe0bdae8),
SET_BACKGROUND_MUSIC(0,51),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_courtyard_1_),
JUMP_LINK(local_warps_castle_courtyard_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_1_[] = {
OBJECT_WITH_ACTS(22,0,1046,0,180,0,0,0x140000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(85,10124,-1349,2029,0,45,0,0x0, bhvCapSwitch,31),
OBJECT_WITH_ACTS(0,0,938,0,0,0,0,0x140000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,606,0,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(207,6342,-3302,-5079,0,-90,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(0,613,390,0,0,0,0,0x1000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(129,4152,-1698,-5107,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,3349,-2298,-5107,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,3349,-2098,-5107,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,3349,-1898,-5107,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,3349,-1698,-5107,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(116,3832,-2109,-7901,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,3832,-2109,-7901,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,6921,-832,4157,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,6921,-832,4157,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,11159,-1494,-1713,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,11159,-1494,-1713,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,3503,415,-4226,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,3503,415,-4226,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,10745,-1722,2638,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,10745,-1722,2638,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(188,2441,-245,14,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2670,306,-5518,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3875,-3275,-7388,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2721,-581,2708,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,9126,-1744,1180,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,10805,-1744,1105,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,9304,-1744,2740,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,11049,-1806,2880,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,10720,-2081,-1072,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(206,5271,-765,2829,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,6661,-1071,126,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,3391,979,-4594,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,4917,-2969,-6309,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,2593,245,-2107,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(212,3149,73,2245,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,11602,309,-6403,0,0,0,0xa6f0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1575,319,8072,0,0,0,0xa790000, bhvWarp,31),
OBJECT_WITH_ACTS(0,10764,599,-6413,0,90,0,0x6e0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,807,593,8071,0,90,0,0x780000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(212,5476,-3335,-6838,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,14912,0,8320,0,0,0,0x9e480026, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15104,0,8320,0,0,0,0x148052b, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,15104,0,9216,0,0,0,0x53fa00e0, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_1_[] = {
WARP_NODE(20,29,1,20,0),
WARP_NODE(10,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,100,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(111,30,1,10,0),
WARP_NODE(110,26,1,10,0),
WARP_NODE(121,20,1,10,0),
WARP_NODE(120,26,1,10,0),
RETURN()
};
