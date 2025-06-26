Route9_House_MapScripts::
	.byte 0


Route9_House_Camper::
# 4 "data/maps/Route9_House/scripts.pory"
	msgbox Route9_House_Camper_Text_0, MSGBOX_NPC
	return


Route9_House_Picnicker::
# 8 "data/maps/Route9_House/scripts.pory"
	msgbox Route9_House_Picnicker_Text_0, MSGBOX_NPC
	return


Route9_House_Kingler::
# 12 "data/maps/Route9_House/scripts.pory"
	playmoncry SPECIES_KINGLER, CRY_MODE_NORMAL
# 13 "data/maps/Route9_House/scripts.pory"
	setseenmon SPECIES_KINGLER
# 14 "data/maps/Route9_House/scripts.pory"
	msgbox Route9_House_Kingler_Text_0, MSGBOX_NPC
# 15 "data/maps/Route9_House/scripts.pory"
	waitmoncry
	return


Route9_House_Camper_Text_0:
# 4 "data/maps/Route9_House/scripts.pory"
	.string "The beach is really nice here, make sure\n"
	.string "you don't leave any rubbish when you\l"
	.string "leave otherwise I WILL find you.$"

Route9_House_Picnicker_Text_0:
# 8 "data/maps/Route9_House/scripts.pory"
	.string "I've heard that there is a secret\n"
	.string "alcove near here, but since I can't swim\l"
	.string "I've never found it.$"

Route9_House_Kingler_Text_0:
# 14 "data/maps/Route9_House/scripts.pory"
	.string "!$"
