CDR_IntGare_MapScripts::
	.byte 0


sc_train_cdr::
	lock
	faceplayer
	msgbox sc_train_cdr_Text_0
	random 5
	switch VAR_RESULT
	case 0, sc_train_cdr_3
	case 1, sc_train_cdr_4
sc_train_cdr_1:
	releaseall
	end

sc_train_cdr_3:
	msgbox sc_train_cdr_Text_1
	giveitem ITEM_ROCKY_HELMET
	goto sc_train_cdr_1

sc_train_cdr_4:
	msgbox sc_train_cdr_Text_2
	goto sc_train_cdr_1


gardecdr::
	getpartysize
	compare VAR_RESULT, 1
	goto_if_ge gardecdr_2
	msgbox gardecdr_Text_3
gardecdr_1:
	releaseall
	end

gardecdr_2:
	msgbox gardecdr_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq gardecdr_6
	msgbox gardecdr_Text_2
gardecdr_5:
	fadescreen 1
	warp MAP_TRAIN, 0
	goto gardecdr_1

gardecdr_6:
	msgbox gardecdr_Text_1
	goto gardecdr_5


sc_train_cdr_Text_0:
	.string "C'est donc vous les trois boursiers\n"
	.string "dont tout le monde parle?$"

sc_train_cdr_Text_1:
	.string "Je vous donne un petit cadeau, disons\n"
	.string "que c'est pour vous souhaiter bonne\l"
	.string "chance.$"

sc_train_cdr_Text_2:
	.string "Surtout pensez à parler à tous les\n"
	.string "scientifiques avant de quitter le CDR,\l"
	.string "ils ont des choses à vous apprendre...\l"
	.string "voire vous donner.$"

gardecdr_Text_0:
	.string "Bonjour. J'espère que votre visite du\n"
	.string "Centre de Recherches s'est bien\l"
	.string "déroulée, votre train va bientôt\l"
	.string "partir. Vous voulez le prendre tout de\l"
	.string "suite?$"

gardecdr_Text_1:
	.string "Bien, retour à Cellapolis$"

gardecdr_Text_2:
	.string "Bien, ne tardez pas.$"

gardecdr_Text_3:
	.string "Vous n'êtes pas venus pour rien allons,\n"
	.string "allez donc voir le Prof.Schwartz, vous\l"
	.string "rentrerez après.$"
