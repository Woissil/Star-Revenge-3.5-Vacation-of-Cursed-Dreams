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
#include "levels/castle_inside/header.h"
extern u8 _castle_inside_segment_ESegmentRomStart[]; 
extern u8 _castle_inside_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_castle_inside_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom23035584_skybox_mio0SegmentRomStart,_SkyboxCustom23035584_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_inside_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,0,50,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x14c1700),
TERRAIN(col_castle_inside_1_0xe101de8),
SET_BACKGROUND_MUSIC(0,49),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,10947,-1552,-1171,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,10943,-1553,-1161,0,0,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,6017,0,903,0,0,0,0x10000, bhvWarp,31),
OBJECT_WITH_ACTS(0,6988,0,902,0,0,0,0x20000, bhvWarp,31),
OBJECT_WITH_ACTS(0,7968,0,899,0,0,0,0x30000, bhvWarp,31),
OBJECT_WITH_ACTS(0,8939,0,897,0,0,0,0x40000, bhvWarp,31),
OBJECT_WITH_ACTS(0,6019,-1202,1444,0,0,0,0x50000, bhvWarp,31),
OBJECT_WITH_ACTS(0,6992,-1202,1445,0,0,0,0x60000, bhvWarp,31),
OBJECT_WITH_ACTS(0,7971,-1202,1445,0,0,0,0x70000, bhvWarp,31),
OBJECT_WITH_ACTS(0,8942,-1202,1445,0,0,0,0x80000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2060,1202,361,0,0,0,0x90000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1066,1202,354,0,0,0,0xa0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,65,1202,361,0,0,0,0xb0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-759,1202,-559,0,0,0,0xc0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,66,1202,-1490,0,0,0,0xd0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1067,1202,-1486,0,0,0,0xe0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2065,1202,-1494,0,0,0,0xf0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1040,-1202,519,0,0,0,0x100000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1967,-1202,-254,0,0,0,0x110000, bhvWarp,31),
OBJECT_WITH_ACTS(0,11098,-1983,-2431,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(32,6023,0,562,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(32,7001,0,565,0,0,0,0xd000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,7975,0,561,0,0,0,0xe000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,8949,0,563,0,0,0,0xf000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,6026,-1200,1106,0,0,0,0x10000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,7001,-1200,1103,0,0,0,0x11000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,7978,-1200,1101,0,0,0,0x12000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,8951,-1200,1103,0,0,0,0x13000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,2069,1200,25,0,0,0,0x14000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,1070,1200,25,0,0,0,0x15000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,69,1200,25,0,0,0,0x16000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,-421,1200,-563,0,-90,0,0x17000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,61,1200,-1152,0,180,0,0x18000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,1064,1200,-1151,0,180,0,0x19000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,2066,1200,-1153,0,180,0,0x1a000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,15391,-1200,515,0,90,0,0x1120000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(32,1373,-1200,522,0,-90,0,0x20000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,1964,-1200,79,0,180,0,0x1f000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(215,9574,74,298,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1105,-2326,-2436,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4170,-2926,-1406,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2803,-2326,-955,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7457,-2086,-2223,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,9988,-2492,1457,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,13908,-1126,533,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4428,1251,-561,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(195,5303,0,185,0,-236,0,0x4d0000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(221,1046,0,248,0,-111,0,0x4e000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(195,2754,1200,-256,0,42,0,0x510000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(221,2829,-2400,-120,0,183,0,0x55000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(188,300,-2250,-2276,0,0,0,0x560000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(221,5410,-2400,-991,0,-131,0,0x57000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(188,5387,-2400,-1208,0,230,0,0x580000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(188,6556,-2124,-1539,0,37,0,0x590000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(221,8048,-2160,-2183,0,181,0,0x5b000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,15171,-1200,738,0,-113,0,0x5e000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(195,10533,-2099,-707,0,0,0,0x5f0000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(124,322,0,-269,0,-61,0,0x660000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(195,1556,0,-294,0,-115,0,0x670000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(188,9626,-2400,-2483,0,-58,0,0x680000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(124,3542,0,255,0,180,0,0x700000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(221,9944,-1200,1124,0,-39,0,0x71000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(0,6022,403,212,0,0,0,0xbf0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,10743,-2400,3245,0,0,0,0x130000, bhvWarp,31),
OBJECT_WITH_ACTS(0,9957,-2400,2311,0,0,0,0x140000, bhvWarp,31),
OBJECT_WITH_ACTS(0,13908,-1200,1446,0,0,0,0x150000, bhvWarp,31),
OBJECT_WITH_ACTS(32,10744,-2400,2905,0,0,0,0x1e000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,10300,-2400,2320,0,-90,0,0x22000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(32,13908,-1200,1107,0,0,0,0x1d000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(0,10135,-2150,2311,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,9828,-2150,2311,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,9830,-1842,2310,0,0,0,0x8f70000, bhvWarp,31),
OBJECT_WITH_ACTS(0,15168,0,9216,0,0,0,0xe0aa03a1, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,24,1,10,0),
WARP_NODE(3,12,1,10,0),
WARP_NODE(4,5,1,10,0),
WARP_NODE(5,4,1,10,0),
WARP_NODE(6,7,1,10,0),
WARP_NODE(7,22,1,10,0),
WARP_NODE(8,8,1,10,0),
WARP_NODE(9,23,1,10,0),
WARP_NODE(10,10,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(11,11,1,10,0),
WARP_NODE(12,36,1,10,0),
WARP_NODE(13,13,1,10,0),
WARP_NODE(14,14,1,10,0),
WARP_NODE(15,15,1,10,0),
WARP_NODE(16,29,1,10,0),
WARP_NODE(17,28,1,10,0),
WARP_NODE(18,25,1,10,0),
WARP_NODE(19,27,1,10,0),
WARP_NODE(20,31,1,10,0),
WARP_NODE(21,21,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(0,9,1,12,0),
WARP_NODE(0,9,1,11,0),
WARP_NODE(0,9,1,14,0),
WARP_NODE(0,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,241,0),
WARP_NODE(191,6,1,191,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(247,34,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(0,9,1,10,0),
RETURN()
};
