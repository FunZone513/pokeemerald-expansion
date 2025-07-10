Route1_MapScripts::
	.byte 0


Route1_Girl::
# 4 "data/maps/Route1/scripts.pory"
	msgbox Route1_Girl_Text_0, MSGBOX_NPC
	return


Route1_BugCatcher::
# 8 "data/maps/Route1/scripts.pory"
	msgbox Route1_BugCatcher_Text_0, MSGBOX_NPC
	return


Route1_LittleBoy::
# 12 "data/maps/Route1/scripts.pory"
	msgbox Route1_LittleBoy_Text_0, MSGBOX_NPC
	return


Route1_Girl_Text_0:
# 4 "data/maps/Route1/scripts.pory"
	.string "I really want to get that item up there,\n"
	.string "but this ledge is blocking the way.$"

Route1_BugCatcher_Text_0:
# 8 "data/maps/Route1/scripts.pory"
	.string "I like wandering around early routes,\n"
	.string "they've always got a bunch of bug\l"
	.string "types!$"

Route1_LittleBoy_Text_0:
# 12 "data/maps/Route1/scripts.pory"
	.string "My Dad used to be a Pokemon Trainer,\n"
	.string "and he always told me that people\l"
	.string "sometimes lose or hide items around the\l"
	.string "place.$"
