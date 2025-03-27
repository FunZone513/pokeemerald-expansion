QuietGrove_MapScripts::
	.byte 0


QuietGrove_Sign::
# 4 "data/maps/QuietGrove/scripts.pory"
	lockall
# 5 "data/maps/QuietGrove/scripts.pory"
	msgbox QuietGrove_Sign_Text_0
# 6 "data/maps/QuietGrove/scripts.pory"
	releaseall
	return


QuietGrove_BugCatcher::
# 10 "data/maps/QuietGrove/scripts.pory"
	trainerbattle_single TRAINER_QUIET_GROVE_BUG_CATCHER, QuietGrove_BugCatcher_Text_0, QuietGrove_BugCatcher_Text_1
# 15 "data/maps/QuietGrove/scripts.pory"
	msgbox QuietGrove_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	end


QuietGrove_Girl::
# 20 "data/maps/QuietGrove/scripts.pory"
	trainerbattle_single TRAINER_QUIET_GROVE_GIRL, QuietGrove_Girl_Text_0, QuietGrove_Girl_Text_1
# 25 "data/maps/QuietGrove/scripts.pory"
	msgbox QuietGrove_Girl_Text_2, MSGBOX_AUTOCLOSE
	end


QuietGrove_Sign_Text_0:
# 5 "data/maps/QuietGrove/scripts.pory"
	.string "Quiet Grove,\nWatch out for bugs!$"

QuietGrove_BugCatcher_Text_0:
# 12 "data/maps/QuietGrove/scripts.pory"
	.string "This place is great for catching bug\n"
	.string "types!$"

QuietGrove_BugCatcher_Text_1:
# 13 "data/maps/QuietGrove/scripts.pory"
	.string "Darn, I guess the ones here weren't as\n"
	.string "good as I thought.$"

QuietGrove_BugCatcher_Text_2:
# 15 "data/maps/QuietGrove/scripts.pory"
	.string "I thought there would be strong\n"
	.string "Pokemon here after hearing that there\l"
	.string "was a rowdy one.$"

QuietGrove_Girl_Text_0:
# 22 "data/maps/QuietGrove/scripts.pory"
	.string "I got lost! I hate it here! So many bugs!$"

QuietGrove_Girl_Text_1:
# 23 "data/maps/QuietGrove/scripts.pory"
	.string "Ew ew ew ew ew.$"

QuietGrove_Girl_Text_2:
# 25 "data/maps/QuietGrove/scripts.pory"
	.string "I thought a battle would distract me\n"
	.string "but now I'm just stuck here without my\l"
	.string "Pokemon...$"
