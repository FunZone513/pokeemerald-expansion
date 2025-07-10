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
	call Generic_UPDATE_LEVELCAP
# 15 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 15
# 18 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 50
# 19 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	releaseall
	return


NewstemTown_PlayersHouse_Bedroom_Settings::
# 23 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	lockall
# 24 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_0
# 25 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 0, MULTI_QOL_OPTIONS, 0
# 26 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 27 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 0, NewstemTown_PlayersHouse_Bedroom_Settings_3
# 37 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 1, NewstemTown_PlayersHouse_Bedroom_Settings_4
# 46 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 2, NewstemTown_PlayersHouse_Bedroom_Settings_5
# 55 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 3, NewstemTown_PlayersHouse_Bedroom_Settings_6
# 64 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 4, NewstemTown_PlayersHouse_Bedroom_Settings_7
# 74 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	releaseall
	end

NewstemTown_PlayersHouse_Bedroom_Settings_1:
# 77 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	releaseall
	return

NewstemTown_PlayersHouse_Bedroom_Settings_3:
# 29 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_1
# 30 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 31 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 32 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_10
# 34 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	clearflag FLAG_SHARED_EXP
NewstemTown_PlayersHouse_Bedroom_Settings_9:
# 35 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_4:
# 38 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_2
# 39 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 40 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 41 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_14
# 43 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	clearflag FLAG_USE_NEW_TYPE_CHART
NewstemTown_PlayersHouse_Bedroom_Settings_13:
# 44 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_5:
# 47 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_3
# 48 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 49 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 50 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_18
# 52 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 0
NewstemTown_PlayersHouse_Bedroom_Settings_17:
# 53 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_6:
# 56 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_4
# 57 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 58 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 59 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_22
# 61 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 0
NewstemTown_PlayersHouse_Bedroom_Settings_21:
# 62 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_7:
# 65 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_5
# 66 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 67 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 68 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_26
# 70 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
NewstemTown_PlayersHouse_Bedroom_Settings_25:
# 71 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_10:
# 33 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setflag FLAG_SHARED_EXP
	goto NewstemTown_PlayersHouse_Bedroom_Settings_9

NewstemTown_PlayersHouse_Bedroom_Settings_14:
# 42 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setflag FLAG_USE_NEW_TYPE_CHART
	goto NewstemTown_PlayersHouse_Bedroom_Settings_13

NewstemTown_PlayersHouse_Bedroom_Settings_18:
# 51 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 150
	goto NewstemTown_PlayersHouse_Bedroom_Settings_17

NewstemTown_PlayersHouse_Bedroom_Settings_22:
# 60 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 15
	goto NewstemTown_PlayersHouse_Bedroom_Settings_21

NewstemTown_PlayersHouse_Bedroom_Settings_26:
# 69 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	call Generic_UPDATE_LEVELCAP
	goto NewstemTown_PlayersHouse_Bedroom_Settings_25


NewstemTown_PlayersHouse_Bedroom_PC::
# 81 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
	return


Generic_UPDATE_LEVELCAP::
# 86 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 15
# 88 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Generic_UPDATE_LEVELCAP_2
Generic_UPDATE_LEVELCAP_1:
# 92 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Generic_UPDATE_LEVELCAP_5
Generic_UPDATE_LEVELCAP_4:
	return

Generic_UPDATE_LEVELCAP_2:
# 89 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	addvar VAR_CURRENT_LEVEL_CAP, 7
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_5:
# 93 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	addvar VAR_CURRENT_LEVEL_CAP, 78
	goto Generic_UPDATE_LEVELCAP_4


Generic_GYM_LEVEL_GUIDE::
# 100 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	lockall
# 101 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_CURRENT_LEVEL_CAP, 100
	goto_if_ne Generic_GYM_LEVEL_GUIDE_2
# 105 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 106 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 107 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
# 108 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
Generic_GYM_LEVEL_GUIDE_1:
# 110 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	releaseall
	return

Generic_GYM_LEVEL_GUIDE_2:
# 102 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 103 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
	goto Generic_GYM_LEVEL_GUIDE_1


Generic_POKEMON_INTERACT::
# 114 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	lockall
# 115 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	callnative GetInteractedPokemon
# 116 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Generic_POKEMON_INTERACT_2
Generic_POKEMON_INTERACT_1:
# 117 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	playmoncry VAR_0x8004, CRY_MODE_NORMAL
# 119 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	random 5
# 120 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	switch VAR_RESULT
# 121 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 0, Generic_POKEMON_INTERACT_6
# 122 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 1, Generic_POKEMON_INTERACT_7
# 123 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 2, Generic_POKEMON_INTERACT_8
# 124 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 3, Generic_POKEMON_INTERACT_9
# 125 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 4, Generic_POKEMON_INTERACT_10
# 126 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	msgbox Generic_POKEMON_INTERACT_Text_0, MSGBOX_NPC
Generic_POKEMON_INTERACT_4:
# 128 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	waitmoncry
# 129 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	releaseall
	return

Generic_POKEMON_INTERACT_2:
# 116 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setseenmon VAR_0x8004
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_6:
# 121 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	msgbox Generic_POKEMON_INTERACT_Text_0, MSGBOX_NPC
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_7:
# 122 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	msgbox Generic_POKEMON_INTERACT_Text_0, MSGBOX_NPC
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_8:
# 123 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	msgbox Generic_POKEMON_INTERACT_Text_1, MSGBOX_NPC
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_9:
# 124 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	msgbox Generic_POKEMON_INTERACT_Text_2, MSGBOX_NPC
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_10:
# 125 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	msgbox Generic_POKEMON_INTERACT_Text_3, MSGBOX_NPC
	goto Generic_POKEMON_INTERACT_4


NewstemTown_PlayersHouse_Bedroom_Settings_Text_0:
# 24 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "This is where you edit the game's\n"
	.string "difficulty and QoL settings.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_1:
# 29 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "All Pokemon in the party gain exp, not\n"
	.string "just the ones used in battle.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_2:
# 38 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Use the new Ice Type interactions.\n"
	.string "Grants Water and Grass resist.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_3:
# 47 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Experience is boosted 1.5x.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_4:
# 56 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Wild encounters have a chance of being\n"
	.string "a double battle.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_5:
# 65 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Pokemon cannot be levelled above the\n"
	.string "next main 'boss encounter's level.$"

Generic_GYM_LEVEL_GUIDE_Text_0:
# 103 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Recommended Level:\n{STR_VAR_1}$"

Generic_POKEMON_INTERACT_Text_0:
# 121 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "?$"

Generic_POKEMON_INTERACT_Text_1:
# 123 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "!$"

Generic_POKEMON_INTERACT_Text_2:
# 124 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "...$"

Generic_POKEMON_INTERACT_Text_3:
# 125 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "!?$"
