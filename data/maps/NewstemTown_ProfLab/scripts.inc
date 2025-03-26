NewstemTown_ProfLab_MapScripts::
# 2 "data/maps/NewstemTown_ProfLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewstemTown_ProfLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NewstemTown_ProfLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/NewstemTown_ProfLab/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, NewstemTown_ProfLab_Intro
	.2byte 0


NewstemTown_ProfLab_Intro::
# 8 "data/maps/NewstemTown_ProfLab/scripts.pory"
	lockall
# 9 "data/maps/NewstemTown_ProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewstemTown_WalkIntoLab
# 10 "data/maps/NewstemTown_ProfLab/scripts.pory"
	waitmovement 0
# 11 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NewstemTown_ProfLab_Text_Intro
# 12 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 13 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return


# 16 "data/maps/NewstemTown_ProfLab/scripts.pory"
NewstemTown_WalkIntoLab:
# 17 "data/maps/NewstemTown_ProfLab/scripts.pory"
	walk_up
# 17 "data/maps/NewstemTown_ProfLab/scripts.pory"
	walk_up
# 17 "data/maps/NewstemTown_ProfLab/scripts.pory"
	walk_up
# 17 "data/maps/NewstemTown_ProfLab/scripts.pory"
	walk_up
# 17 "data/maps/NewstemTown_ProfLab/scripts.pory"
	walk_up
# 17 "data/maps/NewstemTown_ProfLab/scripts.pory"
	walk_up
	step_end

NewstemTown_ProfLab_Professor::
# 22 "data/maps/NewstemTown_ProfLab/scripts.pory"
	lockall
# 23 "data/maps/NewstemTown_ProfLab/scripts.pory"
	applymovement 4, NewstemTown_ProfLab_Professor_Movement_0
# 24 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 2
	goto_if_eq NewstemTown_ProfLab_Professor_2
# 26 "data/maps/NewstemTown_ProfLab/scripts.pory"
	goto_if_unset FLAG_BIRCH_AIDE_MET, NewstemTown_ProfLab_Professor_5
NewstemTown_ProfLab_Professor_4:
# 32 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NewstemTown_ProfLab_Professor_Text_2, MSGBOX_NPC
NewstemTown_ProfLab_Professor_1:
# 34 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return

NewstemTown_ProfLab_Professor_2:
# 25 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NewstemTown_ProfLab_Professor_Text_0, MSGBOX_NPC
	goto NewstemTown_ProfLab_Professor_1

NewstemTown_ProfLab_Professor_3:
# 27 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NewstemTown_ProfLab_Professor_Text_1, MSGBOX_NPC
# 28 "data/maps/NewstemTown_ProfLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 29 "data/maps/NewstemTown_ProfLab/scripts.pory"
	giveitem ITEM_POTION, 1
# 30 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
	goto NewstemTown_ProfLab_Professor_1

NewstemTown_ProfLab_Professor_5:
# 26 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
	goto_if_eq NewstemTown_ProfLab_Professor_3
	goto NewstemTown_ProfLab_Professor_4


NewstemTown_ProfLab_Starter1::
# 38 "data/maps/NewstemTown_ProfLab/scripts.pory"
	lockall
# 39 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CROAGUNK
# 40 "data/maps/NewstemTown_ProfLab/scripts.pory"
	bufferstring STR_VAR_1, NewstemTown_ProfLab_Starter1_Text_0
# 41 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call StarterSelection
# 42 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return


NewstemTown_ProfLab_Starter2::
# 46 "data/maps/NewstemTown_ProfLab/scripts.pory"
	lockall
# 47 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ROCKRUFF
# 48 "data/maps/NewstemTown_ProfLab/scripts.pory"
	bufferstring STR_VAR_1, NewstemTown_ProfLab_Starter2_Text_0
# 49 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call StarterSelection
# 50 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return


NewstemTown_ProfLab_Starter3::
# 54 "data/maps/NewstemTown_ProfLab/scripts.pory"
	lockall
# 55 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SWABLU
# 56 "data/maps/NewstemTown_ProfLab/scripts.pory"
	bufferstring STR_VAR_1, NewstemTown_ProfLab_Starter3_Text_0
# 57 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call StarterSelection
# 58 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return


StarterSelection::
# 62 "data/maps/NewstemTown_ProfLab/scripts.pory"
	showmonpic VAR_TEMP_0, 10, 3
# 63 "data/maps/NewstemTown_ProfLab/scripts.pory"
	playmoncry VAR_TEMP_0, CRY_MODE_NORMAL
# 64 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox StarterSelection_Text_0, MSGBOX_YESNO
# 66 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarterSelection_2
# 87 "data/maps/NewstemTown_ProfLab/scripts.pory"
	hidemonpic
StarterSelection_1:
# 89 "data/maps/NewstemTown_ProfLab/scripts.pory"
	waitmessage
	return

StarterSelection_2:
# 67 "data/maps/NewstemTown_ProfLab/scripts.pory"
	givemon VAR_TEMP_0, 5, ITEM_NONE, ITEM_PREMIER_BALL
# 69 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StarterSelection_5
	goto StarterSelection_1

StarterSelection_5:
# 70 "data/maps/NewstemTown_ProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 71 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox StarterSelection_Text_1
# 72 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call PickedStarter
# 73 "data/maps/NewstemTown_ProfLab/scripts.pory"
	waitfanfare
# 74 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call NicknamePartyMon
	goto StarterSelection_1


PickedStarter::
# 93 "data/maps/NewstemTown_ProfLab/scripts.pory"
	removeobject 1
# 94 "data/maps/NewstemTown_ProfLab/scripts.pory"
	removeobject 2
# 95 "data/maps/NewstemTown_ProfLab/scripts.pory"
	removeobject 3
# 96 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 97 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 98 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 99 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 100 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 101 "data/maps/NewstemTown_ProfLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 102 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 103 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	return


NicknamePartyMon::
# 108 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 109 "data/maps/NewstemTown_ProfLab/scripts.pory"
	hidemonpic
# 110 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 111 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 112 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 117 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 118 "data/maps/NewstemTown_ProfLab/scripts.pory"
	hidemonpic
# 119 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 122 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 120 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


# 23 "data/maps/NewstemTown_ProfLab/scripts.pory"
NewstemTown_ProfLab_Professor_Movement_0:
# 23 "data/maps/NewstemTown_ProfLab/scripts.pory"
	face_player
	step_end

NewstemTown_ProfLab_Professor_Text_0:
# 25 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "They're just there on the desk,\ngo ahead and take one.$"

NewstemTown_ProfLab_Professor_Text_1:
# 27 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "Oh right, while you're here, I have some\n"
	.string "items to help you get started.$"

NewstemTown_ProfLab_Professor_Text_2:
# 32 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "I'm glad to see you {PLAYER},\nbut I'm quite busy so I'll talk later.$"

NewstemTown_ProfLab_Starter1_Text_0:
# 40 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "CROAGUNK$"

NewstemTown_ProfLab_Starter2_Text_0:
# 48 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "ROCKRUFF$"

NewstemTown_ProfLab_Starter3_Text_0:
# 56 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "SWABLU$"

StarterSelection_Text_0:
# 64 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

StarterSelection_Text_1:
# 71 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "You recieved the {STR_VAR_1}!$"

NicknamePartyMon_Text_0:
# 108 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "Give it a nickname?$"

NewstemTown_ProfLab_Text_Intro::
# 125 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "Glad to see you, {PLAYER}.\p"
	.string "I've gotten my hands on a couple of\nPokemon.\p"
	.string "Feel free to pick one you like.$"
