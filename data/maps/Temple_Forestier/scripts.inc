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

liane_up::
	msgbox liane_up_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq liane_up_1
	return

liane_up_1:
	fadescreen 1
	applymovement OBJ_EVENT_ID_PLAYER, escalade_liane
	waitmovement OBJ_EVENT_ID_PLAYER
	fadescreen 0
	releaseall
	end


liane_down::
	msgbox liane_down_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq liane_down_1
	return

liane_down_1:
	fadescreen 1
	applymovement OBJ_EVENT_ID_PLAYER, escalade_liane2
	waitmovement OBJ_EVENT_ID_PLAYER
	fadescreen 0
	releaseall
	end


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
	setmetatile 24, 63, 0x2FF, FALSE
	setmetatile 24, 62, 0x326, TRUE
	setmetatile 24, 61, 0x31E, TRUE
	special DrawWholeMapView
	fadescreen 0
	msgbox temple_forest_desech1_Text_2
	goto temple_forest_desech1_1


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
