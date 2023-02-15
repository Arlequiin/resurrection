Temple_Forestier_MapScripts::
	.byte 0


escalade_liane:
	walk_up
	walk_up
	walk_up
	step_end

escalade_liane2:
	walk_down
	walk_down
	walk_down
	step_end

escalade_onix:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

fly_jumpluff:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

liane_up::
	msgbox liane_up_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq liane_up_2
liane_up_1:
	releaseall
	end

liane_up_2:
	fadescreen 1
	applymovement OBJ_EVENT_ID_PLAYER, escalade_liane
	waitmovement OBJ_EVENT_ID_PLAYER
	fadescreen 0
	goto liane_up_1


liane_down::
	msgbox liane_down_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq liane_down_2
liane_down_1:
	releaseall
	end

liane_down_2:
	fadescreen 1
	applymovement OBJ_EVENT_ID_PLAYER, escalade_liane2
	waitmovement OBJ_EVENT_ID_PLAYER
	fadescreen 0
	goto liane_down_1


recolt_eau::
	compare VAR_TEMP_9, 1
	goto_if_eq recolt_eau_2
	setvar VAR_TEMP_9, 1
	msgbox recolt_eau_Text_1
recolt_eau_1:
	releaseall
	end

recolt_eau_2:
	msgbox recolt_eau_Text_0
	goto recolt_eau_1


temple_forest_desech1::
	compare VAR_TEMP_2, 1
	goto_if_ne temple_forest_desech1_2
temple_forest_desech1_1:
	releaseall
	end

temple_forest_desech1_2:
	msgbox temple_forest_desech1_Text_0
	compare VAR_TEMP_9, 1
	goto_if_eq temple_forest_desech1_4
	goto temple_forest_desech1_1

temple_forest_desech1_4:
	msgbox temple_forest_desech1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq temple_forest_desech1_6
	goto temple_forest_desech1_1

temple_forest_desech1_6:
	setvar VAR_TEMP_9, 0
	setvar VAR_TEMP_2, 1
	fadescreen 1
	setmetatile 24, 65, 0x2FF, FALSE
	setmetatile 24, 64, 0x326, TRUE
	setmetatile 24, 63, 0x31E, TRUE
	special DrawWholeMapView
	fadescreen 0
	msgbox temple_forest_desech1_Text_2
	goto temple_forest_desech1_1


temple_forest_desech2::
	compare VAR_TEMP_3, 1
	goto_if_ne temple_forest_desech2_2
temple_forest_desech2_1:
	releaseall
	end

temple_forest_desech2_2:
	msgbox temple_forest_desech1_Text_0
	compare VAR_TEMP_9, 1
	goto_if_eq temple_forest_desech2_4
	goto temple_forest_desech2_1

temple_forest_desech2_4:
	msgbox temple_forest_desech1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq temple_forest_desech2_6
	goto temple_forest_desech2_1

temple_forest_desech2_6:
	setvar VAR_TEMP_9, 0
	setvar VAR_TEMP_3, 1
	fadescreen 1
	setmetatile 11, 37, 0x2FF, FALSE
	setmetatile 11, 36, 0x326, TRUE
	setmetatile 11, 35, 0x31E, TRUE
	special DrawWholeMapView
	fadescreen 0
	msgbox temple_forest_desech1_Text_2
	goto temple_forest_desech2_1


temple_forest_desech3::
	compare VAR_TEMP_4, 1
	goto_if_ne temple_forest_desech3_2
temple_forest_desech3_1:
	releaseall
	end

temple_forest_desech3_2:
	msgbox temple_forest_desech1_Text_0
	compare VAR_TEMP_9, 1
	goto_if_eq temple_forest_desech3_4
	goto temple_forest_desech3_1

temple_forest_desech3_4:
	msgbox temple_forest_desech1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq temple_forest_desech3_6
	goto temple_forest_desech3_1

temple_forest_desech3_6:
	setvar VAR_TEMP_9, 0
	setvar VAR_TEMP_4, 1
	fadescreen 1
	setmetatile 19, 31, 0x2FF, FALSE
	setmetatile 19, 30, 0x326, TRUE
	setmetatile 19, 29, 0x31E, TRUE
	special DrawWholeMapView
	fadescreen 0
	msgbox temple_forest_desech1_Text_2
	goto temple_forest_desech3_1


onix_temple::
	msgbox onix_temple_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq onix_temple_2
onix_temple_1:
	releaseall
	end

onix_temple_2:
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
	fadescreen 1
	applymovement OBJ_EVENT_ID_PLAYER, escalade_onix
	waitmovement OBJ_EVENT_ID_PLAYER
	fadescreen 0
	goto onix_temple_1


coton_temple::
	msgbox coton_temple_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq coton_temple_2
coton_temple_1:
	releaseall
	end

coton_temple_2:
	setwildbattle SPECIES_JUMPLUFF, 24
	dowildbattle
	fadescreen 3
	msgbox coton_temple_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, fly_jumpluff
	waitmovement OBJ_EVENT_ID_PLAYER
	fadescreen 2
	goto coton_temple_1


egouts::
	msgbox egouts_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq egouts_2
egouts_1:
	releaseall
	end

egouts_2:
	warp MAP_TEMPLE_FORESTIER, 1
	goto egouts_1


egouts2::
	msgbox egouts_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq egouts2_2
egouts2_1:
	releaseall
	end

egouts2_2:
	warp MAP_TEMPLE_FORESTIER, 2
	goto egouts2_1


Vileplume::
	goto_if_unset FLAG_TEMP_1, Vileplume_2
Vileplume_1:
	end

Vileplume_2:
	setwildbattle SPECIES_VILEPLUME, 27
	dowildbattle
	removeobject 7
	setflag FLAG_TEMP_1
	goto Vileplume_1


weepinbell::
	goto_if_unset FLAG_TEMP_2, weepinbell_2
weepinbell_1:
	releaseall
	end

weepinbell_2:
	setwildbattle SPECIES_WEEPINBELL, 20
	dowildbattle
	removeobject 8
	setflag FLAG_TEMP_2
	goto weepinbell_1


Gloom::
	goto_if_unset FLAG_TEMP_3, Gloom_2
Gloom_1:
	releaseall
	end

Gloom_2:
	setwildbattle SPECIES_GLOOM, 20
	dowildbattle
	removeobject 3
	setflag FLAG_TEMP_3
	goto Gloom_1


solarbeam::
	giveitem ITEM_TM22_SOLAR_BEAM
	setflag FLAG_ITEM_SAFARI_ZONE_NORTH_WEST_TM22
	releaseall
	end


reloadmap::
	fadescreen 1
	special DrawWholeMapView
	fadescreen 0
	releaseall
	end


domimid:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	face_left
	step_end

dominant::
	showobjectat MAP_TEMPLE_FORESTIER, 14
	applymovement 14, domimid
	settotemboost B_POSITION_OPPONENT_LEFT, atk = 2, def = 2, speed = 2, spatk = 2, spdef = 2, acc = 2, evas = 0
	msgbox_mugshot dominant_Text_0, MSGBOX_NPC, MUGSHOT_MIDORI
	special SavePlayerParty
	fadescreen 1
	special ChooseHalfPartyForBattle
	waitstate
	special LoadPlayerParty
	special ReducePlayerPartyToSelectedMons
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	setvar VAR_0x8004, SPECIAL_BATTLE_EREADER
	setvar VAR_0x8005, 0
	special DoSpecialTrainerBattle
	waitstate
	frontier_saveparty
	special LoadPlayerParty
	fadescreen 1
	special SetCB2WhiteOut
	waitstate
	end


liane_up_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Il est possible d'escalader cette liane,\n"
	.string "voulez-vous l'escalader?$"

liane_down_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Il est possible de s'aggriper à cette\n"
	.string "liane pour descendre, voulez-vous\l"
	.string "descendre?$"

recolt_eau_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Vous avez déjà de l'eau.$"

recolt_eau_Text_1:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Vous avez rempli votre bouteille d'eau$"

temple_forest_desech1_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Cette liane est dessechée. Il est\n"
	.string "impossible de s'en servir pour monter.$"

temple_forest_desech1_Text_1:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Voulez-vous l'arroser?$"

temple_forest_desech1_Text_2:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}La plante redevient verte, elle vous\n"
	.string "remercit.$"

onix_temple_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Onix semble vouloir vous aider à\n"
	.string "descendre. Descendre?$"

coton_temple_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Cotovol semble reticient à vous aider à\n"
	.string "traverser... Le combattre?$"

coton_temple_Text_1:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Maintenant calmé, il vous aide à\n"
	.string "traverser.$"

egouts_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Cette bouche d'évacuation des eaux\n"
	.string "semble assez grande pour qu'un humain\l"
	.string "s'y faufile. Voulez-vous vous y\l"
	.string "faufiler?$"

dominant_Text_0:
	.string "Combat choisis 3 pokemon$"
