SpringwoodCity_Indoor_2_MapScripts::
	.byte 0


SpringwoodCity_Indoor_2_Man::
# 4 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	lockall
# 5 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, SpringwoodCity_Indoor_2_Man_2
# 7 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	goto_if_set FLAG_TEMP_2, SpringwoodCity_Indoor_2_Man_3
# 12 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	msgbox SpringwoodCity_Indoor_2_Man_Text, MSGBOX_NPC
# 13 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	setflag FLAG_TEMP_1
SpringwoodCity_Indoor_2_Man_1:
# 15 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	releaseall
	return

SpringwoodCity_Indoor_2_Man_2:
# 6 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	msgbox SpringwoodCity_Indoor_2_Man_Text_0, MSGBOX_NPC
	goto SpringwoodCity_Indoor_2_Man_1

SpringwoodCity_Indoor_2_Man_3:
# 8 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	msgbox SpringwoodCity_Indoor_2_Man_Text2, MSGBOX_NPC
# 9 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	giveitem ITEM_TM_RETURN
# 10 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	setflag FLAG_RECEIVED_TM_RETURN
	goto SpringwoodCity_Indoor_2_Man_1


SpringwoodCity_Indoor_2_Gardevoir::
# 35 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	lockall
# 36 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
# 37 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	setseenmon SPECIES_GARDEVOIR
# 39 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	msgbox SpringwoodCity_Indoor_2_Gardevoir_Text_0, MSGBOX_NPC
# 40 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	waitmoncry
# 41 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	goto_if_set FLAG_TEMP_1, SpringwoodCity_Indoor_2_Gardevoir_3
SpringwoodCity_Indoor_2_Gardevoir_1:
# 45 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	waitmoncry
# 46 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	releaseall
	return

SpringwoodCity_Indoor_2_Gardevoir_2:
# 42 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	msgbox SpringwoodCity_Indoor_2_Gardevoir_Text_1, MSGBOX_NPC
# 43 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	setflag FLAG_TEMP_2
	goto SpringwoodCity_Indoor_2_Gardevoir_1

SpringwoodCity_Indoor_2_Gardevoir_3:
# 41 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_RETURN, SpringwoodCity_Indoor_2_Gardevoir_2
	goto SpringwoodCity_Indoor_2_Gardevoir_1


SpringwoodCity_Indoor_2_Man_Text_0:
# 6 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	.string "Thank you for helping us reconnect.$"

SpringwoodCity_Indoor_2_Gardevoir_Text_0:
# 39 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	.string "...$"

SpringwoodCity_Indoor_2_Gardevoir_Text_1:
# 42 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	.string "...please tell him I simply wish to\nstay by his side.$"

SpringwoodCity_Indoor_2_Man_Text::
# 18 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	.string "My Gardevoir and I have been together\n"
	.string "for as long as I've been a\lPokemon Trainer.\p"
	.string "As my body has gotten older, I've lost\nthe ability to hear her voice...\p"
	.string "I sometimes wonder if she regrets being\nstuck with me now that I can't do\lanything for her.$"

SpringwoodCity_Indoor_2_Man_Text2::
# 25 "data/maps/SpringwoodCity_Indoor_2/scripts.pory"
	.string "You spoke to her?\p"
	.string "What did she have to say?\p"
	.string "...\p"
	.string "...Truely?\p"
	.string "Thank you.\nI can't express how this means to me.\p"
	.string "Please, take this.\nIt's the least I could do.$"
