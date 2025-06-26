Route3_MapScripts::
	.byte 0


Route3_Sign_FishingHut::
# 4 "data/maps/Route3/scripts.pory"
	msgbox Route3_Sign_FishingHut_Text_0, MSGBOX_SIGN
	return


Route3_Sign_Forest::
# 8 "data/maps/Route3/scripts.pory"
	msgbox Route3_Sign_Forest_Text_0, MSGBOX_SIGN
	return


Route3_Boy::
# 12 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_BOY, Route3_Boy_Text_0, Route3_Boy_Text_1
# 17 "data/maps/Route3/scripts.pory"
	msgbox Route3_Boy_Text_2, MSGBOX_AUTOCLOSE
	end


Route3_Girl::
# 22 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_GIRL, Route3_Girl_Text_0, Route3_Girl_Text_1
# 27 "data/maps/Route3/scripts.pory"
	msgbox Route3_Girl_Text_2, MSGBOX_AUTOCLOSE
	end


Route3_Fisherman::
# 32 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_FISHERMAN, Route3_Fisherman_Text_0, Route3_Fisherman_Text_1
# 37 "data/maps/Route3/scripts.pory"
	msgbox Route3_Fisherman_Text_2, MSGBOX_AUTOCLOSE
	end


Route3_LittleGirl::
# 42 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_LITTLEGIRL, Route3_LittleGirl_Text_0, Route3_LittleGirl_Text_1
# 47 "data/maps/Route3/scripts.pory"
	msgbox Route3_LittleGirl_Text_2, MSGBOX_AUTOCLOSE
	end


Route3_Sign_FishingHut_Text_0:
# 4 "data/maps/Route3/scripts.pory"
	.string "Fishing Hut,\nHome of the baiting master.$"

Route3_Sign_Forest_Text_0:
# 8 "data/maps/Route3/scripts.pory"
	.string "Spring Woods,\nA forested sanctuary.$"

Route3_Boy_Text_0:
# 14 "data/maps/Route3/scripts.pory"
	.string "Check out this Pokemon I found!$"

Route3_Boy_Text_1:
# 15 "data/maps/Route3/scripts.pory"
	.string "Did you actually check it out or did you\n"
	.string "just beat it up...$"

Route3_Boy_Text_2:
# 17 "data/maps/Route3/scripts.pory"
	.string "Mum said she thought it was cute.$"

Route3_Girl_Text_0:
# 24 "data/maps/Route3/scripts.pory"
	.string "You look like a good target for my debut\n"
	.string "battle!$"

Route3_Girl_Text_1:
# 25 "data/maps/Route3/scripts.pory"
	.string "You could've let me win...$"

Route3_Girl_Text_2:
# 27 "data/maps/Route3/scripts.pory"
	.string "Maybe being a trainer just isn't for me.$"

Route3_Fisherman_Text_0:
# 34 "data/maps/Route3/scripts.pory"
	.string "I've heard the fishing master trained\n"
	.string "his skills on this very pond.$"

Route3_Fisherman_Text_1:
# 35 "data/maps/Route3/scripts.pory"
	.string "I still have a long way to go.$"

Route3_Fisherman_Text_2:
# 37 "data/maps/Route3/scripts.pory"
	.string "One day I too will go down as a master\n"
	.string "fisherman, just wait and see.$"

Route3_LittleGirl_Text_0:
# 44 "data/maps/Route3/scripts.pory"
	.string "I found this cute Pokemon!$"

Route3_LittleGirl_Text_1:
# 45 "data/maps/Route3/scripts.pory"
	.string "Oh no... my cutie...$"

Route3_LittleGirl_Text_2:
# 47 "data/maps/Route3/scripts.pory"
	.string "I like to play in the grass.$"
