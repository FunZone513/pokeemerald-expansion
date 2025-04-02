Route7_MapScripts::
# 2 "data/maps/Route7/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route7_CheckBridgeState
	.byte 0


Route7_CheckBridgeState::
# 6 "data/maps/Route7/scripts.pory"
	goto_if_set FLAG_ROUTE_7_SHOWN_POKEMON, Route7_CheckBridgeState_1
# 20 "data/maps/Route7/scripts.pory"
	setmetatile 29, 5, METATILE_General_Path_RU, TRUE
# 21 "data/maps/Route7/scripts.pory"
	setmetatile 29, 6, METATILE_General_Path_R, TRUE
# 22 "data/maps/Route7/scripts.pory"
	setmetatile 29, 7, METATILE_General_Path_RD, TRUE
# 23 "data/maps/Route7/scripts.pory"
	setmetatile 33, 5, METATILE_General_Path_LU, TRUE
# 24 "data/maps/Route7/scripts.pory"
	setmetatile 33, 6, METATILE_General_Path_L, TRUE
# 25 "data/maps/Route7/scripts.pory"
	setmetatile 33, 7, METATILE_General_Path_LD, TRUE
# 28 "data/maps/Route7/scripts.pory"
	setmetatile 30, 5, METATILE_General_CalmWater, FALSE
# 29 "data/maps/Route7/scripts.pory"
	setmetatile 31, 5, METATILE_General_CalmWater, FALSE
# 30 "data/maps/Route7/scripts.pory"
	setmetatile 32, 5, METATILE_General_CalmWater, FALSE
# 31 "data/maps/Route7/scripts.pory"
	setmetatile 30, 6, METATILE_General_CalmWater, FALSE
# 32 "data/maps/Route7/scripts.pory"
	setmetatile 31, 6, METATILE_General_CalmWater, FALSE
# 33 "data/maps/Route7/scripts.pory"
	setmetatile 32, 6, METATILE_General_CalmWater, FALSE
# 34 "data/maps/Route7/scripts.pory"
	setmetatile 30, 7, METATILE_General_CalmWater, FALSE
# 35 "data/maps/Route7/scripts.pory"
	setmetatile 31, 7, METATILE_General_CalmWater, FALSE
# 36 "data/maps/Route7/scripts.pory"
	setmetatile 32, 7, METATILE_General_CalmWater, FALSE
	return

Route7_CheckBridgeState_1:
# 8 "data/maps/Route7/scripts.pory"
	setmetatile 25, 5, METATILE_General_Grass, FALSE
# 9 "data/maps/Route7/scripts.pory"
	setmetatile 26, 5, METATILE_General_Grass, FALSE
# 10 "data/maps/Route7/scripts.pory"
	setmetatile 26, 6, METATILE_General_Grass, FALSE
# 11 "data/maps/Route7/scripts.pory"
	setmetatile 27, 5, METATILE_General_Grass, FALSE
# 12 "data/maps/Route7/scripts.pory"
	setmetatile 27, 6, METATILE_General_Grass, FALSE
# 13 "data/maps/Route7/scripts.pory"
	setmetatile 35, 8, METATILE_General_Grass, FALSE
# 14 "data/maps/Route7/scripts.pory"
	setmetatile 36, 7, METATILE_General_Grass, FALSE
# 15 "data/maps/Route7/scripts.pory"
	setmetatile 37, 7, METATILE_General_Grass, FALSE
# 16 "data/maps/Route7/scripts.pory"
	setmetatile 36, 8, METATILE_General_Grass, FALSE
# 17 "data/maps/Route7/scripts.pory"
	setmetatile 37, 8, METATILE_General_Grass, FALSE
	return


Route7_Scientist::
# 41 "data/maps/Route7/scripts.pory"
	lockall
# 42 "data/maps/Route7/scripts.pory"
	msgbox Route7_Scientist_Text_0, MSGBOX_NPC
# 43 "data/maps/Route7/scripts.pory"
	releaseall
	return


Route7_Worker::
# 47 "data/maps/Route7/scripts.pory"
	lockall
# 48 "data/maps/Route7/scripts.pory"
	msgbox Route7_Scientist_Text_0, MSGBOX_NPC
# 49 "data/maps/Route7/scripts.pory"
	releaseall
	return


Route7_Picnicker::
# 53 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ROUTE7_PICNICKER, Route7_Picnicker_Text_0, Route7_Picnicker_Text_1
# 58 "data/maps/Route7/scripts.pory"
	msgbox Route7_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route7_LittleBoy::
# 63 "data/maps/Route7/scripts.pory"
	lockall
# 64 "data/maps/Route7/scripts.pory"
	msgbox Route7_LittleBoy_Text_0, MSGBOX_NPC
# 65 "data/maps/Route7/scripts.pory"
	releaseall
	return


Route7_LittleGirl::
# 69 "data/maps/Route7/scripts.pory"
	lockall
# 70 "data/maps/Route7/scripts.pory"
	msgbox Route7_LittleGirl_Text_0, MSGBOX_NPC
# 71 "data/maps/Route7/scripts.pory"
	releaseall
	return


Route7_Scientist_Text_0:
# 42 "data/maps/Route7/scripts.pory"
	.string "We're trying to rebuild the bridge, but\n"
	.string "the Water type pokemon that live here\l"
	.string "are halting our progress.$"

Route7_Picnicker_Text_0:
# 55 "data/maps/Route7/scripts.pory"
	.string "This spot is great for camping, the\n"
	.string "water is really fresh!$"

Route7_Picnicker_Text_1:
# 56 "data/maps/Route7/scripts.pory"
	.string "I need to go cool off in the river.$"

Route7_Picnicker_Text_2:
# 58 "data/maps/Route7/scripts.pory"
	.string "This river is fed by ice melting up on\n"
	.string "the mountain.$"

Route7_LittleBoy_Text_0:
# 64 "data/maps/Route7/scripts.pory"
	.string "I like to swim, but the lake is too deep,\n"
	.string "so I swim in the shallows like this.$"

Route7_LittleGirl_Text_0:
# 70 "data/maps/Route7/scripts.pory"
	.string "How is he doing that?$"
