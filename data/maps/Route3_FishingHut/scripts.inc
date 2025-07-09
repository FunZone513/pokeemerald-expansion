Route3_FishingHut_MapScripts::
	.byte 0


Route3_FishingHut_Fisherman::
# 4 "data/maps/Route3_FishingHut/scripts.pory"
	lock
# 5 "data/maps/Route3_FishingHut/scripts.pory"
	msgbox Route3_FishingHut_Fisherman_Text_0
# 6 "data/maps/Route3_FishingHut/scripts.pory"
	faceplayer
# 7 "data/maps/Route3_FishingHut/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, Route3_FishingHut_Fisherman_2
# 13 "data/maps/Route3_FishingHut/scripts.pory"
	msgbox Route3_FishingHut_Fisherman_Text_2, MSGBOX_NPC
Route3_FishingHut_Fisherman_1:
# 15 "data/maps/Route3_FishingHut/scripts.pory"
	applymovement 1, Route3_FishingHut_Fisherman_Movement_0
# 16 "data/maps/Route3_FishingHut/scripts.pory"
	release
	return

Route3_FishingHut_Fisherman_2:
# 8 "data/maps/Route3_FishingHut/scripts.pory"
	msgbox FishermanGive
# 9 "data/maps/Route3_FishingHut/scripts.pory"
	giveitem ITEM_OLD_ROD
# 10 "data/maps/Route3_FishingHut/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 11 "data/maps/Route3_FishingHut/scripts.pory"
	msgbox Route3_FishingHut_Fisherman_Text_1, MSGBOX_NPC
	goto Route3_FishingHut_Fisherman_1


Route3_FishingHut_Doorway::
# 29 "data/maps/Route3_FishingHut/scripts.pory"
	msgbox Route3_FishingHut_Doorway_Text_0, MSGBOX_SIGN
	return


# 15 "data/maps/Route3_FishingHut/scripts.pory"
Route3_FishingHut_Fisherman_Movement_0:
# 15 "data/maps/Route3_FishingHut/scripts.pory"
	face_left
	step_end

Route3_FishingHut_Fisherman_Text_0:
# 5 "data/maps/Route3_FishingHut/scripts.pory"
	.string "...\phuh?$"

Route3_FishingHut_Fisherman_Text_1:
# 11 "data/maps/Route3_FishingHut/scripts.pory"
	.string "Now if you don't mind, I'm going back to\n"
	.string "my tea.$"

Route3_FishingHut_Fisherman_Text_2:
# 13 "data/maps/Route3_FishingHut/scripts.pory"
	.string "I already gave you an old rod. Go give it\n"
	.string "a try.$"

Route3_FishingHut_Doorway_Text_0:
# 29 "data/maps/Route3_FishingHut/scripts.pory"
	.string "I wonder what's back there...$"

FishermanGive::
# 19 "data/maps/Route3_FishingHut/scripts.pory"
	.string "What are you doing in here?\p"
	.string "Fishing?\nI used to do a lot of that.\p"
	.string "I'm too old for it now though.\p"
	.string "You know...\nI've probably still got an Old Rod\llaying around here somewhere.\p"
	.string "You look pretty desperate,\nso you can take it if you want.\p"
	.string "That can be my good deed for the day.$"
