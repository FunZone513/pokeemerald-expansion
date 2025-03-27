SpringwoodCity_MapScripts::
	.byte 0


SpringwoodCity_Intro_Scientist::
# 4 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 5 "data/maps/SpringwoodCity/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 4
	goto_if_eq SpringwoodCity_Intro_Scientist_2
# 16 "data/maps/SpringwoodCity/scripts.pory"
	faceplayer
# 17 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Intro_Scientist_Text_0, MSGBOX_NPC
SpringwoodCity_Intro_Scientist_1:
# 19 "data/maps/SpringwoodCity/scripts.pory"
	applymovement 2, SpringwoodCity_Intro_Scientist_Movement_0
# 20 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return

SpringwoodCity_Intro_Scientist_2:
# 6 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Intro_Scientist_Text1
# 7 "data/maps/SpringwoodCity/scripts.pory"
	playse SE_PIN
# 8 "data/maps/SpringwoodCity/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 9 "data/maps/SpringwoodCity/scripts.pory"
	waitmovement 0
# 10 "data/maps/SpringwoodCity/scripts.pory"
	faceplayer
# 11 "data/maps/SpringwoodCity/scripts.pory"
	delay 24
# 12 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Intro_Scientist_Text2
# 13 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Intro_Scientist_Text3, MSGBOX_NPC
# 14 "data/maps/SpringwoodCity/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
	goto SpringwoodCity_Intro_Scientist_1


SpringwoodCity_Sign_Name::
# 48 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 49 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sign_Name_Text_0
# 50 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return


SpringwoodCity_Sign_Park::
# 54 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 55 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sign_Park_Text_0
# 56 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return


SpringwoodCity_Sign_Lookout::
# 60 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 61 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sign_Lookout_Text_0
# 62 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return


SpringwoodCity_Sign_BigBuilding::
# 66 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 67 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sign_BigBuilding_Text_0
# 68 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return


SpringwoodCity_Sign_Gym::
# 72 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 73 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sign_Gym_Text_0
# 74 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return


SpringwoodCity_Archie::
# 78 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 79 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Archie_Text_0
# 80 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return


SpringwoodCity_Sydney::
# 84 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 85 "data/maps/SpringwoodCity/scripts.pory"
	goto_if_unset FLAG_ITEM_SPRINGWOOD_CITY_SILVER_POWDER, SpringwoodCity_Sydney_2
# 97 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sydney_Text_4, MSGBOX_NPC
SpringwoodCity_Sydney_1:
# 99 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return

SpringwoodCity_Sydney_2:
# 86 "data/maps/SpringwoodCity/scripts.pory"
	faceplayer
# 87 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sydney_Text_0
# 88 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sydney_Text_1, MSGBOX_YESNO
# 89 "data/maps/SpringwoodCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SpringwoodCity_Sydney_5
# 94 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sydney_Text_3, MSGBOX_NPC
	goto SpringwoodCity_Sydney_1

SpringwoodCity_Sydney_5:
# 90 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sydney_Text_2, MSGBOX_NPC
# 91 "data/maps/SpringwoodCity/scripts.pory"
	giveitem ITEM_SILVER_POWDER, 1
# 92 "data/maps/SpringwoodCity/scripts.pory"
	setflag FLAG_ITEM_SPRINGWOOD_CITY_SILVER_POWDER
	goto SpringwoodCity_Sydney_1


SpringwoodCity_RichBoy::
# 103 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 104 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_RichBoy_Text_0, MSGBOX_NPC
# 105 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return


SpringwoodCity_Artist::
# 109 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 110 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Artist_Text_0, MSGBOX_NPC
# 111 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return


SpringwoodCity_Beauty::
# 115 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 116 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Beauty_Text_0, MSGBOX_NPC
# 117 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return


SpringwoodCity_Athlete::
# 121 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 122 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Athlete_Text_0, MSGBOX_NPC
# 123 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return


SpringwoodCity_Camper::
# 127 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 128 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Camper_Text_0, MSGBOX_NPC
# 129 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return


# 19 "data/maps/SpringwoodCity/scripts.pory"
SpringwoodCity_Intro_Scientist_Movement_0:
# 19 "data/maps/SpringwoodCity/scripts.pory"
	face_up
	step_end

SpringwoodCity_Intro_Scientist_Text_0:
# 17 "data/maps/SpringwoodCity/scripts.pory"
	.string "Route 4 is straight west from here,\njust past Route 3. Good Luck!$"

SpringwoodCity_Sign_Name_Text_0:
# 49 "data/maps/SpringwoodCity/scripts.pory"
	.string "Springwood City. A Bustling coastal\n"
	.string "beauty.$"

SpringwoodCity_Sign_Park_Text_0:
# 55 "data/maps/SpringwoodCity/scripts.pory"
	.string "A small piece of nature, nurtered by us.$"

SpringwoodCity_Sign_Lookout_Text_0:
# 61 "data/maps/SpringwoodCity/scripts.pory"
	.string "BEWARE THE DROP.$"

SpringwoodCity_Sign_BigBuilding_Text_0:
# 67 "data/maps/SpringwoodCity/scripts.pory"
	.string "Important building ahead.$"

SpringwoodCity_Sign_Gym_Text_0:
# 73 "data/maps/SpringwoodCity/scripts.pory"
	.string "Springwood Gym, home of the strong.$"

SpringwoodCity_Archie_Text_0:
# 79 "data/maps/SpringwoodCity/scripts.pory"
	.string "...$"

SpringwoodCity_Sydney_Text_0:
# 87 "data/maps/SpringwoodCity/scripts.pory"
	.string "Psst, hey kid.$"

SpringwoodCity_Sydney_Text_1:
# 88 "data/maps/SpringwoodCity/scripts.pory"
	.string "Have you heard?$"

SpringwoodCity_Sydney_Text_2:
# 90 "data/maps/SpringwoodCity/scripts.pory"
	.string "Yeah you sure have.$"

SpringwoodCity_Sydney_Text_3:
# 94 "data/maps/SpringwoodCity/scripts.pory"
	.string "Bah!\nWasting my time.$"

SpringwoodCity_Sydney_Text_4:
# 97 "data/maps/SpringwoodCity/scripts.pory"
	.string "You didn't get it from me.$"

SpringwoodCity_RichBoy_Text_0:
# 104 "data/maps/SpringwoodCity/scripts.pory"
	.string "Springwood City might be on a seaside\n"
	.string "cliff, but that doesn't mean we get\l"
	.string "much salt spray. We must be too high up.$"

SpringwoodCity_Artist_Text_0:
# 110 "data/maps/SpringwoodCity/scripts.pory"
	.string "When I get into a creative slump, I find\n"
	.string "it nice to come and chill at the park.$"

SpringwoodCity_Beauty_Text_0:
# 116 "data/maps/SpringwoodCity/scripts.pory"
	.string "For such a large city there really isn't\n"
	.string "very much in the way of shopping is\l"
	.string "there?$"

SpringwoodCity_Athlete_Text_0:
# 122 "data/maps/SpringwoodCity/scripts.pory"
	.string "Running in the city is difficult,\nbut I'm scared of bug types so I can't\lrun on any of the nearby routes.$"

SpringwoodCity_Camper_Text_0:
# 128 "data/maps/SpringwoodCity/scripts.pory"
	.string "This tree keep growing back no matter\nhow many times we cut it down.$"

SpringwoodCity_Intro_Scientist_Text1::
# 23 "data/maps/SpringwoodCity/scripts.pory"
	.string "Oh man...\nI forgot to tell the director\l"
	.string "that I left for Springwood Gym.\p"
	.string "I don't want to get in trouble,\nbut I also can't afford to waste time.\p"
	.string "I hope the current challenger doesn't\ntake too long.$"

SpringwoodCity_Intro_Scientist_Text2::
# 30 "data/maps/SpringwoodCity/scripts.pory"
	.string "Oh!\l"
	.string "I'm sorry I didn't notice you were there.\p"
	.string "I'm waiting to get into the Gym,\nbut someone is currently doing the\lGym Challenge.\p"
	.string "So I'm stuck out here waiting\nfor them to finish because I need\lto speak to the Gym Leader.$"

SpringwoodCity_Intro_Scientist_Text3::
# 37 "data/maps/SpringwoodCity/scripts.pory"
	.string "...\p"
	.string "What's that? You need to speak to\nhim about a Pokemon on Route 2?\p"
	.string "What a coincidence!\nThat's also why I'm here.\p"
	.string "He needed us to make a special potion\nto calm the Pokemon down, so I'm here\lto deliver it to him.\p"
	.string "Tell you what, can you go and tell the\nDirector at the Research Lab on Route 4\lthat the potion has been delivered?\p"
	.string "I'll make sure the Gym Leader\nclears out the Pokemon on Route 2\lafter the challenger leaves.\p"
	.string "Thanks in advance!$"
