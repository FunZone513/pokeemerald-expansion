NewstemTown_Indoor2_MapScripts::
	.byte 0


NewstemTown_Indoor2_Woman::
# 4 "data/maps/NewstemTown_Indoor2/scripts.pory"
	lockall
# 5 "data/maps/NewstemTown_Indoor2/scripts.pory"
	msgbox NewstemTown_Indoor2_Woman_Text_0
# 6 "data/maps/NewstemTown_Indoor2/scripts.pory"
	releaseall
	return


NewstemTown_Indoor2_Man::
# 10 "data/maps/NewstemTown_Indoor2/scripts.pory"
	lockall
# 11 "data/maps/NewstemTown_Indoor2/scripts.pory"
	faceplayer
# 12 "data/maps/NewstemTown_Indoor2/scripts.pory"
	msgbox NewstemTown_Indoor2_Man_Text_0, MSGBOX_YESNO
# 13 "data/maps/NewstemTown_Indoor2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewstemTown_Indoor2_Man_2
# 16 "data/maps/NewstemTown_Indoor2/scripts.pory"
	msgbox NewstemTown_Indoor2_Man_Text_2, MSGBOX_NPC
NewstemTown_Indoor2_Man_1:
# 18 "data/maps/NewstemTown_Indoor2/scripts.pory"
	releaseall
	return

NewstemTown_Indoor2_Man_2:
# 14 "data/maps/NewstemTown_Indoor2/scripts.pory"
	msgbox NewstemTown_Indoor2_Man_Text_1, MSGBOX_NPC
	goto NewstemTown_Indoor2_Man_1


NewstemTown_Indoor2_Woman_Text_0:
# 5 "data/maps/NewstemTown_Indoor2/scripts.pory"
	.string "Can't you see I'm busy?$"

NewstemTown_Indoor2_Man_Text_0:
# 12 "data/maps/NewstemTown_Indoor2/scripts.pory"
	.string "Are you admiring my gloriously\nshiny head?$"

NewstemTown_Indoor2_Man_Text_1:
# 14 "data/maps/NewstemTown_Indoor2/scripts.pory"
	.string "Excellent, you know a good thing when\n"
	.string "you see it.$"

NewstemTown_Indoor2_Man_Text_2:
# 16 "data/maps/NewstemTown_Indoor2/scripts.pory"
	.string "Why must you lie not only to me but also\n"
	.string "yourself?$"
