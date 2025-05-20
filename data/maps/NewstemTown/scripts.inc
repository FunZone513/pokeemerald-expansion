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
	msgbox NewstemTown_Boy_Text_0, MSGBOX_NPC
	return


NewstemTown_Athlete::
# 35 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Athlete_Text_0, MSGBOX_NPC
	return


NewstemTown_Boy2::
# 39 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Boy2_Text_0, MSGBOX_NPC
	return


NewstemTown_Rattata::
# 43 "data/maps/NewstemTown/scripts.pory"
	playmoncry SPECIES_RATTATA, CRY_MODE_NORMAL
# 44 "data/maps/NewstemTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, NewstemTown_Rattata_2
NewstemTown_Rattata_1:
# 45 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Rattata_Text_0, MSGBOX_NPC
# 46 "data/maps/NewstemTown/scripts.pory"
	waitmoncry
	return

NewstemTown_Rattata_2:
# 44 "data/maps/NewstemTown/scripts.pory"
	setseenmon SPECIES_RATTATA
	goto NewstemTown_Rattata_1


NewstemTown_Hoppip::
# 50 "data/maps/NewstemTown/scripts.pory"
	playmoncry SPECIES_HOPPIP, CRY_MODE_NORMAL
# 51 "data/maps/NewstemTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, NewstemTown_Hoppip_2
NewstemTown_Hoppip_1:
# 52 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Hoppip_Text_0, MSGBOX_NPC
# 53 "data/maps/NewstemTown/scripts.pory"
	waitmoncry
	return

NewstemTown_Hoppip_2:
# 51 "data/maps/NewstemTown/scripts.pory"
	setseenmon SPECIES_HOPPIP
	goto NewstemTown_Hoppip_1


NewstemTown_Krabby::
# 57 "data/maps/NewstemTown/scripts.pory"
	playmoncry SPECIES_SHELLOS, CRY_MODE_NORMAL
# 58 "data/maps/NewstemTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, NewstemTown_Krabby_2
NewstemTown_Krabby_1:
# 59 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Krabby_Text_0, MSGBOX_NPC
# 60 "data/maps/NewstemTown/scripts.pory"
	waitmoncry
	return

NewstemTown_Krabby_2:
# 58 "data/maps/NewstemTown/scripts.pory"
	setseenmon SPECIES_SHELLOS
	goto NewstemTown_Krabby_1


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
# 31 "data/maps/NewstemTown/scripts.pory"
	.string "I want to go in for a swim, but Mum said\n"
	.string "that there's something in the water\l"
	.string "that could take me...$"

NewstemTown_Athlete_Text_0:
# 35 "data/maps/NewstemTown/scripts.pory"
	.string "Nice Running Shoes! They look brand\n"
	.string "new!$"

NewstemTown_Boy2_Text_0:
# 39 "data/maps/NewstemTown/scripts.pory"
	.string "I was told to go out and get some sun,\n"
	.string "but I just wanna play on my gameboy.$"

NewstemTown_Rattata_Text_0:
# 45 "data/maps/NewstemTown/scripts.pory"
	.string "!$"

NewstemTown_Hoppip_Text_0:
# 52 "data/maps/NewstemTown/scripts.pory"
	.string ":)$"

NewstemTown_Krabby_Text_0:
# 59 "data/maps/NewstemTown/scripts.pory"
	.string "?$"
