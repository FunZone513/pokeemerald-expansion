DripstoneCave_MapScripts::
	.byte 0


DripstoneCave_Fisherman::
# 4 "data/maps/DripstoneCave/scripts.pory"
	trainerbattle_single TRAINER_DRIPSTONE_CAVE_FISHERMAN, DripstoneCave_Fisherman_Text_0, DripstoneCave_Fisherman_Text_1
# 9 "data/maps/DripstoneCave/scripts.pory"
	msgbox DripstoneCave_Fisherman_Text_2, MSGBOX_AUTOCLOSE
	end


DripstoneCave_Fisherman_Text_0:
# 6 "data/maps/DripstoneCave/scripts.pory"
	.string "I came here to try and fish up some rare\n"
	.string "Pokemon, but it doesn't seem like I can\l"
	.string "reach the water from here.$"

DripstoneCave_Fisherman_Text_1:
# 7 "data/maps/DripstoneCave/scripts.pory"
	.string "I probably would've won if I could've\n"
	.string "fished some new Pokemon$"

DripstoneCave_Fisherman_Text_2:
# 9 "data/maps/DripstoneCave/scripts.pory"
	.string "Do I need to get a longer pole?$"
