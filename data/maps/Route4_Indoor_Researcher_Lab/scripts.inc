Route4_Indoor_Researcher_Lab_MapScripts::
# 2 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route4_Indoor_Researcher_Lab_IntroCheck
	.byte 0


Route4_Indoor_Researcher_Lab_IntroCheck::
# 6 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	goto_if_set FLAG_HIDE_ROUTE2_MINIBOSS, Route4_Indoor_Researcher_Lab_IntroCheck_1
	return

Route4_Indoor_Researcher_Lab_IntroCheck_1:
# 6 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setflag FLAG_TEMP_1
	return


Route4_Indoor_Researcher_Lab_Director::
# 10 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 11 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	faceplayer
# 12 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Director_Text_0
# 13 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
	goto_if_eq Route4_Indoor_Researcher_Lab_Director_2
Route4_Indoor_Researcher_Lab_Director_1:
# 18 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Director_Text_1
# 19 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Director_Text_2, MSGBOX_NPC
# 20 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return

Route4_Indoor_Researcher_Lab_Director_2:
# 14 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Director_Intro
# 15 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 16 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setflag FLAG_HIDE_ROUTE2_MINIBOSS
	goto Route4_Indoor_Researcher_Lab_Director_1


Route4_Indoor_Researcher_Lab_Intro_R1::
# 31 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 32 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Intro_R1_Text_0
# 33 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 34 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmoncry
# 35 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Intro_R1_Text_1
# 36 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return


Route4_Indoor_Researcher_Lab_R1::
# 40 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 41 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R1_Text_0, MSGBOX_NPC
# 42 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return


Route4_Indoor_Researcher_Lab_R2::
# 46 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 47 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R2_Text_0, MSGBOX_NPC
# 48 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return


Route4_Indoor_Researcher_Lab_R3::
# 53 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 54 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	compare VAR_ROUTE4_WATER_STONE_STATE, 0
	goto_if_eq Route4_Indoor_Researcher_Lab_R3_2
Route4_Indoor_Researcher_Lab_R3_1:
# 59 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	switch VAR_ROUTE4_WATER_STONE_STATE
# 60 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	case 1, Route4_Indoor_Researcher_Lab_R3_6
# 67 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	case 2, Route4_Indoor_Researcher_Lab_R3_7
# 77 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	case 3, Route4_Indoor_Researcher_Lab_R3_8
# 82 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	case 4, Route4_Indoor_Researcher_Lab_R3_9
# 83 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	case 5, Route4_Indoor_Researcher_Lab_R3_9
# 87 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	case 6, Route4_Indoor_Researcher_Lab_R3_10
# 94 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	case 7, Route4_Indoor_Researcher_Lab_R3_11
Route4_Indoor_Researcher_Lab_R3_4:
# 100 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return

Route4_Indoor_Researcher_Lab_R3_2:
# 55 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text
# 56 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setvar VAR_ROUTE4_WATER_STONE_STATE, 1
	goto Route4_Indoor_Researcher_Lab_R3_1

Route4_Indoor_Researcher_Lab_R3_6:
# 61 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	playse SE_PIN
# 62 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 63 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text2, MSGBOX_NPC
# 65 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setvar VAR_ROUTE4_WATER_STONE_STATE, 2
	goto Route4_Indoor_Researcher_Lab_R3_4

Route4_Indoor_Researcher_Lab_R3_7:
# 68 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	getseenmon SPECIES_EEVEE
# 69 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route4_Indoor_Researcher_Lab_R3_13
# 72 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setvar VAR_ROUTE4_WATER_STONE_STATE, 3
# 73 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	goto Route4_Indoor_Researcher_Lab_R3
Route4_Indoor_Researcher_Lab_R3_12:
	goto Route4_Indoor_Researcher_Lab_R3_4

Route4_Indoor_Researcher_Lab_R3_8:
# 78 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text3, MSGBOX_NPC
# 79 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setvar VAR_ROUTE4_WATER_STONE_STATE, 4
	goto Route4_Indoor_Researcher_Lab_R3_4

Route4_Indoor_Researcher_Lab_R3_9:
# 84 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text_1, MSGBOX_NPC
	goto Route4_Indoor_Researcher_Lab_R3_4

Route4_Indoor_Researcher_Lab_R3_10:
# 88 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text4, MSGBOX_NPC
# 89 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
# 90 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text_2, MSGBOX_NPC
# 91 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	setvar VAR_ROUTE4_WATER_STONE_STATE, 7
	goto Route4_Indoor_Researcher_Lab_R3_4

Route4_Indoor_Researcher_Lab_R3_11:
# 95 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text_3, MSGBOX_NPC
	goto Route4_Indoor_Researcher_Lab_R3_4

Route4_Indoor_Researcher_Lab_R3_13:
# 70 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_R3_Text_0, MSGBOX_NPC
	goto Route4_Indoor_Researcher_Lab_R3_12


Route4_Indoor_Researcher_Lab_Machine::
# 139 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 140 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Machine_Text_0, MSGBOX_SIGN
# 141 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return


Route4_Indoor_Researcher_Lab_Computer::
# 145 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 146 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Computer_Text_0, MSGBOX_SIGN
# 147 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return


Route4_Indoor_Researcher_Lab_Computer2::
# 151 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	lockall
# 152 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	playmoncry SPECIES_BARBOACH, CRY_MODE_NORMAL
# 153 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	msgbox Route4_Indoor_Researcher_Lab_Computer2_Text_0, MSGBOX_SIGN
# 154 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	waitmoncry
# 155 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	releaseall
	return


Route4_Indoor_Researcher_Lab_Director_Text_0:
# 12 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Hey there, welcome to the wonderful\nworld of Pokemon Science!$"

Route4_Indoor_Researcher_Lab_Director_Text_1:
# 18 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Feel free to take a look around\nwhile you're here.$"

Route4_Indoor_Researcher_Lab_Director_Text_2:
# 19 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "The worst that could happen\nis that you learn something new!$"

Route4_Indoor_Researcher_Lab_Intro_R1_Text_0:
# 32 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "I wonder if you can do a flip?\nGo on! Do a flip!$"

Route4_Indoor_Researcher_Lab_Intro_R1_Text_1:
# 35 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "No no, a FLIP.\n...this might take a while...$"

Route4_Indoor_Researcher_Lab_R1_Text_0:
# 41 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "I'm so close to a breakthrough...\nI just need a little more something...$"

Route4_Indoor_Researcher_Lab_R2_Text_0:
# 47 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "We've been hearing about some bizarre\n"
	.string "trees dotted around the region. We\l"
	.string "can't seem to replicate any strange\l"
	.string "happenings regarding them however.$"

Route4_Indoor_Researcher_Lab_R3_Text_0:
# 70 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "You don't appear to have seen an Eevee.\n"
	.string "They are pretty rare after all, so I\l"
	.string "can't say I'm surprised.$"

Route4_Indoor_Researcher_Lab_R3_Text_1:
# 84 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "I hope you can check up on the group at\n"
	.string "Ochre Vale soon.$"

Route4_Indoor_Researcher_Lab_R3_Text_2:
# 90 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "If I may ask for a personal favour, for\n"
	.string "my study, I'd like it if you could fill me\l"
	.string "in on any... details after you've used\l"
	.string "the stone.$"

Route4_Indoor_Researcher_Lab_R3_Text_3:
# 95 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "It's good to see you, I hope you've put\n"
	.string "that Water Stone to good use. I can't\l"
	.string "wait to hear all about it.$"

Route4_Indoor_Researcher_Lab_Machine_Text_0:
# 140 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "It's a complex looking machine, I wonder\n"
	.string "what they're using it for?$"

Route4_Indoor_Researcher_Lab_Computer_Text_0:
# 146 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "The graphs on the computer don't make\n"
	.string "much sense without knowing what\l"
	.string "they're measuring.$"

Route4_Indoor_Researcher_Lab_Computer2_Text_0:
# 153 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "It's a 3D render of a Barboach... and it\n"
	.string "appears to be spinning.$"

Route4_Indoor_Researcher_Lab_Director_Intro::
# 23 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "I'm the Director here,\nis there anything in particular\lthat you would like to learn today?\p"
	.string "What's that?\nGeorge already left for Springwood Gym?\p"
	.string "Well I'm glad someone told me,\nI was just starting to wonder\lwhere he had gone off to.$"

Route4_Indoor_Researcher_Lab_R3_Text::
# 103 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Hmm...\nI don't think I've seen this book before.\p"
	.string "'Did you know that...'\p"
	.string "...\p"
	.string "Oh dear.\p"
	.string "...\p"
	.string "...this requires further study.$"

Route4_Indoor_Researcher_Lab_R3_Text2::
# 112 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Oh!\nI didn't see you there.\p"
	.string "I was just having a look through our\ntexts to acquire some knowledge.\p"
	.string "Say, you wouldn't happen to have seen an\nEevee would you?\p"
	.string "Due to the nature of our study on\nevolution stones and their effects,\l"
	.string "Eevee is an important part of the study.$"

Route4_Indoor_Researcher_Lab_R3_Text3::
# 120 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
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
# 132 "data/maps/Route4_Indoor_Researcher_Lab/scripts.pory"
	.string "Hello!\nWe've finally gotten the materials\lfrom the Ochre Vale group.\p"
	.string "I'm glad you got it all sorted for them,\nI'm not sure why Magma is getting into\ltrouble with us now.\p"
	.string "But anyway,\nsince you've been such a big help with\lour research, I have been given\lpermission to give you a gift.$"
