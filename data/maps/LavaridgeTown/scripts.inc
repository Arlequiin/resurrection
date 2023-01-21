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
	turnobject 24, DIR_WEST
	turnobject 25, DIR_WEST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox_mugshot foret_1_Text_0, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox_mugshot foret_1_Text_1, MSGBOX_SIGN, MUGSHOT_LISA_ANGRY
	msgbox_mugshot foret_1_Text_2, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox_mugshot foret_1_Text_3, MSGBOX_SIGN, MUGSHOT_LISA_AWK
	msgbox_mugshot foret_1_Text_4, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox_mugshot foret_1_Text_5, MSGBOX_SIGN, MUGSHOT_MIDORI
	applymovement 24, midforest_1
	waitmovement 24
	hideobjectat 60, MAP_LAVARIDGE_TOWN
	hideobjectat 61, MAP_LAVARIDGE_TOWN
	setflag FLAG_UNUSED_0x027
	removeobject 24, MAP_LAVARIDGE_TOWN
	setflag FLAG_UNUSED_0x025
	setvar VAR_UNUSED_0x4083, 1
	goto foret_1_1


foret_2::
	goto_if_unset FLAG_UNUSED_0x026, foret_2_2
	compare VAR_TEMP_2, 0
	goto_if_eq foret_2_5
foret_2_1:
	releaseall
	end

foret_2_2:
	applymovement OBJ_EVENT_ID_PLAYER, protaforest_2
	playbgm MUS_DP_CATASTROPHE, FALSE
	msgbox_mugshot foret_2_Text_0, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox foret_2_Text_1
	msgbox foret_2_Text_2
	msgbox foret_2_Text_3
	msgbox foret_2_Text_4
	msgbox foret_2_Text_5
	closemessage
	applymovement 51, leave
	waitmovement 51
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
	applymovement 50, leave
	waitmovement 50
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
	removeobject 50, MAP_LAVARIDGE_TOWN
	removeobject 51, MAP_LAVARIDGE_TOWN
	msgbox_mugshot foret_2_Text_6, MSGBOX_SIGN, MUGSHOT_MIDORI
	fadescreen 3
	playmoncry SPECIES_ONIX, CRY_MODE_FAINT
	msgbox foret_2_Text_7
	msgbox foret_2_Text_8
	removeobject 53, MAP_LAVARIDGE_TOWN
	removeobject 54, MAP_LAVARIDGE_TOWN
	removeobject 52, MAP_LAVARIDGE_TOWN
	setmetatile 2, 2, 0x2F8, TRUE
	setmetatile 2, 3, 0x300, TRUE
	setmetatile 3, 2, 0x2F9, TRUE
	setmetatile 3, 3, 0x301, TRUE
	special DrawWholeMapView
	fadescreen 2
	msgbox_mugshot foret_2_Text_9, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox_mugshot foret_2_Text_10, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox_mugshot foret_2_Text_11, MSGBOX_SIGN, MUGSHOT_MIDORI
	applymovement 49, midleave_forest2
	waitmovement 49
	removeobject 49
	showobjectat 56, MAP_LAVARIDGE_TOWN
	showobjectat 57, MAP_LAVARIDGE_TOWN
	setflag FLAG_UNUSED_0x026
	clearflag FLAG_UNUSED_0x027
	playbgm MUS_DP_ETERNA_FOREST, FALSE
	goto foret_2_1

foret_2_5:
	setmetatile 2, 2, 0x2F8, TRUE
	setmetatile 2, 3, 0x300, TRUE
	setmetatile 3, 2, 0x2F9, TRUE
	setmetatile 3, 3, 0x301, TRUE
	fadescreen 3
	special DrawWholeMapView
	msgbox foret_2_Text_12
	fadescreen 2
	setvar VAR_TEMP_2, 1
	goto foret_2_1


mov_evoli:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

down_evoli:
	walk_down
	face_left
	step_end

seeevent:
	walk_up
	walk_up
	walk_right
	walk_right
	face_up
	step_end

grotto_mirabilis::
	msgbox grotto_mirabilis_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq grotto_mirabilis_2
grotto_mirabilis_1:
	releaseall
	end

grotto_mirabilis_2:
	warp MAP_FALLARBOR_TOWN, 0
	goto grotto_mirabilis_1


foret_3::
	goto_if_unset FLAG_UNUSED_0x028, foret_3_2
	compare VAR_TEMP_3, 0
	goto_if_eq foret_3_5
foret_3_1:
	releaseall
	end

foret_3_2:
	applymovement OBJ_EVENT_ID_PLAYER, seeevent
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox foret_3_Text_0
	msgbox foret_3_Text_1
	msgbox foret_3_Text_2
	msgbox foret_3_Text_3
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
	applymovement 60, mov_evoli
	waitmovement 60
	applymovement 60, down_evoli
	waitmovement 60
	applymovement 59, mov_evoli
	waitmovement 59
	applymovement 59, down_evoli
	waitmovement 59
	turnobject 60, DIR_NORTH
	msgbox_mugshot foret_3_Text_4, MSGBOX_SIGN, MUGSHOT_LISA
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
	msgbox_mugshot foret_3_Text_5, MSGBOX_SIGN, MUGSHOT_LISA_HAPPY
	turnobject 57, DIR_EAST
	turnobject 58, DIR_EAST
	playbgm MUS_DP_CATASTROPHE, FALSE
	msgbox foret_3_Text_6
	msgbox foret_3_Text_7
	turnobject 59, DIR_WEST
	turnobject 60, DIR_WEST
	msgbox_mugshot foret_3_Text_8, MSGBOX_SIGN, MUGSHOT_LISA_ANGRY
	msgbox foret_3_Text_9
	msgbox_mugshot foret_3_Text_10, MSGBOX_SIGN, MUGSHOT_LISA_ANGRY
	applymovement 61, mov_evoli
	applymovement 61, down_evoli
	waitmovement 61
	turnobject 61, DIR_WEST
	msgbox_mugshot foret_3_Text_11, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox_mugshot foret_3_Text_12, MSGBOX_SIGN, MUGSHOT_LISA_ANGRY
	msgbox foret_3_Text_13
	msgbox foret_3_Text_14
	fadescreen 3
	playmoncry SPECIES_EEVEE, CRY_MODE_FAINT
	msgbox foret_3_Text_15
	msgbox foret_3_Text_16
	msgbox foret_3_Text_17
	msgbox foret_3_Text_18
	playmoncry SPECIES_SERVINE, CRY_MODE_NORMAL
	msgbox foret_3_Text_19
	msgbox foret_3_Text_20
	setmetatile 53, 3, 0x2F8, TRUE
	setmetatile 53, 4, 0x300, TRUE
	setmetatile 54, 3, 0x2F9, TRUE
	setmetatile 54, 4, 0x301, TRUE
	special DrawWholeMapView
	removeobject 57
	removeobject 58
	removeobject 60
	showobjectat 63, MAP_LAVARIDGE_TOWN
	fadescreen 2
	turnobject 63, DIR_NORTH
	playbgm MUS_DP_ETERNA_FOREST, FALSE
	setflag FLAG_UNUSED_0x028
	releaseall
	end

foret_3_5:
	fadescreen 3
	setmetatile 53, 3, 0x2F8, TRUE
	setmetatile 53, 4, 0x300, TRUE
	setmetatile 54, 3, 0x2F9, TRUE
	setmetatile 54, 4, 0x301, TRUE
	special DrawWholeMapView
	msgbox foret_3_Text_21
	fadescreen 2
	setvar VAR_TEMP_3, 1
	goto foret_3_1


onix_1::
	faceplayer
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
	msgbox onix_1_Text_0
	msgbox onix_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq onix_1_1
	return

onix_1_1:
	fadescreen 3
	msgbox onix_1_Text_2
	warp MAP_LAVARIDGE_TOWN, 2
	fadescreen 2
	return


onix_2::
	faceplayer
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
	msgbox onix_1_Text_0
	msgbox onix_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq onix_2_1
	return

onix_2_1:
	fadescreen 3
	msgbox onix_1_Text_2
	warp MAP_LAVARIDGE_TOWN, 1
	fadescreen 2
	return


reste_onix::
	msgbox reste_onix_Text_0
	releaseall
	end


reste_evoli::
	msgbox reste_evoli_Text_0
	releaseall
	end


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
	msgbox_mugshot Lisa_soin_Text_1, MSGBOX_SIGN, MUGSHOT_LISA
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


foret_1_Text_0:
	.string "Putain de merde. C'est vraiment le pire\n"
	.string "endroit où on aurait pu atterir.$"

foret_1_Text_1:
	.string "De ce que j'ai lu dans les livres,\n"
	.string "nombreux sont les cadavres dans cette\l"
	.string "forêt, rares sont les personnes qui en\l"
	.string "ressortent vivantes.$"

foret_1_Text_2:
	.string "Il faut que l'on se sépare pour trouver\n"
	.string "la sortie.$"

foret_1_Text_3:
	.string "..A.. Attendez! Les Pokémon de cette\n"
	.string "forêt sont très dangereux. Je vais\l"
	.string "rester là avec Évoli, venez me voir si\l"
	.string "vous avez besoin que je soigne vos\l"
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

foret_2_Text_12:
	.string "C'est l'endroit où l'Onix a été tué.$"

grotto_mirabilis_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Il y a un petit passage entre les\n"
	.string "arbres, voulez-vous vous faufiler\l"
	.string "entre eux?$"

foret_3_Text_0:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : Matte-moi ça, j'ai trouvé la\n"
	.string "sortie.$"

foret_3_Text_1:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Tu gères ! Bon bah, mission\n"
	.string "accomplie à nous la prime et les belles\l"
	.string "vacances.$"

foret_3_Text_2:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : T'es con où quoi? T'as oublié la\n"
	.string "mission à Mirabilis? T'as cru que ce\l"
	.string "détour à la forêt c'était pour changer\l"
	.string "d'air?$"

foret_3_Text_3:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Ah oui merde, j'avais\n"
	.string "totalement oublié.$"

foret_3_Text_4:
	.string "Oh tu as trouvé la sortie Évoli!$"

foret_3_Text_5:
	.string "Tu es si intelligente! ...$"

foret_3_Text_6:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : Tiens tiens, tu vois ce que je\n"
	.string "vois?$"

foret_3_Text_7:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Oh que oui, un Évoli! Une\n"
	.string "source inestimable d'énérgie vitale,\l"
	.string "juste ce qu'il nous fallait.$"

foret_3_Text_8:
	.string "Eh mais! Je reconnais cette voix, vous\n"
	.string "êtes les types louches qui ont fait\l"
	.string "sauter le train!$"

foret_3_Text_9:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : Belle déduction Sherlock.$"

foret_3_Text_10:
	.string "Bande de terroristes ! Je vais vous\n"
	.string "montrer! Évoli attaque...$"

foret_3_Text_11:
	.string "Espèce d'abrutie qu'est-ce que tu fais!\n"
	.string "Ton Évoli, ils vont la... Fuis tant que tu\l"
	.string "le peux!$"

foret_3_Text_12:
	.string "Lisa : Attaque Charge!$"

foret_3_Text_13:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : La machine est prête?$"

foret_3_Text_14:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Bien entendu! Je l'active de\n"
	.string "suite...$"

foret_3_Text_15:
	.string "No0o0o0o0o0on!$"

foret_3_Text_16:
	.string "Évoli! Pourquoi!!!!$"

foret_3_Text_17:
	.string ".... (larmes)$"

foret_3_Text_18:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Wow! 23 litres d'énergie vitale!\n"
	.string "Faut croire que la taille n'a aucun\l"
	.string "rapport avec l'énergie.$"

foret_3_Text_19:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : P'tain t'as entendu ce cri? Je\n"
	.string "reconnaîtrai ce Pokémon entre 1000,\l"
	.string "c'est le Lianaja d'Achille.$"

foret_3_Text_20:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Oula, ça va barder! Faut qu'on\n"
	.string "se tire!$"

foret_3_Text_21:
	.string "C'est l'endroit ou l'Évoli de Lisa a été\n"
	.string "tué.$"

onix_1_Text_0:
	.string "Onix!$"

onix_1_Text_1:
	.string "Voulez-vous traverser?$"

onix_1_Text_2:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Les Onix vous aident à traverser!$"

reste_onix_Text_0:
	.string "Ce sont les restes d'Onix.$"

reste_evoli_Text_0:
	.string "Ce sont les restes de l'Évoli de Lisa.$"

tombes_Text_0:
	.string "À nos camarades partis trop tôt.$"

Lisa_soin_Text_0:
	.string "Tu veux que je soigne tes Pokémon?$"

Lisa_soin_Text_1:
	.string "Bonne chance. Je prie pour que rien ne\n"
	.string "vous arrive.$"
