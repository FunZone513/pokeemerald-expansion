Route5_MapScripts::
# 2 "data/maps/Route5/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route5_CheckBoulderBlock
	.byte 0


Route5_CheckBoulderBlock::
# 6 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Route5_CheckBoulderBlock_1
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
	return


Route5_BoulderGuy::
# 17 "data/maps/Route5/scripts.pory"
	lockall
# 18 "data/maps/Route5/scripts.pory"
	msgbox Route5_BoulderGuy_Text_0, MSGBOX_NPC
# 19 "data/maps/Route5/scripts.pory"
	releaseall
	return


Route5_Picnicker::
# 23 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_ROUTE5_PICNICKER, Route5_Picnicker_Text_0, Route5_Picnicker_Text_1
# 28 "data/maps/Route5/scripts.pory"
	msgbox Route5_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route5_BlackBelt::
# 33 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_ROUTE5_BLACKBELT, Route5_BlackBelt_Text_0, Route5_BlackBelt_Text_1
# 38 "data/maps/Route5/scripts.pory"
	msgbox Route5_BlackBelt_Text_2, MSGBOX_AUTOCLOSE
	end


Route5_BoulderGuy_Text_0:
# 18 "data/maps/Route5/scripts.pory"
	.string "Watch your step, there was a rockslide\n"
	.string "earlier. We're trying to clear it out as\l"
	.string "soon as possible.$"

Route5_Picnicker_Text_0:
# 25 "data/maps/Route5/scripts.pory"
	.string "Where you find rockey terrain, you'll\n"
	.string "find me!$"

Route5_Picnicker_Text_1:
# 26 "data/maps/Route5/scripts.pory"
	.string "Camping on a rocky outcropping is\n"
	.string "always fun.$"

Route5_Picnicker_Text_2:
# 28 "data/maps/Route5/scripts.pory"
	.string "The terrain starts to get a little more\n"
	.string "hostile around here.$"

Route5_BlackBelt_Text_0:
# 35 "data/maps/Route5/scripts.pory"
	.string "Punching rocks makes my fists HARD.$"

Route5_BlackBelt_Text_1:
# 36 "data/maps/Route5/scripts.pory"
	.string "Punching rocks makes my bones HURT.$"

Route5_BlackBelt_Text_2:
# 38 "data/maps/Route5/scripts.pory"
	.string "The pain in my fists distracts me from\n"
	.string "the pain of my exstance.$"
