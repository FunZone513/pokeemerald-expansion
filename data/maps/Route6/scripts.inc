Route6_MapScripts::
# 2 "data/maps/Route6/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route6_OnLoad
	.byte 0


Route6_OnLoad::
# 6 "data/maps/Route6/scripts.pory"
	goto_if_unset FLAG_CLEARED_ROUTE6, Route6_OnLoad_1
	return

Route6_OnLoad_1:
# 7 "data/maps/Route6/scripts.pory"
	setflag FLAG_TEMP_A
	return


Route6_Camper::
# 12 "data/maps/Route6/scripts.pory"
	msgbox Route6_Camper_Text_0, MSGBOX_NPC
	return


Route6_Lass::
# 16 "data/maps/Route6/scripts.pory"
	msgbox Route6_Lass_Text_0, MSGBOX_NPC
	return


Route6_Hiker::
# 20 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_HIKER, Route6_Hiker_Text_0, Route6_Hiker_Text_1
# 25 "data/maps/Route6/scripts.pory"
	msgbox Route6_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_Picnicker::
# 30 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_PICNICKER, Route6_Picnicker_Text_0, Route6_Picnicker_Text_0
# 35 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_0, MSGBOX_AUTOCLOSE
	end


Route6_BugCatcher::
# 40 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_BUG_CATCHER, Route6_Picnicker_Text_0, Route6_Picnicker_Text_0
# 45 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_0, MSGBOX_AUTOCLOSE
	end


Route6_Psychic::
# 50 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_PSYCHIC, Route6_Picnicker_Text_0, Route6_Picnicker_Text_0
# 55 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_0, MSGBOX_AUTOCLOSE
	end


Route6_BugManiac::
# 60 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_BUG_MANIAC, Route6_Picnicker_Text_0, Route6_Picnicker_Text_0
# 65 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_0, MSGBOX_AUTOCLOSE
	end


Route6_NinjaBoy::
# 70 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_NINJA_BOY, Route6_Picnicker_Text_0, Route6_Picnicker_Text_0
# 75 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_0, MSGBOX_AUTOCLOSE
	end


Route6_BirdKeeper::
# 80 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_BIRD_KEEPER, Route6_Picnicker_Text_0, Route6_Picnicker_Text_0
# 85 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_0, MSGBOX_AUTOCLOSE
	end


Route6_Beauty::
# 90 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_BEAUTY, Route6_Picnicker_Text_0, Route6_Picnicker_Text_0
# 95 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_0, MSGBOX_AUTOCLOSE
	end


Route6_Camper_Text_0:
# 12 "data/maps/Route6/scripts.pory"
	.string "We found this guy wandering around on\n"
	.string "the path. It's dangerous for him to\l"
	.string "leave the route area so we're keeping\l"
	.string "an eye on him.$"

Route6_Lass_Text_0:
# 16 "data/maps/Route6/scripts.pory"
	.string "I don't want to tell him that the\n"
	.string "Pancham keeps coming out because I\l"
	.string "give him food sometimes...$"

Route6_Hiker_Text_0:
# 22 "data/maps/Route6/scripts.pory"
	.string "Are you also out here for a hike?$"

Route6_Hiker_Text_1:
# 23 "data/maps/Route6/scripts.pory"
	.string "Well that could've gone better.$"

Route6_Hiker_Text_2:
# 25 "data/maps/Route6/scripts.pory"
	.string "Dyecress Town is just up ahead, the air\n"
	.string "there is really nice.$"

Route6_Picnicker_Text_0:
# 32 "data/maps/Route6/scripts.pory"
	.string "$"
