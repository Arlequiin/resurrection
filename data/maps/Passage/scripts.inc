Passage_MapScripts::
	.byte 0


scientist_wonder::
	lock
	faceplayer
	random 4
	switch VAR_RESULT
	case 1, scientist_wonder_3
	case 2, scientist_wonder_4
	case 3, scientist_wonder_5
	case 4, scientist_wonder_6
scientist_wonder_1:
	releaseall
	end

scientist_wonder_3:
	msgbox scientist_wonder_Text_0
	goto scientist_wonder_1

scientist_wonder_4:
	msgbox scientist_wonder_Text_1
	goto scientist_wonder_1

scientist_wonder_5:
	msgbox scientist_wonder_Text_2
	goto scientist_wonder_1

scientist_wonder_6:
	msgbox scientist_wonder_Text_3
	goto scientist_wonder_1


scientist_wonder_Text_0:
	.string "Ces roches.. sont très étranges. Nous\n"
	.string "sommes venues du Centre de Recherches\l"
	.string "pour les étudier.$"

scientist_wonder_Text_1:
	.string "Ces roches.. sont très étranges. Elles\n"
	.string "bloquent complètement l'accès à\l"
	.string "Cellapolis Centre.$"

scientist_wonder_Text_2:
	.string "Ces roches.. sont très étranges. Elles\n"
	.string "perturbent les Pokémon acier. Tout le\l"
	.string "monde en parle, à la télé, dans les\l"
	.string "réseaux sociaux...$"

scientist_wonder_Text_3:
	.string "On a envoyé des Taupiqueurs voir ce\n"
	.string "qu'il y a en dessous. Aucun d'entre eux\l"
	.string "n'est revenu...$"
