Route4_MapScripts::
	.byte 0


Route4_Sign_Researcher_Lab::
# 4 "data/maps/Route4/scripts.pory"
	lockall
# 5 "data/maps/Route4/scripts.pory"
	msgbox Route4_Sign_Researcher_Lab_Text_0, MSGBOX_SIGN
# 6 "data/maps/Route4/scripts.pory"
	releaseall
	return


Route4_Sign_Researcher_Lab_Garden::
# 10 "data/maps/Route4/scripts.pory"
	lockall
# 11 "data/maps/Route4/scripts.pory"
	msgbox Route4_Sign_Researcher_Lab_Garden_Text, MSGBOX_SIGN
# 12 "data/maps/Route4/scripts.pory"
	releaseall
	return


Route4_Sign_Researcher_Lab_Text_0:
# 5 "data/maps/Route4/scripts.pory"
	.string "Welcome to the wonderful world of\nPokemon Science!$"

Route4_Sign_Researcher_Lab_Garden_Text::
# 15 "data/maps/Route4/scripts.pory"
	.string "Remember to clean off your shoes\nbefore you go back into the Lab,\l"
	.string "and don't overfeed the water Pokemon!\p"
	.string "We keep having to call in Nurse Joy\nbecause they get so fat!$"
