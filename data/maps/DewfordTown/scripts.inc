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

signgare2::
	lock
	msgbox signgare2_Text_0
	return


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
	msgbox_mugshot arrivee_gare_Text_1, MSGBOX_SIGN, MUGSHOT_MIDORI_HAPPY
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


regard_bas:
	face_down
	step_end

sc_gare_cdr_1::
	faceplayer
	msgbox sc_gare_cdr_1_Text_0
	applymovement 4, regard_bas
	waitmovement 4
	msgbox sc_gare_cdr_1_Text_1
	msgbox sc_gare_cdr_1_Text_2
	msgbox sc_gare_cdr_1_Text_3
	msgbox sc_gare_cdr_1_Text_4
	msgbox sc_gare_cdr_1_Text_5
	msgbox sc_gare_cdr_1_Text_6
	releaseall
	end


sc_gare_cdr_2::
	msgbox sc_gare_cdr_2_Text_0
	releaseall
	end


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

signgare2_Text_0:
	.string "Gare du Centre de Recherches,\n"
	.string "inaugurée en 2009 par son excellente\l"
	.string "le Prof.Chen.$"

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

sc_gare_cdr_1_Text_0:
	.string "....$"

sc_gare_cdr_1_Text_1:
	.string "La mer est si belle, elle reflète les\n"
	.string "doux rayons du soleil et les émotions.$"

sc_gare_cdr_1_Text_2:
	.string "Quand j'étais jeune, chaque dimanche,\n"
	.string "j'allais à la plage, qu'il fasse beau ou\l"
	.string "non.$"

sc_gare_cdr_1_Text_3:
	.string "En observant les vagues danser,\n"
	.string "certaines m'avaient l'air tristes,\l"
	.string "d'autres joyeuses d'être en vie.$"

sc_gare_cdr_1_Text_4:
	.string "Les jours où j'étais triste, elles\n"
	.string "m'avaient toutes l'air tristes,\l"
	.string "inversement joyeuses. Du coup, à\l"
	.string "chaque fois que j'allais à la plage\l"
	.string "j'étais en adéquation avec\l"
	.string "l'environnement ce qui me rassurait.$"

sc_gare_cdr_1_Text_5:
	.string "J'avais l'impression d'être comprise,\n"
	.string "pour une fois de mon existence.$"

sc_gare_cdr_1_Text_6:
	.string "... (larme) .... Laisse moi pleurer veux-tu.$"

sc_gare_cdr_2_Text_0:
	.string "Tu vois la scientifique clouée devant la\n"
	.string "mer, elle est toujours en train de\l"
	.string "chialer. J'ai jamais essayé de la\l"
	.string "comprendre, c'est stupide d'être aussi\l"
	.string "triste, et puis, elle doit pas avoir de\l"
	.string "bien gros problèmes.$"
