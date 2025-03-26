SpringwoodCity_Gym_MapScripts::
# 2 "data/maps/SpringwoodCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SpringwoodCity_Gym_Reset
	.byte 0


SpringwoodCity_Gym_Reset::
# 7 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 3, 15, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 8 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 9 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 10, 7, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 11 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 6, 5, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 12 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 7, 5, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
# 13 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 6, 6, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 14 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 7, 6, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
	return


SpringwoodCity_Gym_PressSwitch1::
# 18 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq SpringwoodCity_Gym_PressSwitch1_1
	return

SpringwoodCity_Gym_PressSwitch1_1:
# 19 "data/maps/SpringwoodCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 20 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setvar VAR_TEMP_1, TRUE
# 21 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 3, 15, METATILE_MauvilleGym_PressedSwitch, FALSE
# 22 "data/maps/SpringwoodCity_Gym/scripts.pory"
	call SpringwoodCity_Gym_CheckState
	return


SpringwoodCity_Gym_PressSwitch2::
# 27 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq SpringwoodCity_Gym_PressSwitch2_1
	return

SpringwoodCity_Gym_PressSwitch2_1:
# 28 "data/maps/SpringwoodCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 29 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setvar VAR_TEMP_2, TRUE
# 30 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_PressedSwitch, FALSE
# 31 "data/maps/SpringwoodCity_Gym/scripts.pory"
	call SpringwoodCity_Gym_CheckState
	return


SpringwoodCity_Gym_PressSwitch3::
# 36 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq SpringwoodCity_Gym_PressSwitch3_1
	return

SpringwoodCity_Gym_PressSwitch3_1:
# 37 "data/maps/SpringwoodCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 38 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setvar VAR_TEMP_3, TRUE
# 39 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 10, 7, METATILE_MauvilleGym_PressedSwitch, FALSE
# 40 "data/maps/SpringwoodCity_Gym/scripts.pory"
	call SpringwoodCity_Gym_CheckState
	return


SpringwoodCity_Gym_CheckState::
# 45 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_ne SpringwoodCity_Gym_CheckState_4
SpringwoodCity_Gym_CheckState_1:
# 51 "data/maps/SpringwoodCity_Gym/scripts.pory"
	special DrawWholeMapView
	return

SpringwoodCity_Gym_CheckState_2:
# 46 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 6, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 47 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 7, 5, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 48 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 6, 6, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 49 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 7, 6, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
	goto SpringwoodCity_Gym_CheckState_1

SpringwoodCity_Gym_CheckState_3:
# 45 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_ne SpringwoodCity_Gym_CheckState_2
	goto SpringwoodCity_Gym_CheckState_1

SpringwoodCity_Gym_CheckState_4:
# 45 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_ne SpringwoodCity_Gym_CheckState_3
	goto SpringwoodCity_Gym_CheckState_1


Springwood_Gym_Guide::
# 55 "data/maps/SpringwoodCity_Gym/scripts.pory"
	lockall
# 56 "data/maps/SpringwoodCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_1, Springwood_Gym_Guide_2
Springwood_Gym_Guide_1:
# 59 "data/maps/SpringwoodCity_Gym/scripts.pory"
	msgbox Springwood_Gym_Guide_Text, MSGBOX_NPC
# 60 "data/maps/SpringwoodCity_Gym/scripts.pory"
	releaseall
	return

Springwood_Gym_Guide_2:
# 57 "data/maps/SpringwoodCity_Gym/scripts.pory"
	msgbox Springwood_Gym_Guide_Text_Intro
	goto Springwood_Gym_Guide_1


SpringwoodCity_Gym_Martin::
# 75 "data/maps/SpringwoodCity_Gym/scripts.pory"
	lockall
# 76 "data/maps/SpringwoodCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GYM_LEADER_MARTIN, SpringwoodCity_Gym_Martin_Text_Intro, SpringwoodCity_Gym_Martin_Text_Defeated, SpringwoodCity_Gym_Martin_Defeated, NO_MUSIC
# 83 "data/maps/SpringwoodCity_Gym/scripts.pory"
	msgbox SpringwoodCity_Gym_Martin_PostBattle, MSGBOX_NPC
# 84 "data/maps/SpringwoodCity_Gym/scripts.pory"
	releaseall
	return


SpringwoodCity_Gym_Martin_Defeated::
# 88 "data/maps/SpringwoodCity_Gym/scripts.pory"
	message SpringwoodCity_Gym_Martin_Defeated_Text_0
# 89 "data/maps/SpringwoodCity_Gym/scripts.pory"
	waitmessage
# 90 "data/maps/SpringwoodCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 91 "data/maps/SpringwoodCity_Gym/scripts.pory"
	msgbox SpringwoodCity_Gym_Martin_Badge, MSGBOX_DEFAULT
# 92 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 93 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 94 "data/maps/SpringwoodCity_Gym/scripts.pory"
	releaseall
	return


SpringwoodCity_Gym_Martin_Defeated_Text_0:
# 88 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Recieved the Springwood Badge!$"

Springwood_Gym_Guide_Text_Intro::
# 63 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "A new face!\nI'm the guide here at Springwood Gym.\p"
	.string "My job is to make sure the challengers\nknow what it is they are up against.\p"
	.string "Each Gym is assigned a guide to help\nout newcomers to the Gym Challenge.$"

Springwood_Gym_Guide_Text::
# 69 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Here at the Springwood Gym,\nGym Leader Martin likes to use Pokemon\lthat he found nearby.\p"
	.string "He believes that after a bit of care,\nany Pokemon can become strong!$"

SpringwoodCity_Gym_Martin_Text_Intro::
# 97 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Ah, you must be {PLAYER}.\nI heard that you helped with the rowdy\lPokemon on Route 2.\p"
	.string "I've been looking forward to meeting you,\nI hope you found some of the Pokemon\lnearby interesting like I have.\p"
	.string "I've trained my Pokemon as much as\nI could without going beyond what's\lexpected of the first Gym Leader.\p"
	.string "I hope you don't disappoint,\nI'm excited to see what you've found.$"

SpringwoodCity_Gym_Martin_Text_Defeated::
# 104 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Outstanding.\p"
	.string "Even after all my training you still\nfound a way to best me at my own game.\p"
	.string "I wouldn't have it any other way,\nI hope you continue to make good progress\ltogether with your Pokemon.$"

SpringwoodCity_Gym_Martin_PostBattle::
# 110 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Grass and Bug types, as well as\nPokemon that have an ability related to\lcutting are able to cut down trees.\p"
	.string "Make sure to eep an eye out for any\ncool Pokemon for our next battle!\p"
	.string "I'm excited to see just how much\nstronger your team can get!$"

SpringwoodCity_Gym_Martin_Badge::
# 116 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Having the Springwood Badge means\nthat your Pokemon are able to cut down\lsmall trees that may block your path.\p"
	.string "Grass and Bug types, as well as any\nPokemon that have an ability related to\lcutting are able to help you.$"
