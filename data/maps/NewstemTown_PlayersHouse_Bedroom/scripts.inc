NewstemTown_PlayersHouse_Bedroom_MapScripts::
# 2 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewstemTown_PlayersHouse_Bedroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NewstemTown_PlayersHouse_Bedroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	map_script_2 VAR_STARTED_GAME, 0, NewstemTown_DefaultSettings
	.2byte 0


NewstemTown_DefaultSettings::
# 8 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 9 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setflag FLAG_SHARED_EXP
# 10 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setflag FLAG_USE_NEW_TYPE_CHART
# 11 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_STARTED_GAME, 1
# 12 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 15
# 13 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	releaseall
	return


NewstemTown_PlayersHouse_Bedroom_Settings::
# 17 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	lockall
# 18 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_0
# 19 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_QOL_OPTIONS, 0
# 20 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 21 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	switch VAR_RESULT
# 22 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 0, NewstemTown_PlayersHouse_Bedroom_Settings_3
# 31 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 1, NewstemTown_PlayersHouse_Bedroom_Settings_4
# 41 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	releaseall
	end

NewstemTown_PlayersHouse_Bedroom_Settings_1:
# 44 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	releaseall
	return

NewstemTown_PlayersHouse_Bedroom_Settings_3:
# 23 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_1
# 24 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 25 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 26 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_7
# 28 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	clearflag FLAG_SHARED_EXP
NewstemTown_PlayersHouse_Bedroom_Settings_6:
# 29 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_4:
# 32 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_2
# 33 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 34 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 35 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_11
# 37 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	clearflag FLAG_USE_NEW_TYPE_CHART
NewstemTown_PlayersHouse_Bedroom_Settings_10:
# 38 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_7:
# 27 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setflag FLAG_SHARED_EXP
	goto NewstemTown_PlayersHouse_Bedroom_Settings_6

NewstemTown_PlayersHouse_Bedroom_Settings_11:
# 36 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setflag FLAG_USE_NEW_TYPE_CHART
	goto NewstemTown_PlayersHouse_Bedroom_Settings_10


NewstemTown_DEBUG::
# 48 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	lockall
# 49 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	givemon SPECIES_TURTWIG, 1
# 50 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	istypeinparty TYPE_GRASS
# 51 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewstemTown_DEBUG_2
NewstemTown_DEBUG_1:
# 54 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	releaseall
	return

NewstemTown_DEBUG_2:
# 52 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	msgbox NewstemTown_DEBUG_Text_0
	goto NewstemTown_DEBUG_1


NewstemTown_PlayersHouse_Bedroom_Settings_Text_0:
# 18 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "This is where you edit the game's\n"
	.string "difficulty and QoL settings.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_1:
# 23 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "All Pokemon in the party gain exp, not\n"
	.string "just the ones used in battle.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_2:
# 32 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Use the new Ice Type interactions.\n"
	.string "Grants Water and Grass resist.$"

NewstemTown_DEBUG_Text_0:
# 52 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Yeah$"
