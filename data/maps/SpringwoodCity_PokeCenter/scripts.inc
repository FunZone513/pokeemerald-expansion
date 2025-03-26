SpringwoodCity_PokeCenter_MapScripts::
# 2 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SpringwoodCity_PokemonCenter_OnTransition
	.byte 0


SpringwoodCity_PokemonCenter_OnTransition::
# 6 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SPRINGWOOD_CITY
	return


SpringwoodCity_PokemonCenter_Nurse::
# 10 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	lockall
# 11 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	waitmessage
# 14 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	waitbuttonpress
# 15 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	releaseall
	return


SpringwoodCity_PokemonCenter_Girl::
# 19 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	lockall
# 20 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	msgbox SpringwoodCity_PokemonCenter_Girl_Text, MSGBOX_NPC
# 21 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	releaseall
	return


SpringwoodCity_PokemonCenter_Boy::
# 31 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	lockall
# 32 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	msgbox SpringwoodCity_PokemonCenter_Boy_Text, MSGBOX_NPC
# 33 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	releaseall
	return


SpringwoodCity_PokemonCenter_Woman::
# 44 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	lockall
# 45 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	msgbox SpringwoodCity_PokemonCenter_Woman_Text_0, MSGBOX_NPC
# 46 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	releaseall
	return


SpringwoodCity_PokemonCenter_Man::
# 50 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	lockall
# 51 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	msgbox SpringwoodCity_PokemonCenter_Man_Text_0, MSGBOX_NPC
# 52 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	releaseall
	return


SpringwoodCity_PokemonCenter_Woman_Text_0:
# 45 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	.string "Woman voice woman voice\nwoman voice!$"

SpringwoodCity_PokemonCenter_Man_Text_0:
# 51 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	.string "I come here nearly every day.\nI just like the vibe.$"

SpringwoodCity_PokemonCenter_Girl_Text::
# 24 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	.string "I was going to go and play in the\nQuiet Grove like I normally do, but I\l"
	.string "heard that there's a big scary Pokemon\lblocking people from getting in.\p"
	.string "I guess I'll just have to wait until\nGym Leader Martin makes it safe.$"

SpringwoodCity_PokemonCenter_Boy_Text::
# 36 "data/maps/SpringwoodCity_PokeCenter/scripts.pory"
	.string "Gym Leader Martin is really cool!\p"
	.string "He only uses Pokemon he found in the\nRoutes next to the city.\p"
	.string "He said that he does it so that he can\nprove that strength comes from how you\l"
	.string "battle, not what you battle with!$"
