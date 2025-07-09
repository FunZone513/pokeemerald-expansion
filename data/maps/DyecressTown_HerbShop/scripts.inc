DyecressTown_HerbShop_MapScripts::
	.byte 0


DyecressTown_HerbShop_Clerk::
# 4 "data/maps/DyecressTown_HerbShop/scripts.pory"
	lock
# 5 "data/maps/DyecressTown_HerbShop/scripts.pory"
	applymovement 0, DyecressTown_HerbShop_Clerk_Movement_0
# 6 "data/maps/DyecressTown_HerbShop/scripts.pory"
	message DyecressTown_HerbShop_Clerk_Text_0
# 7 "data/maps/DyecressTown_HerbShop/scripts.pory"
	waitmessage
# 8 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_DYECRESS_HERB_SHOP_QUEST, 3
	goto_if_eq DyecressTown_HerbShop_Clerk_3
DyecressTown_HerbShop_Clerk_1:
# 13 "data/maps/DyecressTown_HerbShop/scripts.pory"
	goto_if_set FLAG_UPGRADE_HERBSHOP, DyecressTown_HerbShop_Clerk_7
# 21 "data/maps/DyecressTown_HerbShop/scripts.pory"
	pokemart DyecressTown_HerbShop_Mart
DyecressTown_HerbShop_Clerk_6:
# 23 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_Clerk_Text_3
# 24 "data/maps/DyecressTown_HerbShop/scripts.pory"
	release
	return

DyecressTown_HerbShop_Clerk_2:
# 9 "data/maps/DyecressTown_HerbShop/scripts.pory"
	message DyecressTown_HerbShop_Clerk_Text_1
# 10 "data/maps/DyecressTown_HerbShop/scripts.pory"
	waitmessage
# 11 "data/maps/DyecressTown_HerbShop/scripts.pory"
	setflag FLAG_UPGRADE_HERBSHOP
	goto DyecressTown_HerbShop_Clerk_1

DyecressTown_HerbShop_Clerk_3:
# 8 "data/maps/DyecressTown_HerbShop/scripts.pory"
	goto_if_unset FLAG_UPGRADE_HERBSHOP, DyecressTown_HerbShop_Clerk_2
	goto DyecressTown_HerbShop_Clerk_1

DyecressTown_HerbShop_Clerk_7:
# 14 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_Clerk_Text_2, MSGBOX_YESNO
# 15 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DyecressTown_HerbShop_Clerk_10
# 18 "data/maps/DyecressTown_HerbShop/scripts.pory"
	pokemart DyecressTown_HerbShop_Mart
	goto DyecressTown_HerbShop_Clerk_6

DyecressTown_HerbShop_Clerk_10:
# 16 "data/maps/DyecressTown_HerbShop/scripts.pory"
	pokemart DyecressTown_HerbShop_Mart2
	goto DyecressTown_HerbShop_Clerk_6


	.align 2
# 27 "data/maps/DyecressTown_HerbShop/scripts.pory"
DyecressTown_HerbShop_Mart:
# 28 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 29 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 30 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 31 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 32 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_POWER_HERB
# 33 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 34 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 35 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_NONE

	.align 2
# 38 "data/maps/DyecressTown_HerbShop/scripts.pory"
DyecressTown_HerbShop_Mart2:
# 39 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 40 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 41 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 42 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 43 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 44 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 45 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_LAX_MINT
# 46 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 47 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 48 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_MILD_MINT
# 49 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_RASH_MINT
# 50 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 51 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_CALM_MINT
# 52 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 53 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 54 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 55 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 56 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 57 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 58 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 59 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

DyecressTown_HerbShop_OldWoman::
# 63 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_OldWoman_Text_0, MSGBOX_NPC
	return


DyecressTown_HerbShop_Lass::
# 67 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_Lass_Text_0, MSGBOX_NPC
	return


DyecressTown_HerbShop_QuestGuy::
# 73 "data/maps/DyecressTown_HerbShop/scripts.pory"
	lock
# 74 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_DYECRESS_HERB_SHOP_QUEST, 0
	goto_if_eq DyecressTown_HerbShop_QuestGuy_1
# 84 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_DYECRESS_HERB_SHOP_QUEST, 1
	goto_if_eq DyecressTown_HerbShop_QuestGuy_2
# 92 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_DYECRESS_HERB_SHOP_QUEST, 2
	goto_if_eq DyecressTown_HerbShop_QuestGuy_3
# 109 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_DYECRESS_HERB_SHOP_QUEST, 3
	goto_if_eq DyecressTown_HerbShop_QuestGuy_4
	return

DyecressTown_HerbShop_QuestGuy_1:
# 75 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_QuestGuy_Text
# 76 "data/maps/DyecressTown_HerbShop/scripts.pory"
	setvar VAR_DYECRESS_HERB_SHOP_QUEST, 1
# 77 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_QuestGuy_Text_0, MSGBOX_YESNO
# 78 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DyecressTown_HerbShop_QuestGuy_9
# 81 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_QuestGuy_Text_1
	return

DyecressTown_HerbShop_QuestGuy_2:
# 85 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_QuestGuy_Text_2, MSGBOX_YESNO
# 86 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DyecressTown_HerbShop_QuestGuy_12
# 89 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_QuestGuy_Text_3
	return

DyecressTown_HerbShop_QuestGuy_3:
# 93 "data/maps/DyecressTown_HerbShop/scripts.pory"
	checkitem ITEM_RICH_MULCH
# 94 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DyecressTown_HerbShop_QuestGuy_16
DyecressTown_HerbShop_QuestGuy_15:
# 95 "data/maps/DyecressTown_HerbShop/scripts.pory"
	checkitem ITEM_GRACIDEA
# 96 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DyecressTown_HerbShop_QuestGuy_19
DyecressTown_HerbShop_QuestGuy_18:
# 99 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne DyecressTown_HerbShop_QuestGuy_31
DyecressTown_HerbShop_QuestGuy_29:
# 101 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne DyecressTown_HerbShop_QuestGuy_28
DyecressTown_HerbShop_QuestGuy_26:
# 103 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq DyecressTown_HerbShop_QuestGuy_25
DyecressTown_HerbShop_QuestGuy_24:
# 106 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_QuestGuy_Text_6
	return

DyecressTown_HerbShop_QuestGuy_4:
# 110 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_QuestGuy_Text_7, MSGBOX_NPC
	return

DyecressTown_HerbShop_QuestGuy_9:
# 79 "data/maps/DyecressTown_HerbShop/scripts.pory"
	goto DyecressTown_HerbShop_QuestGuy2
	return

DyecressTown_HerbShop_QuestGuy_12:
# 87 "data/maps/DyecressTown_HerbShop/scripts.pory"
	goto DyecressTown_HerbShop_QuestGuy2
	return

DyecressTown_HerbShop_QuestGuy_16:
# 94 "data/maps/DyecressTown_HerbShop/scripts.pory"
	setvar VAR_TEMP_A, TRUE
	goto DyecressTown_HerbShop_QuestGuy_15

DyecressTown_HerbShop_QuestGuy_19:
# 96 "data/maps/DyecressTown_HerbShop/scripts.pory"
	setvar VAR_TEMP_B, TRUE
	goto DyecressTown_HerbShop_QuestGuy_18

DyecressTown_HerbShop_QuestGuy_21:
# 100 "data/maps/DyecressTown_HerbShop/scripts.pory"
	goto DyecressTown_HerbShop_QuestGuy3
	return

DyecressTown_HerbShop_QuestGuy_22:
# 102 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_QuestGuy_Text_4
	return

DyecressTown_HerbShop_QuestGuy_23:
# 104 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_QuestGuy_Text_5
	return

DyecressTown_HerbShop_QuestGuy_25:
# 103 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_ne DyecressTown_HerbShop_QuestGuy_23
	goto DyecressTown_HerbShop_QuestGuy_24

DyecressTown_HerbShop_QuestGuy_28:
# 101 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq DyecressTown_HerbShop_QuestGuy_22
	goto DyecressTown_HerbShop_QuestGuy_26

DyecressTown_HerbShop_QuestGuy_31:
# 99 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_ne DyecressTown_HerbShop_QuestGuy_21
	goto DyecressTown_HerbShop_QuestGuy_29


DyecressTown_HerbShop_QuestGuy2::
# 115 "data/maps/DyecressTown_HerbShop/scripts.pory"
	setvar VAR_DYECRESS_HERB_SHOP_QUEST, 2
# 116 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_QuestGuy_Text2
# 117 "data/maps/DyecressTown_HerbShop/scripts.pory"
	release
	return


DyecressTown_HerbShop_QuestGuy3::
# 121 "data/maps/DyecressTown_HerbShop/scripts.pory"
	setvar VAR_DYECRESS_HERB_SHOP_QUEST, 3
# 122 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_QuestGuy_Text3
# 123 "data/maps/DyecressTown_HerbShop/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 125 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq DyecressTown_HerbShop_QuestGuy3_5
DyecressTown_HerbShop_QuestGuy3_4:
# 126 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq DyecressTown_HerbShop_QuestGuy3_9
DyecressTown_HerbShop_QuestGuy3_8:
# 127 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq DyecressTown_HerbShop_QuestGuy3_12
DyecressTown_HerbShop_QuestGuy3_3:
# 131 "data/maps/DyecressTown_HerbShop/scripts.pory"
	applymovement 4, DyecressTown_HerbShop_QuestGuy3_Movement_1
DyecressTown_HerbShop_QuestGuy3_1:
# 133 "data/maps/DyecressTown_HerbShop/scripts.pory"
	waitmovement 0
# 134 "data/maps/DyecressTown_HerbShop/scripts.pory"
	removeobject 4
# 135 "data/maps/DyecressTown_HerbShop/scripts.pory"
	delay 60
# 136 "data/maps/DyecressTown_HerbShop/scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 137 "data/maps/DyecressTown_HerbShop/scripts.pory"
	waitfanfare
# 138 "data/maps/DyecressTown_HerbShop/scripts.pory"
	delay 30
# 139 "data/maps/DyecressTown_HerbShop/scripts.pory"
	playse SE_EXIT
# 140 "data/maps/DyecressTown_HerbShop/scripts.pory"
	addobject 4
# 141 "data/maps/DyecressTown_HerbShop/scripts.pory"
	setobjectxy 4, 5, 7
# 142 "data/maps/DyecressTown_HerbShop/scripts.pory"
	waitse
# 144 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq DyecressTown_HerbShop_QuestGuy3_19
DyecressTown_HerbShop_QuestGuy3_18:
# 145 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq DyecressTown_HerbShop_QuestGuy3_23
DyecressTown_HerbShop_QuestGuy3_22:
# 146 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq DyecressTown_HerbShop_QuestGuy3_26
DyecressTown_HerbShop_QuestGuy3_17:
# 150 "data/maps/DyecressTown_HerbShop/scripts.pory"
	applymovement 4, DyecressTown_HerbShop_QuestGuy3_Movement_3
DyecressTown_HerbShop_QuestGuy3_15:
# 152 "data/maps/DyecressTown_HerbShop/scripts.pory"
	waitmovement 0
# 153 "data/maps/DyecressTown_HerbShop/scripts.pory"
	applymovement 4, DyecressTown_HerbShop_Clerk_Movement_0
# 154 "data/maps/DyecressTown_HerbShop/scripts.pory"
	waitmovement 0
# 155 "data/maps/DyecressTown_HerbShop/scripts.pory"
	msgbox DyecressTown_HerbShop_QuestGuy3_Text_0
# 156 "data/maps/DyecressTown_HerbShop/scripts.pory"
	release
	return

DyecressTown_HerbShop_QuestGuy3_2:
# 129 "data/maps/DyecressTown_HerbShop/scripts.pory"
	applymovement 4, DyecressTown_HerbShop_QuestGuy3_Movement_0
	goto DyecressTown_HerbShop_QuestGuy3_1

DyecressTown_HerbShop_QuestGuy3_5:
# 125 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_2, 5
	goto_if_eq DyecressTown_HerbShop_QuestGuy3_2
	goto DyecressTown_HerbShop_QuestGuy3_4

DyecressTown_HerbShop_QuestGuy3_9:
# 126 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_2, 4
	goto_if_eq DyecressTown_HerbShop_QuestGuy3_2
	goto DyecressTown_HerbShop_QuestGuy3_8

DyecressTown_HerbShop_QuestGuy3_12:
# 127 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_eq DyecressTown_HerbShop_QuestGuy3_2
	goto DyecressTown_HerbShop_QuestGuy3_3

DyecressTown_HerbShop_QuestGuy3_16:
# 148 "data/maps/DyecressTown_HerbShop/scripts.pory"
	applymovement 4, DyecressTown_HerbShop_QuestGuy3_Movement_2
	goto DyecressTown_HerbShop_QuestGuy3_15

DyecressTown_HerbShop_QuestGuy3_19:
# 144 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_2, 5
	goto_if_eq DyecressTown_HerbShop_QuestGuy3_16
	goto DyecressTown_HerbShop_QuestGuy3_18

DyecressTown_HerbShop_QuestGuy3_23:
# 145 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_2, 4
	goto_if_eq DyecressTown_HerbShop_QuestGuy3_16
	goto DyecressTown_HerbShop_QuestGuy3_22

DyecressTown_HerbShop_QuestGuy3_26:
# 146 "data/maps/DyecressTown_HerbShop/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_eq DyecressTown_HerbShop_QuestGuy3_16
	goto DyecressTown_HerbShop_QuestGuy3_17


# 5 "data/maps/DyecressTown_HerbShop/scripts.pory"
DyecressTown_HerbShop_Clerk_Movement_0:
# 5 "data/maps/DyecressTown_HerbShop/scripts.pory"
	face_player
	step_end

# 129 "data/maps/DyecressTown_HerbShop/scripts.pory"
DyecressTown_HerbShop_QuestGuy3_Movement_0:
# 129 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_right
# 129 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_right
# 129 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_right
# 129 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_right
# 129 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_down
# 129 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_down
	step_end

# 131 "data/maps/DyecressTown_HerbShop/scripts.pory"
DyecressTown_HerbShop_QuestGuy3_Movement_1:
# 131 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_down
# 131 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_right
# 131 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_right
# 131 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_right
# 131 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_right
# 131 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_down
	step_end

# 148 "data/maps/DyecressTown_HerbShop/scripts.pory"
DyecressTown_HerbShop_QuestGuy3_Movement_2:
# 148 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_up
# 148 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_up
# 148 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_left
# 148 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_left
# 148 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_left
# 148 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_left
	step_end

# 150 "data/maps/DyecressTown_HerbShop/scripts.pory"
DyecressTown_HerbShop_QuestGuy3_Movement_3:
# 150 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_up
# 150 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_left
# 150 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_left
# 150 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_left
# 150 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_left
# 150 "data/maps/DyecressTown_HerbShop/scripts.pory"
	walk_up
	step_end

DyecressTown_HerbShop_Clerk_Text_0:
# 6 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "Welcome to the Herb Shop!$"

DyecressTown_HerbShop_Clerk_Text_1:
# 9 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "Thanks to you, we now have a selection\nof nature altering mints for sale!$"

DyecressTown_HerbShop_Clerk_Text_2:
# 14 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "Were you after a Mint?$"

DyecressTown_HerbShop_Clerk_Text_3:
# 23 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "Thanks for stopping by!$"

DyecressTown_HerbShop_OldWoman_Text_0:
# 63 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "It's nice having a furbished store for\n"
	.string "all our herbs.$"

DyecressTown_HerbShop_Lass_Text_0:
# 67 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "Dyecress has the best selection of\n"
	.string "herbs!$"

DyecressTown_HerbShop_QuestGuy_Text_0:
# 77 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "Say, you're a travelling trainer right?\nCould you lend us a hand here?\p$"

DyecressTown_HerbShop_QuestGuy_Text_1:
# 81 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "Ah, I understand.\nYou must be busy, my apologies.$"

DyecressTown_HerbShop_QuestGuy_Text_2:
# 85 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "Have you decided to help us out?$"

DyecressTown_HerbShop_QuestGuy_Text_3:
# 89 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "Very well, I only hope we can\nmake progress by ourselves.$"

DyecressTown_HerbShop_QuestGuy_Text_4:
# 102 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "You'll be able to find the flower\nsomewhere in the jungles to the south.$"

DyecressTown_HerbShop_QuestGuy_Text_5:
# 104 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "The fertile soil can be found around\nthe base of the volcano to the east.$"

DyecressTown_HerbShop_QuestGuy_Text_6:
# 106 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "The fertile soil can be found around\nthe base of the volcano to the east,\land you'll be able to find the flower\lsomewhere in the jungles to the south.$"

DyecressTown_HerbShop_QuestGuy_Text_7:
# 110 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "Thank you for all your help!$"

DyecressTown_HerbShop_QuestGuy3_Text_0:
# 155 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "Success!\nWe will now be able to stock Mints!$"

DyecressTown_HerbShop_QuestGuy_Text::
# 159 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "I'm from Libra Institute, we've been\nworking with the owners of the Herb Shop.\p"
	.string "We're hoping that we can create some\nnew special herbs together,\lbut we have hit a rut in development.\p$"

DyecressTown_HerbShop_QuestGuy_Text2::
# 164 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "Fantastic! Thank you for offering to\nlend us a hand, I'm sure it\lwill be worth your while!\p"
	.string "I believe we're close, we just need 2\nmore things to get the results\lwe're looking for.\p"
	.string "Firstly, I've heard that the soil near\nthe volcano in the east is very fertile.\p"
	.string "If you could grab some for us in your\ntravels, it'd be greatly appreciated.\p"
	.string "Also, apparently there is a special type\nof flower that grows in the jungles to\lthe south of here.\p"
	.string "We believe that it holds the key to\nfinalising our research.\p"
	.string "If you could retrieve even just a\nsingle flower that would be perfect.\p"
	.string "I wish you the best of luck,\nand thank you again!$"

DyecressTown_HerbShop_QuestGuy_Text3::
# 175 "data/maps/DyecressTown_HerbShop/scripts.pory"
	.string "Wow! You've got them both!\nThank you very much!\p"
	.string "I'm sure we'll definitely be able to\nmake some progress on the Mints now!\p"
	.string "I'll get our scientists to have a look!$"
