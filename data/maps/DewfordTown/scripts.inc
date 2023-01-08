DewfordTown_MapScripts::
	.byte 0


telephone2::
	showmoneybox 14, 1
	msgbox telephone2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq telephone2_2
	msgbox telephone2_Text_5
	hidemoneybox
telephone2_1:
	releaseall
	end

telephone2_2:
	hidemoneybox
	removemoney 100
	showmoneybox 14, 1
	msgbox telephone2_Text_1
	getpartysize
	compare VAR_RESULT, 2
	goto_if_le telephone2_6
	msgbox telephone2_Text_3
telephone2_5:
	msgbox telephone2_Text_4
	hidemoneybox
	goto telephone2_1

telephone2_6:
	msgbox telephone2_Text_2
	goto telephone2_5


midcdr:
	face_left
	step_end

quitmid:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

arrivee_gare::
	goto_if_unset FLAG_UNUSED_0x021, arrivee_gare_2
arrivee_gare_1:
	releaseall
	end

arrivee_gare_2:
	msgbox arrivee_gare_Text_0
	applymovement 2, midcdr
	msgbox arrivee_gare_Text_1
	applymovement 2, quitmid
	waitmovement 0
	removeobject 2
	msgbox arrivee_gare_Text_2
	applymovement 1, quitmid
	waitmovement 0
	removeobject 1
	setflag FLAG_UNUSED_0x021
	msgbox arrivee_gare_Text_3
	setflag FLAG_UNUSED_0x021
	goto arrivee_gare_1


telephone2_Text_0:
	.string "{COLOR LIGHT_GRAY}{SHADOW DARK_GRAY}Téléphoner pour 100¥ ?$"

telephone2_Text_1:
	.string "{COLOR RED}.... bip .... bip .... bip ....$"

telephone2_Text_2:
	.string "{COLOR LIGHT_BLUE}{SHADOW BLUE}Âllo ? Qui est à l'appareil ? Oh,\n"
	.string "{PLAYER} ! Comment se passe ton\l"
	.string "voyage ? Oh ! Déjà au Centre de\l"
	.string "Recherches, eh bah. Ton père avait mis\l"
	.string "9 jours à y arriver mais bon, ce n'était\l"
	.string "pas les mêmes conditions, lui il n'y est\l"
	.string "pas allé en train mais à pied, il a pris\l"
	.string "son vélo, un VTT et a traversé la forêt\l"
	.string "Solidago avec ses amis. Il avait emmené\l"
	.string "des bouteilles d'eau et des biscuits\l"
	.string "pour... rester en vie. Un de ses amis est\l"
	.string "mort pendant le voyage, l'autre a fait\l"
	.string "demi-tour. Bref, je te raconterai ça\l"
	.string "une autre fois. Profite de ton voyage !$"

telephone2_Text_3:
	.string "{COLOR LIGHT_BLUE}{SHADOW BLUE}Allô ? Tu as obtenu ton premier Pokémon\n"
	.string "c'est fantastique ! Viens vite à\l"
	.string "Cellapolis pour me le montrer..\l"
	.string "Prochaine destination Mirabilis c'est\l"
	.string "ça ? Ton train va, si tout se passe bien\l"
	.string "revenir à Cellapolis, après tu prendras\l"
	.string "la Route 1 pour aller à Mirabilis. À\l"
	.string "l'époque où ton père faisait son\l"
	.string "voyage, il n'y avait pas encore\l"
	.string "d'arènes. Ne mets surtout pas tes\l"
	.string "pieds à la forêt Solidago, cette\l"
	.string "forêt... Quiconque y met les pieds n'en\l"
	.string "ressort jamais. Bien, je ne te retarde\l"
	.string "pas plus, au revoir !$"

telephone2_Text_4:
	.string "{COLOR LIGHT_GRAY}{SHADOW DARK_GRAY}Tut !$"

telephone2_Text_5:
	.string "Le téléphone s'est éteint.$"

arrivee_gare_Text_0:
	.string "Lisa : Aaah, enfin arrivés ! Le vent est\n"
	.string "si doux... Ça me fait penser à\l"
	.string "Vaguelone, une ville à Unys.$"

arrivee_gare_Text_1:
	.string "J'vous laisse profiter du vent, moi\n"
	.string "j'file au labo, pas envie de perdre du\l"
	.string "temps.$"

arrivee_gare_Text_2:
	.string "Tellement pressé celui-là, mais je le\n"
	.string "comprends, hâte d'avoir mon Évoli!$"

arrivee_gare_Text_3:
	.string "Tarde pas!$"
