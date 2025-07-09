OchreVale_MapScripts::
	.byte 0


OchreVale_OldWoman::
# 4 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_OldWoman_Text_0, MSGBOX_NPC
	return


OchreVale_Scientist::
# 8 "data/maps/OchreVale/scripts.pory"
	goto_if_set FLAG_CLEARED_OCHRE_VALE_MINE, OchreVale_Scientist_1
# 11 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_Scientist_Text_1, MSGBOX_NPC
	return

OchreVale_Scientist_1:
# 9 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_Scientist_Text_0, MSGBOX_NPC
	return


OchreVale_Man::
# 16 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_Man_Text_0, MSGBOX_NPC
	return


OchreVale_Youngster::
# 20 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_Youngster_Text_0, MSGBOX_NPC
	return


OchreVale_MagmaGrunt::
# 24 "data/maps/OchreVale/scripts.pory"
	lockall
# 25 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_MagmaGrunt_Text_0, MSGBOX_NPC
# 26 "data/maps/OchreVale/scripts.pory"
	applymovement 15, OchreVale_MagmaGrunt_Movement_0
# 27 "data/maps/OchreVale/scripts.pory"
	waitmovement 0
# 28 "data/maps/OchreVale/scripts.pory"
	releaseall
	return


OchreVale_MagmaGruntF::
# 32 "data/maps/OchreVale/scripts.pory"
	lockall
# 33 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_MagmaGruntF_Text_0
# 34 "data/maps/OchreVale/scripts.pory"
	playse SE_PIN
# 35 "data/maps/OchreVale/scripts.pory"
	applymovement 13, OchreVale_MagmaGruntF_Movement_0
# 36 "data/maps/OchreVale/scripts.pory"
	waitmovement 0
# 37 "data/maps/OchreVale/scripts.pory"
	applymovement 13, Common_Movement_ExclamationMark
# 38 "data/maps/OchreVale/scripts.pory"
	waitmovement 0
# 39 "data/maps/OchreVale/scripts.pory"
	applymovement 13, Common_Movement_Delay48
# 40 "data/maps/OchreVale/scripts.pory"
	waitmovement 0
# 41 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_MagmaGruntF_Text_1
# 42 "data/maps/OchreVale/scripts.pory"
	applymovement 13, OchreVale_MagmaGruntF_Movement_1
# 43 "data/maps/OchreVale/scripts.pory"
	waitmovement 0
# 44 "data/maps/OchreVale/scripts.pory"
	releaseall
	return


OchreVale_Numel::
# 48 "data/maps/OchreVale/scripts.pory"
	lockall
# 49 "data/maps/OchreVale/scripts.pory"
	applymovement 14, OchreVale_MagmaGruntF_Movement_0
# 50 "data/maps/OchreVale/scripts.pory"
	waitmovement 0
# 51 "data/maps/OchreVale/scripts.pory"
	playmoncry SPECIES_NUMEL, CRY_MODE_NORMAL
# 52 "data/maps/OchreVale/scripts.pory"
	waitmoncry
# 53 "data/maps/OchreVale/scripts.pory"
	delay 48
# 54 "data/maps/OchreVale/scripts.pory"
	applymovement 14, OchreVale_Numel_Movement_0
# 55 "data/maps/OchreVale/scripts.pory"
	setseenmon SPECIES_NUMEL
# 56 "data/maps/OchreVale/scripts.pory"
	waitmovement 0
# 57 "data/maps/OchreVale/scripts.pory"
	releaseall
	return


# 26 "data/maps/OchreVale/scripts.pory"
OchreVale_MagmaGrunt_Movement_0:
# 26 "data/maps/OchreVale/scripts.pory"
	face_up
	step_end

# 35 "data/maps/OchreVale/scripts.pory"
OchreVale_MagmaGruntF_Movement_0:
# 35 "data/maps/OchreVale/scripts.pory"
	face_player
	step_end

# 42 "data/maps/OchreVale/scripts.pory"
OchreVale_MagmaGruntF_Movement_1:
# 42 "data/maps/OchreVale/scripts.pory"
	face_left
	step_end

# 54 "data/maps/OchreVale/scripts.pory"
OchreVale_Numel_Movement_0:
# 54 "data/maps/OchreVale/scripts.pory"
	face_right
	step_end

OchreVale_OldWoman_Text_0:
# 4 "data/maps/OchreVale/scripts.pory"
	.string "Ochre Vale is home to a large quarry,\n"
	.string "not that much digging is done there\l"
	.string "anymore.$"

OchreVale_Scientist_Text_0:
# 9 "data/maps/OchreVale/scripts.pory"
	.string "The entrance to the mine is just left of\n"
	.string "here, it might not be that easy to\l"
	.string "navigate inside but people still go\l"
	.string "there now that the main quarrying has\l"
	.string "stopped.$"

OchreVale_Scientist_Text_1:
# 11 "data/maps/OchreVale/scripts.pory"
	.string "We've been having a bit of trouble with\n"
	.string "Team Magma in Ochre Vale Mine recently,\l"
	.string "I'm not sure why they've decided to do\l"
	.string "this.$"

OchreVale_Man_Text_0:
# 16 "data/maps/OchreVale/scripts.pory"
	.string "While I'm glad the noise from the mining\n"
	.string "has ceased, I do miss the economic\l"
	.string "growth that came with it.$"

OchreVale_Youngster_Text_0:
# 20 "data/maps/OchreVale/scripts.pory"
	.string "The dirt down here is really brown!$"

OchreVale_MagmaGrunt_Text_0:
# 25 "data/maps/OchreVale/scripts.pory"
	.string "Huh? I'm not doing anything suspicious!\n"
	.string "Shut up!$"

OchreVale_MagmaGruntF_Text_0:
# 33 "data/maps/OchreVale/scripts.pory"
	.string "Awww! Who's a good little Numel?$"

OchreVale_MagmaGruntF_Text_1:
# 41 "data/maps/OchreVale/scripts.pory"
	.string "Do you mind?\nI'm playing with my Numel!\pWhat?\pI'm not causing any trouble!\nCan't a girl hang out with her Numel\lin peace?$"
