Passage_MapScripts::
	.byte 0


scientist_wonder::
	lock
	faceplayer
	random 4
	switch VAR_RESULT
	case 0, scientist_wonder_3
	case 1, scientist_wonder_4
	case 2, scientist_wonder_5
	case 3, scientist_wonder_6
	case 4, scientist_wonder_7
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

scientist_wonder_7:
	msgbox scientist_wonder_Text_4
	goto scientist_wonder_1


scientist_wonder_Text_0:
	.string "On a réussi à recopier l'une de ces\n"
	.string "roches grâce à l'ADN de Métamorph, de\l"
	.string "fait on peut désormais les étudier au\l"
	.string "Centre de Recherches. On récolte quand\l"
	.string "même des infos sur ces roches, au cas\l"
	.string "où il y aurait des résultats\l"
	.string "différents.$"

scientist_wonder_Text_1:
	.string "Ces roches.. sont très étranges. Nous\n"
	.string "sommes venus du Centre de Recherches\l"
	.string "pour les étudier.$"

scientist_wonder_Text_2:
	.string "Ces roches.. sont très étranges. Elles\n"
	.string "bloquent complètement l'accès à\l"
	.string "Cellapolis Centre.$"

scientist_wonder_Text_3:
	.string "Ces roches.. sont très étranges. Elles\n"
	.string "perturbent les Pokémon acier. Tout le\l"
	.string "monde en parle, à la télé, dans les\l"
	.string "réseaux sociaux...$"

scientist_wonder_Text_4:
	.string "On a envoyé des Taupiqueurs voir ce\n"
	.string "qu'il y a en dessous. Aucun d'entre eux\l"
	.string "n'est revenu...$"
