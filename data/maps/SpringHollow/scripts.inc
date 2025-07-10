SpringHollow_MapScripts::
	.byte 0


SpringHollow_GemRed::
# 4 "data/maps/SpringHollow/scripts.pory"
	lockall
# 5 "data/maps/SpringHollow/scripts.pory"
	msgbox SpringHollow_GemRed_Text_0, MSGBOX_SIGN
# 6 "data/maps/SpringHollow/scripts.pory"
	releaseall
	return


SpringHollow_GemBlue::
# 10 "data/maps/SpringHollow/scripts.pory"
	lockall
# 11 "data/maps/SpringHollow/scripts.pory"
	msgbox SpringHollow_GemBlue_Text_0, MSGBOX_SIGN
# 12 "data/maps/SpringHollow/scripts.pory"
	releaseall
	return


SpringHollow_GemRed_Text_0:
# 5 "data/maps/SpringHollow/scripts.pory"
	.string "It's a red crystal that seems to\n"
	.string "radiate heat.$"

SpringHollow_GemBlue_Text_0:
# 11 "data/maps/SpringHollow/scripts.pory"
	.string "It's a blue crystal that seems to leak\n"
	.string "water.$"
