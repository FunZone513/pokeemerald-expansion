Route10_MapScripts::
	.byte 0


Route10_Sign::
# 4 "data/maps/Route10/scripts.pory"
	msgbox Route10_Sign_Text_0, MSGBOX_SIGN
	return


Route10_ResortOwner::
# 9 "data/maps/Route10/scripts.pory"
	msgbox Route10_ResortOwner_Text, MSGBOX_NPC
	return


Route10_SandEnjoyer1::
# 21 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandEnjoyer1_Text_0, MSGBOX_NPC
	return


Route10_SandEnjoyer2::
# 25 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandEnjoyer2_Text_0, MSGBOX_NPC
	return


Route10_SandEnjoyer3::
# 29 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandEnjoyer3_Text_0, MSGBOX_NPC
	return


Route10_SandEnjoyer4::
# 33 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandEnjoyer4_Text_0, MSGBOX_NPC
	return


Route10_SandEnjoyer5::
# 37 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandEnjoyer5_Text_0, MSGBOX_NPC
	return


Route10_SandEnjoyer6::
# 41 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandEnjoyer6_Text_0, MSGBOX_NPC
	return


Route10_SandEnjoyer7::
# 45 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandEnjoyer7_Text_0, MSGBOX_NPC
	return


Route10_Hiker::
# 49 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_ROUTE10_HIKER, Route10_Hiker_Text_0, Route10_Hiker_Text_1
# 54 "data/maps/Route10/scripts.pory"
	msgbox Route10_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


Route10_Youngster::
# 59 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_ROUTE10_YOUNGSTER, Route10_Youngster_Text_0, Route10_Youngster_Text_1
# 64 "data/maps/Route10/scripts.pory"
	msgbox Route10_Youngster_Text_2, MSGBOX_AUTOCLOSE
	end


Route10_RemoveBlocker::
# 69 "data/maps/Route10/scripts.pory"
	setvar VAR_TEMP_A, 1
	return


Route10_Guard::
# 73 "data/maps/Route10/scripts.pory"
	msgbox Route10_Guard_Text_0, MSGBOX_NPC
	return


Route10_ResortBlocker::
# 77 "data/maps/Route10/scripts.pory"
	lockall
# 78 "data/maps/Route10/scripts.pory"
	playse SE_PIN
# 79 "data/maps/Route10/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route10/scripts.pory"
	applymovement 18, Common_Movement_ExclamationMark
# 81 "data/maps/Route10/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route10/scripts.pory"
	applymovement 18, Route10_ResortBlocker_Movement_0
# 83 "data/maps/Route10/scripts.pory"
	message Route10_ResortBlocker_Text_0
# 84 "data/maps/Route10/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route10_ResortBlocker_Movement_1
# 85 "data/maps/Route10/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route10/scripts.pory"
	applymovement 18, Common_Movement_Delay48
# 87 "data/maps/Route10/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route10/scripts.pory"
	closemessage
# 89 "data/maps/Route10/scripts.pory"
	msgbox Route10_ResortBlocker_Text_1
# 90 "data/maps/Route10/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route10_ResortBlocker_Movement_2
# 91 "data/maps/Route10/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route10/scripts.pory"
	releaseall
	return


# 82 "data/maps/Route10/scripts.pory"
Route10_ResortBlocker_Movement_0:
# 82 "data/maps/Route10/scripts.pory"
	face_left
	step_end

# 84 "data/maps/Route10/scripts.pory"
Route10_ResortBlocker_Movement_1:
# 84 "data/maps/Route10/scripts.pory"
	walk_up
# 84 "data/maps/Route10/scripts.pory"
	face_right
	step_end

# 90 "data/maps/Route10/scripts.pory"
Route10_ResortBlocker_Movement_2:
# 90 "data/maps/Route10/scripts.pory"
	face_up
	step_end

Route10_Sign_Text_0:
# 4 "data/maps/Route10/scripts.pory"
	.string "Soothing Sands Resort.$"

Route10_SandEnjoyer1_Text_0:
# 21 "data/maps/Route10/scripts.pory"
	.string "The warm sand really soothes my old\n"
	.string "joints.$"

Route10_SandEnjoyer2_Text_0:
# 25 "data/maps/Route10/scripts.pory"
	.string "The trek to get here makes this place\n"
	.string "feel all the more special, so it's worth\l"
	.string "it.$"

Route10_SandEnjoyer3_Text_0:
# 29 "data/maps/Route10/scripts.pory"
	.string "My late husband and I used to come here\n"
	.string "every week, but it's just not the same\l"
	.string "without him.$"

Route10_SandEnjoyer4_Text_0:
# 33 "data/maps/Route10/scripts.pory"
	.string "I can't believe we managed\nto get a spot here!\pMy boyfriend is the best!$"

Route10_SandEnjoyer5_Text_0:
# 37 "data/maps/Route10/scripts.pory"
	.string "...this was so expensive...$"

Route10_SandEnjoyer6_Text_0:
# 41 "data/maps/Route10/scripts.pory"
	.string "There's sand here, but it's not a beach?$"

Route10_SandEnjoyer7_Text_0:
# 45 "data/maps/Route10/scripts.pory"
	.string "I'm not sure these sand beds are\n"
	.string "designed for someone of my stature.$"

Route10_Hiker_Text_0:
# 51 "data/maps/Route10/scripts.pory"
	.string "There sure are a lot of old people\n"
	.string "around here.$"

Route10_Hiker_Text_1:
# 52 "data/maps/Route10/scripts.pory"
	.string "I'm not that old yet right?$"

Route10_Hiker_Text_2:
# 54 "data/maps/Route10/scripts.pory"
	.string "The resort here is really popular with\n"
	.string "the elderly folks.$"

Route10_Youngster_Text_0:
# 61 "data/maps/Route10/scripts.pory"
	.string "Aha! You can give me something to do!$"

Route10_Youngster_Text_1:
# 62 "data/maps/Route10/scripts.pory"
	.string "Aw man, losing is no fun...$"

Route10_Youngster_Text_2:
# 64 "data/maps/Route10/scripts.pory"
	.string "My Grandma is at the resort, but there's\n"
	.string "nothing for me to do here.$"

Route10_Guard_Text_0:
# 73 "data/maps/Route10/scripts.pory"
	.string "I'm here to stop people who\ndon't have a booking.\pAnyone who enters from here\nhas to go through me.$"

Route10_ResortBlocker_Text_0:
# 83 "data/maps/Route10/scripts.pory"
	.string "Hey!$"

Route10_ResortBlocker_Text_1:
# 89 "data/maps/Route10/scripts.pory"
	.string "Sorry, but you don't have a booking,\nso you're not allowed to go in.$"

Route10_ResortOwner_Text::
# 12 "data/maps/Route10/scripts.pory"
	.string "Hey there,\nI'm the owner of the resort here.\p"
	.string "I created this resort years ago\nby getting sand from the desert,\l"
	.string "and using underground magma to warm it.\p"
	.string "I'm constantly trying to improve the\nquality of the experience here,\l"
	.string "so do let me know if you see anything.$"
