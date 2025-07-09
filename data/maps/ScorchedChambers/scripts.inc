ScorchedChambers_MapScripts::
# 2 "data/maps/ScorchedChambers/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedChambers_OnTransition
	.byte 0


ScorchedChambers_OnTransition::
# 6 "data/maps/ScorchedChambers/scripts.pory"
	goto_if_unset FLAG_CLEARED_SCORCHED_CHAMBERS, ScorchedChambers_OnTransition_1
	return

ScorchedChambers_OnTransition_1:
# 7 "data/maps/ScorchedChambers/scripts.pory"
	setflag FLAG_TEMP_A
# 8 "data/maps/ScorchedChambers/scripts.pory"
	goto_if_set FLAG_SCORCHED_CHAMBERS_BRIDGE_SEEN, ScorchedChambers_OnTransition_3
# 10 "data/maps/ScorchedChambers/scripts.pory"
	setvar VAR_TEMP_A, 1
	return

ScorchedChambers_OnTransition_3:
# 9 "data/maps/ScorchedChambers/scripts.pory"
	setvar VAR_TEMP_A, 2
	return


ScorchedChambers_Hiker::
# 15 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_HIKER, ScorchedChambers_Hiker_Text_0, ScorchedChambers_Hiker_Text_1
# 20 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_Picnicker::
# 25 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_PICNICKER, ScorchedChambers_Picnicker_Text_0, ScorchedChambers_Picnicker_Text_1
# 30 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_Guitarist::
# 35 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_GUITARIST, ScorchedChambers_Guitarist_Text_0, ScorchedChambers_Guitarist_Text_1
# 40 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_Guitarist_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_BugCatcher::
# 45 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_BUG_CATCHER, ScorchedChambers_BugCatcher_Text_0, ScorchedChambers_BugCatcher_Text_1
# 50 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_Fisherman::
# 55 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_FISHERMAN, ScorchedChambers_Fisherman_Text_0, ScorchedChambers_Fisherman_Text_1
# 60 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_Fisherman_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_BlackBelt::
# 65 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_BLACKBELT, ScorchedChambers_BlackBelt_Text_0, ScorchedChambers_BlackBelt_Text_1
# 70 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_BlackBelt_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_BattleGirl::
# 75 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_BATTLEGIRL, ScorchedChambers_BattleGirl_Text_0, ScorchedChambers_BattleGirl_Text_1
# 80 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_BattleGirl_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_ExpertF::
# 85 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_EXPERTF, ScorchedChambers_ExpertF_Text_0, ScorchedChambers_ExpertF_Text_1
# 90 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_ExpertF_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_ExpertM::
# 95 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_EXPERTM, ScorchedChambers_ExpertM_Text_0, ScorchedChambers_ExpertM_Text_1
# 100 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_ExpertM_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_Camper::
# 105 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_Camper_Text_0, MSGBOX_NPC
	return


ScorchedChambers_MagmaGrunt1::
# 109 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT1, ScorchedChambers_MagmaGrunt1_Text_0, ScorchedChambers_MagmaGrunt1_Text_1
# 114 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaGrunt1_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_MagmaGrunt2::
# 118 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT2, ScorchedChambers_MagmaGrunt2_Text_0, ScorchedChambers_MagmaGrunt2_Text_1
# 123 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaGrunt2_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_MagmaGrunt3::
# 127 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT3, ScorchedChambers_MagmaGrunt3_Text_0, ScorchedChambers_MagmaGrunt3_Text_1
# 132 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaGrunt3_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_MagmaGrunt4::
# 136 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT4, ScorchedChambers_MagmaGrunt4_Text_0, ScorchedChambers_MagmaGrunt4_Text_1
# 141 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaGrunt4_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_MagmaGrunt5::
# 150 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT5, ScorchedChambers_MagmaGrunt5_Text_0, ScorchedChambers_MagmaGrunt5_Text_0
# 155 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaGrunt5_Text_0, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_MagmaGrunt6::
# 159 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT6, ScorchedChambers_MagmaGrunt5_Text_0, ScorchedChambers_MagmaGrunt5_Text_0
# 164 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaGrunt5_Text_0, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_AlertEvelynn::
# 169 "data/maps/ScorchedChambers/scripts.pory"
	lock
# 170 "data/maps/ScorchedChambers/scripts.pory"
	setvar VAR_TEMP_A, 2
# 171 "data/maps/ScorchedChambers/scripts.pory"
	playse SE_PIN
# 172 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 173 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 174 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, ScorchedChambers_AlertEvelynn_Movement_0
# 175 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 176 "data/maps/ScorchedChambers/scripts.pory"
	message ScorchedChambers_AlertEvelynn_Text_0
# 177 "data/maps/ScorchedChambers/scripts.pory"
	waitmessage
# 178 "data/maps/ScorchedChambers/scripts.pory"
	delay 24
# 179 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_AlertEvelynn_Movement_1
# 180 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 181 "data/maps/ScorchedChambers/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 182 "data/maps/ScorchedChambers/scripts.pory"
	compare VAR_TEMP_2, 49
	goto_if_eq ScorchedChambers_AlertEvelynn_2
# 184 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_AlertEvelynn_Movement_3
ScorchedChambers_AlertEvelynn_1:
# 185 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 186 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 187 "data/maps/ScorchedChambers/scripts.pory"
	special SpawnCameraObject
# 188 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ScorchedChambers_AlertEvelynn_Movement_2
# 189 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 190 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_AlertEvelynn_Text_1
# 191 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, ScorchedChambers_AlertEvelynn_Movement_4
# 192 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 193 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_AlertEvelynn_Text_2
# 194 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, ScorchedChambers_AlertEvelynn_Movement_5
# 195 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 196 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ScorchedChambers_AlertEvelynn_Movement_6
# 197 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 198 "data/maps/ScorchedChambers/scripts.pory"
	special RemoveCameraObject
# 199 "data/maps/ScorchedChambers/scripts.pory"
	delay 48
# 200 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_AlertEvelynn_Movement_7
# 201 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 202 "data/maps/ScorchedChambers/scripts.pory"
	delay 48
# 203 "data/maps/ScorchedChambers/scripts.pory"
	setobjectxy 24, 39, 52
# 204 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, ScorchedChambers_AlertEvelynn_Movement_8
# 205 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 206 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_EvelynnText
# 207 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, ScorchedChambers_AlertEvelynn_Movement_9
# 208 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 209 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_AlertEvelynn_Movement_0
# 210 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, ScorchedChambers_AlertEvelynn_Movement_10
# 211 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 212 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_AlertEvelynn_Movement_11
# 213 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, ScorchedChambers_AlertEvelynn_Movement_12
# 214 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 215 "data/maps/ScorchedChambers/scripts.pory"
	removeobject 24
# 216 "data/maps/ScorchedChambers/scripts.pory"
	release
	return

ScorchedChambers_AlertEvelynn_2:
# 183 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_AlertEvelynn_Movement_2
	goto ScorchedChambers_AlertEvelynn_1


ScorchedChambers_MagmaBridge::
# 220 "data/maps/ScorchedChambers/scripts.pory"
	lock
# 221 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_AlertEvelynn_Movement_2
# 222 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 223 "data/maps/ScorchedChambers/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 224 "data/maps/ScorchedChambers/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq ScorchedChambers_MagmaBridge_2
ScorchedChambers_MagmaBridge_1:
# 228 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaBridge_Movement_0
# 229 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 230 "data/maps/ScorchedChambers/scripts.pory"
	goto_if_set FLAG_SCORCHED_CHAMBERS_BRIDGE_SEEN, ScorchedChambers_MagmaBridge_5
ScorchedChambers_MagmaBridge_4:
# 237 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_AlertEvelynn_Movement_7
# 238 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_AlertEvelynn_Movement_11
# 239 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 240 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_EvelynnText2
# 241 "data/maps/ScorchedChambers/scripts.pory"
	playse SE_USE_ITEM
# 242 "data/maps/ScorchedChambers/scripts.pory"
	waitse
# 243 "data/maps/ScorchedChambers/scripts.pory"
	special HealPlayerParty
# 244 "data/maps/ScorchedChambers/scripts.pory"
	delay 10
# 245 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_AlertEvelynn_Movement_3
# 246 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_AlertEvelynn_Movement_3
# 247 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 248 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaBridge_Text_0
# 249 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_AlertEvelynn_Movement_2
# 250 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_AlertEvelynn_Movement_2
# 251 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 252 "data/maps/ScorchedChambers/scripts.pory"
	goto ScorchedChambers_MagmaMultiBattle
	return

ScorchedChambers_MagmaBridge_2:
# 225 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_AlertEvelynn_Movement_1
# 226 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
	goto ScorchedChambers_MagmaBridge_1

ScorchedChambers_MagmaBridge_5:
# 231 "data/maps/ScorchedChambers/scripts.pory"
	special HealPlayerParty
# 232 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_AlertEvelynn_Movement_2
# 233 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_AlertEvelynn_Movement_2
# 234 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 235 "data/maps/ScorchedChambers/scripts.pory"
	goto ScorchedChambers_MagmaMultiBattle
	goto ScorchedChambers_MagmaBridge_4


ScorchedChambers_MagmaMultiBattle::
# 256 "data/maps/ScorchedChambers/scripts.pory"
	setflag FLAG_SCORCHED_CHAMBERS_BRIDGE_SEEN
# 257 "data/maps/ScorchedChambers/scripts.pory"
	special SavePlayerParty
# 258 "data/maps/ScorchedChambers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 259 "data/maps/ScorchedChambers/scripts.pory"
	special ChooseHalfPartyForBattle
# 260 "data/maps/ScorchedChambers/scripts.pory"
	waitstate
# 261 "data/maps/ScorchedChambers/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ScorchedChambers_MagmaMultiBattle_2
ScorchedChambers_MagmaMultiBattle_1:
# 270 "data/maps/ScorchedChambers/scripts.pory"
	multi_2_vs_2 TRAINER_SCORCHED_CHAMBERS_MAGMA_ADMIN, ScorchedChambers_MagmaMultiBattle_Text_1, TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT7, ScorchedChambers_MagmaMultiBattle_Text_2, PARTNER_SCORCHED_CHAMBERS_EVELYNN
# 277 "data/maps/ScorchedChambers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne ScorchedChambers_MagmaMultiBattle_5
ScorchedChambers_MagmaMultiBattle_4:
# 282 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 25, ScorchedChambers_MagmaMultiBattle_Movement_0
# 283 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 26, ScorchedChambers_MagmaMultiBattle_Movement_0
# 284 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaBridge_Movement_0
# 285 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaBridge_Movement_0
# 286 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 287 "data/maps/ScorchedChambers/scripts.pory"
	delay 20
# 288 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_AlertEvelynn_Movement_0
# 289 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 290 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_3
# 291 "data/maps/ScorchedChambers/scripts.pory"
	playse SE_PIN
# 292 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 25, Common_Movement_ExclamationMark
# 293 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 26, Common_Movement_ExclamationMark
# 294 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 295 "data/maps/ScorchedChambers/scripts.pory"
	delay 16
# 296 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 25, ScorchedChambers_AlertEvelynn_Movement_3
# 297 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 26, ScorchedChambers_AlertEvelynn_Movement_3
# 298 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 299 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_4
# 300 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 25, ScorchedChambers_MagmaMultiBattle_Movement_1
# 301 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 26, ScorchedChambers_MagmaMultiBattle_Movement_1
# 302 "data/maps/ScorchedChambers/scripts.pory"
	delay 30
# 303 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_AlertEvelynn_Movement_2
# 304 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 26
# 305 "data/maps/ScorchedChambers/scripts.pory"
	removeobject 25
# 306 "data/maps/ScorchedChambers/scripts.pory"
	removeobject 26
# 307 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_5
# 308 "data/maps/ScorchedChambers/scripts.pory"
	delay 20
# 309 "data/maps/ScorchedChambers/scripts.pory"
	special SpawnCameraObject
# 310 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_AlertEvelynn_Movement_3
# 311 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ScorchedChambers_MagmaMultiBattle_Movement_2
# 312 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 313 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_6
# 314 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_AlertEvelynn_Movement_2
# 315 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_7
# 316 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_8
# 317 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_9
# 318 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_AlertEvelynn_Movement_0
# 319 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ScorchedChambers_MagmaMultiBattle_Movement_3
# 320 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 321 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MaxieText
# 322 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaMultiBattle_Movement_4
# 323 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_10
# 324 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_AlertEvelynn_Movement_3
# 325 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 326 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_11
# 327 "data/maps/ScorchedChambers/scripts.pory"
	delay 120
# 328 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_AlertEvelynn_Movement_0
# 329 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 330 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_12
# 331 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_MagmaMultiBattle_Movement_5
# 332 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 333 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_13
# 334 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_MagmaMultiBattle_Movement_6
# 335 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 336 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_14
# 337 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_MagmaMultiBattle_Movement_7
# 338 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 339 "data/maps/ScorchedChambers/scripts.pory"
	removeobject 18
# 340 "data/maps/ScorchedChambers/scripts.pory"
	delay 60
# 341 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_AlertEvelynn_Movement_7
# 342 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ScorchedChambers_MagmaMultiBattle_Movement_8
# 343 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 344 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_15
# 345 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaMultiBattle_Movement_7
# 346 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 347 "data/maps/ScorchedChambers/scripts.pory"
	removeobject 27
# 348 "data/maps/ScorchedChambers/scripts.pory"
	special RemoveCameraObject
# 349 "data/maps/ScorchedChambers/scripts.pory"
	setflag FLAG_CLEARED_SCORCHED_CHAMBERS
# 350 "data/maps/ScorchedChambers/scripts.pory"
	setvar VAR_TEMP_A, 0
	return

ScorchedChambers_MagmaMultiBattle_2:
# 262 "data/maps/ScorchedChambers/scripts.pory"
	special LoadPlayerParty
# 263 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_AlertEvelynn_Movement_7
# 264 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 265 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_0
# 266 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_AlertEvelynn_Movement_3
# 267 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 268 "data/maps/ScorchedChambers/scripts.pory"
	goto ScorchedChambers_MagmaMultiBattle
	goto ScorchedChambers_MagmaMultiBattle_1

ScorchedChambers_MagmaMultiBattle_5:
# 278 "data/maps/ScorchedChambers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 279 "data/maps/ScorchedChambers/scripts.pory"
	special SetCB2WhiteOut
# 280 "data/maps/ScorchedChambers/scripts.pory"
	waitstate
	goto ScorchedChambers_MagmaMultiBattle_4


# 174 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_0:
# 174 "data/maps/ScorchedChambers/scripts.pory"
	face_down
	step_end

# 179 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_1:
# 179 "data/maps/ScorchedChambers/scripts.pory"
	walk_right
	step_end

# 183 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_2:
# 183 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
	step_end

# 184 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_3:
# 184 "data/maps/ScorchedChambers/scripts.pory"
	face_up
	step_end

# 191 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_4:
# 191 "data/maps/ScorchedChambers/scripts.pory"
	face_left
# 191 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 191 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 191 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 191 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 191 "data/maps/ScorchedChambers/scripts.pory"
	face_right
# 191 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 191 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 191 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 191 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 191 "data/maps/ScorchedChambers/scripts.pory"
	face_down
	step_end

# 194 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_5:
# 194 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_up
	step_end

# 196 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_6:
# 196 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
	step_end

# 200 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_7:
# 200 "data/maps/ScorchedChambers/scripts.pory"
	face_right
	step_end

# 204 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_8:
# 204 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 204 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 204 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 204 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 204 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 204 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 204 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 204 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 204 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 204 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 204 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 204 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
	step_end

# 207 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_9:
# 207 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 207 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
	step_end

# 210 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_10:
# 210 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
	step_end

# 212 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_11:
# 212 "data/maps/ScorchedChambers/scripts.pory"
	face_left
	step_end

# 213 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_12:
# 213 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 213 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 213 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 213 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 213 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 213 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 213 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
	step_end

# 228 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaBridge_Movement_0:
# 228 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 228 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
	step_end

# 282 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_0:
# 282 "data/maps/ScorchedChambers/scripts.pory"
	lock_facing_direction
# 282 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 282 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 282 "data/maps/ScorchedChambers/scripts.pory"
	unlock_facing_direction
	step_end

# 300 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_1:
# 300 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 300 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 300 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 300 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 300 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 300 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 300 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 300 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
	step_end

# 311 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_2:
# 311 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 311 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 311 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 311 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
	step_end

# 319 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_3:
# 319 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_down
# 319 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_down
	step_end

# 322 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_4:
# 322 "data/maps/ScorchedChambers/scripts.pory"
	lock_facing_direction
# 322 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 322 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 322 "data/maps/ScorchedChambers/scripts.pory"
	unlock_facing_direction
	step_end

# 331 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_5:
# 331 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 331 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 331 "data/maps/ScorchedChambers/scripts.pory"
	face_down
	step_end

# 334 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_6:
# 334 "data/maps/ScorchedChambers/scripts.pory"
	face_left
# 334 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 334 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 334 "data/maps/ScorchedChambers/scripts.pory"
	face_down
	step_end

# 337 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_7:
# 337 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 337 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 337 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 337 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 337 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 337 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 337 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 337 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
	step_end

# 342 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_8:
# 342 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 342 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
	step_end

ScorchedChambers_Hiker_Text_0:
# 17 "data/maps/ScorchedChambers/scripts.pory"
	.string "I like caves, but boy this one is hard to\n"
	.string "be in.$"

ScorchedChambers_Hiker_Text_1:
# 18 "data/maps/ScorchedChambers/scripts.pory"
	.string "I think I need to get fresh air...$"

ScorchedChambers_Hiker_Text_2:
# 20 "data/maps/ScorchedChambers/scripts.pory"
	.string "The heat in here is something else...$"

ScorchedChambers_Picnicker_Text_0:
# 27 "data/maps/ScorchedChambers/scripts.pory"
	.string "I regret coming in here with such thick\n"
	.string "clothing.$"

ScorchedChambers_Picnicker_Text_1:
# 28 "data/maps/ScorchedChambers/scripts.pory"
	.string "I think my Pokemon have heatstroke...$"

ScorchedChambers_Picnicker_Text_2:
# 30 "data/maps/ScorchedChambers/scripts.pory"
	.string "I wish I could stick my head into a\n"
	.string "fridge right now.$"

ScorchedChambers_Guitarist_Text_0:
# 37 "data/maps/ScorchedChambers/scripts.pory"
	.string "We find our greatest tunes in the face\n"
	.string "of adversity.$"

ScorchedChambers_Guitarist_Text_1:
# 38 "data/maps/ScorchedChambers/scripts.pory"
	.string "That's not very rock of you...$"

ScorchedChambers_Guitarist_Text_2:
# 40 "data/maps/ScorchedChambers/scripts.pory"
	.string "My sweat is making it hard to play the\n"
	.string "notes I want.$"

ScorchedChambers_BugCatcher_Text_0:
# 47 "data/maps/ScorchedChambers/scripts.pory"
	.string "I think I came to the wrong place.$"

ScorchedChambers_BugCatcher_Text_1:
# 48 "data/maps/ScorchedChambers/scripts.pory"
	.string "Bugs and lava, not a great mix.$"

ScorchedChambers_BugCatcher_Text_2:
# 50 "data/maps/ScorchedChambers/scripts.pory"
	.string "I thought training here would be a good\n"
	.string "test for my bugs...$"

ScorchedChambers_Fisherman_Text_0:
# 57 "data/maps/ScorchedChambers/scripts.pory"
	.string "I don't seem to be catching very much,\n"
	.string "not sure why.$"

ScorchedChambers_Fisherman_Text_1:
# 58 "data/maps/ScorchedChambers/scripts.pory"
	.string "Well.$"

ScorchedChambers_Fisherman_Text_2:
# 60 "data/maps/ScorchedChambers/scripts.pory"
	.string "What? Lava?$"

ScorchedChambers_BlackBelt_Text_0:
# 67 "data/maps/ScorchedChambers/scripts.pory"
	.string "SUFFERING BUILDS CHARACTER!$"

ScorchedChambers_BlackBelt_Text_1:
# 68 "data/maps/ScorchedChambers/scripts.pory"
	.string "I GOT SWEAT IN MY EYES AHHHHH!!!$"

ScorchedChambers_BlackBelt_Text_2:
# 70 "data/maps/ScorchedChambers/scripts.pory"
	.string "I think the intense heat might be\n"
	.string "impacting my mental faculties.$"

ScorchedChambers_BattleGirl_Text_0:
# 77 "data/maps/ScorchedChambers/scripts.pory"
	.string "What is that guy yelling about?$"

ScorchedChambers_BattleGirl_Text_1:
# 78 "data/maps/ScorchedChambers/scripts.pory"
	.string "...is he okay?$"

ScorchedChambers_BattleGirl_Text_2:
# 80 "data/maps/ScorchedChambers/scripts.pory"
	.string "...oh man I'm so sticky with sweat...$"

ScorchedChambers_ExpertF_Text_0:
# 87 "data/maps/ScorchedChambers/scripts.pory"
	.string "Ah, you also fell down.$"

ScorchedChambers_ExpertF_Text_1:
# 88 "data/maps/ScorchedChambers/scripts.pory"
	.string "Well, you sure are energetic.$"

ScorchedChambers_ExpertF_Text_2:
# 90 "data/maps/ScorchedChambers/scripts.pory"
	.string "I fell down this hole a while ago, but\n"
	.string "it's like a sauna in here so it's alright.$"

ScorchedChambers_ExpertM_Text_0:
# 97 "data/maps/ScorchedChambers/scripts.pory"
	.string "Oh dear I think I put my back out.$"

ScorchedChambers_ExpertM_Text_1:
# 98 "data/maps/ScorchedChambers/scripts.pory"
	.string "I'm much too old to be falling into\n"
	.string "caves...$"

ScorchedChambers_ExpertM_Text_2:
# 100 "data/maps/ScorchedChambers/scripts.pory"
	.string "I might be too sore to make my way out...$"

ScorchedChambers_Camper_Text_0:
# 105 "data/maps/ScorchedChambers/scripts.pory"
	.string "Apparently you can jump down from here,\nbut it looks a little high for me...$"

ScorchedChambers_MagmaGrunt1_Text_0:
# 111 "data/maps/ScorchedChambers/scripts.pory"
	.string "Hey! You're not supposed to be in here!$"

ScorchedChambers_MagmaGrunt1_Text_1:
# 112 "data/maps/ScorchedChambers/scripts.pory"
	.string "Well shoot, I guess I can't stop you...$"

ScorchedChambers_MagmaGrunt1_Text_2:
# 114 "data/maps/ScorchedChambers/scripts.pory"
	.string "I'm supposed to stop people from coming\n"
	.string "in, but what can I do if they just beat\l"
	.string "me up?$"

ScorchedChambers_MagmaGrunt2_Text_0:
# 120 "data/maps/ScorchedChambers/scripts.pory"
	.string "Huh? Is Fred not doing his job?$"

ScorchedChambers_MagmaGrunt2_Text_1:
# 121 "data/maps/ScorchedChambers/scripts.pory"
	.string "Oh, well that explains it.$"

ScorchedChambers_MagmaGrunt2_Text_2:
# 123 "data/maps/ScorchedChambers/scripts.pory"
	.string "Geez he could have at least alerted us\n"
	.string "that someone got in.$"

ScorchedChambers_MagmaGrunt3_Text_0:
# 129 "data/maps/ScorchedChambers/scripts.pory"
	.string "WAH! Where did you come from?$"

ScorchedChambers_MagmaGrunt3_Text_1:
# 130 "data/maps/ScorchedChambers/scripts.pory"
	.string "This isn't it...$"

ScorchedChambers_MagmaGrunt3_Text_2:
# 132 "data/maps/ScorchedChambers/scripts.pory"
	.string "I'm trying to stay cool back here but\n"
	.string "man, I'm sweltering.$"

ScorchedChambers_MagmaGrunt4_Text_0:
# 138 "data/maps/ScorchedChambers/scripts.pory"
	.string "If only my arms were a little longer!$"

ScorchedChambers_MagmaGrunt4_Text_1:
# 139 "data/maps/ScorchedChambers/scripts.pory"
	.string "Curse my tiny Tyrunt arms...$"

ScorchedChambers_MagmaGrunt4_Text_2:
# 141 "data/maps/ScorchedChambers/scripts.pory"
	.string "Idk what that item is but I sure do want\n"
	.string "it.$"

ScorchedChambers_MagmaGrunt5_Text_0:
# 152 "data/maps/ScorchedChambers/scripts.pory"
	.string "$"

ScorchedChambers_AlertEvelynn_Text_0:
# 176 "data/maps/ScorchedChambers/scripts.pory"
	.string "HEY! KID!$"

ScorchedChambers_AlertEvelynn_Text_1:
# 190 "data/maps/ScorchedChambers/scripts.pory"
	.string "What are you even doing here?\p...\pHuh? I can't hear you from down here!$"

ScorchedChambers_AlertEvelynn_Text_2:
# 193 "data/maps/ScorchedChambers/scripts.pory"
	.string "Wait right there!\nI'll come up!$"

ScorchedChambers_MagmaBridge_Text_0:
# 248 "data/maps/ScorchedChambers/scripts.pory"
	.string "Now that you've had your little chat,\nlet's get down to business.$"

ScorchedChambers_MagmaMultiBattle_Text_0:
# 265 "data/maps/ScorchedChambers/scripts.pory"
	.string "What are you doing?\nWe have to fight them!$"

ScorchedChambers_MagmaMultiBattle_Text_1:
# 272 "data/maps/ScorchedChambers/scripts.pory"
	.string "How did you...$"

ScorchedChambers_MagmaMultiBattle_Text_2:
# 274 "data/maps/ScorchedChambers/scripts.pory"
	.string "My promotion... I knew\nTeam Magma didn't have job security!$"

ScorchedChambers_MagmaMultiBattle_Text_3:
# 290 "data/maps/ScorchedChambers/scripts.pory"
	.string "Haa...\pYou're dismissed.$"

ScorchedChambers_MagmaMultiBattle_Text_4:
# 299 "data/maps/ScorchedChambers/scripts.pory"
	.string "Yes sir!$"

ScorchedChambers_MagmaMultiBattle_Text_5:
# 307 "data/maps/ScorchedChambers/scripts.pory"
	.string "Maxie!\pWhat are you up to now?!$"

ScorchedChambers_MagmaMultiBattle_Text_6:
# 313 "data/maps/ScorchedChambers/scripts.pory"
	.string "Doesn't it seem strange, Miss Evelynn?\p$"

ScorchedChambers_MagmaMultiBattle_Text_7:
# 315 "data/maps/ScorchedChambers/scripts.pory"
	.string "What does?$"

ScorchedChambers_MagmaMultiBattle_Text_8:
# 316 "data/maps/ScorchedChambers/scripts.pory"
	.string "Everything.\pThe warmth of this lava,\nthe strength of our Pokemon,\leven our very lives.$"

ScorchedChambers_MagmaMultiBattle_Text_9:
# 317 "data/maps/ScorchedChambers/scripts.pory"
	.string "Have you gone mad?$"

ScorchedChambers_MagmaMultiBattle_Text_10:
# 323 "data/maps/ScorchedChambers/scripts.pory"
	.string "I...\pOf course I know that!\pWho wouldn't know their own name?!$"

ScorchedChambers_MagmaMultiBattle_Text_11:
# 326 "data/maps/ScorchedChambers/scripts.pory"
	.string "Yes of course, just as my name is Maxie,\lyour name is Evelynn.$"

ScorchedChambers_MagmaMultiBattle_Text_12:
# 330 "data/maps/ScorchedChambers/scripts.pory"
	.string "...\pI see it's still too early.$"

ScorchedChambers_MagmaMultiBattle_Text_13:
# 333 "data/maps/ScorchedChambers/scripts.pory"
	.string "I shall be taking my leave here,\nI hope to see you again Evelynn.$"

ScorchedChambers_MagmaMultiBattle_Text_14:
# 336 "data/maps/ScorchedChambers/scripts.pory"
	.string "And I hope to never see your annoying\nfriend again.$"

ScorchedChambers_MagmaMultiBattle_Text_15:
# 344 "data/maps/ScorchedChambers/scripts.pory"
	.string "I uh...\pThanks for the help...$"

ScorchedChambers_EvelynnText::
# 353 "data/maps/ScorchedChambers/scripts.pory"
	.string "I see that you've already taken care of\nsome of the guards.\p"
	.string "If I had known you would be doing that,\nI wouldn't have bothered sneaking in...\p"
	.string "Whatever,\nhow about a temporary alliance?\p"
	.string "I'm not really sure what all these\nTeam Magma goons are after,\lbut it can't be good, whatever it is.\p"
	.string "I think I saw their Boss up ahead,\nbut he's all mine to take care of,\lso if you don't mind...$"

ScorchedChambers_EvelynnText2::
# 361 "data/maps/ScorchedChambers/scripts.pory"
	.string "I know I know,\n I didn't make it very far.\p"
	.string "But I think we'd better work together\nto take down these two.\p"
	.string "I'll quickly heal your Pokemon,\nso you better not hold me back!$"

ScorchedChambers_MaxieText::
# 367 "data/maps/ScorchedChambers/scripts.pory"
	.string "Far from it!\nI'd say you're the one who's mad here.\p"
	.string "Tell me, how much do you remember?\p"
	.string "Do you know where we are?\pDo you know who I am?\pDo you even know your name?$"
