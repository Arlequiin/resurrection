OldaleTown_MapScripts::
	.byte 0


SignGare::
	msgbox SignGare_Text_0
	releaseall
	end


Telephone::
	msgbox Telephone_Text_0
	releaseall
	end


agent::
	msgbox agent_Text_0
	releaseall
	end


hotesse::
	faceplayer
	msgbox hotesse_Text_0
	msgbox hotesse_Text_1
	releaseall
	end


sc_gare_1::
	faceplayer
	msgbox sc_gare_1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_ne sc_gare_1_2
	msgbox sc_gare_1_Text_2
sc_gare_1_1:
	releaseall
	end

sc_gare_1_2:
	msgbox sc_gare_1_Text_1
	goto sc_gare_1_1


sc_gare_2::
	faceplayer
	msgbox sc_gare_2_Text_0
	msgbox sc_gare_2_Text_1
	releaseall
	end


movetodoor::
	walk_left
	return


Retard::
	compare VAR_UNUSED_0x404E, 0
	goto_if_eq Retard_2
Retard_1:
	releaseall
	end

Retard_2:
	playfanfare MUS_OBTAIN_BADGE
	msgbox Retard_Text_0
	waitfanfare
	msgbox Retard_Text_1
	setvar VAR_UNUSED_0x404E, 1
	goto Retard_1


sca::
	msgbox sca_Text_0
	releaseall
	end


SignGare_Text_0:
	.string "Gare de Cellapolis$"

Telephone_Text_0:
	.string "Il faut mettre une pièce pour\n"
	.string "téléphoner.$"

agent_Text_0:
	.string "ALLEZ ALLEZ ALLEZ ! On reste pas sur le\n"
	.string "quai, va vite composter ton ticket, si\l"
	.string "t'en as pas ça ne sert à rien de rester\l"
	.string "là!$"

hotesse_Text_0:
	.string "Bonjour et Bienvenue à la gare de\n"
	.string "Cellapolis!$"

hotesse_Text_1:
	.string "Je suis là pour répondre à vos\n"
	.string "questions.$"

sc_gare_1_Text_0:
	.string "Tu ne trouves pas que cette gare est\n"
	.string "agréable?$"

sc_gare_1_Text_1:
	.string "Tu n'as pas de goûts.$"

sc_gare_1_Text_2:
	.string "Elle est la preuve de la richesse du\n"
	.string "Centre de Recherches, les gares\l"
	.string "reliant Cellapolis Sud et ce dernier ont\l"
	.string "été entièrement construites avec les\l"
	.string "fonds du CDR.$"

sc_gare_2_Text_0:
	.string "Au CDR, on travaille comme des fous\n"
	.string "pendant une semaine puis on a deux\l"
	.string "jours de congé, les jours de travail on\l"
	.string "dort là-bas, il y a des dortoirs, un\l"
	.string "restaurant et j'en passe.$"

sc_gare_2_Text_1:
	.string "Mais on est si bien payés que ça vaut le\n"
	.string "coup.$"

Retard_Text_0:
	.string "HAUT-PARLEURS : (jingle de la gare)$"

Retard_Text_1:
	.string "{COLOR LIGHT_RED}{SHADOW RED}LE TRAIN POUR LE CENTRE DE RECHERCHES\n"
	.string "PART DANS QUELQUES MINUTES, VEUILLEZ\l"
	.string "MONTER A BORD!$"

sca_Text_0:
	.string "Nous autres scientifiques travaillons\n"
	.string "pour le Centre de Recherches, cet\l"
	.string "endroit certes très beau mais il\l"
	.string "devient lassant après quelques\l"
	.string "semaines de travail. Nous laissons nos\l"
	.string "familles pour dormir dans des dortoirs\l"
	.string "où... la promiscuité est assez présente.\l"
	.string "Persnne ne fait grève parce qu'on est\l"
	.string "assez bien payés.$"
