Hall_Gare_MapScripts::
	.byte 0


reserve::
	faceplayer
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
	random 18
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


droite:
	walk_right
	face_up
	step_end

gauche:
	walk_left
	face_down
	step_end

seemarc:
	face_down
	step_end

seeprot:
	face_right
	step_end

garde::
	checkitem ITEM_EON_TICKET
	compare VAR_RESULT, 1
	goto_if_eq garde_2
	compare VAR_TEMP_1, 0
	goto_if_eq garde_5
	msgbox garde_Text_2
garde_1:
	releaseall
	end

garde_2:
	msgbox garde_Text_0
	goto garde_1

garde_5:
	msgbox garde_Text_1
	applymovement 9, gauche
	waitmovement 9
	setvar VAR_TEMP_1, 1
	goto garde_1


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
	goto_if_eq compost_2
	msgbox compost_Text_2
compost_1:
	releaseall
	end

compost_2:
	playse SE_M_EXPLOSION
	msgbox compost_Text_0
	waitse
	playfanfare FANFARE_MOVE_DELETED
	msgbox compost_Text_1
	waitfanfare
	removeitem ITEM_EON_TICKET, 1
	goto compost_1


marc::
	msgbox marc_Text_0
	fadescreen 1
	msgbox marc_Text_1
	msgbox marc_Text_2
	msgbox marc_Text_3
	msgbox marc_Text_2
	msgbox marc_Text_4
	showmoneybox 14, 1
	msgbox marc_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq marc_2
	msgbox marc_Text_7
marc_1:
	hidemoneybox
	warp MAP_TRAIN, 0
	fadescreen 0
	releaseall
	end

marc_2:
	hidemoneybox
	removemoney 150
	showmoneybox 14, 1
	msgbox marc_Text_6
	goto marc_1


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

garde_Text_1:
	.string "Ah tu fais partie des 3 boursiers.\n"
	.string "Bienvenue à la gare de Cellapolis Sud,\l"
	.string "parle au garde derrière, il t'indiquera\l"
	.string "le chemin.$"

garde_Text_2:
	.string "Bonne route!$"

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
	.string "{COLOR RED}{SHADOW LIGHT_RED}. . . Bzzzzzzt... Clic$"

compost_Text_1:
	.string "{COLOR RED}{SHADOW LIGHT_RED} Ticket composté !$"

compost_Text_2:
	.string "{COLOR RED}{SHADOW LIGHT_RED}Votre ticket est déjà composté.$"

marc_Text_0:
	.string "Bonjour, laissez-moi vous accompagner\n"
	.string "à votre train.$"

marc_Text_1:
	.string "Puis-je voir votre ticket?$"

marc_Text_2:
	.string ".....$"

marc_Text_3:
	.string "Place 87, suivez-moi s'il vous plaît.$"

marc_Text_4:
	.string "Voilà, c'est ici. Je m'occupe de vos\n"
	.string "bagages.$"

marc_Text_5:
	.string "Lui donner un pourboire de 150¥?$"

marc_Text_6:
	.string "Merci beaucoup! Bonne route!$"

marc_Text_7:
	.string "Hmpf..$"
