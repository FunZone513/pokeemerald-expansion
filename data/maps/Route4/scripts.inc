Route4_MapScripts::
# 2 "data/maps/Route4/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route4_OnLoad
	.byte 0


Route4_OnLoad::
# 6 "data/maps/Route4/scripts.pory"
	compare VAR_EVELYNN_STATE, 1
	goto_if_ne Route4_OnLoad_2
# 9 "data/maps/Route4/scripts.pory"
	compare VAR_EVELYNN_STATE, 1
	goto_if_eq Route4_OnLoad_4
Route4_OnLoad_1:
# 13 "data/maps/Route4/scripts.pory"
	call Route4_LedgeBlocker
	return

Route4_OnLoad_2:
# 7 "data/maps/Route4/scripts.pory"
	setflag FLAG_TEMP_A
# 8 "data/maps/Route4/scripts.pory"
	setflag FLAG_TEMP_B
	goto Route4_OnLoad_1

Route4_OnLoad_3:
# 10 "data/maps/Route4/scripts.pory"
	setflag FLAG_TEMP_B
	goto Route4_OnLoad_1

Route4_OnLoad_4:
# 9 "data/maps/Route4/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
	goto_if_eq Route4_OnLoad_3
	goto Route4_OnLoad_1


Route4_LedgeBlocker::
# 17 "data/maps/Route4/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 1
	goto_if_le Route4_LedgeBlocker_1
# 23 "data/maps/Route4/scripts.pory"
	setflag FLAG_TEMP_2
	return

Route4_LedgeBlocker_1:
# 18 "data/maps/Route4/scripts.pory"
	setmetatile 12, 25, METATILE_General_Ledge_East, TRUE
# 19 "data/maps/Route4/scripts.pory"
	setmetatile 12, 26, METATILE_Petalburg_Disabled_Ledge_East, TRUE
# 20 "data/maps/Route4/scripts.pory"
	setmetatile 12, 27, METATILE_General_Ledge_East, TRUE
# 21 "data/maps/Route4/scripts.pory"
	setflag FLAG_TEMP_1
	return


Route4_LedgeBreaker::
# 28 "data/maps/Route4/scripts.pory"
	lock
# 29 "data/maps/Route4/scripts.pory"
	msgbox Route4_LedgeBreaker_Text_0, MSGBOX_NPC
# 30 "data/maps/Route4/scripts.pory"
	applymovement 2, Route4_LedgeBreaker_Movement_0
# 31 "data/maps/Route4/scripts.pory"
	waitmovement 2
# 32 "data/maps/Route4/scripts.pory"
	release
	return


Route4_LedgeBreaker2::
# 36 "data/maps/Route4/scripts.pory"
	msgbox Route4_LedgeBreaker2_Text_0, MSGBOX_NPC
	return


Route4_Sign_Researcher_Lab::
# 40 "data/maps/Route4/scripts.pory"
	msgbox Route4_Sign_Researcher_Lab_Text_0, MSGBOX_SIGN
	return


Route4_Sign_Researcher_Lab_Garden::
# 44 "data/maps/Route4/scripts.pory"
	msgbox Route4_Sign_Researcher_Lab_Garden_Text, MSGBOX_SIGN
	return


Route4_SchoolKid::
# 54 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_SCHOOLKID, Route4_SchoolKid_Text_0, Route4_SchoolKid_Text_1
# 59 "data/maps/Route4/scripts.pory"
	msgbox Route4_SchoolKid_Text_2, MSGBOX_AUTOCLOSE
	end


Route4_Evelynn::
# 64 "data/maps/Route4/scripts.pory"
	lockall
# 65 "data/maps/Route4/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route4_Evelynn_Movement_0
# 66 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route4/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 68 "data/maps/Route4/scripts.pory"
	compare VAR_TEMP_1, 23
	goto_if_eq Route4_Evelynn_2
Route4_Evelynn_1:
# 69 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route4/scripts.pory"
	special SpawnCameraObject
# 71 "data/maps/Route4/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route4_Evelynn_Movement_2
# 72 "data/maps/Route4/scripts.pory"
	msgbox Route4_Evelynn_Text_0
# 73 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route4/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route4_Evelynn_Movement_3
# 75 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route4/scripts.pory"
	msgbox Route4_Evelynn_Text_1
# 77 "data/maps/Route4/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route4_Evelynn_Movement_4
# 78 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route4/scripts.pory"
	msgbox Route4_Evelynn_Text_2
# 80 "data/maps/Route4/scripts.pory"
	applymovement 5, Route4_LedgeBreaker_Movement_0
# 81 "data/maps/Route4/scripts.pory"
	msgbox Route4_Evelynn_Text_3
# 82 "data/maps/Route4/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route4_Evelynn_Movement_5
# 83 "data/maps/Route4/scripts.pory"
	playse SE_PIN
# 84 "data/maps/Route4/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 85 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route4/scripts.pory"
	applymovement 4, Route4_LedgeBreaker_Movement_0
# 87 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route4/scripts.pory"
	applymovement 4, Common_Movement_Delay48
# 89 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route4/scripts.pory"
	msgbox Route4_Evelynn_Text_4
# 91 "data/maps/Route4/scripts.pory"
	applymovement 4, Route4_Evelynn_Movement_6
# 92 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route4/scripts.pory"
	msgbox Route4_Evelynn_Text_5
# 94 "data/maps/Route4/scripts.pory"
	msgbox Route4_Evelynn_Text_6
# 95 "data/maps/Route4/scripts.pory"
	applymovement 5, Route4_Evelynn_Movement_7
# 96 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route4/scripts.pory"
	msgbox Route4_Evelynn_Text_7
# 98 "data/maps/Route4/scripts.pory"
	msgbox Route4_Evelynn_Text_8
# 99 "data/maps/Route4/scripts.pory"
	applymovement 4, Route4_Evelynn_Movement_8
# 100 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route4/scripts.pory"
	delay 60
# 102 "data/maps/Route4/scripts.pory"
	msgbox Route4_Evelynn_Text_9
# 103 "data/maps/Route4/scripts.pory"
	applymovement 4, Route4_Evelynn_Movement_9
# 104 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route4/scripts.pory"
	playse SE_WALL_HIT
# 106 "data/maps/Route4/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route4_Evelynn_Movement_10
# 107 "data/maps/Route4/scripts.pory"
	applymovement 5, Route4_LedgeBreaker_Movement_0
# 108 "data/maps/Route4/scripts.pory"
	applymovement 4, Route4_Evelynn_Movement_11
# 109 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route4/scripts.pory"
	playse SE_EXIT
# 111 "data/maps/Route4/scripts.pory"
	removeobject 4
# 112 "data/maps/Route4/scripts.pory"
	delay 60
# 113 "data/maps/Route4/scripts.pory"
	msgbox Route4_Evelynn_Text_10
# 114 "data/maps/Route4/scripts.pory"
	applymovement 5, Route4_Evelynn_Movement_12
# 115 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route4/scripts.pory"
	playse SE_EXIT
# 117 "data/maps/Route4/scripts.pory"
	removeobject 5
# 118 "data/maps/Route4/scripts.pory"
	setvar VAR_EVELYNN_STATE, 2
# 119 "data/maps/Route4/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route4_Evelynn_Movement_13
# 120 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route4/scripts.pory"
	special RemoveCameraObject
# 122 "data/maps/Route4/scripts.pory"
	releaseall
	return

Route4_Evelynn_2:
# 68 "data/maps/Route4/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route4_Evelynn_Movement_1
	goto Route4_Evelynn_1


# 30 "data/maps/Route4/scripts.pory"
Route4_LedgeBreaker_Movement_0:
# 30 "data/maps/Route4/scripts.pory"
	face_left
	step_end

# 65 "data/maps/Route4/scripts.pory"
Route4_Evelynn_Movement_0:
# 65 "data/maps/Route4/scripts.pory"
	face_right
	step_end

# 68 "data/maps/Route4/scripts.pory"
Route4_Evelynn_Movement_1:
# 68 "data/maps/Route4/scripts.pory"
	delay_16
# 68 "data/maps/Route4/scripts.pory"
	walk_right
	step_end

# 71 "data/maps/Route4/scripts.pory"
Route4_Evelynn_Movement_2:
# 71 "data/maps/Route4/scripts.pory"
	walk_right
# 71 "data/maps/Route4/scripts.pory"
	walk_diag_southeast
	step_end

# 74 "data/maps/Route4/scripts.pory"
Route4_Evelynn_Movement_3:
# 74 "data/maps/Route4/scripts.pory"
	walk_up
	step_end

# 77 "data/maps/Route4/scripts.pory"
Route4_Evelynn_Movement_4:
# 77 "data/maps/Route4/scripts.pory"
	walk_down
	step_end

# 82 "data/maps/Route4/scripts.pory"
Route4_Evelynn_Movement_5:
# 82 "data/maps/Route4/scripts.pory"
	walk_diag_northwest
	step_end

# 91 "data/maps/Route4/scripts.pory"
Route4_Evelynn_Movement_6:
# 91 "data/maps/Route4/scripts.pory"
	face_down
	step_end

# 95 "data/maps/Route4/scripts.pory"
Route4_Evelynn_Movement_7:
# 95 "data/maps/Route4/scripts.pory"
	face_up
	step_end

# 99 "data/maps/Route4/scripts.pory"
Route4_Evelynn_Movement_8:
# 99 "data/maps/Route4/scripts.pory"
	face_left
# 99 "data/maps/Route4/scripts.pory"
	delay_16
# 99 "data/maps/Route4/scripts.pory"
	delay_16
# 99 "data/maps/Route4/scripts.pory"
	delay_16
# 99 "data/maps/Route4/scripts.pory"
	delay_16
# 99 "data/maps/Route4/scripts.pory"
	face_down
# 99 "data/maps/Route4/scripts.pory"
	delay_16
# 99 "data/maps/Route4/scripts.pory"
	delay_16
# 99 "data/maps/Route4/scripts.pory"
	delay_16
# 99 "data/maps/Route4/scripts.pory"
	face_left
	step_end

# 103 "data/maps/Route4/scripts.pory"
Route4_Evelynn_Movement_9:
# 103 "data/maps/Route4/scripts.pory"
	walk_left
	step_end

# 106 "data/maps/Route4/scripts.pory"
Route4_Evelynn_Movement_10:
# 106 "data/maps/Route4/scripts.pory"
	face_up
# 106 "data/maps/Route4/scripts.pory"
	lock_facing_direction
# 106 "data/maps/Route4/scripts.pory"
	walk_down
# 106 "data/maps/Route4/scripts.pory"
	unlock_facing_direction
	step_end

# 108 "data/maps/Route4/scripts.pory"
Route4_Evelynn_Movement_11:
# 108 "data/maps/Route4/scripts.pory"
	walk_left
# 108 "data/maps/Route4/scripts.pory"
	walk_up
# 108 "data/maps/Route4/scripts.pory"
	walk_up
# 108 "data/maps/Route4/scripts.pory"
	walk_left
	step_end

# 114 "data/maps/Route4/scripts.pory"
Route4_Evelynn_Movement_12:
# 114 "data/maps/Route4/scripts.pory"
	walk_up
# 114 "data/maps/Route4/scripts.pory"
	walk_left
# 114 "data/maps/Route4/scripts.pory"
	walk_left
# 114 "data/maps/Route4/scripts.pory"
	walk_up
# 114 "data/maps/Route4/scripts.pory"
	walk_up
# 114 "data/maps/Route4/scripts.pory"
	walk_left
	step_end

# 119 "data/maps/Route4/scripts.pory"
Route4_Evelynn_Movement_13:
# 119 "data/maps/Route4/scripts.pory"
	walk_diag_southwest
	step_end

Route4_LedgeBreaker_Text_0:
# 29 "data/maps/Route4/scripts.pory"
	.string "I'M SICK OF THIS LEDGE!\nI'M GONNA BREAK IT DOWN!!$"

Route4_LedgeBreaker2_Text_0:
# 36 "data/maps/Route4/scripts.pory"
	.string "I often visit my grandmother in\n"
	.string "Dyecress Town, and the ledges always\l"
	.string "made the way difficult.$"

Route4_Sign_Researcher_Lab_Text_0:
# 40 "data/maps/Route4/scripts.pory"
	.string "Welcome to the wonderful world of\nPokemon Science!$"

Route4_SchoolKid_Text_0:
# 56 "data/maps/Route4/scripts.pory"
	.string "Ah! You scared me!$"

Route4_SchoolKid_Text_1:
# 57 "data/maps/Route4/scripts.pory"
	.string "You came out of nowhere...$"

Route4_SchoolKid_Text_2:
# 59 "data/maps/Route4/scripts.pory"
	.string "After being stuck in the lab all day\n"
	.string "with my Dad, I like to come out here and\l"
	.string "appreciate being in nature.$"

Route4_Evelynn_Text_0:
# 72 "data/maps/Route4/scripts.pory"
	.string "Look, I don't know if I can help you.$"

Route4_Evelynn_Text_1:
# 76 "data/maps/Route4/scripts.pory"
	.string "But you've seen what they're doing,\nyou can't expect me to believe you\lhaven't even tried looking into it.$"

Route4_Evelynn_Text_2:
# 79 "data/maps/Route4/scripts.pory"
	.string "It's not that simple...$"

Route4_Evelynn_Text_3:
# 81 "data/maps/Route4/scripts.pory"
	.string "Wait, who is that?$"

Route4_Evelynn_Text_4:
# 90 "data/maps/Route4/scripts.pory"
	.string "Aren't you the kid I saw on Route 2?\nWhat's your business here?\p...\p...what?$"

Route4_Evelynn_Text_5:
# 93 "data/maps/Route4/scripts.pory"
	.string "Did you catch any of that?$"

Route4_Evelynn_Text_6:
# 94 "data/maps/Route4/scripts.pory"
	.string "Huh?$"

Route4_Evelynn_Text_7:
# 97 "data/maps/Route4/scripts.pory"
	.string "Oh yeah, they said they were\nrunning an errand trying to help\lcalm down the Parasect.$"

Route4_Evelynn_Text_8:
# 98 "data/maps/Route4/scripts.pory"
	.string "...$"

Route4_Evelynn_Text_9:
# 102 "data/maps/Route4/scripts.pory"
	.string "...Right, anyway, you had better not\ntell anyone you saw me here.$"

Route4_Evelynn_Text_10:
# 113 "data/maps/Route4/scripts.pory"
	.string "Oh, I suppose I should get going too.$"

Route4_Sign_Researcher_Lab_Garden_Text::
# 47 "data/maps/Route4/scripts.pory"
	.string "Remember to clean off your shoes\nbefore you go back into the Lab,\l"
	.string "and don't overfeed the water Pokemon!\p"
	.string "We keep having to call in Nurse Joy\nbecause they get so fat!$"
