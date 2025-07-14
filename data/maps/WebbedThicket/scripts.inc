WebbedThicket_MapScripts::
# 2 "data/maps/WebbedThicket/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, WebbedThicket_OnLoad
	.byte 0


WebbedThicket_OnLoad::
# 6 "data/maps/WebbedThicket/scripts.pory"
	random 3
# 7 "data/maps/WebbedThicket/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_gt WebbedThicket_OnLoad_2
WebbedThicket_OnLoad_1:
# 11 "data/maps/WebbedThicket/scripts.pory"
	random 3
# 12 "data/maps/WebbedThicket/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_gt WebbedThicket_OnLoad_5
WebbedThicket_OnLoad_4:
# 16 "data/maps/WebbedThicket/scripts.pory"
	random 3
# 17 "data/maps/WebbedThicket/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_gt WebbedThicket_OnLoad_8
WebbedThicket_OnLoad_7:
# 21 "data/maps/WebbedThicket/scripts.pory"
	random 3
# 22 "data/maps/WebbedThicket/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_gt WebbedThicket_OnLoad_11
WebbedThicket_OnLoad_10:
# 26 "data/maps/WebbedThicket/scripts.pory"
	random 3
# 27 "data/maps/WebbedThicket/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_gt WebbedThicket_OnLoad_14
WebbedThicket_OnLoad_13:
# 31 "data/maps/WebbedThicket/scripts.pory"
	random 3
# 32 "data/maps/WebbedThicket/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_gt WebbedThicket_OnLoad_17
WebbedThicket_OnLoad_16:
# 36 "data/maps/WebbedThicket/scripts.pory"
	random 3
# 37 "data/maps/WebbedThicket/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_gt WebbedThicket_OnLoad_20
WebbedThicket_OnLoad_19:
# 41 "data/maps/WebbedThicket/scripts.pory"
	random 3
# 42 "data/maps/WebbedThicket/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_gt WebbedThicket_OnLoad_23
WebbedThicket_OnLoad_22:
# 46 "data/maps/WebbedThicket/scripts.pory"
	random 3
# 47 "data/maps/WebbedThicket/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_gt WebbedThicket_OnLoad_26
WebbedThicket_OnLoad_25:
# 51 "data/maps/WebbedThicket/scripts.pory"
	random 3
# 52 "data/maps/WebbedThicket/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_gt WebbedThicket_OnLoad_29
WebbedThicket_OnLoad_28:
# 57 "data/maps/WebbedThicket/scripts.pory"
	goto_if_unset FLAG_ITEM_WEBBED_THICKET, WebbedThicket_OnLoad_31
# 60 "data/maps/WebbedThicket/scripts.pory"
	random 3
# 61 "data/maps/WebbedThicket/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_gt WebbedThicket_OnLoad_34
	return

WebbedThicket_OnLoad_2:
# 8 "data/maps/WebbedThicket/scripts.pory"
	setmetatile 2, 1, METATILE_SecretBase_Ground, FALSE
	goto WebbedThicket_OnLoad_1

WebbedThicket_OnLoad_5:
# 13 "data/maps/WebbedThicket/scripts.pory"
	setmetatile 14, 1, METATILE_SecretBase_Ground, FALSE
	goto WebbedThicket_OnLoad_4

WebbedThicket_OnLoad_8:
# 18 "data/maps/WebbedThicket/scripts.pory"
	setmetatile 19, 1, METATILE_SecretBase_Ground, FALSE
	goto WebbedThicket_OnLoad_7

WebbedThicket_OnLoad_11:
# 23 "data/maps/WebbedThicket/scripts.pory"
	setmetatile 8, 2, METATILE_SecretBase_Ground, FALSE
	goto WebbedThicket_OnLoad_10

WebbedThicket_OnLoad_14:
# 28 "data/maps/WebbedThicket/scripts.pory"
	setmetatile 3, 4, METATILE_SecretBase_Ground, FALSE
	goto WebbedThicket_OnLoad_13

WebbedThicket_OnLoad_17:
# 33 "data/maps/WebbedThicket/scripts.pory"
	setmetatile 11, 4, METATILE_SecretBase_Ground, FALSE
	goto WebbedThicket_OnLoad_16

WebbedThicket_OnLoad_20:
# 38 "data/maps/WebbedThicket/scripts.pory"
	setmetatile 18, 4, METATILE_SecretBase_Ground, FALSE
	goto WebbedThicket_OnLoad_19

WebbedThicket_OnLoad_23:
# 43 "data/maps/WebbedThicket/scripts.pory"
	setmetatile 7, 8, METATILE_SecretBase_Ground, FALSE
	goto WebbedThicket_OnLoad_22

WebbedThicket_OnLoad_26:
# 48 "data/maps/WebbedThicket/scripts.pory"
	setmetatile 15, 8, METATILE_SecretBase_Ground, FALSE
	goto WebbedThicket_OnLoad_25

WebbedThicket_OnLoad_29:
# 53 "data/maps/WebbedThicket/scripts.pory"
	setmetatile 3, 9, METATILE_SecretBase_Ground, FALSE
	goto WebbedThicket_OnLoad_28

WebbedThicket_OnLoad_31:
# 58 "data/maps/WebbedThicket/scripts.pory"
	setmetatile 19, 10, METATILE_SecretBase_Ground, FALSE
	return

WebbedThicket_OnLoad_34:
# 62 "data/maps/WebbedThicket/scripts.pory"
	setmetatile 19, 10, METATILE_SecretBase_Ground, FALSE
	return

