Route2_MapScripts::
	.byte 0


Route2_Trigger_CamperL::
# 4 "data/maps/Route2/scripts.pory"
	call Route2_MoveCamper
	return


Route2_Trigger_CamperR::
# 8 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 2
# 9 "data/maps/Route2/scripts.pory"
	call Route2_MoveCamper
	return


Route2_MoveCamper::
# 13 "data/maps/Route2/scripts.pory"
	lockall
# 14 "data/maps/Route2/scripts.pory"
	applymovement 1, Route2_MoveCamper_Movement_0
# 15 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 16 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route2/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 18 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 20 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 21 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_MoveCamper_2
# 27 "data/maps/Route2/scripts.pory"
	applymovement 1, Route2_MoveCamper_Movement_2
Route2_MoveCamper_1:
# 32 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route2/scripts.pory"
	msgbox Route2_Camper_Warning_Text, MSGBOX_NPC
# 34 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_MoveCamper_6
# 40 "data/maps/Route2/scripts.pory"
	applymovement 1, Route2_MoveCamper_Movement_4
Route2_MoveCamper_5:
# 45 "data/maps/Route2/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
# 46 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route2/scripts.pory"
	applymovement 1, Route2_MoveCamper_Movement_0
# 48 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_MoveCamper_2:
# 22 "data/maps/Route2/scripts.pory"
	applymovement 1, Route2_MoveCamper_Movement_1
	goto Route2_MoveCamper_1

Route2_MoveCamper_6:
# 35 "data/maps/Route2/scripts.pory"
	applymovement 1, Route2_MoveCamper_Movement_3
	goto Route2_MoveCamper_5


Route2_NPC_Camper::
# 64 "data/maps/Route2/scripts.pory"
	lockall
# 65 "data/maps/Route2/scripts.pory"
	faceplayer
# 66 "data/maps/Route2/scripts.pory"
	msgbox Route2_NPC_Camper_Text_0, MSGBOX_NPC
# 67 "data/maps/Route2/scripts.pory"
	releaseall
	return


Route2_Miniboss::
# 71 "data/maps/Route2/scripts.pory"
	lockall
# 72 "data/maps/Route2/scripts.pory"
	applymovement 2, Route2_Miniboss_Movement_0
# 73 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_PARASECT, CRY_MODE_ENCOUNTER
# 75 "data/maps/Route2/scripts.pory"
	msgbox Route2_Miniboss_Text_0
# 76 "data/maps/Route2/scripts.pory"
	waitmoncry
# 77 "data/maps/Route2/scripts.pory"
	msgbox Route2_Miniboss_Text_1, MSGBOX_YESNO
# 78 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route2_Miniboss_2
# 81 "data/maps/Route2/scripts.pory"
	msgbox Route2_Miniboss_Text_3
# 82 "data/maps/Route2/scripts.pory"
	call Route2_Miniboss_Battle
Route2_Miniboss_1:
# 84 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_Miniboss_2:
# 79 "data/maps/Route2/scripts.pory"
	msgbox Route2_Miniboss_Text_2
	goto Route2_Miniboss_1


Route2_Miniboss_Battle::
# 88 "data/maps/Route2/scripts.pory"
	setwildbattle SPECIES_PARASECT, 25, ITEM_OCCA_BERRY
# 89 "data/maps/Route2/scripts.pory"
	setflag FLAG_ACTIVE_BOSS_BATTLE
# 90 "data/maps/Route2/scripts.pory"
	dowildbattle
# 91 "data/maps/Route2/scripts.pory"
	clearflag FLAG_ACTIVE_BOSS_BATTLE
# 92 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 93 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2_Miniboss_Battle_2
Route2_Miniboss_Battle_1:
# 97 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_Miniboss_Battle_2:
# 94 "data/maps/Route2/scripts.pory"
	setflag FLAG_HIDE_ROUTE2_MINIBOSS
# 95 "data/maps/Route2/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
	goto Route2_Miniboss_Battle_1


Route2_BlackBelt::
# 101 "data/maps/Route2/scripts.pory"
	lockall
# 102 "data/maps/Route2/scripts.pory"
	msgbox Route2_BlackBelt_Text_0
# 103 "data/maps/Route2/scripts.pory"
	releaseall
	return


# 14 "data/maps/Route2/scripts.pory"
Route2_MoveCamper_Movement_0:
# 14 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 22 "data/maps/Route2/scripts.pory"
Route2_MoveCamper_Movement_1:
# 23 "data/maps/Route2/scripts.pory"
	walk_right
# 23 "data/maps/Route2/scripts.pory"
	walk_right
# 24 "data/maps/Route2/scripts.pory"
	walk_down
# 24 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 27 "data/maps/Route2/scripts.pory"
Route2_MoveCamper_Movement_2:
# 28 "data/maps/Route2/scripts.pory"
	walk_right
# 29 "data/maps/Route2/scripts.pory"
	walk_down
# 29 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 35 "data/maps/Route2/scripts.pory"
Route2_MoveCamper_Movement_3:
# 36 "data/maps/Route2/scripts.pory"
	walk_up
# 36 "data/maps/Route2/scripts.pory"
	walk_up
# 37 "data/maps/Route2/scripts.pory"
	walk_left
# 37 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 40 "data/maps/Route2/scripts.pory"
Route2_MoveCamper_Movement_4:
# 41 "data/maps/Route2/scripts.pory"
	walk_up
# 41 "data/maps/Route2/scripts.pory"
	walk_up
# 42 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 72 "data/maps/Route2/scripts.pory"
Route2_Miniboss_Movement_0:
# 72 "data/maps/Route2/scripts.pory"
	face_player
	step_end

Route2_NPC_Camper_Text_0:
# 66 "data/maps/Route2/scripts.pory"
	.string "I hope you can let the Gym Leader\nknow soon, I'd like to go back home.$"

Route2_Miniboss_Text_0:
# 75 "data/maps/Route2/scripts.pory"
	.string "The Pokemon seems agitated!\nIt might attack if provoked!$"

Route2_Miniboss_Text_1:
# 77 "data/maps/Route2/scripts.pory"
	.string "Will you leave it alone?$"

Route2_Miniboss_Text_2:
# 79 "data/maps/Route2/scripts.pory"
	.string "Probably for the best.$"

Route2_Miniboss_Text_3:
# 81 "data/maps/Route2/scripts.pory"
	.string "The Pokemon attacked!$"

Route2_BlackBelt_Text_0:
# 102 "data/maps/Route2/scripts.pory"
	.string "I miss my girlfriend...$"

Route2_Camper_Warning_Text::
# 51 "data/maps/Route2/scripts.pory"
	.string "Hey there, I see you've just come from\nNewstem Town.\p"
	.string "I'm here to warn travellers about an\naggressive Pokemon just up ahead.\p"
	.string "I'm not sure why it's so upset,\nbut I would recommend avoiding it.\p"
	.string "I'd like to go and ask someone from\nSpringwood City to calm it down,\l"
	.string "but I'm busy making sure no-one\lgoes near it.\p"
	.string "Say, could you go and tell the Gym Leader\nin Springwood City about it?\p"
	.string "It would be really helpful, as it is\ncurrently blocking access to\l"
	.string "Quiet Grove, which is inconvenient.\p"
	.string "Best of luck!$"
