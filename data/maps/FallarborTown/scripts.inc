FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FallarborTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
	return


grotto_solidago::
	msgbox grotto_solidago_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq grotto_solidago_2
grotto_solidago_1:
	releaseall
	end

grotto_solidago_2:
	warp MAP_LAVARIDGE_TOWN, 3
	goto grotto_solidago_1


grotto_solidago_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Il y a un petit passage entre les\n"
	.string "arbres, voulez-vous vous faufiler\l"
	.string "entre eux?$"
