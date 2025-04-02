Route5_MapScripts::
# 2 "data/maps/Route5/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route5_CheckBoulderBlock
	.byte 0


Route5_CheckBoulderBlock::
# 6 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Route5_CheckBoulderBlock_1
# 19 "data/maps/Route5/scripts.pory"
	setflag FLAG_TEMP_10
# 20 "data/maps/Route5/scripts.pory"
	setflag FLAG_TEMP_11
# 21 "data/maps/Route5/scripts.pory"
	setflag FLAG_TEMP_12
	return

Route5_CheckBoulderBlock_1:
# 7 "data/maps/Route5/scripts.pory"
	setmetatile 33, 17, METATILE_General_Grass, FALSE
# 8 "data/maps/Route5/scripts.pory"
	setmetatile 34, 17, METATILE_General_Grass, FALSE
# 9 "data/maps/Route5/scripts.pory"
	setmetatile 33, 18, METATILE_General_Grass, FALSE
# 10 "data/maps/Route5/scripts.pory"
	setmetatile 34, 18, METATILE_General_Grass, FALSE
# 11 "data/maps/Route5/scripts.pory"
	setmetatile 35, 18, METATILE_General_Grass, FALSE
# 12 "data/maps/Route5/scripts.pory"
	setmetatile 35, 16, METATILE_General_Grass, FALSE
# 13 "data/maps/Route5/scripts.pory"
	setmetatile 37, 17, METATILE_General_Grass, FALSE
# 14 "data/maps/Route5/scripts.pory"
	setmetatile 38, 17, METATILE_General_Grass, FALSE
# 15 "data/maps/Route5/scripts.pory"
	setmetatile 37, 18, METATILE_General_Grass, FALSE
# 16 "data/maps/Route5/scripts.pory"
	setmetatile 38, 18, METATILE_General_Grass, FALSE
# 17 "data/maps/Route5/scripts.pory"
	setmetatile 39, 17, METATILE_General_Grass, FALSE
	return


Route5_BoulderGuy::
# 26 "data/maps/Route5/scripts.pory"
	lockall
# 27 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Route5_BoulderGuy_2
# 30 "data/maps/Route5/scripts.pory"
	msgbox Route5_BoulderGuy_Text_1, MSGBOX_NPC
Route5_BoulderGuy_1:
# 32 "data/maps/Route5/scripts.pory"
	releaseall
	return

Route5_BoulderGuy_2:
# 28 "data/maps/Route5/scripts.pory"
	msgbox Route5_BoulderGuy_Text_0, MSGBOX_NPC
	goto Route5_BoulderGuy_1


Route5_Picnicker::
# 36 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_ROUTE5_PICNICKER, Route5_Picnicker_Text_0, Route5_Picnicker_Text_1
# 41 "data/maps/Route5/scripts.pory"
	msgbox Route5_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route5_BlackBelt::
# 46 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_ROUTE5_BLACKBELT, Route5_BlackBelt_Text_0, Route5_BlackBelt_Text_1
# 51 "data/maps/Route5/scripts.pory"
	msgbox Route5_BlackBelt_Text_2, MSGBOX_AUTOCLOSE
	end


Route5_BoulderGuy_Text_0:
# 28 "data/maps/Route5/scripts.pory"
	.string "We've cleared it out the major rockslide\n"
	.string "as best as we can, but the rocks are\l"
	.string "pretty unstable here so they still fall\l"
	.string "onto the path occasionally.$"

Route5_BoulderGuy_Text_1:
# 30 "data/maps/Route5/scripts.pory"
	.string "Watch your step! There was a major\n"
	.string "rockslide earlier. We're trying to get it\l"
	.string "cleared out as soon as possible.$"

Route5_Picnicker_Text_0:
# 38 "data/maps/Route5/scripts.pory"
	.string "Where you find rocky terrain, you'll find\n"
	.string "me!$"

Route5_Picnicker_Text_1:
# 39 "data/maps/Route5/scripts.pory"
	.string "Camping on a rocky outcropping is\n"
	.string "always fun.$"

Route5_Picnicker_Text_2:
# 41 "data/maps/Route5/scripts.pory"
	.string "The terrain starts to get a little more\n"
	.string "hostile around here.$"

Route5_BlackBelt_Text_0:
# 48 "data/maps/Route5/scripts.pory"
	.string "Punching rocks makes my fists HARD.$"

Route5_BlackBelt_Text_1:
# 49 "data/maps/Route5/scripts.pory"
	.string "Punching rocks makes my bones HURT.$"

Route5_BlackBelt_Text_2:
# 51 "data/maps/Route5/scripts.pory"
	.string "The pain in my fists distracts me from\n"
	.string "the pain of my exstance.$"
