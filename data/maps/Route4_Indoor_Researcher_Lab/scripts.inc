Route4_Indoor_Researcher_Lab_MapScripts::
# 2 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route4_Indoor_Researcher_Lab_IntroCheck
	.byte 0


Route4_Indoor_Researcher_Lab_IntroCheck::
# 6 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	goto_if_set FLAG_HIDE_ROUTE2_MINIBOSS, Route4_Indoor_Researcher_Lab_IntroCheck_1
	return

Route4_Indoor_Researcher_Lab_IntroCheck_1:
# 6 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setflag FLAG_TEMP_1
	return


Route4_Indoor_Researcher_Lab_Director::
# 10 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 11 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	faceplayer
# 12 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Director_Text_0
# 13 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 4
	goto_if_eq Route4_Indoor_Researcher_Lab_Director_2
Route4_Indoor_Researcher_Lab_Director_1:
# 18 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Director_Text_1
# 19 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Director_Text_2, MSGBOX_NPC
# 20 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return

Route4_Indoor_Researcher_Lab_Director_2:
# 14 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Director_Intro
# 15 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
# 16 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setflag FLAG_HIDE_ROUTE2_MINIBOSS
	goto Route4_Indoor_Researcher_Lab_Director_1


Route4_Indoor_Researcher_Lab_Intro_R1::
# 31 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 32 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Intro_R1_Text_0
# 33 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 34 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmoncry
# 35 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Intro_R1_Text_1
# 36 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return


Route4_Indoor_Researcher_Lab_R1::
# 40 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 41 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R1_Text_0, MSGBOX_NPC
# 42 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return


Route4_Indoor_Researcher_Lab_R2::
# 46 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 47 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R2_Text_0, MSGBOX_NPC
# 48 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return


Route4_Indoor_Researcher_Lab_R3::
# 53 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 54 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text
# 55 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return


Route4_Indoor_Researcher_Lab_Director_Text_0:
# 12 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Hey there, welcome to the wonderful\nworld of Pokemon Science!$"

Route4_Indoor_Researcher_Lab_Director_Text_1:
# 18 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Feel free to take a look around\nwhile you're here.$"

Route4_Indoor_Researcher_Lab_Director_Text_2:
# 19 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "The worst that could happen\nis that you learn something new!$"

Route4_Indoor_Researcher_Lab_Intro_R1_Text_0:
# 32 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "I wonder if you can do a flip?\nGo on! Do a flip!$"

Route4_Indoor_Researcher_Lab_Intro_R1_Text_1:
# 35 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "No no, a FLIP.\n...this might take a while...$"

Route4_Indoor_Researcher_Lab_R1_Text_0:
# 41 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "I'm so close to a breakthrough...\nI just need a little more something...$"

Route4_Indoor_Researcher_Lab_R2_Text_0:
# 47 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Being in the corner means I can\nplay minesweeper all I want,\land they can't see it!$"

Route4_Indoor_Researcher_Lab_Director_Intro::
# 23 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "I'm the Director here,\nis there anything in particular\lthat you would like to learn today?\p"
	.string "What's that?\nGeorge already left for Springwood Gym?\p"
	.string "Well I'm glad someone told me,\nI was just starting to wonder\lwhere he had gone off to.$"

Route4_Indoor_Researcher_Lab_R3_Text::
# 58 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Hmm...\nI don't think I've seen this book before.\p"
	.string "'Did you know that in terms of...'\p"
	.string "...\p"
	.string "Oh dear.\p"
	.string "...\p"
	.string "...this requires further study.$"
