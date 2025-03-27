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
# 14 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 15
# 17 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 150
# 18 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	releaseall
	return


NewstemTown_PlayersHouse_Bedroom_Settings::
# 22 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	lockall
# 23 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_0
# 24 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_QOL_OPTIONS, 0
# 25 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 26 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	switch VAR_RESULT
# 27 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 0, NewstemTown_PlayersHouse_Bedroom_Settings_3
# 36 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 1, NewstemTown_PlayersHouse_Bedroom_Settings_4
# 45 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 2, NewstemTown_PlayersHouse_Bedroom_Settings_5
# 54 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 3, NewstemTown_PlayersHouse_Bedroom_Settings_6
# 64 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	releaseall
	end

NewstemTown_PlayersHouse_Bedroom_Settings_1:
# 67 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	releaseall
	return

NewstemTown_PlayersHouse_Bedroom_Settings_3:
# 28 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_1
# 29 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 30 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 31 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_9
# 33 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	clearflag FLAG_SHARED_EXP
NewstemTown_PlayersHouse_Bedroom_Settings_8:
# 34 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_4:
# 37 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_2
# 38 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 39 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 40 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_13
# 42 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	clearflag FLAG_USE_NEW_TYPE_CHART
NewstemTown_PlayersHouse_Bedroom_Settings_12:
# 43 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_5:
# 46 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_3
# 47 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 48 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 49 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_17
# 51 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 0
NewstemTown_PlayersHouse_Bedroom_Settings_16:
# 52 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_6:
# 55 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_4
# 56 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 57 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 58 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_21
# 60 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 0
NewstemTown_PlayersHouse_Bedroom_Settings_20:
# 61 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_9:
# 32 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setflag FLAG_SHARED_EXP
	goto NewstemTown_PlayersHouse_Bedroom_Settings_8

NewstemTown_PlayersHouse_Bedroom_Settings_13:
# 41 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setflag FLAG_USE_NEW_TYPE_CHART
	goto NewstemTown_PlayersHouse_Bedroom_Settings_12

NewstemTown_PlayersHouse_Bedroom_Settings_17:
# 50 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 150
	goto NewstemTown_PlayersHouse_Bedroom_Settings_16

NewstemTown_PlayersHouse_Bedroom_Settings_21:
# 59 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 15
	goto NewstemTown_PlayersHouse_Bedroom_Settings_20


NewstemTown_PlayersHouse_Bedroom_Settings_Text_0:
# 23 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "This is where you edit the game's\n"
	.string "difficulty and QoL settings.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_1:
# 28 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "All Pokemon in the party gain exp, not\n"
	.string "just the ones used in battle.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_2:
# 37 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Use the new Ice Type interactions.\n"
	.string "Grants Water and Grass resist.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_3:
# 46 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Experience is boosted 2.5x.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_4:
# 55 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Wild encounters have a chance of being\n"
	.string "a double battle.$"
