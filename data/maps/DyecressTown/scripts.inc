DyecressTown_MapScripts::
# 2 "data/maps/DyecressTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DyecressTown_OnLoad
	.byte 0


DyecressTown_OnLoad::
# 6 "data/maps/DyecressTown/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 2
	goto_if_le DyecressTown_OnLoad_1
	return

DyecressTown_OnLoad_1:
# 7 "data/maps/DyecressTown/scripts.pory"
	setflag FLAG_TEMP_A
	return


DyecressTown_Sign::
# 12 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign_Text_0, MSGBOX_SIGN
	return


DyecressTown_Sign2::
# 16 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign2_Text_0, MSGBOX_SIGN
	return


DyecressTown_Sign3::
# 20 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign3_Text_0, MSGBOX_SIGN
	return


DyecressTown_Sign_Temple::
# 24 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign_Temple_Text_0, MSGBOX_YESNO
# 25 "data/maps/DyecressTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DyecressTown_Sign_Temple_1
	return

DyecressTown_Sign_Temple_1:
# 26 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign_Temple_Text, MSGBOX_SIGN
	return


DyecressTown_OldMan::
# 45 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_OldMan_Text_0, MSGBOX_NPC
	return


DyecressTown_OldWoman::
# 49 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_OldWoman_Text_0, MSGBOX_NPC
	return


DyecressTown_Woman::
# 53 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Woman_Text_0, MSGBOX_NPC
	return


DyecressTown_Scientist1::
# 57 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Scientist1_Text_0, MSGBOX_NPC
	return


DyecressTown_Scientist2::
# 61 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Scientist2_Text_0, MSGBOX_NPC
	return


DyecressTown_Scientist3::
# 65 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Scientist3_Text_0, MSGBOX_NPC
	return


DyecressTown_Scientist4::
# 69 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Scientist4_Text_0, MSGBOX_NPC
	return


DyecressTown_Spenser_Temple::
# 73 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Spenser_Temple_Text_0, MSGBOX_NPC
	return


DyecressTown_Sign_Text_0:
# 12 "data/maps/DyecressTown/scripts.pory"
	.string "Dyecress Town\nA heritage overlooking the sea.$"

DyecressTown_Sign2_Text_0:
# 16 "data/maps/DyecressTown/scripts.pory"
	.string "Spenser's House.$"

DyecressTown_Sign3_Text_0:
# 20 "data/maps/DyecressTown/scripts.pory"
	.string "Herb Shop.\nA healthy alternative!$"

DyecressTown_Sign_Temple_Text_0:
# 24 "data/maps/DyecressTown/scripts.pory"
	.string "The words seem to have\neroded over time...\pDo you want to try reading it anyway?$"

DyecressTown_OldMan_Text_0:
# 45 "data/maps/DyecressTown/scripts.pory"
	.string "Dyecress Town used to be a medical hub\n"
	.string "for the region. While many of its roots\l"
	.string "have been lost to time, the culture of\l"
	.string "growing medicinal plants remains.$"

DyecressTown_OldWoman_Text_0:
# 49 "data/maps/DyecressTown/scripts.pory"
	.string "While these days many travel looking\n"
	.string "for the big city, this town and its\l"
	.string "residents have remained faithful to\l"
	.string "their long history.$"

DyecressTown_Woman_Text_0:
# 53 "data/maps/DyecressTown/scripts.pory"
	.string "Most of the flowering plants here can\n"
	.string "be used for medicine, and the petals\l"
	.string "can also make wonderful pigments.$"

DyecressTown_Scientist1_Text_0:
# 57 "data/maps/DyecressTown/scripts.pory"
	.string "I'm wondering if these bizarre pillars\n"
	.string "have some sort of purpose.$"

DyecressTown_Scientist2_Text_0:
# 61 "data/maps/DyecressTown/scripts.pory"
	.string "You can really feel the town's history\n"
	.string "just by being here.$"

DyecressTown_Scientist3_Text_0:
# 65 "data/maps/DyecressTown/scripts.pory"
	.string "The archway seems quite old, yet it's\n"
	.string "like it hasn't aged a day since it was\l"
	.string "built.$"

DyecressTown_Scientist4_Text_0:
# 69 "data/maps/DyecressTown/scripts.pory"
	.string "The text on this sign is much too\n"
	.string "degraded to be read, so we're using a\l"
	.string "new method to try and gather more\l"
	.string "clues.$"

DyecressTown_Spenser_Temple_Text_0:
# 73 "data/maps/DyecressTown/scripts.pory"
	.string "As much as it pains me to have these\n"
	.string "coats scrutinise our wonderful history,\l"
	.string "I must admit that they are at least\l"
	.string "careful not to damage anything.$"

DyecressTown_Sign_Temple_Text::
# 30 "data/maps/DyecressTown/scripts.pory"
	.string "_e =_o -e_-=an,\ns_-_l r-__=_er __-=e w-- __=_.\p"
	.string "=__ _e w-o p_o_p-=,\n__ -_ =n =-_i- _-c__.\p"
	.string "F__ a-= _-_t =e -o,\n-nd __- t=-= -_ l__k,\p"
	.string "w_'_- =_-__s re__-n;\nFa_t__-.$"

DyecressTown_Sign_Temple_TextFixed::
# 37 "data/maps/DyecressTown/scripts.pory"
	.string "We who remain,\nshall remember those who came.\p"
	.string "For we who prosper,\ndo so on their backs.\p"
	.string "For all that we do,\nand all that we lack,\p"
	.string "we'll always remain;\nFaithful.$"
