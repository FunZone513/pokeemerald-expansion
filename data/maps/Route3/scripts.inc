Route3_MapScripts::
	.byte 0


Route3_Sign_FishingHut::
# 4 "data/maps/Route3/scripts.pory"
	lockall
# 6 "data/maps/Route3/scripts.pory"
	msgbox Route3_Sign_FishingHut_Text_0, MSGBOX_SIGN
# 7 "data/maps/Route3/scripts.pory"
	releaseall
	return


Route3_Sign_Forest::
# 11 "data/maps/Route3/scripts.pory"
	lockall
# 12 "data/maps/Route3/scripts.pory"
	msgbox Route3_Sign_Forest_Text_0, MSGBOX_SIGN
# 13 "data/maps/Route3/scripts.pory"
	releaseall
	return


Route3_Boy::
# 17 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_BOY, Route3_Boy_Text_0, Route3_Boy_Text_1
# 22 "data/maps/Route3/scripts.pory"
	msgbox Route3_Boy_Text_2, MSGBOX_AUTOCLOSE
	end


Route3_Girl::
# 27 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_GIRL, Route3_Girl_Text_0, Route3_Girl_Text_1
# 32 "data/maps/Route3/scripts.pory"
	msgbox Route3_Girl_Text_2, MSGBOX_AUTOCLOSE
	end


Route3_Sign_FishingHut_Text_0:
# 6 "data/maps/Route3/scripts.pory"
	.string "Fishing Hut,\nHome of the baiting master$"

Route3_Sign_Forest_Text_0:
# 12 "data/maps/Route3/scripts.pory"
	.string "Forest Ahead,\nNot Implemented Yet.$"

Route3_Boy_Text_0:
# 19 "data/maps/Route3/scripts.pory"
	.string "Check out this Pokemon I found!$"

Route3_Boy_Text_1:
# 20 "data/maps/Route3/scripts.pory"
	.string "Did you actually check it out or did you\n"
	.string "just beat it up...$"

Route3_Boy_Text_2:
# 22 "data/maps/Route3/scripts.pory"
	.string "Mum said she thought it was cute.$"

Route3_Girl_Text_0:
# 29 "data/maps/Route3/scripts.pory"
	.string "You look like a good target for my debut\n"
	.string "battle!$"

Route3_Girl_Text_1:
# 30 "data/maps/Route3/scripts.pory"
	.string "You could've let me win...$"

Route3_Girl_Text_2:
# 32 "data/maps/Route3/scripts.pory"
	.string "Maybe being a trainer just isn't for me.$"
