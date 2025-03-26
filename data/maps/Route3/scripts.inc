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


Route3_Sign_FishingHut_Text_0:
# 6 "data/maps/Route3/scripts.pory"
	.string "Fishing Hut,\nHome of the baiting master$"

Route3_Sign_Forest_Text_0:
# 12 "data/maps/Route3/scripts.pory"
	.string "Forest Ahead$"
