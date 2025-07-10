Route7_MapScripts::
	.byte 0


Route7_Picnicker::
# 4 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ROUTE7_PICNICKER, Route7_Picnicker_Text_0, Route7_Picnicker_Text_1
# 9 "data/maps/Route7/scripts.pory"
	msgbox Route7_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route7_SchoolKid::
# 14 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ROUTE7_SCHOOL_KID, Route7_SchoolKid_Text_0, Route7_SchoolKid_Text_1
# 19 "data/maps/Route7/scripts.pory"
	msgbox Route7_SchoolKid_Text_2, MSGBOX_AUTOCLOSE
	end


Route7_Hiker::
# 24 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ROUTE7_HIKER, Route7_Hiker_Text_0, Route7_Hiker_Text_1
# 29 "data/maps/Route7/scripts.pory"
	msgbox Route7_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


Route7_LittleBoy::
# 34 "data/maps/Route7/scripts.pory"
	lockall
# 35 "data/maps/Route7/scripts.pory"
	msgbox Route7_LittleBoy_Text_0, MSGBOX_NPC
# 36 "data/maps/Route7/scripts.pory"
	releaseall
	return


Route7_LittleGirl::
# 40 "data/maps/Route7/scripts.pory"
	lockall
# 41 "data/maps/Route7/scripts.pory"
	msgbox Route7_LittleGirl_Text_0, MSGBOX_NPC
# 42 "data/maps/Route7/scripts.pory"
	releaseall
	return


Route7_Picnicker_Text_0:
# 6 "data/maps/Route7/scripts.pory"
	.string "This spot is great for camping, the\n"
	.string "water is really fresh!$"

Route7_Picnicker_Text_1:
# 7 "data/maps/Route7/scripts.pory"
	.string "I need to go cool off in the river.$"

Route7_Picnicker_Text_2:
# 9 "data/maps/Route7/scripts.pory"
	.string "This river is fed by ice melting up on\n"
	.string "the mountain.$"

Route7_SchoolKid_Text_0:
# 16 "data/maps/Route7/scripts.pory"
	.string "I'm trying to find something cool to\n"
	.string "show off to my friends at school.$"

Route7_SchoolKid_Text_1:
# 17 "data/maps/Route7/scripts.pory"
	.string "Woah your Pokemon are cool!$"

Route7_SchoolKid_Text_2:
# 19 "data/maps/Route7/scripts.pory"
	.string "I made a bet that I could find a cool\n"
	.string "Pokemon, but I haven't found one yet.$"

Route7_Hiker_Text_0:
# 26 "data/maps/Route7/scripts.pory"
	.string "Walking to the river counts as a hike!$"

Route7_Hiker_Text_1:
# 27 "data/maps/Route7/scripts.pory"
	.string "Oh my knees just aren't what they used\n"
	.string "to be...$"

Route7_Hiker_Text_2:
# 29 "data/maps/Route7/scripts.pory"
	.string "I can't hike up the mountains anymore,\n"
	.string "so I keep active by walking to the river\l"
	.string "when I can.$"

Route7_LittleBoy_Text_0:
# 35 "data/maps/Route7/scripts.pory"
	.string "I like to swim, but the lake is too deep,\n"
	.string "so I swim in the shallows like this.$"

Route7_LittleGirl_Text_0:
# 41 "data/maps/Route7/scripts.pory"
	.string "How is he doing that?$"
