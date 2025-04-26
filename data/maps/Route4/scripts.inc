Route4_MapScripts::
# 2 "data/maps/Route4/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route4_LedgeBlocker
	.byte 0


Route4_LedgeBlocker::
# 6 "data/maps/Route4/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 1
	goto_if_le Route4_LedgeBlocker_1
# 12 "data/maps/Route4/scripts.pory"
	setflag FLAG_TEMP_2
	return

Route4_LedgeBlocker_1:
# 7 "data/maps/Route4/scripts.pory"
	setmetatile 12, 25, METATILE_General_Ledge_East, TRUE
# 8 "data/maps/Route4/scripts.pory"
	setmetatile 12, 26, METATILE_Petalburg_Disabled_Ledge_East, TRUE
# 9 "data/maps/Route4/scripts.pory"
	setmetatile 12, 27, METATILE_General_Ledge_East, TRUE
# 10 "data/maps/Route4/scripts.pory"
	setflag FLAG_TEMP_1
	return


Route4_LedgeBreaker::
# 17 "data/maps/Route4/scripts.pory"
	lockall
# 18 "data/maps/Route4/scripts.pory"
	msgbox Route4_LedgeBreaker_Text_0, MSGBOX_NPC
# 19 "data/maps/Route4/scripts.pory"
	applymovement 2, Route4_LedgeBreaker_Movement_0
# 20 "data/maps/Route4/scripts.pory"
	waitmovement 2
# 21 "data/maps/Route4/scripts.pory"
	releaseall
	return


Route4_LedgeBreaker2::
# 25 "data/maps/Route4/scripts.pory"
	lockall
# 26 "data/maps/Route4/scripts.pory"
	msgbox Route4_LedgeBreaker2_Text_0, MSGBOX_NPC
# 27 "data/maps/Route4/scripts.pory"
	releaseall
	return


Route4_Sign_Researcher_Lab::
# 31 "data/maps/Route4/scripts.pory"
	lockall
# 32 "data/maps/Route4/scripts.pory"
	msgbox Route4_Sign_Researcher_Lab_Text_0, MSGBOX_SIGN
# 33 "data/maps/Route4/scripts.pory"
	releaseall
	return


Route4_Sign_Researcher_Lab_Garden::
# 37 "data/maps/Route4/scripts.pory"
	lockall
# 38 "data/maps/Route4/scripts.pory"
	msgbox Route4_Sign_Researcher_Lab_Garden_Text, MSGBOX_SIGN
# 39 "data/maps/Route4/scripts.pory"
	releaseall
	return


Route4_SchoolKid::
# 49 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_SCHOOLKID, Route4_SchoolKid_Text_0, Route4_SchoolKid_Text_1
# 54 "data/maps/Route4/scripts.pory"
	msgbox Route4_SchoolKid_Text_2, MSGBOX_AUTOCLOSE
	end


# 19 "data/maps/Route4/scripts.pory"
Route4_LedgeBreaker_Movement_0:
# 19 "data/maps/Route4/scripts.pory"
	face_left
	step_end

Route4_LedgeBreaker_Text_0:
# 18 "data/maps/Route4/scripts.pory"
	.string "I'M SICK OF THIS LEDGE!\nI'M GONNA BREAK IT DOWN!!$"

Route4_LedgeBreaker2_Text_0:
# 26 "data/maps/Route4/scripts.pory"
	.string "I often visit my grandmother in\n"
	.string "Dyecress Town, and the ledges always\l"
	.string "made the way difficult.$"

Route4_Sign_Researcher_Lab_Text_0:
# 32 "data/maps/Route4/scripts.pory"
	.string "Welcome to the wonderful world of\nPokemon Science!$"

Route4_SchoolKid_Text_0:
# 51 "data/maps/Route4/scripts.pory"
	.string "Ah! You scared me!$"

Route4_SchoolKid_Text_1:
# 52 "data/maps/Route4/scripts.pory"
	.string "You came out of nowhere...$"

Route4_SchoolKid_Text_2:
# 54 "data/maps/Route4/scripts.pory"
	.string "After being stuck in the lab all day\n"
	.string "with my Dad, I like to come out here and\l"
	.string "appreciate being in nature.$"

Route4_Sign_Researcher_Lab_Garden_Text::
# 42 "data/maps/Route4/scripts.pory"
	.string "Remember to clean off your shoes\nbefore you go back into the Lab,\l"
	.string "and don't overfeed the water Pokemon!\p"
	.string "We keep having to call in Nurse Joy\nbecause they get so fat!$"
