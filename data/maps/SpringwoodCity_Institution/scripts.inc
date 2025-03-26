SpringwoodCity_Institution_MapScripts::
	.byte 0


SpringwoodCity_Institution_Receptionist::
# 4 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 5 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Text_0
# 6 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Display::
# 10 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 11 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Display_Text_0
# 12 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Display2::
# 16 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 17 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Display2_Text_0
# 18 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Display3::
# 22 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 23 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Display3_Text_0
# 24 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Scientist::
# 28 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 29 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist_Text_0, MSGBOX_NPC
# 30 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Scientist2::
# 34 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 35 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist2_Text_0, MSGBOX_NPC
# 36 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Scientist3::
# 40 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 41 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist3_Text_0, MSGBOX_NPC
# 42 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Employee::
# 46 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 47 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Employee_Text_0, MSGBOX_NPC
# 48 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Employee2::
# 52 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 53 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Employee2_Text_0, MSGBOX_NPC
# 54 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_Grunt::
# 58 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 59 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Grunt_Text_0, MSGBOX_NPC
# 60 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_StairBlocker1::
# 64 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 1
# 65 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker2::
# 69 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 2
# 70 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker3::
# 74 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 3
# 75 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker4::
# 79 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 4
# 80 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker5::
# 84 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 5
# 85 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker6::
# 89 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 6
# 90 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker::
# 94 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 95 "data/maps/SpringwoodCity_Institution/scripts.pory"
	switch VAR_TEMP_1
# 96 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 1, SpringwoodCity_Institution_StairBlocker_3
# 97 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 2, SpringwoodCity_Institution_StairBlocker_4
# 98 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 3, SpringwoodCity_Institution_StairBlocker_5
# 99 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 4, SpringwoodCity_Institution_StairBlocker_6
# 100 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 5, SpringwoodCity_Institution_StairBlocker_7
# 101 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 6, SpringwoodCity_Institution_StairBlocker_8
SpringwoodCity_Institution_StairBlocker_1:
# 103 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 105 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_StairBlocker_Text_0
# 106 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_le SpringwoodCity_Institution_StairBlocker_10
# 108 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_3
SpringwoodCity_Institution_StairBlocker_9:
# 109 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpringwoodCity_Institution_StairBlocker_Movement_4
# 114 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 116 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_le SpringwoodCity_Institution_StairBlocker_14
# 118 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_5
SpringwoodCity_Institution_StairBlocker_13:
# 119 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 121 "data/maps/SpringwoodCity_Institution/scripts.pory"
	switch VAR_TEMP_1
# 122 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 1, SpringwoodCity_Institution_StairBlocker_19
# 123 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 2, SpringwoodCity_Institution_StairBlocker_20
# 124 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 3, SpringwoodCity_Institution_StairBlocker_21
# 125 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 4, SpringwoodCity_Institution_StairBlocker_22
# 126 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 5, SpringwoodCity_Institution_StairBlocker_23
# 127 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 6, SpringwoodCity_Institution_StairBlocker_24
SpringwoodCity_Institution_StairBlocker_17:
# 129 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 130 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return

SpringwoodCity_Institution_StairBlocker_3:
# 96 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_4:
# 97 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_5:
# 98 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_6:
# 99 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_7:
# 100 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_8:
# 101 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_10:
# 107 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_3
	goto SpringwoodCity_Institution_StairBlocker_9

SpringwoodCity_Institution_StairBlocker_14:
# 117 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_5
	goto SpringwoodCity_Institution_StairBlocker_13

SpringwoodCity_Institution_StairBlocker_19:
# 122 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_20:
# 123 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_21:
# 124 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_22:
# 125 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_23:
# 126 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_24:
# 127 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_17


# 96 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_0:
# 96 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_left
# 96 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 97 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_1:
# 97 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 98 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_2:
# 98 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_right
# 98 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 107 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_3:
# 107 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_down
	step_end

# 109 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_4:
# 110 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lock_facing_direction
# 111 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_down
# 112 "data/maps/SpringwoodCity_Institution/scripts.pory"
	unlock_facing_direction
	step_end

# 117 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_5:
# 117 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_up
	step_end

SpringwoodCity_Institution_Receptionist_Text_0:
# 5 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Welcome, I'm afraid that we're not\n"
	.string "currently accepting visitors. May I ask\l"
	.string "that you come back at a later date?$"

SpringwoodCity_Institution_Display_Text_0:
# 11 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "There seems to be a stone of some kind\n"
	.string "behind the glass.$"

SpringwoodCity_Institution_Display2_Text_0:
# 17 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Whatever is behind that glass sure\n"
	.string "looks impressive.$"

SpringwoodCity_Institution_Display3_Text_0:
# 23 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "...isn't that just a stick?$"

SpringwoodCity_Institution_Scientist_Text_0:
# 29 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "I'm trying to determine what it is about\n"
	.string "evolutionary stones that causes\l"
	.string "Pokemon to evolve.$"

SpringwoodCity_Institution_Scientist2_Text_0:
# 35 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "We collaborate with the Research Lab\non Route 4 sometimes.\pThey discover things, we refine them.$"

SpringwoodCity_Institution_Scientist3_Text_0:
# 41 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Trying to determine research budgets\n"
	.string "is always a pain.$"

SpringwoodCity_Institution_Employee_Text_0:
# 47 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "While the researchers do good work, do\n"
	.string "they really need that much money?$"

SpringwoodCity_Institution_Employee2_Text_0:
# 53 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Honestly I'm just here to make sure\n"
	.string "these two don't fight.$"

SpringwoodCity_Institution_Grunt_Text_0:
# 59 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "The security guys keep looking at me\nlike I'm some suspicious individual.\pI just forgot to take of my PJs\nthis morning!$"

SpringwoodCity_Institution_StairBlocker_Text_0:
# 105 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Sorry, but you're not allowed up here\nat the moment.$"
