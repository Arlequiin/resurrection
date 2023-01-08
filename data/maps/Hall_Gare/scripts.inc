Hall_Gare_MapScripts::
	.byte 0


reserve::
	msgbox reserve_Text_0
	releaseall
	end


sc_amour::
	lock
	faceplayer
	msgbox sc_amour_Text_0
	msgbox sc_amour_Text_1
	msgbox sc_amour_Text_2
	checkitem ITEM_PRETTY_FEATHER
	compare VAR_RESULT, 1
	goto_if_eq sc_amour_2
	msgbox sc_amour_Text_6
sc_amour_1:
	releaseall
	end

sc_amour_2:
	msgbox sc_amour_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq sc_amour_5
	msgbox sc_amour_Text_5
	goto sc_amour_1

sc_amour_5:
	removeitem ITEM_PRETTY_FEATHER, 1
	msgbox sc_amour_Text_4
	random 17
	switch VAR_RESULT
	case 0, sc_amour_9
	case 1, sc_amour_10
	case 2, sc_amour_11
	case 3, sc_amour_12
	case 4, sc_amour_13
	case 5, sc_amour_14
	case 6, sc_amour_15
	case 7, sc_amour_16
	case 8, sc_amour_17
	case 9, sc_amour_18
	case 10, sc_amour_19
	case 11, sc_amour_20
	case 12, sc_amour_21
	case 13, sc_amour_22
	case 14, sc_amour_23
	case 15, sc_amour_24
	case 16, sc_amour_25
	case 17, sc_amour_26
	goto sc_amour_1

sc_amour_9:
	giveitem ITEM_BLACK_BELT
	goto sc_amour_1

sc_amour_10:
	giveitem ITEM_BLACK_GLASSES
	goto sc_amour_1

sc_amour_11:
	giveitem ITEM_CHARCOAL
	goto sc_amour_1

sc_amour_12:
	giveitem ITEM_DRAGON_FANG
	goto sc_amour_1

sc_amour_13:
	giveitem ITEM_HARD_STONE
	goto sc_amour_1

sc_amour_14:
	giveitem ITEM_MAGNET
	goto sc_amour_1

sc_amour_15:
	giveitem ITEM_METAL_COAT
	goto sc_amour_1

sc_amour_16:
	giveitem ITEM_MIRACLE_SEED
	goto sc_amour_1

sc_amour_17:
	giveitem ITEM_MYSTIC_WATER
	goto sc_amour_1

sc_amour_18:
	giveitem ITEM_NEVER_MELT_ICE
	goto sc_amour_1

sc_amour_19:
	giveitem ITEM_POISON_BARB
	goto sc_amour_1

sc_amour_20:
	giveitem ITEM_SHARP_BEAK
	goto sc_amour_1

sc_amour_21:
	giveitem ITEM_SILK_SCARF
	goto sc_amour_1

sc_amour_22:
	giveitem ITEM_SILVER_POWDER
	goto sc_amour_1

sc_amour_23:
	giveitem ITEM_SOFT_SAND
	goto sc_amour_1

sc_amour_24:
	giveitem ITEM_SPELL_TAG
	goto sc_amour_1

sc_amour_25:
	giveitem ITEM_TWISTED_SPOON
	goto sc_amour_1

sc_amour_26:
	giveitem ITEM_LEFTOVERS
	goto sc_amour_1


compostmove:
	walk_right
	face_up
	step_end

compostmoveback:
	walk_left
	face_up
	step_end

seemarc:
	face_down
	step_end

seeprot:
	face_right
	step_end

garde::
	msgbox garde_Text_0
	releaseall
	end


attente::
	lock
	faceplayer
	random 4
	switch VAR_RESULT
	case 0, attente_3
	case 1, attente_4
	case 2, attente_5
	case 3, attente_6
attente_1:
	releaseall
	end

attente_3:
	msgbox attente_Text_0
	goto attente_1

attente_4:
	msgbox attente_Text_1
	goto attente_1

attente_5:
	msgbox attente_Text_2
	goto attente_1

attente_6:
	msgbox attente_Text_3
	goto attente_1


compost::
	checkitem ITEM_EON_TICKET
	compare VAR_RESULT, 1
	goto_if_eq compost_1
	msgbox compost_Text_5
	msgbox compost_Text_6
	msgbox compost_Text_7
	releaseall
	end

compost_1:
	msgbox compost_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, compostmove
	msgbox compost_Text_1
	msgbox compost_Text_2
	msgbox compost_Text_3
	applymovement OBJ_EVENT_ID_PLAYER, compostmoveback
	msgbox compost_Text_4
	removeitem ITEM_EON_TICKET, 1
	releaseall
	end


gardetrain::
	lock
	faceplayer
	goto_if_unset FLAG_TEMP_1, gardetrain_2
	msgbox gardetrain_Text_9
	fadescreen 1
	msgbox gardetrain_Text_10
	fadescreen 0
	applymovement 12, seemarc
	msgbox gardetrain_Text_11
	msgbox gardetrain_Text_12
	applymovement 12, seeprot
	msgbox gardetrain_Text_13
gardetrain_1:
	releaseall
	end

gardetrain_2:
	applymovement 10, seemarc
	msgbox gardetrain_Text_0
	msgbox gardetrain_Text_1
	applymovement 10, seeprot
	msgbox gardetrain_Text_2
	fadescreen 1
	msgbox gardetrain_Text_3
	msgbox gardetrain_Text_4
	msgbox gardetrain_Text_5
	msgbox gardetrain_Text_6
	msgbox gardetrain_Text_7
	fadescreen 0
	warp MAP_ROUTE123_BERRY_MASTERS_HOUSE, 1
	setflag FLAG_TEMP_1
	msgbox gardetrain_Text_8
	goto gardetrain_1


gardetrainb::
	lock
	faceplayer
	msgbox gardetrainb_Text_0
	releaseall
	end


reserve_Text_0:
	.string "Désolé, cette zone est réservée au\n"
	.string "personnel. Le seul motif valable pour y\l"
	.string "accéder est d'avoir un R.D.V avec le\l"
	.string "chef de gare.$"

sc_amour_Text_0:
	.string "Oh ciel! Je suis follement amoureux de...\n"
	.string "Tiens, quelqu'un m'écoute.$"

sc_amour_Text_1:
	.string "Eh, c'est impoli d'écouter les gens\n"
	.string "penser à haute voix! Bon, tu ne la\l"
	.string "connais pas c'est pas grave.$"

sc_amour_Text_2:
	.string "Dis-donc, tu pourrais m'aider! Elle\n"
	.string "adore les Jolies Plumes. Si tu m'en\l"
	.string "apportes, je te donnerai un truc sympa\l"
	.string "en échange.$"

sc_amour_Text_3:
	.string "Oh! Tu en as une! Tu me l'échanges ?$"

sc_amour_Text_4:
	.string "Merci beaucoup! Tiens, c'est pour toi.$"

sc_amour_Text_5:
	.string "Allez! S'il te plaît!$"

sc_amour_Text_6:
	.string "...$"

garde_Text_0:
	.string "Si t'as un train à prendre sors ton\n"
	.string "billet et composte-le. Sinon fous le\l"
	.string "camp y a d'autres personnes qui\l"
	.string "attendent.$"

attente_Text_0:
	.string "Déjà la fin de mon week-end. C'est passé\n"
	.string "tellement vite...$"

attente_Text_1:
	.string "Il n'y a qu'un train par semaine ils\n"
	.string "trouvent quand même le moyen d'être\l"
	.string "lents.$"

attente_Text_2:
	.string "La gare s'est lancé dans une démarche\n"
	.string "de décarbonisation, le train roule\l"
	.string "désormais à l'électrique, entièrement\l"
	.string "issu du renouvelable et d'ici quelques\l"
	.string "années ils prévoient de dématérialiser\l"
	.string "les tickets de train.$"

attente_Text_3:
	.string "Nous autres scientifiques sommes très\n"
	.string "ponctuels et nous avons horreur des\l"
	.string "retards ne dépendant pas nous.$"

compost_Text_0:
	.string "Veuillez composter votre billet avant\n"
	.string "de passer...$"

compost_Text_1:
	.string "{COLOR RED}{SHADOW LIGHT_RED}. . . Bzzzzzzt$"

compost_Text_2:
	.string "{COLOR RED}{SHADOW LIGHT_RED} Clic !$"

compost_Text_3:
	.string "{COLOR RED}{SHADOW LIGHT_RED} Ticket composté !$"

compost_Text_4:
	.string "Bien, je te laisse passer. Il n'y a qu'un\n"
	.string "seul quai il est derrière moi. Évite de\l"
	.string "te perdre gamin...$"

compost_Text_5:
	.string "Puis-je voir votre ticket ?$"

compost_Text_6:
	.string ". . . . . . . . . . . . . .$"

compost_Text_7:
	.string "Ok, vous pouvez passer.$"

gardetrain_Text_0:
	.string "MARC ! Pourquoi t'as laissé un môme\n"
	.string "passer ce train c'est que pour les\l"
	.string "scientifiques du CDR !$"

gardetrain_Text_1:
	.string ".........................................$"

gardetrain_Text_2:
	.string "Veuillez m'excuser, l'ENCF vous souhaite\n"
	.string "la bienvenue.$"

gardetrain_Text_3:
	.string "... Bonjour monsieur, puis-je voir votre\n"
	.string "ticket ?............... Votre numéro est le\l"
	.string "78, ce n'est pas dans cette voiture,\l"
	.string "suivez moi..................... C'est le\l"
	.string "compartiment 4, c'est juste ici, puis-je\l"
	.string "avoir vos bagages ? .................. Bon\l"
	.string "voyage ! Si vous avez besoin de quoique\l"
	.string "ce soit appelez-moi.$"

gardetrain_Text_4:
	.string "{COLOR RED} ATTENTION AU DEPART... DESTINATION LE\n"
	.string "CENTRE DE RECHERCHES ! VEUILLEZ\l"
	.string "ATTACHER VOS CEINTURES DÉPART\l"
	.string "IMMINENT$"

gardetrain_Text_5:
	.string "... S.. Salut, moi c'est Louise, tu peux\n"
	.string "m'appeler Liz, je serai, comme toi une\l"
	.string "dresseuse... Yo, moi c'est Daniel, Dan\l"
	.string "bref comme tu veux. J'compte devenir le\l"
	.string "prochain maître, si tu te mets sur ma\l"
	.string "route je t'exterminerai sans hésiter..\l"
	.string "haha. Dis moi p'tite tête, comment tu\l"
	.string "t'appelles ? ...... {PLAYER} c'est ça ?\l"
	.string "Drôle de nom, ça vient de quel genre de\l"
	.string "bled paumé ça ? Liz : Dan ! Ne sois pas\l"
	.string "méchant avec lui vous vous connaissez\l"
	.string "à peine ! Désolé, il a tendance à être\l"
	.string "désagréable quand il rencontre\l"
	.string "quelqu'un mais il a un bon fond... Je\l"
	.string "crois.$"

gardetrain_Text_6:
	.string "Dan : Vous comptez prendre quel\n"
	.string "Pokémon du coup ? Perso j'ai demandé\l"
	.string "un Pokémon dragon, un Coupenotte, son\l"
	.string "évolution pète la classe. Et toi Liz ?\l"
	.string "Liz : Évoli, sans hésiter une seule\l"
	.string "seconde. Et toi, {PLAYER} ? .... tu n'as\l"
	.string "pas encore choisi ? Le mail disait\l"
	.string "pourtant que le dernier délai pour\l"
	.string "choisir c'était hier ! Espérons que le\l"
	.string "prof ait un autre Pokémon à te donner.$"

gardetrain_Text_7:
	.string "{COLOR LIGHT_RED} (jingle ENCF) Le train est arrivé à\n"
	.string "destination, veuillez prendre vos\l"
	.string "bagages et vous diriger calmement vers\l"
	.string "la sortie.$"

gardetrain_Text_8:
	.string "Bonjour ! Nous espérons que votre\n"
	.string "voyage s'est bien déroulé. Soyez les\l"
	.string "bienvenus au Centre de Recherches\l"
	.string "(CDR).$"

gardetrain_Text_9:
	.string "Bienvenue, l'ENCF vous souhaite un bon\n"
	.string "voyage !$"

gardetrain_Text_10:
	.string "... Bonjour monsieur, puis-je voir votre\n"
	.string "ticket ?............... Votre numéro est le...\l"
	.string "EH, vous n'avez pas de numéro. T'as de\l"
	.string "la chance le train n'a pas encore\l"
	.string "demarré autrement j'aurais appelé la\l"
	.string "police. Allez, fous le camp. On va pas au\l"
	.string "CDR comme ça.$"

gardetrain_Text_11:
	.string "MARC ! Tu fais pas ton travail ducon !$"

gardetrain_Text_12:
	.string "Marc : Toi non plus abruti.$"

gardetrain_Text_13:
	.string "Toi... Déguerpis et vite ou j'appelle les\n"
	.string "keufs.$"

gardetrainb_Text_0:
	.string "T'as oublié ta barbe et ta blouse ou\n"
	.string "quoi ? T'es bien le seul scientifique\l"
	.string "habillé différemment.$"
