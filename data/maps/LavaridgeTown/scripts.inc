LavaridgeTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
	goto_if_unset FLAG_UNUSED_0x026, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	setmetatile 2, 2, 0x2F8, 1
	setmetatile 2, 3, 0x300, 1
	setmetatile 3, 2, 0x2F9, 1
	setmetatile 3, 3, 0x301, 1
	special DrawWholeMapView
	return

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	msgbox LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_Text_0
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

protaforest_2:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_left
	step_end

leave:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

midleave_forest2:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
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
	setvar VAR_UNUSED_0x4083, 1
	goto foret_1_1


foret_2::
	goto_if_unset FLAG_UNUSED_0x026, foret_2_2
foret_2_1:
	releaseall
	end

foret_2_2:
	applymovement OBJ_EVENT_ID_PLAYER, protaforest_2
	msgbox_mugshot foret_2_Text_0, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox foret_2_Text_1
	msgbox foret_2_Text_2
	msgbox foret_2_Text_3
	msgbox foret_2_Text_4
	msgbox foret_2_Text_5
	applymovement 56, leave
	waitmovement 56
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
	applymovement 55, leave
	waitmovement 56
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
	removeobject 56, MAP_LAVARIDGE_TOWN
	removeobject 55, MAP_LAVARIDGE_TOWN
	msgbox_mugshot foret_2_Text_6, MSGBOX_SIGN, MUGSHOT_MIDORI
	fadescreen 3
	playmoncry SPECIES_ONIX, CRY_MODE_FAINT
	msgbox foret_2_Text_7
	msgbox foret_2_Text_8
	removeobject 58, MAP_LAVARIDGE_TOWN
	removeobject 59, MAP_LAVARIDGE_TOWN
	removeobject 57, MAP_LAVARIDGE_TOWN
	setmetatile 2, 2, 0x2F8, TRUE
	setmetatile 2, 3, 0x300, TRUE
	setmetatile 3, 2, 0x2F9, TRUE
	setmetatile 3, 3, 0x301, TRUE
	special DrawWholeMapView
	fadescreen 2
	msgbox_mugshot foret_2_Text_9, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox_mugshot foret_2_Text_10, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox_mugshot foret_2_Text_11, MSGBOX_SIGN, MUGSHOT_MIDORI
	applymovement 54, midleave_forest2
	waitmovement 54
	removeobject 54
	setflag FLAG_UNUSED_0x026
	goto foret_2_1


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
	goto_if_unset FLAG_TEMP_1, Heracross_2
Heracross_1:
	end

Heracross_2:
	setwildbattle SPECIES_HERACROSS, 21
	dowildbattle
	removeobject 10
	setflag FLAG_TEMP_1
	goto Heracross_1


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


PINSIR::
	setwildbattle SPECIES_PINSIR, 17
	dowildbattle
	end


Scyther::
	setwildbattle SPECIES_SCYTHER, 17
	dowildbattle
	end


Parasect::
	setwildbattle SPECIES_PARASECT, 23
	dowildbattle
	end


Paras::
	setwildbattle SPECIES_PARAS, 12
	dowildbattle
	end


Venomoth::
	setwildbattle SPECIES_VENOMOTH, 22
	dowildbattle
	end


Shuckle::
	setwildbattle SPECIES_SHUCKLE, 22
	dowildbattle
	end


Ariados::
	setwildbattle SPECIES_ARIADOS, 21
	dowildbattle
	end


VENONAT::
	setwildbattle SPECIES_VENONAT, 21
	dowildbattle
	end


Venonat::
	setwildbattle SPECIES_VENONAT, 21
	dowildbattle
	end


Spinarak::
	setwildbattle SPECIES_SPINARAK, 13
	dowildbattle
	end


LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Le train a explosé...$"

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

foret_2_Text_0:
	.string "Fais pas de bruit! Je crois que c'est les\n"
	.string "types qui ont fait sauter le train, je\l"
	.string "les ai entendus parler de moteur.$"

foret_2_Text_1:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : Plus que 9 litres d'énergie\n"
	.string "vitale et on pourra rentrer au Q.G.\l"
	.string "Cette mission se déroule à la\l"
	.string "perfection.$"

foret_2_Text_2:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Tu m'étonnes y a personne pour\n"
	.string "nous gêner, ils sont tous en train de\l"
	.string "moisir dans ce qui reste du train.$"

foret_2_Text_3:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : L'équipe de secours ne peut\n"
	.string "même pas nous suspecter s'ils\l"
	.string "viennent, on ne fait que nous promener\l"
	.string "dans la forêt, aucune preuve du\l"
	.string "contraire le moteur a déjà été envoyé à\l"
	.string "Ryuichi.$"

foret_2_Text_4:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Dépéchons-nous quand même,\n"
	.string "regarde moi ce bel Onix, aussi grand\l"
	.string "qu'il est il devrait nous rapporter bien\l"
	.string "plus que 9 L d'énergie vitale.$"

foret_2_Text_5:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : Bah qu'est-ce que t'attends,\n"
	.string "actionne la machine!$"

foret_2_Text_6:
	.string "Regarde ces pauvres Onix, ils fuient, ils\n"
	.string "sont terrifiés, ils doivent savoir ce\l"
	.string "qui va lui arriver.$"

foret_2_Text_7:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Quoi?! Seulement 5 litres, avec\n"
	.string "cette si grande taille! Faut qu'on\l"
	.string "trouve autre chose.$"

foret_2_Text_8:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : Ouais, magne-toi.$"

foret_2_Text_9:
	.string "Onix.. Il s'est transormé en rocher!\n"
	.string "J'avais lu un truc semblable, comme quoi\l"
	.string "les Pokémon une fois vidés de leur\l"
	.string "énergie vitale deviennent de simples\l"
	.string "exuvies ressemblant à des rochers,\l"
	.string "dans un livre nommé les Mythes de\l"
	.string "Kalos.$"

foret_2_Text_10:
	.string "Putain c'est horrible. Faut qu'on les\n"
	.string "arrête mais.. pas tout de suite car nos\l"
	.string "Pokémon pourraient subir le même sort.$"

foret_2_Text_11:
	.string "Faut qu'on quitte cette forêt le plus\n"
	.string "vite possible.$"

tombes_Text_0:
	.string "À nos camarades partis trop tôt.$"

Lisa_soin_Text_0:
	.string "Tu veux que je soigne tes Pokémon?$"

Lisa_soin_Text_1:
	.string "Bonne chance. Je prie pour que rien ne\n"
	.string "vous arrive.$"
