LavaridgeTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
	return


midforest_1:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

foret_1::
	goto_if_unset FLAG_UNUSED_0x025, foret_1_2
foret_1_1:
	releaseall
	end

foret_1_2:
	turnobject 30, DIR_WEST
	turnobject 31, DIR_WEST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox_mugshot foret_1_Text_0, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox foret_1_Text_1
	msgbox_mugshot foret_1_Text_2, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox foret_1_Text_3
	msgbox_mugshot foret_1_Text_4, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox_mugshot foret_1_Text_5, MSGBOX_SIGN, MUGSHOT_MIDORI
	applymovement 30, midforest_1
	waitmovement 30
	removeobject 30, MAP_LAVARIDGE_TOWN
	setflag FLAG_UNUSED_0x025
	goto foret_1_1


tombes::
	msgbox tombes_Text_0
	releaseall
	end


Lisa_soin::
	faceplayer
	msgbox Lisa_soin_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Lisa_soin_2
Lisa_soin_1:
	msgbox Lisa_soin_Text_1
	releaseall
	end

Lisa_soin_2:
	special HealPlayerParty
	playfanfare MUS_HEAL
	goto Lisa_soin_1


Kakuna::
	setwildbattle SPECIES_KAKUNA, 9
	dowildbattle
	end


Ledian::
	setwildbattle SPECIES_LEDIAN, 15
	dowildbattle
	end


Ledyba::
	setwildbattle SPECIES_LEDYBA, 15
	dowildbattle
	end


Beedrill::
	setwildbattle SPECIES_BEEDRILL, 17
	dowildbattle
	end


Caterpie::
	setwildbattle SPECIES_CATERPIE, 5
	dowildbattle
	end


Heracross::
	setwildbattle SPECIES_HERACROSS, 21
	dowildbattle
	end


Scizor::
	setwildbattle SPECIES_SCIZOR, 25
	dowildbattle
	end


Gastly::
	setwildbattle SPECIES_GASTLY, 15
	dowildbattle
	end


Haunter::
	setwildbattle SPECIES_HAUNTER, 25
	dowildbattle
	end


Weedle::
	setwildbattle SPECIES_WEEDLE, 25
	dowildbattle
	end


Exeggcute::
	setwildbattle SPECIES_EXEGGCUTE, 12
	dowildbattle
	end


Oddish::
	setwildbattle SPECIES_ODDISH, 13
	dowildbattle
	end


Drowzee::
	setwildbattle SPECIES_DROWZEE, 13
	dowildbattle
	end


Chansey::
	setwildbattle SPECIES_CHANSEY, 17
	dowildbattle
	end


foret_1_Text_0:
	.string "Putain de merde. C'est vraiment le pire\n"
	.string "endroit où on aurait pu atterir.$"

foret_1_Text_1:
	.string "Lisa : De ce que j'ai lu dans les livres,\n"
	.string "nombreux sont les cadavres dans cette\l"
	.string "forêt, rares sont les personnes qui en\l"
	.string "ressortent vivantes.$"

foret_1_Text_2:
	.string "Il faut que l'on se sépare pour trouver\n"
	.string "la sortie.$"

foret_1_Text_3:
	.string "Lisa : ..A.. Attendez! Les Pokémon de\n"
	.string "cette forêt sont très dangereux. Je\l"
	.string "vais rester là avec Évoli, venez me voir\l"
	.string "si vous avez besoin que je soigne vos\l"
	.string "Pokémon.$"

foret_1_Text_4:
	.string "Il devait y avoir une trentaine de\n"
	.string "scientifique dans ce train qui\l"
	.string "n'avaient rien fait de mal, qui rentrait\l"
	.string "simplement chez eux après une dûre\l"
	.string "semaine de travail. Quel genre de\l"
	.string "monstre a pu faire ça?$"

foret_1_Text_5:
	.string "Bon, {PLAYER} on y va?$"

tombes_Text_0:
	.string "À nos camarades partis trop tôt.$"

Lisa_soin_Text_0:
	.string "Tu veux que je soigne tes Pokémon?$"

Lisa_soin_Text_1:
	.string "Bonne chance. Je prie pour que rien ne\n"
	.string "vous arrive.$"
