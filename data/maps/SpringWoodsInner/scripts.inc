SpringWoodsInner_MapScripts::
	.byte 0


SpringWoods_Camper::
# 4 "data/maps/SpringWoodsInner/scripts.pory"
	trainerbattle_single TRAINER_SPRING_WOODS_CAMPER, SpringWoods_Camper_Text_0, SpringWoods_Camper_Text_1
# 9 "data/maps/SpringWoodsInner/scripts.pory"
	msgbox SpringWoods_Camper_Text_2, MSGBOX_AUTOCLOSE
	end


SpringWoods_Camper_Text_0:
# 6 "data/maps/SpringWoodsInner/scripts.pory"
	.string "The Spring is a protected area.$"

SpringWoods_Camper_Text_1:
# 7 "data/maps/SpringWoodsInner/scripts.pory"
	.string "Please me mindful of where you step.$"

SpringWoods_Camper_Text_2:
# 9 "data/maps/SpringWoodsInner/scripts.pory"
	.string "The Spring of Spring Woods is a\n"
	.string "protected space, please be careful to\l"
	.string "not damage the ecosystem.$"
