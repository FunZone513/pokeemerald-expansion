OchreVale_PokeCentre_MapScripts::
	.byte 0


OchreVale_PokeCentre_Hiker::
# 4 "data/maps/OchreVale_PokeCentre/scripts.pory"
	lockall
# 5 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_Hiker_Text_0, MSGBOX_NPC
# 6 "data/maps/OchreVale_PokeCentre/scripts.pory"
	releaseall
	return


OchreVale_PokeCentre_Lass::
# 10 "data/maps/OchreVale_PokeCentre/scripts.pory"
	lockall
# 11 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_Lass_Text_0, MSGBOX_NPC
# 12 "data/maps/OchreVale_PokeCentre/scripts.pory"
	applymovement 4, OchreVale_PokeCentre_Lass_Movement_0
# 13 "data/maps/OchreVale_PokeCentre/scripts.pory"
	waitmovement 0
# 14 "data/maps/OchreVale_PokeCentre/scripts.pory"
	releaseall
	return


OchreVale_PokeCentre_Scientist::
# 18 "data/maps/OchreVale_PokeCentre/scripts.pory"
	lockall
# 19 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_Scientist_Text_0, MSGBOX_NPC
# 20 "data/maps/OchreVale_PokeCentre/scripts.pory"
	releaseall
	return


OchreVale_PokeCentre_MagmaGrunt::
# 24 "data/maps/OchreVale_PokeCentre/scripts.pory"
	lockall
# 25 "data/maps/OchreVale_PokeCentre/scripts.pory"
	goto_if_set FLAG_TEMP_1, OchreVale_PokeCentre_MagmaGrunt_2
# 35 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_MagmaGrunt_Text_3, MSGBOX_NPC
# 36 "data/maps/OchreVale_PokeCentre/scripts.pory"
	setflag FLAG_TEMP_1
# 38 "data/maps/OchreVale_PokeCentre/scripts.pory"
	releaseall
	return

OchreVale_PokeCentre_MagmaGrunt_2:
# 26 "data/maps/OchreVale_PokeCentre/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_POKECENTRE_MAGMA_GRUNT, OchreVale_PokeCentre_MagmaGrunt_Text_0, OchreVale_PokeCentre_MagmaGrunt_Text_1
# 31 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_MagmaGrunt_Text_2, MSGBOX_AUTOCLOSE
	end


# 12 "data/maps/OchreVale_PokeCentre/scripts.pory"
OchreVale_PokeCentre_Lass_Movement_0:
# 12 "data/maps/OchreVale_PokeCentre/scripts.pory"
	face_right
	step_end

OchreVale_PokeCentre_Hiker_Text_0:
# 5 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Ochre Vale is a great place to stock up\n"
	.string "on supplies before I continue on to\l"
	.string "Springwood City.$"

OchreVale_PokeCentre_Lass_Text_0:
# 11 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "My sister and I grew up around here,\n"
	.string "we're inseparable!$"

OchreVale_PokeCentre_Scientist_Text_0:
# 19 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "There's only so much dirt you can study\n"
	.string "before it becomes tedious...$"

OchreVale_PokeCentre_MagmaGrunt_Text_0:
# 28 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "THAT'S IT! YOU ASKED FOR IT!$"

OchreVale_PokeCentre_MagmaGrunt_Text_1:
# 29 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Well at least it'll be easy to heal my\n"
	.string "Pokemon...$"

OchreVale_PokeCentre_MagmaGrunt_Text_2:
# 31 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "I was waiting to see when the other\n"
	.string "guys needed my help, but I guess I'll\l"
	.string "have to wait a bit longer now...$"

OchreVale_PokeCentre_MagmaGrunt_Text_3:
# 35 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Don't bother me!\nCan't you see I'm busy!?$"
