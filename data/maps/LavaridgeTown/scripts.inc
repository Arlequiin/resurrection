LavaridgeTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_unset FLAG_UNUSED_0x028, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
	return

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
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
	playbgm MUS_DP_CATASTROPHE, TRUE
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
	playbgm MUS_DP_ETERNA_FOREST, TRUE
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


forest_final:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

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
	turnobject 60, DIR_EAST
	msgbox_mugshot foret_3_Text_4, MSGBOX_SIGN, MUGSHOT_LISA
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
	msgbox_mugshot foret_3_Text_5, MSGBOX_SIGN, MUGSHOT_LISA_HAPPY
	turnobject 57, DIR_EAST
	turnobject 58, DIR_EAST
	playbgm MUS_DP_CATASTROPHE, TRUE
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
	playbgm MUS_DP_ETERNA_FOREST, TRUE
	msgbox foret_3_Text_21
	msgbox_mugshot foret_3_Text_22, MSGBOX_SIGN, MUGSHOT_LISA_CRY1
	msgbox_mugshot foret_3_Text_23, MSGBOX_SIGN, MUGSHOT_LISA_CRY2
	msgbox_mugshot foret_3_Text_24, MSGBOX_SIGN, MUGSHOT_LISA_CRY3
	msgbox_mugshot foret_3_Text_25, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox_mugshot foret_3_Text_26, MSGBOX_SIGN, MUGSHOT_LISA_CRY1
	msgbox_mugshot foret_3_Text_26, MSGBOX_SIGN, MUGSHOT_LISA_CRY2
	msgbox_mugshot foret_3_Text_27, MSGBOX_SIGN, MUGSHOT_LISA_CRY3
	turnobject 63, DIR_EAST
	msgbox foret_3_Text_28
	msgbox_mugshot foret_3_Text_29, MSGBOX_SIGN, MUGSHOT_LISA_CRY2
	msgbox foret_3_Text_30
	msgbox_mugshot foret_3_Text_31, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox foret_3_Text_32
	msgbox_mugshot foret_3_Text_33, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox foret_3_Text_34
	msgbox_mugshot foret_3_Text_35, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox foret_3_Text_36
	msgbox_mugshot foret_3_Text_37, MSGBOX_SIGN, MUGSHOT_LISA_CRY2
	msgbox foret_3_Text_38
	applymovement 63, forest_final
	waitmovement 63
	fadescreen 1
	removeobject 63
	removeobject 61
	removeobject 59
	removeobject 25
	warp MAP_FALLARBOR_TOWN, 0
	fadescreen 0
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
	msgbox foret_3_Text_39
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
	.string "endroit o?? on aurait pu atterir.$"

foret_1_Text_1:
	.string "De ce que j'ai lu dans les livres,\n"
	.string "nombreux sont les cadavres dans cette\l"
	.string "for??t, rares sont les personnes qui en\l"
	.string "ressortent vivantes.$"

foret_1_Text_2:
	.string "Il faut que l'on se s??pare pour trouver\n"
	.string "la sortie.$"

foret_1_Text_3:
	.string "..A.. Attendez! Les Pok??mon de cette\n"
	.string "for??t sont tr??s dangereux. Je vais\l"
	.string "rester l?? avec ??voli, venez me voir si\l"
	.string "vous avez besoin que je soigne vos\l"
	.string "Pok??mon.$"

foret_1_Text_4:
	.string "Il devait y avoir une trentaine de\n"
	.string "scientifique dans ce train qui\l"
	.string "n'avaient rien fait de mal, qui rentrait\l"
	.string "simplement chez eux apr??s une d??re\l"
	.string "semaine de travail. Quel genre de\l"
	.string "monstre a pu faire ??a?$"

foret_1_Text_5:
	.string "Bon, {PLAYER} on y va?$"

foret_2_Text_0:
	.string "Fais pas de bruit! Je crois que c'est les\n"
	.string "types qui ont fait sauter le train, je\l"
	.string "les ai entendus parler de moteur.$"

foret_2_Text_1:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : Plus que 9 litres d'??nergie\n"
	.string "vitale et on pourra rentrer au Q.G.\l"
	.string "Cette mission se d??roule ?? la\l"
	.string "perfection.$"

foret_2_Text_2:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Tu m'??tonnes y a personne pour\n"
	.string "nous g??ner, ils sont tous en train de\l"
	.string "moisir dans ce qui reste du train.$"

foret_2_Text_3:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : L'??quipe de secours ne peut\n"
	.string "m??me pas nous suspecter s'ils\l"
	.string "viennent, on ne fait que nous promener\l"
	.string "dans la for??t, aucune preuve du\l"
	.string "contraire le moteur a d??j?? ??t?? envoy?? ??\l"
	.string "Ryuichi.$"

foret_2_Text_4:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : D??p??chons-nous quand m??me,\n"
	.string "regarde moi ce bel Onix, aussi grand\l"
	.string "qu'il est il devrait nous rapporter bien\l"
	.string "plus que 9 L d'??nergie vitale.$"

foret_2_Text_5:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : Bah qu'est-ce que t'attends,\n"
	.string "actionne la machine!$"

foret_2_Text_6:
	.string "Regarde ces pauvres Onix, ils fuient, ils\n"
	.string "sont terrifi??s, ils doivent savoir ce\l"
	.string "qui va lui arriver.$"

foret_2_Text_7:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Quoi?! Seulement 5 litres, avec\n"
	.string "cette si grande taille! Faut qu'on\l"
	.string "trouve autre chose.$"

foret_2_Text_8:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : Ouais, magne-toi.$"

foret_2_Text_9:
	.string "Onix.. Il s'est transorm?? en rocher!\n"
	.string "J'avais lu un truc semblable, comme quoi\l"
	.string "les Pok??mon une fois vid??s de leur\l"
	.string "??nergie vitale deviennent de simples\l"
	.string "exuvies ressemblant ?? des rochers,\l"
	.string "dans un livre nomm?? les Mythes de\l"
	.string "Kalos.$"

foret_2_Text_10:
	.string "Putain c'est horrible. Faut qu'on les\n"
	.string "arr??te mais.. pas tout de suite car nos\l"
	.string "Pok??mon pourraient subir le m??me sort.$"

foret_2_Text_11:
	.string "Faut qu'on quitte cette for??t le plus\n"
	.string "vite possible.$"

foret_2_Text_12:
	.string "C'est l'endroit o?? l'Onix a ??t?? tu??.$"

grotto_mirabilis_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Il y a un petit passage entre les\n"
	.string "arbres, voulez-vous vous faufiler\l"
	.string "entre eux?$"

foret_3_Text_0:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : Matte-moi ??a, j'ai trouv?? la\n"
	.string "sortie.$"

foret_3_Text_1:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Tu g??res ! Bon bah, mission\n"
	.string "accomplie ?? nous la prime et les belles\l"
	.string "vacances.$"

foret_3_Text_2:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : T'es con o?? quoi? T'as oubli?? la\n"
	.string "mission ?? Mirabilis? T'as cru que ce\l"
	.string "d??tour ?? la for??t c'??tait pour changer\l"
	.string "d'air?$"

foret_3_Text_3:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Ah oui merde, j'avais\n"
	.string "totalement oubli??.$"

foret_3_Text_4:
	.string "Oh tu as trouv?? la sortie ??voli!$"

foret_3_Text_5:
	.string "Tu es si intelligente! ...$"

foret_3_Text_6:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : Tiens tiens, tu vois ce que je\n"
	.string "vois?$"

foret_3_Text_7:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Oh que oui, un ??voli! Une\n"
	.string "source inestimable d'??n??rgie vitale,\l"
	.string "juste ce qu'il nous fallait.$"

foret_3_Text_8:
	.string "Eh mais! Je reconnais cette voix, vous\n"
	.string "??tes les types louches qui ont fait\l"
	.string "sauter le train!$"

foret_3_Text_9:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : Belle d??duction Sherlock.$"

foret_3_Text_10:
	.string "Bande de terroristes ! Je vais vous\n"
	.string "montrer! ??voli attaque...$"

foret_3_Text_11:
	.string "Esp??ce d'abrutie qu'est-ce que tu fais!\n"
	.string "Ton ??voli, ils vont la... Fuis tant que tu\l"
	.string "le peux!$"

foret_3_Text_12:
	.string "Lisa : Attaque Charge!$"

foret_3_Text_13:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : La machine est pr??te?$"

foret_3_Text_14:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Bien entendu! Je l'active de\n"
	.string "suite...$"

foret_3_Text_15:
	.string "No0o0o0o0o0on!$"

foret_3_Text_16:
	.string "??voli! Pourquoi!!!!$"

foret_3_Text_17:
	.string ".... (larmes)$"

foret_3_Text_18:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Wow! 23 litres d'??nergie vitale!\n"
	.string "Faut croire que la taille n'a aucun\l"
	.string "rapport avec l'??nergie.$"

foret_3_Text_19:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 1 : P'tain t'as entendu ce cri? Je\n"
	.string "reconna??trai ce Pok??mon entre 1000,\l"
	.string "c'est le Lianaja d'Achille.$"

foret_3_Text_20:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Sbire 2 : Oula, ??a va barder! Faut qu'on\n"
	.string "se tire!$"

foret_3_Text_21:
	.string "??? : Oh... Ciel! Quelle horreur!$"

foret_3_Text_22:
	.string "??voli! Je ne me le pardonnerai jamais!$"

foret_3_Text_23:
	.string "Non! Pourquoi suis-je aussi\n"
	.string "irresponsable!$"

foret_3_Text_24:
	.string "Je suis la pire dresseuse qui existe!$"

foret_3_Text_25:
	.string "Allons, Lisa, ce n'est pas de ta faute.\n"
	.string "J'aurais du les en emp??cher.$"

foret_3_Text_26:
	.string "C'est faux!$"

foret_3_Text_27:
	.string "Je suis la seule responsable de ce qui\n"
	.string "s'est pass??, ??a ne sert ?? rien de me\l"
	.string "chercher des excuses.$"

foret_3_Text_28:
	.string "??? : Bon, l'heure n'est pas aux remords.\n"
	.string "Permettez-moi de me pr??senter, Achille,\l"
	.string "garde forestier et champion de l'ar??ne\l"
	.string "de Mirabilis.$"

foret_3_Text_29:
	.string "T'??tais o?? quand c'est arriv??! Tu\n"
	.string "n'aurais pas pu faire quelque chose?!$"

foret_3_Text_30:
	.string "Achille : Excusez-moi, ma petite dame.\n"
	.string "Tout cela s'est produit tellement vite\l"
	.string "que ni moi ni l'??quipe de secours du\l"
	.string "Centre de Recherches n'avons pu\l"
	.string "arriver ?? temps. Ces types ont commis\l"
	.string "l'irr??parable, en l'espace de quelques\l"
	.string "dizaines de minutes, ils ont pris une\l"
	.string "trentaine de vies humaines et aspir??\l"
	.string "l'??nergie vitale de deux Pok??mon\l"
	.string "causant de fait leur mort, un Onix et\l"
	.string "ton pauvre ??voli.$"

foret_3_Text_31:
	.string "Bande d'enfoir??s, je ferai tout pour\n"
	.string "venger toutes ces ??mes!$"

foret_3_Text_32:
	.string "Achille : Tu ne dois pas penser comme\n"
	.string "??a, Midori.$"

foret_3_Text_33:
	.string "Euh, d'o?? vous connaissez mon nom?$"

foret_3_Text_34:
	.string "Tous les champions d'ar??nes\n"
	.string "connaissent vos noms, les dresseurs du\l"
	.string "CDR font partie des plus c??l??bres. On\l"
	.string "en attend beaucoup de vous. Pour en\l"
	.string "revenir ?? ce que je disais, nous ne les\l"
	.string "connaissons pas et, nous ne savons\l"
	.string "rien de leurs motivations. Ces roches\l"
	.string "bizarres, comme ils disent ?? la t??l??\l"
	.string "deviennent de plus en plus nombreuses\l"
	.string "?? Olnyris. Toute personne ayant\l"
	.string "commenc?? ?? enqu??ter l??-dessus\l"
	.string "dispara??t myst??rieusement. Soyez\l"
	.string "discrets. Ne parlez pas de ce ?? quoi\l"
	.string "vous venez d'assister, car vous ??tes\l"
	.string "d'??ventuels t??moins qu'ils tenteront\l"
	.string "de faire dispara??tre.$"

foret_3_Text_35:
	.string "Je veux en savoir plus sur eux.$"

foret_3_Text_36:
	.string "N'en parlons pas plus ici, les murs...\n"
	.string "enfin les arbres ont des oreilles. ??\l"
	.string "Portokov, un homme qu'ils appellent Flo\l"
	.string "r??pondra ?? toutes vos questions. Il\l"
	.string "est cach?? dans un b??timent, avec son\l"
	.string "co??quipier Beladonis. Vous ne le\l"
	.string "chercherez pas longtemps, il vous\l"
	.string "trouvera avant.$"

foret_3_Text_37:
	.string "Que vais-je faire maintenant!$"

foret_3_Text_38:
	.string "Tout d'abord, je vous accompagne ??\n"
	.string "Mirabilis, la suite... On en parlera plus\l"
	.string "tard. Suivez-moi.$"

foret_3_Text_39:
	.string "C'est l'endroit ou l'??voli de Lisa a ??t??\n"
	.string "tu??.$"

onix_1_Text_0:
	.string "Onix!$"

onix_1_Text_1:
	.string "Voulez-vous traverser?$"

onix_1_Text_2:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Les Onix vous aident ?? traverser!$"

reste_onix_Text_0:
	.string "Ce sont les restes d'Onix.$"

reste_evoli_Text_0:
	.string "Ce sont les restes de l'??voli de Lisa.$"

tombes_Text_0:
	.string "?? nos camarades partis trop t??t.$"

Lisa_soin_Text_0:
	.string "Tu veux que je soigne tes Pok??mon?$"

Lisa_soin_Text_1:
	.string "Bonne chance. Je prie pour que rien ne\n"
	.string "vous arrive.$"
