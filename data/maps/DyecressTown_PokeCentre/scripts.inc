DyecressTown_PokeCentre_MapScripts::
# 2 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DyecressTown_PokeCentre_OnLoad
	.byte 0


DyecressTown_PokeCentre_OnLoad::
# 6 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	goto_if_unset FLAG_DYECRESS_BULLSHIT, DyecressTown_PokeCentre_OnLoad_1
	return

DyecressTown_PokeCentre_OnLoad_1:
# 7 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 8 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 9 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	return


DyecressTown_PokeCentre_OldWoman::
# 14 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	lockall
# 15 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	goto_if_unset FLAG_DYECRESS_BULLSHIT, DyecressTown_PokeCentre_OldWoman_2
# 18 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_OldWoman_Text_1, MSGBOX_NPC
DyecressTown_PokeCentre_OldWoman_1:
# 20 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	releaseall
	return

DyecressTown_PokeCentre_OldWoman_2:
# 16 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_OldWoman_Text_0, MSGBOX_NPC
	goto DyecressTown_PokeCentre_OldWoman_1


DyecressTown_PokeCentre_Woman::
# 24 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	lockall
# 25 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	goto_if_unset FLAG_DYECRESS_BULLSHIT, DyecressTown_PokeCentre_Woman_2
# 28 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_Woman_Text_1, MSGBOX_NPC
DyecressTown_PokeCentre_Woman_1:
# 30 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	releaseall
	return

DyecressTown_PokeCentre_Woman_2:
# 26 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_Woman_Text_0, MSGBOX_NPC
	goto DyecressTown_PokeCentre_Woman_1


DyecressTown_PokeCentre_Man::
# 34 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	lockall
# 35 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	goto_if_unset FLAG_DYECRESS_BULLSHIT, DyecressTown_PokeCentre_Man_2
# 38 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_Man_Text_1, MSGBOX_NPC
DyecressTown_PokeCentre_Man_1:
# 40 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	releaseall
	return

DyecressTown_PokeCentre_Man_2:
# 36 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_Man_Text_0, MSGBOX_NPC
	goto DyecressTown_PokeCentre_Man_1


DyecressTown_PokeCentre_Girl::
# 44 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	lockall
# 45 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	fadeoutbgm 1
# 46 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	delay 60
# 47 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	applymovement 5, DyecressTown_PokeCentre_Girl_Movement_0
# 48 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	waitmovement 0
# 49 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	delay 120
# 50 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	braillemessage DyecressTown_PokeCentre_Girl_Text
# 51 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8004, 1
# 52 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8005, 1
# 53 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8006, 12
# 54 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8007, 2
# 55 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8008, 8
# 56 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	special ShakeCamera
# 57 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	waitstate
# 58 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8008, 0
# 59 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	delay 48
# 60 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	closebraillemessage
# 61 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	playse SE_M_LEER
# 62 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 1
# 63 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setflag FLAG_DYECRESS_BULLSHIT
# 64 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	removeobject 5
# 65 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	applymovement 2, DyecressTown_PokeCentre_Girl_Movement_1
# 66 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	applymovement 3, DyecressTown_PokeCentre_Girl_Movement_2
# 67 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	applymovement 4, DyecressTown_PokeCentre_Girl_Movement_3
# 68 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	waitmovement 0
# 69 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
# 70 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 71 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 72 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	special DrawWholeMapView
# 73 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 74 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	delay 48
# 75 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	fadeinbgm 2
# 76 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	releaseall
	return


# 79 "data/maps/DyecressTown_PokeCentre/scripts.pory"

# 80 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Text:
# 81 "data/maps/DyecressTown_PokeCentre/scripts.pory"
    brailleformat 3, 0, 25, 19, 6, 3
# 82 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.braille "????\n"
# 83 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.braille "????$"

# 47 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Movement_0:
# 47 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	face_player
	step_end

# 65 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Movement_1:
# 65 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	face_up
	step_end

# 66 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Movement_2:
# 66 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	face_down
	step_end

# 67 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Movement_3:
# 67 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	face_right
	step_end

DyecressTown_PokeCentre_OldWoman_Text_0:
# 16 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "That girl...\nThere's something weird about her...$"

DyecressTown_PokeCentre_OldWoman_Text_1:
# 18 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "You see all manner of things in old age.$"

DyecressTown_PokeCentre_Woman_Text_0:
# 26 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "I get a chill when I go over there...$"

DyecressTown_PokeCentre_Woman_Text_1:
# 28 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "Huh? I didn't see anyone over there?$"

DyecressTown_PokeCentre_Man_Text_0:
# 36 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "Who is that?$"

DyecressTown_PokeCentre_Man_Text_1:
# 38 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "Dyecress has a lot of history, which\n"
	.string "means that it has a lot of mysteries\l"
	.string "too.$"
