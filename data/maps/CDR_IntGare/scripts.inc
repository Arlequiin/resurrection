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
	getPartySize
	compare VAR_RESULT, 1
	goto_if_gt gardecdr_1
	return

gardecdr_1:
	msgbox gardecdr_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne gardecdr_4
	msgbox gardecdr_Text_2
gardecdr_3:
	releaseall
	end

gardecdr_4:
	msgbox gardecdr_Text_1
	fadescreen 1
	warp MAP_TRAIN, 0
	goto gardecdr_3


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
	.string "Vous voulez rentrer à Cellapolis ?$"

gardecdr_Text_1:
	.string "Bien, retour à Cellapolis$"

gardecdr_Text_2:
	.string "Vous n'êtes pas venus pour rien allons,\n"
	.string "allez donc voir le Prof.Schwartz, vous\l"
	.string "rentrerez après.$"
