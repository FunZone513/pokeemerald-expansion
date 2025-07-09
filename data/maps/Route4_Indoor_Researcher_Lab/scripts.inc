Route4_Indoor_Researcher_Lab_MapScripts::
	.byte 0


Route4_Indoor_Researcher_Lab_Director::
# 4 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Director_Text, MSGBOX_NPC
	return


Route4_Indoor_Researcher_Lab_Intro::
# 13 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route4_Indoor_Researcher_Lab_Intro_Movement_0
# 14 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmovement 0
# 15 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 16 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	compare VAR_TEMP_1, 15
	goto_if_eq Route4_Indoor_Researcher_Lab_Intro_2
Route4_Indoor_Researcher_Lab_Intro_1:
# 20 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	applymovement 3, Route4_Indoor_Researcher_Lab_Intro_Movement_2
# 21 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	message Route4_Indoor_Researcher_Lab_Intro_Text_0
# 22 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmessage
# 23 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	message Route4_Indoor_Researcher_Lab_Intro_Text_1
# 24 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmessage
# 25 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	addobject 5
# 26 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setobjectxy 5, 15, 13
# 27 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	applymovement 5, Route4_Indoor_Researcher_Lab_EvelynnWalkPast
# 28 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	message Route4_Indoor_Researcher_Lab_Intro_Text_2
# 29 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmessage
# 30 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	message Route4_Indoor_Researcher_Lab_Intro_Text_3
# 31 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmessage
# 32 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	message Route4_Indoor_Researcher_Lab_Intro_Text_4
# 33 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmessage
# 34 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	message Route4_Indoor_Researcher_Lab_Intro_Text_5
# 35 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmessage
# 36 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmovement 5
# 37 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	removeobject 5
# 38 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 39 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setflag FLAG_HIDE_ROUTE2_MINIBOSS
# 40 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	release
	return

Route4_Indoor_Researcher_Lab_Intro_2:
# 17 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route4_Indoor_Researcher_Lab_Intro_Movement_1
# 18 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmovement 0
	goto Route4_Indoor_Researcher_Lab_Intro_1


# 43 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
Route4_Indoor_Researcher_Lab_EvelynnWalkPast:
# 44 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_up
# 44 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_up
# 44 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_up
# 44 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_up
# 45 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_right
# 45 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_right
# 45 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_right
# 46 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_up
# 46 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_up
# 46 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_up
# 46 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_up
# 47 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_right
# 47 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_right
# 47 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_right
# 47 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_right
	step_end

Route4_Indoor_Researcher_Lab_R1::
# 51 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R1_Text_0, MSGBOX_NPC
	return


Route4_Indoor_Researcher_Lab_R2::
# 55 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R2_Text_0, MSGBOX_NPC
	return


Route4_Indoor_Researcher_Lab_R3::
# 60 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 61 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	compare VAR_ROUTE4_WATER_STONE_STATE, 0
	goto_if_eq Route4_Indoor_Researcher_Lab_R3_2
Route4_Indoor_Researcher_Lab_R3_1:
# 66 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	switch VAR_ROUTE4_WATER_STONE_STATE
# 67 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	case 1, Route4_Indoor_Researcher_Lab_R3_6
# 74 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	case 2, Route4_Indoor_Researcher_Lab_R3_7
# 84 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	case 3, Route4_Indoor_Researcher_Lab_R3_8
# 89 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	case 4, Route4_Indoor_Researcher_Lab_R3_9
# 90 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	case 5, Route4_Indoor_Researcher_Lab_R3_9
# 94 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	case 6, Route4_Indoor_Researcher_Lab_R3_10
# 101 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	case 7, Route4_Indoor_Researcher_Lab_R3_11
Route4_Indoor_Researcher_Lab_R3_4:
# 107 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return

Route4_Indoor_Researcher_Lab_R3_2:
# 62 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text
# 63 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setvar VAR_ROUTE4_WATER_STONE_STATE, 1
	goto Route4_Indoor_Researcher_Lab_R3_1

Route4_Indoor_Researcher_Lab_R3_6:
# 68 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	playse SE_PIN
# 69 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 70 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text2, MSGBOX_NPC
# 72 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setvar VAR_ROUTE4_WATER_STONE_STATE, 2
	goto Route4_Indoor_Researcher_Lab_R3_4

Route4_Indoor_Researcher_Lab_R3_7:
# 75 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	getseenmon SPECIES_EEVEE
# 76 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route4_Indoor_Researcher_Lab_R3_13
# 79 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setvar VAR_ROUTE4_WATER_STONE_STATE, 3
# 80 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	goto Route4_Indoor_Researcher_Lab_R3
Route4_Indoor_Researcher_Lab_R3_12:
	goto Route4_Indoor_Researcher_Lab_R3_4

Route4_Indoor_Researcher_Lab_R3_8:
# 85 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text3, MSGBOX_NPC
# 86 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setvar VAR_ROUTE4_WATER_STONE_STATE, 4
	goto Route4_Indoor_Researcher_Lab_R3_4

Route4_Indoor_Researcher_Lab_R3_9:
# 91 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text_1, MSGBOX_NPC
	goto Route4_Indoor_Researcher_Lab_R3_4

Route4_Indoor_Researcher_Lab_R3_10:
# 95 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text4, MSGBOX_NPC
# 96 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
# 97 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text_2, MSGBOX_NPC
# 98 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setvar VAR_ROUTE4_WATER_STONE_STATE, 7
	goto Route4_Indoor_Researcher_Lab_R3_4

Route4_Indoor_Researcher_Lab_R3_11:
# 102 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text_3, MSGBOX_NPC
	goto Route4_Indoor_Researcher_Lab_R3_4

Route4_Indoor_Researcher_Lab_R3_13:
# 77 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text_0, MSGBOX_NPC
	goto Route4_Indoor_Researcher_Lab_R3_12


Route4_Indoor_Researcher_Lab_Machine::
# 146 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 147 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Machine_Text_0, MSGBOX_SIGN
# 148 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return


Route4_Indoor_Researcher_Lab_Computer::
# 152 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 153 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Computer_Text_0, MSGBOX_SIGN
# 154 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return


Route4_Indoor_Researcher_Lab_Computer2::
# 158 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 159 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	playmoncry SPECIES_BARBOACH, CRY_MODE_NORMAL
# 160 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Computer2_Text_0, MSGBOX_SIGN
# 161 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmoncry
# 162 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return


# 13 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
Route4_Indoor_Researcher_Lab_Intro_Movement_0:
# 13 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_up
# 13 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_up
# 13 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_up
	step_end

# 17 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
Route4_Indoor_Researcher_Lab_Intro_Movement_1:
# 17 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	walk_left
# 17 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	face_up
	step_end

# 20 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
Route4_Indoor_Researcher_Lab_Intro_Movement_2:
# 20 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	face_player
	step_end

Route4_Indoor_Researcher_Lab_Intro_Text_0:
# 21 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Welcome!\p$"

Route4_Indoor_Researcher_Lab_Intro_Text_1:
# 23 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "I'm the lab's director,\nis there anything in particular\lthat we can help you with?\p$"

Route4_Indoor_Researcher_Lab_Intro_Text_2:
# 28 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "What's that? George already\nleft for Springwood Gym?\p$"

Route4_Indoor_Researcher_Lab_Intro_Text_3:
# 30 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Well I'm glad someone told me,\nI was just starting to wonder\lwhere he had gone off to.\p$"

Route4_Indoor_Researcher_Lab_Intro_Text_4:
# 32 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Thank you for letting me know.\p$"

Route4_Indoor_Researcher_Lab_Intro_Text_5:
# 34 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Hmm...\pThey must've helped calm down\nthe Parasect by now, so I'm sure you\lcan go back to exploring all you like!\p$"

Route4_Indoor_Researcher_Lab_R1_Text_0:
# 51 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "I'm so close to a breakthrough...\nI just need a little more something...$"

Route4_Indoor_Researcher_Lab_R2_Text_0:
# 55 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "We've been hearing about some bizarre\n"
	.string "trees dotted around the region. We\l"
	.string "can't seem to replicate any of the\l"
	.string "strange happenings regarding them\l"
	.string "however.$"

Route4_Indoor_Researcher_Lab_R3_Text_0:
# 77 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "You don't appear to have seen an Eevee.\n"
	.string "They are pretty rare after all, so I\l"
	.string "can't say I'm surprised.$"

Route4_Indoor_Researcher_Lab_R3_Text_1:
# 91 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "I hope you can check up on the group at\n"
	.string "Ochre Vale soon.$"

Route4_Indoor_Researcher_Lab_R3_Text_2:
# 97 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "If I may ask for a personal favour, for\n"
	.string "my study, I'd like it if you could fill me\l"
	.string "in on any... details after you've used\l"
	.string "the stone.$"

Route4_Indoor_Researcher_Lab_R3_Text_3:
# 102 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "It's good to see you, I hope you've put\n"
	.string "that Water Stone to good use. I can't\l"
	.string "wait to hear all about it.$"

Route4_Indoor_Researcher_Lab_Machine_Text_0:
# 147 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "It's a complex looking machine, I wonder\n"
	.string "what they're using it for?$"

Route4_Indoor_Researcher_Lab_Computer_Text_0:
# 153 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "The graphs on the computer don't make\n"
	.string "much sense without knowing what\l"
	.string "they're measuring.$"

Route4_Indoor_Researcher_Lab_Computer2_Text_0:
# 160 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "It's a 3D render of a Barboach... and it\n"
	.string "appears to be spinning.$"

Route4_Indoor_Researcher_Lab_Director_Text::
# 7 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Feel free to take a look around\nwhile you're here.\p"
	.string "The worst that could happen\nis that you learn something new!$"

Route4_Indoor_Researcher_Lab_R3_Text::
# 110 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Hmm...\nI don't think I've seen this book before.\p"
	.string "'Did you know that...'\p"
	.string "...\p"
	.string "Oh dear.\p"
	.string "...\p"
	.string "...this requires further study.$"

Route4_Indoor_Researcher_Lab_R3_Text2::
# 119 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Oh!\nI didn't see you there.\p"
	.string "I was just having a look through our\ntexts to acquire some knowledge.\p"
	.string "Say, you wouldn't happen to have seen an\nEevee would you?\p"
	.string "Due to the nature of our study on\nevolution stones and their effects,\l"
	.string "Eevee is an important part of the study.$"

Route4_Indoor_Researcher_Lab_R3_Text3::
# 127 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Aha!\nSo you have seen an Eevee.\p"
	.string "I'm sure it was no simple task,\nlittle guys can be hard to find.\p"
	.string "I'm impressed by your dedication!\p"
	.string "Say, I'd like to ask for your help with\nsomething related to our work.\p"
	.string "Some of our researchers are dispatched\nto Ochre Vale Mine, but we haven't heard\lfrom them in a little while.\p"
	.string "They should have some stones from the\nMine that we need to look into.\p"
	.string "Could I ask you to go and check on them?\p"
	.string "The materials are too important to have\njust anyone transport them, so we have\lour own channel to transfer them.\p"
	.string "I'd just like you to make sure they\nhaven't come upon any snags.$"

Route4_Indoor_Researcher_Lab_R3_Text4::
# 139 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Hello!\nWe've finally gotten the materials\lfrom the Ochre Vale group.\p"
	.string "I'm glad you got it all sorted for them,\nI'm not sure why Magma is getting into\ltrouble with us now.\p"
	.string "But anyway,\nsince you've been such a big help with\lour research, I have been given\lpermission to give you a gift.$"
