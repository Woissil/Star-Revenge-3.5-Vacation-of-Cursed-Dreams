-- name: Star Revenge 3.5 VoCD v1.3.2
-- description: 
-- incompatible: romhack

gLevelValues.entryLevel = LEVEL_CASTLE

hook_event(HOOK_ON_WARP, onWarp)


vec3f_set(gLevelValues.starPositions.KoopaBobStarPos, 9250, 1623, 0)
velocal last_dialog_position = {x = 0, y = 0, z = 0}
local moved_away = false

    -- c3f_set(gLevelValues.starPositions.KoopaThiStarPos, 7100, -1300, -6000)
vec3f_set(gLevelValues.starPositions.KingBobombStarPos, 0.0, 700.0, 0.0)
vec3f_set(gLevelValues.starPositions.KingWhompStarPos, 5294.0, 3870.0, 7050.0)
vec3f_set(gLevelValues.starPositions.EyerockStarPos, 0.0, 500.0, 0.0)
vec3f_set(gLevelValues.starPositions.BigBullyStarPos, 0.0, 950.0, -6800.0)
vec3f_set(gLevelValues.starPositions.ChillBullyStarPos, -2224.0, -6949.0, 4580.0)
vec3f_set(gLevelValues.starPositions.BigPiranhasStarPos, 1120.0, 1745.0, 5248.0)
vec3f_set(gLevelValues.starPositions.TuxieMotherStarPos, 3167.0, -4300.0, 5108.0)
vec3f_set(gLevelValues.starPositions.WigglerStarPos, 0.0, 4668.0, 0.0)
vec3f_set(gLevelValues.starPositions.PssSlideStarPos, 8948.0, -3922.0, -13666.0)
vec3f_set(gLevelValues.starPositions.RacingPenguinStarPos, -7339.0, -5700.0, -6774.0)
vec3f_set(gLevelValues.starPositions.TreasureChestStarPos, -1800.0, -2500.0, -1700.0)
vec3f_set(gLevelValues.starPositions.GhostHuntBooStarPos, 980.0, 1100.0, 250.0)
vec3f_set(gLevelValues.starPositions.KleptoStarPos, -5550.0, 300.0, -930.0)
vec3f_set(gLevelValues.starPositions.MerryGoRoundStarPos, -1600.0, -2100.0, 205.0)
vec3f_set(gLevelValues.starPositions.MrIStarPos, 1370.0, 2000.0, -320.0)
vec3f_set(gLevelValues.starPositions.BalconyBooStarPos, 9625.0, -2042.0, 3295.0)
vec3f_set(gLevelValues.starPositions.BigBullyTrioStarPos, 3700.0, 600.0, -5500.0)


    if globalTimer <= 5 then
        if network_is_server() then
            level_trigger_warp(gMarioStates[0], WARP_OP_DEMO_NEXT)
        end        
    end
 vec3f_dist(last_dialog_position, m.pos) > 100 then
        moved_away = true
    end

    -- Force freecam to be temporary
    if gNetworkPlayers[0].currLevelNum == LEVEL_ENDING then
        camera_config_enable_free_cam(m.controller.buttonDown & X_BUTTON ~= 0)
    end
    if globalTimer <= 5 then
        if network_is_server() then
            level_trigger_warp(gMarioStates[0], WARP_OP_DEMO_NEXT)
hook_event(HOOK_MARIO_UPDATE, mario_update)
        end        
    end
