SpringwoodCity_Indoor_1_2F_MapScripts::
	.byte 0


SpringwoodCity_Indoor_1_2F_Employee::
# 4 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	lockall
# 5 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	msgbox SpringwoodCity_Indoor_1_2F_Employee_Text_0, MSGBOX_NPC
# 6 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	releaseall
	return


SpringwoodCity_Indoor_1_2F_TriggerL::
# 10 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 11 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	call SpringwoodCity_Indoor_1_2F_PushPlayer
	return


SpringwoodCity_Indoor_1_2F_TriggerR::
# 15 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 16 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	call SpringwoodCity_Indoor_1_2F_PushPlayer
	return


SpringwoodCity_Indoor_1_2F_PushPlayer::
# 20 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	lockall
# 21 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_0
# 22 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	playse SE_PIN
# 23 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 24 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 25 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 26 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 27 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 29 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SpringwoodCity_Indoor_1_2F_PushPlayer_2
# 31 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_2
SpringwoodCity_Indoor_1_2F_PushPlayer_1:
# 32 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 33 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_3
# 34 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	message SpringwoodCity_Indoor_1_2F_PushPlayer_Text_0
# 37 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmessage
# 38 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_4
# 39 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_5
# 44 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 45 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	closemessage
# 46 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_6
# 47 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 49 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SpringwoodCity_Indoor_1_2F_PushPlayer_6
# 51 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_8
SpringwoodCity_Indoor_1_2F_PushPlayer_5:
# 52 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 54 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_9
# 55 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	waitmovement 0
# 56 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	releaseall
	return

SpringwoodCity_Indoor_1_2F_PushPlayer_2:
# 30 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_1
	goto SpringwoodCity_Indoor_1_2F_PushPlayer_1

SpringwoodCity_Indoor_1_2F_PushPlayer_6:
# 50 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	applymovement 3, SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_7
	goto SpringwoodCity_Indoor_1_2F_PushPlayer_5


# 21 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_0:
# 21 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	face_left
	step_end

# 30 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_1:
# 30 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_left
# 30 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_left
	step_end

# 31 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_2:
# 31 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_left
	step_end

# 33 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_3:
# 33 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	face_up
	step_end

# 38 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_4:
# 38 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_up
# 38 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_up
	step_end

# 39 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_5:
# 40 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	lock_facing_direction
# 41 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_up
# 41 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_up
# 42 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	unlock_facing_direction
	step_end

# 46 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_6:
# 46 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_down
# 46 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_down
	step_end

# 50 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_7:
# 50 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_right
# 50 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_right
	step_end

# 51 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_8:
# 51 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	walk_right
	step_end

# 54 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
SpringwoodCity_Indoor_1_2F_PushPlayer_Movement_9:
# 54 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	face_down
	step_end

SpringwoodCity_Indoor_1_2F_Employee_Text_0:
# 5 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	.string "Oh, I'm not supposed to talk to people\n"
	.string "like you.$"

SpringwoodCity_Indoor_1_2F_PushPlayer_Text_0:
# 36 "data/maps/SpringwoodCity_Indoor_1_2F/scripts.pory"
	.string "Hey! You can't come in here!$"
