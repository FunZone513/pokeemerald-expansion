Route1_MapScripts::
	.byte 0


Route1_Girl::
# 4 "data/maps/Route1/scripts.pory"
	lockall
# 5 "data/maps/Route1/scripts.pory"
	msgbox Route1_Girl_Text_0, MSGBOX_NPC
# 6 "data/maps/Route1/scripts.pory"
	releaseall
	return


Route1_BugCatcher::
# 10 "data/maps/Route1/scripts.pory"
	lockall
# 11 "data/maps/Route1/scripts.pory"
	msgbox Route1_BugCatcher_Text_0, MSGBOX_NPC
# 12 "data/maps/Route1/scripts.pory"
	releaseall
	return


Route1_LittleBoy::
# 16 "data/maps/Route1/scripts.pory"
	lockall
# 17 "data/maps/Route1/scripts.pory"
	msgbox Route1_LittleBoy_Text_0, MSGBOX_NPC
# 18 "data/maps/Route1/scripts.pory"
	releaseall
	return


Route1_Girl_Text_0:
# 5 "data/maps/Route1/scripts.pory"
	.string "I really want to get that item up there,\n"
	.string "but this ledge is blocking the way.$"

Route1_BugCatcher_Text_0:
# 11 "data/maps/Route1/scripts.pory"
	.string "I like wandering around early routes,\n"
	.string "they've always got a bunch of bug\l"
	.string "types!$"

Route1_LittleBoy_Text_0:
# 17 "data/maps/Route1/scripts.pory"
	.string "My Dad used to be a Pokemon Trainer,\n"
	.string "and he always told me that people\l"
	.string "sometimes lose or hide items around the\l"
	.string "place.$"
