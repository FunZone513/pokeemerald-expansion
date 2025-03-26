NewstemTown_MapScripts::
	.byte 0


NewstemTown_Sign_Town::
# 4 "data/maps/NewstemTown/scripts.pory"
	lockall
# 5 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Sign_Town_Text_0, MSGBOX_SIGN
# 6 "data/maps/NewstemTown/scripts.pory"
	releaseall
	return


NewstemTown_Sign_PlayersHouse::
# 10 "data/maps/NewstemTown/scripts.pory"
	lockall
# 11 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Sign_PlayersHouse_Text_0, MSGBOX_SIGN
# 12 "data/maps/NewstemTown/scripts.pory"
	releaseall
	return


NewstemTown_Sign_ProfLab::
# 15 "data/maps/NewstemTown/scripts.pory"
	lockall
# 16 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Sign_ProfLab_Text_0, MSGBOX_SIGN
# 17 "data/maps/NewstemTown/scripts.pory"
	releaseall
	return


NewstemTown_CheckStarter::
# 21 "data/maps/NewstemTown/scripts.pory"
	lockall
# 22 "data/maps/NewstemTown/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
	goto_if_lt NewstemTown_CheckStarter_2
NewstemTown_CheckStarter_1:
# 27 "data/maps/NewstemTown/scripts.pory"
	releaseall
	return

NewstemTown_CheckStarter_2:
# 23 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_CheckStarter_Text_0
# 24 "data/maps/NewstemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewstemTown_CheckStarter_Movement_0
# 25 "data/maps/NewstemTown/scripts.pory"
	waitmovement 0
	goto NewstemTown_CheckStarter_1


NewstemTown_Boy::
# 31 "data/maps/NewstemTown/scripts.pory"
	lockall
# 32 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Boy_Text_0, MSGBOX_NPC
# 33 "data/maps/NewstemTown/scripts.pory"
	releaseall
	return


NewstemTown_Athlete::
# 37 "data/maps/NewstemTown/scripts.pory"
	lockall
# 38 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Athlete_Text_0, MSGBOX_NPC
# 39 "data/maps/NewstemTown/scripts.pory"
	releaseall
	return


NewstemTown_Boy2::
# 43 "data/maps/NewstemTown/scripts.pory"
	lockall
# 44 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Boy2_Text_0, MSGBOX_NPC
# 45 "data/maps/NewstemTown/scripts.pory"
	releaseall
	return


# 24 "data/maps/NewstemTown/scripts.pory"
NewstemTown_CheckStarter_Movement_0:
# 24 "data/maps/NewstemTown/scripts.pory"
	walk_down
# 24 "data/maps/NewstemTown/scripts.pory"
	walk_down
	step_end

NewstemTown_Sign_Town_Text_0:
# 5 "data/maps/NewstemTown/scripts.pory"
	.string "Newstem Town\nA tranquil town by the sea$"

NewstemTown_Sign_PlayersHouse_Text_0:
# 11 "data/maps/NewstemTown/scripts.pory"
	.string "Your House$"

NewstemTown_Sign_ProfLab_Text_0:
# 16 "data/maps/NewstemTown/scripts.pory"
	.string "Professor's Laboratory$"

NewstemTown_CheckStarter_Text_0:
# 23 "data/maps/NewstemTown/scripts.pory"
	.string "You haven't picked up a Pokemon yet!$"

NewstemTown_Boy_Text_0:
# 32 "data/maps/NewstemTown/scripts.pory"
	.string "I want to go in for a swim, but Mum said\n"
	.string "that there's something in the water\l"
	.string "that could take me...$"

NewstemTown_Athlete_Text_0:
# 38 "data/maps/NewstemTown/scripts.pory"
	.string "Nice Running Shoes! They look brand\n"
	.string "new!$"

NewstemTown_Boy2_Text_0:
# 44 "data/maps/NewstemTown/scripts.pory"
	.string "I was told to go out and get some sun,\n"
	.string "but I just wanna play on my gameboy.$"
