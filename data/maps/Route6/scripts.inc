Route6_MapScripts::
	.byte 0


Route6_Camper::
# 4 "data/maps/Route6/scripts.pory"
	msgbox Route6_Camper_Text_0, MSGBOX_NPC
	return


Route6_Lass::
# 8 "data/maps/Route6/scripts.pory"
	msgbox Route6_Lass_Text_0, MSGBOX_NPC
	return


Route6_Hiker::
# 12 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_HIKER, Route6_Hiker_Text_0, Route6_Hiker_Text_1
# 17 "data/maps/Route6/scripts.pory"
	msgbox Route6_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_Camper_Text_0:
# 4 "data/maps/Route6/scripts.pory"
	.string "We found this guy wandering around on\n"
	.string "the path. It's dangerous for him to\l"
	.string "leave the route area so we're keeping\l"
	.string "an eye on him.$"

Route6_Lass_Text_0:
# 8 "data/maps/Route6/scripts.pory"
	.string "I don't want to tell him that the\n"
	.string "Pancham keeps coming out because I\l"
	.string "give him food sometimes...$"

Route6_Hiker_Text_0:
# 14 "data/maps/Route6/scripts.pory"
	.string "Are you also out here for a hike?$"

Route6_Hiker_Text_1:
# 15 "data/maps/Route6/scripts.pory"
	.string "Well that could've gone better.$"

Route6_Hiker_Text_2:
# 17 "data/maps/Route6/scripts.pory"
	.string "Dyecress Town is just up ahead, the air\n"
	.string "there is really nice.$"
