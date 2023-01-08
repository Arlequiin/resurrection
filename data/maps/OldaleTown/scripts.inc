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


movetodoor::
	walk_left
	return


Retard::
	playfanfare MUS_OBTAIN_BADGE
	waitfanfare
	compare VAR_UNUSED_0x404E, 0
	goto_if_eq Retard_2
Retard_1:
	releaseall
	end

Retard_2:
	msgbox Retard_Text_0
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

Retard_Text_0:
	.string "HAUT-PARLEURS : (jingle de la gare)$"

Retard_Text_1:
	.string "{COLOR LIGHT_RED}LE TRAIN POUR LE CENTRE DE RECHERCHES\n"
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
