NewstemTown_Indoor1_MapScripts::
	.byte 0


NewstemTown_Indoor1_Woman::
# 4 "data/maps/NewstemTown_Indoor1/scripts.pory"
	lockall
# 5 "data/maps/NewstemTown_Indoor1/scripts.pory"
	faceplayer
# 6 "data/maps/NewstemTown_Indoor1/scripts.pory"
	msgbox NewstemTown_Indoor1_Woman_Text, MSGBOX_NPC
# 7 "data/maps/NewstemTown_Indoor1/scripts.pory"
	releaseall
	return


NewstemTown_Indoor1_Woman_Text::
# 10 "data/maps/NewstemTown_Indoor1/scripts.pory"
	.string "My son really likes to swim in the ocean,\n"
	.string "so I told him an old story about it.\p"
	.string "The story is about ancient pokemon\n"
	.string "that live in the depths of the seas.\p"
	.string "I thought he would enjoy it, but it\n"
	.string "seems like it scared him instead.$"
