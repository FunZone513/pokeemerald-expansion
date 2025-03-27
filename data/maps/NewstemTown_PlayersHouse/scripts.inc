NewstemTown_PlayersHouse_MapScripts::
# 2 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewstemTown_PlayersHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NewstemTown_PlayersHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 0, NewstemTown_PlayersHouse_Intro
	.2byte 0


NewstemTown_PlayersHouse_Intro::
# 15 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	lockall
# 16 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	playse SE_PIN
# 17 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 18 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	waitmovement 0
# 19 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	applymovement 1, NewstemTown_PlayersHouse_Intro_Movement_0
# 20 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	waitmovement 0
# 21 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 22 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	waitmovement 0
# 23 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	applymovement 1, Intro_Mum_WalkToPlayer
# 24 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	msgbox NewstemTown_PlayersHouse_Intro_Text_0
# 25 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	waitmovement 0
# 26 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	msgbox Mum_Intro
# 27 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	closemessage
# 28 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	applymovement 1, Intro_Mum_WalkBackToChair
# 29 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	waitmovement 0
# 30 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 31 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	releaseall
	return


NewstemTown_PlayersHouse_Mum::
# 35 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	lockall
# 36 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	faceplayer
# 37 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 1
	goto_if_eq NewstemTown_PlayersHouse_Mum_2
# 40 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	getpartysize
# 41 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_gt NewstemTown_PlayersHouse_Mum_5
# 52 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	msgbox NewstemTown_PlayersHouse_Mum_Text_4, MSGBOX_NPC
NewstemTown_PlayersHouse_Mum_1:
# 56 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	releaseall
	return

NewstemTown_PlayersHouse_Mum_2:
# 38 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	msgbox NewstemTown_PlayersHouse_Mum_Text_0, MSGBOX_NPC
	goto NewstemTown_PlayersHouse_Mum_1

NewstemTown_PlayersHouse_Mum_5:
# 43 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	msgbox NewstemTown_PlayersHouse_Mum_Text_1, MSGBOX_YESNO
# 44 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewstemTown_PlayersHouse_Mum_8
# 49 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	msgbox NewstemTown_PlayersHouse_Mum_Text_3, MSGBOX_NPC
	goto NewstemTown_PlayersHouse_Mum_1

NewstemTown_PlayersHouse_Mum_8:
# 45 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 46 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	setrespawn HEAL_LOCATION_NEWSTEM_TOWN
# 47 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	msgbox NewstemTown_PlayersHouse_Mum_Text_2, MSGBOX_NPC
	goto NewstemTown_PlayersHouse_Mum_1


# 59 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
Intro_Mum_WalkToPlayer:
# 60 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	walk_right
# 60 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	walk_right
# 60 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	walk_right
# 61 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	walk_up
# 61 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	walk_up
	step_end

# 64 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
Intro_Mum_WalkBackToChair:
# 65 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	walk_down
# 65 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	walk_down
# 66 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	walk_left
# 66 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	walk_left
# 66 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	walk_left
	step_end

# 19 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
NewstemTown_PlayersHouse_Intro_Movement_0:
# 19 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	face_right
	step_end

NewstemTown_PlayersHouse_Intro_Text_0:
# 24 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	.string "Hey {PLAYER}!$"

NewstemTown_PlayersHouse_Mum_Text_0:
# 38 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	.string "You'd better head over to the Lab,\nYou don't want to miss out!$"

NewstemTown_PlayersHouse_Mum_Text_1:
# 43 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	.string "Would you like to take a break?$"

NewstemTown_PlayersHouse_Mum_Text_2:
# 47 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	.string "Have fun out there!$"

NewstemTown_PlayersHouse_Mum_Text_3:
# 49 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	.string "I'll be here if ever you need me!$"

NewstemTown_PlayersHouse_Mum_Text_4:
# 52 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	.string "You should probably go get a Pokemon!$"

Mum_Intro::
# 7 "data/maps/NewstemTown_PlayersHouse/scripts.pory"
	.string "I heard that the Professor finally\ngot some Pokemon together.\p"
	.string "You should go and pick one up, then you\ncan start on your Pokemon adventure!\p"
	.string "Oh right, make sure to grab all\nyour things out of the box upstairs!\p"
	.string "Have fun!$"
