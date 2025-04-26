SpringwoodCity_Institution_MapScripts::
# 2 "data/maps/SpringwoodCity_Institution/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SpringwoodCity_Institution_CheckState
	.byte 0


SpringwoodCity_Institution_CheckState::
# 6 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 2
	goto_if_ge SpringwoodCity_Institution_CheckState_1
	return

SpringwoodCity_Institution_CheckState_1:
# 7 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_A, 1
	return


SpringwoodCity_Institution_Receptionist::
# 12 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 13 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Text_0
# 14 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 1
	goto_if_eq SpringwoodCity_Institution_Receptionist_2
# 19 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 2
	goto_if_eq SpringwoodCity_Institution_Receptionist_3
SpringwoodCity_Institution_Receptionist_1:
# 22 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return

SpringwoodCity_Institution_Receptionist_2:
# 15 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Text_1
# 16 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Dyecress_Mystery1
# 17 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_A, 1
# 18 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_DYECRESS_MYSTERY_STATE, 2
	goto SpringwoodCity_Institution_Receptionist_1

SpringwoodCity_Institution_Receptionist_3:
# 20 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Text_2
	goto SpringwoodCity_Institution_Receptionist_1


SpringwoodCity_Institution_Display2::
# 35 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 36 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Display2_Text_0
# 37 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Display3::
# 41 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 42 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Display3_Text_0
# 43 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Scientist::
# 47 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 48 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist_Text_0, MSGBOX_NPC
# 49 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Scientist2::
# 53 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 54 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist2_Text_0, MSGBOX_NPC
# 55 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Scientist3::
# 59 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 60 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist3_Text_0, MSGBOX_NPC
# 61 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Employee::
# 65 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 66 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Employee_Text_0, MSGBOX_NPC
# 67 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Employee2::
# 71 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 72 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Employee2_Text_0, MSGBOX_NPC
# 73 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Grunt::
# 77 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 78 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Grunt_Text_0, MSGBOX_NPC
# 79 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_StairBlocker1::
# 83 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 1
# 84 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker2::
# 88 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 2
# 89 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker3::
# 93 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 3
# 94 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker4::
# 98 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 4
# 99 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker5::
# 103 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 5
# 104 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker6::
# 108 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 6
# 109 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker::
# 113 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 114 "data/maps/SpringwoodCity_Institution/scripts.pory"
	switch VAR_TEMP_1
# 115 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 1, SpringwoodCity_Institution_StairBlocker_3
# 116 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 2, SpringwoodCity_Institution_StairBlocker_4
# 117 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 3, SpringwoodCity_Institution_StairBlocker_5
# 118 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 4, SpringwoodCity_Institution_StairBlocker_6
# 119 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 5, SpringwoodCity_Institution_StairBlocker_7
# 120 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 6, SpringwoodCity_Institution_StairBlocker_8
SpringwoodCity_Institution_StairBlocker_1:
# 122 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 124 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_StairBlocker_Text_0
# 125 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_le SpringwoodCity_Institution_StairBlocker_10
# 127 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_3
SpringwoodCity_Institution_StairBlocker_9:
# 128 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpringwoodCity_Institution_StairBlocker_Movement_4
# 133 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 135 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_le SpringwoodCity_Institution_StairBlocker_14
# 137 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_5
SpringwoodCity_Institution_StairBlocker_13:
# 138 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 140 "data/maps/SpringwoodCity_Institution/scripts.pory"
	switch VAR_TEMP_1
# 141 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 1, SpringwoodCity_Institution_StairBlocker_19
# 142 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 2, SpringwoodCity_Institution_StairBlocker_20
# 143 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 3, SpringwoodCity_Institution_StairBlocker_21
# 144 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 4, SpringwoodCity_Institution_StairBlocker_22
# 145 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 5, SpringwoodCity_Institution_StairBlocker_23
# 146 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 6, SpringwoodCity_Institution_StairBlocker_24
SpringwoodCity_Institution_StairBlocker_17:
# 148 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 149 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return

SpringwoodCity_Institution_StairBlocker_3:
# 115 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_4:
# 116 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_5:
# 117 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_6:
# 118 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_7:
# 119 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_8:
# 120 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_10:
# 126 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_3
	goto SpringwoodCity_Institution_StairBlocker_9

SpringwoodCity_Institution_StairBlocker_14:
# 136 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_5
	goto SpringwoodCity_Institution_StairBlocker_13

SpringwoodCity_Institution_StairBlocker_19:
# 141 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_20:
# 142 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_21:
# 143 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_22:
# 144 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_23:
# 145 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_24:
# 146 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_17


SpringwoodCity_Institution_Guard::
# 153 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 154 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Guard_Text_0, MSGBOX_NPC
# 155 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


# 115 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_0:
# 115 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_left
# 115 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 116 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_1:
# 116 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 117 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_2:
# 117 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_right
# 117 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 126 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_3:
# 126 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_down
	step_end

# 128 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_4:
# 129 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lock_facing_direction
# 130 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_down
# 131 "data/maps/SpringwoodCity_Institution/scripts.pory"
	unlock_facing_direction
	step_end

# 136 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_5:
# 136 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_up
	step_end

SpringwoodCity_Institution_Receptionist_Text_0:
# 13 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Welcome to the Libra Institute!\nWould you happen to have an appointment?$"

SpringwoodCity_Institution_Receptionist_Text_1:
# 15 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "...$"

SpringwoodCity_Institution_Receptionist_Text_2:
# 20 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Oh you're the one helping out Spenser.\n"
	.string "You'll find our researchers up the\l"
	.string "stairs to the left.$"

SpringwoodCity_Institution_Display2_Text_0:
# 36 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Whatever is behind that glass sure\n"
	.string "looks impressive.$"

SpringwoodCity_Institution_Display3_Text_0:
# 42 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "...isn't that just a stick?$"

SpringwoodCity_Institution_Scientist_Text_0:
# 48 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "We don't have much of a breakroom in\n"
	.string "the lab areas upstairs, so when we get\l"
	.string "free time we sort of just hang out in\l"
	.string "the lobby.$"

SpringwoodCity_Institution_Scientist2_Text_0:
# 54 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "We collaborate with the Research Lab\non Route 4 sometimes.\pThey discover things, we refine them.$"

SpringwoodCity_Institution_Scientist3_Text_0:
# 60 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Trying to determine research budgets\n"
	.string "is always a pain.$"

SpringwoodCity_Institution_Employee_Text_0:
# 66 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "While the researchers do good work, do\n"
	.string "they really need that much money?$"

SpringwoodCity_Institution_Employee2_Text_0:
# 72 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Honestly I'm just here to make sure\n"
	.string "these two don't fight.$"

SpringwoodCity_Institution_Grunt_Text_0:
# 78 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "The security guys keep looking at me\nlike I'm some suspicious individual.\pI uhh...\nI just forgot to take off my PJs\lthis morning!$"

SpringwoodCity_Institution_StairBlocker_Text_0:
# 124 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "I apologise,\nbut you don't have permission\lto acces the upper floors.$"

SpringwoodCity_Institution_Guard_Text_0:
# 154 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Go right on ahead.$"

SpringwoodCity_Institution_Receptionist_Dyecress_Mystery1::
# 25 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "You have a message from a wordy Old Man\nin Dyecress Town?\p"
	.string "I see!\p"
	.string "Our insitute has had quite an interest\nin Dyecress for quite a while now,\l"
	.string "but Old Spenser was reluctant to let us\linvestigate the town.\p"
	.string "If he's sent you here as a request for\nhelp, then I can only imagine how stumped\lhe must be on his current task.\p"
	.string "Please make your way up the stairs to\nthe left, our in-house researches would\lbe honoured to lend a hand.$"
