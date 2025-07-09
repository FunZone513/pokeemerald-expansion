SpringwoodCity_Indoor_1_2F_MapScripts::
	.byte 0


SpringwoodCity_Indoor_1_2F_Employee::
# 4 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	msgbox SpringwoodCity_Indoor_1_2F_Employee_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Indoor_1_2F_TriggerL::
# 8 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 9 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	call SpringwoodCity_Indoor_1_2F_PushPlayer
	return


SpringwoodCity_Indoor_1_2F_TriggerR::
# 13 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 14 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	call SpringwoodCity_Indoor_1_2F_PushPlayer
	return


SpringwoodCity_Indoor_1_2F_PushPlayer::
# 18 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	lockall
# 19 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_0
# 20 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	playse SE_PIN
# 21 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 22 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 23 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 24 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 25 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 27 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SpringwoodCity_Indoor_1_2F_PushPlayer_2
# 29 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_2
SpringwoodCity_Indoor_1_2F_PushPlayer_1:
# 30 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 31 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_3
# 32 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 34 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	message SpringwoodCity_Indoor_1_2F_PushPlayer_Text_0
# 35 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmessage
# 36 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_4
# 37 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_5
# 42 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	closemessage
# 44 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_6
# 45 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 47 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SpringwoodCity_Indoor_1_2F_PushPlayer_6
# 49 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_8
SpringwoodCity_Indoor_1_2F_PushPlayer_5:
# 50 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 52 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_9
# 53 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 54 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	releaseall
	return

SpringwoodCity_Indoor_1_2F_PushPlayer_2:
# 28 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_1
	goto SpringwoodCity_Indoor_1_2F_PushPlayer_1

SpringwoodCity_Indoor_1_2F_PushPlayer_6:
# 48 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_7
	goto SpringwoodCity_Indoor_1_2F_PushPlayer_5


# 19 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_0:
# 19 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	face_left
	step_end

# 28 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_1:
# 28 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_left
# 28 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_left
	step_end

# 29 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_2:
# 29 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_left
	step_end

# 31 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_3:
# 31 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	face_up
	step_end

# 36 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_4:
# 36 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_up
# 36 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_up
	step_end

# 37 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_5:
# 38 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	lock_facing_direction
# 39 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_up
# 39 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_up
# 40 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	unlock_facing_direction
	step_end

# 44 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_6:
# 44 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_down
# 44 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_down
	step_end

# 48 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_7:
# 48 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_right
# 48 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_right
	step_end

# 49 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_8:
# 49 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_right
	step_end

# 52 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_9:
# 52 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	face_down
	step_end

SpringwoodCity_Indoor_1_2F_Employee_Text_0:
# 4 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	.string "Oh, I'm not supposed to talk to people\n"
	.string "like you.$"

SpringwoodCity_Indoor_1_2F_PushPlayer_Text_0:
# 34 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	.string "Hey! You can't come in here!$"
