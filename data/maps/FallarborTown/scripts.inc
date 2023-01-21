FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FallarborTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
	return


grotto_solidago::
	msgbox grotto_solidago_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq grotto_solidago_2
grotto_solidago_1:
	releaseall
	end

grotto_solidago_2:
	warp MAP_LAVARIDGE_TOWN, 3
	goto grotto_solidago_1


restes::
	msgbox restes_Text_0
	releaseall
	end


porte::
	random 3
	switch VAR_RESULT
	case 0, porte_3
	case 1, porte_4
	case 2, porte_5
porte_1:
	releaseall
	end

porte_3:
	msgbox porte_Text_0
	goto porte_1

porte_4:
	msgbox porte_Text_1
	goto porte_1

porte_5:
	msgbox porte_Text_2
	goto porte_1


aventurier_mirabilis::
	faceplayer
	msgbox aventurier_mirabilis_Text_0
	releaseall
	end


mirabilis_scout::
	faceplayer
	msgbox mirabilis_scout_Text_0
	releaseall
	end


mirabilis_lady::
	faceplayer
	msgbox mirabilis_lady_Text_0
	releaseall
	end


mirabilis_dresseur::
	faceplayer
	msgbox mirabilis_dresseur_Text_0
	releaseall
	end


mirabilis_ecolier::
	faceplayer
	msgbox mirabilis_ecolier_Text_0
	releaseall
	end


mirabilis_campalta::
	msgbox mirabilis_campalta_Text_0
	msgbox mirabilis_campalta_Text_1
	faceplayer
	msgbox mirabilis_campalta_Text_2
	msgbox mirabilis_campalta_Text_3
	msgbox mirabilis_campalta_Text_4
	releaseall
	end


mirabilis_bet::
	faceplayer
	showmoneybox 14, 1
	msgbox mirabilis_bet_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq mirabilis_bet_2
mirabilis_bet_1:
	msgbox mirabilis_bet_Text_4
	hidemoneybox
	releaseall
	end

mirabilis_bet_2:
	checkmoney 1000
	compare VAR_RESULT, 1
	goto_if_eq mirabilis_bet_4
	msgbox mirabilis_bet_Text_3
	goto mirabilis_bet_1

mirabilis_bet_4:
	hidemoneybox
	removemoney 1000
	showmoneybox 14, 1
	random 2
	switch VAR_RESULT
	case 0, mirabilis_bet_8
	case 1, mirabilis_bet_9
	goto mirabilis_bet_1

mirabilis_bet_8:
	msgbox mirabilis_bet_Text_1
	goto mirabilis_bet_1

mirabilis_bet_9:
	msgbox mirabilis_bet_Text_2
	hidemoneybox
	addmoney 2000
	showmoneybox 14, 1
	goto mirabilis_bet_1


mirabilis_npc::
	faceplayer
	msgbox mirabilis_npc_Text_0
	showmoneybox 14, 0
	hidemoneybox
	removemoney 500
	showmoneybox 14, 0
	msgbox mirabilis_npc_Text_1
	hidemoneybox
	releaseall
	end


grotto_solidago_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Il y a un petit passage entre les\n"
	.string "arbres, voulez-vous vous faufiler\l"
	.string "entre eux?$"

restes_Text_0:
	.string "Ce sont des restes de Pokémon...$"

porte_Text_0:
	.string "C'est fermé de l'intérieur.$"

porte_Text_1:
	.string "(une voix venant de l'intérieur) : IL EST\n"
	.string "OÙ LE RESPECT DE LA PROPRIÉTÉ PRIVÉE$"

porte_Text_2:
	.string "C'est fermé à clé.$"

aventurier_mirabilis_Text_0:
	.string "Ho ho ho! Le temple de la forêt! Je suis\n"
	.string "venu à pied jusqu'ici depuis un endroit\l"
	.string "très lointain! On dit qu'un trésor est\l"
	.string "enfoui dans ce temple depuis des\l"
	.string "millénaires. Je veux mettre la main\l"
	.string "dessus à tout prix!$"

mirabilis_scout_Text_0:
	.string "Regarde mon magnifique Scarhino. Je l'ai\n"
	.string "combattu au moins 10 fois avant qu'il\l"
	.string "n'accepte de se faire capturer.$"

mirabilis_lady_Text_0:
	.string "Diantre ! J'ai encore égaré mes clés!$"

mirabilis_dresseur_Text_0:
	.string "T'es un dresseur aussi ? J'ai tenté de\n"
	.string "chopper le badge d'Achille mais il m'a\l"
	.string "bien remis à ma place. Il est invincible\l"
	.string "crois-moi.$"

mirabilis_ecolier_Text_0:
	.string "Avant de me lancer dans le défi des\n"
	.string "arènes, j'essaye d'accumuler un\l"
	.string "maximum de connaissances.$"

mirabilis_campalta_Text_0:
	.string "Bougre de merdre. Même 'po de poiscaille.$"

mirabilis_campalta_Text_1:
	.string "J'en puis plus de cette vie, j'en puis\n"
	.string "plus de cette ville.$"

mirabilis_campalta_Text_2:
	.string "Tu m'écoutes ? J'suis originaire de\n"
	.string "Campalta, une ville à l'est d'Olnyris,\l"
	.string "j'po t'dire que c'est bien loin d'ici, en\l"
	.string "plus faut traverser la mer.$"

mirabilis_campalta_Text_3:
	.string "De base j'étais venu ici pour bosser à\n"
	.string "Cellapolis Centre, mais d'puis que ces\l"
	.string "maudites roches ont fait leur\l"
	.string "apparition, je ne bosse pas et j'ai pas\l"
	.string "pu trouver de taff ailleurs. À\l"
	.string "Starupolis, ils demandent que des\l"
	.string "diplômés bac + j'sais pas combien, à\l"
	.string "Cellapolis Sud, diplômé ou pas c'est\l"
	.string "mort ils prennent que les gens du CDR,\l"
	.string "du coup je teste les autres villes.\l"
	.string "Comme tu peux le voir ici y a pas grand\l"
	.string "chose, donc je chôme.$"

mirabilis_campalta_Text_4:
	.string "J'essaye de pêcher des Magicarpes pour\n"
	.string "les revendre mais ils sont trop malins\l"
	.string "pour mordre. Tout ce que je veux là,\l"
	.string "c'est économiser 15000¥ pour prendre\l"
	.string "un bateau pour rentrer chez moi.$"

mirabilis_bet_Text_0:
	.string "Salut l'ami. Ça te dit un petit pari?\n"
	.string "Chacun mise 1000¥, celui qui gagne\l"
	.string "emporte le tout. Ça va jouer à pile ou\l"
	.string "face. Pile c'est moi, face c'est toi. T'es\l"
	.string "prêt?$"

mirabilis_bet_Text_1:
	.string "HA HA! Pile! À moi l'argent!$"

mirabilis_bet_Text_2:
	.string "Face... Pourquoi suis-je aussi\n"
	.string "malchanceux!$"

mirabilis_bet_Text_3:
	.string "T'as pas assez.$"

mirabilis_bet_Text_4:
	.string "Hésite pas à revenir me voir si tu veux\n"
	.string "rejouer.$"

mirabilis_npc_Text_0:
	.string "Aah, Mirabilis! Cette ville est comme une\n"
	.string "oasis en plein désert, c'est un endroit\l"
	.string "chaleureux où tout voyageur égaré\l"
	.string "peut se reposer. Elle est réputée pour\l"
	.string "ses Sequoias et son vieux temple dont\l"
	.string "on ne sait pas grand chose.$"

mirabilis_npc_Text_1:
	.string "Tu feras gaffe aux faux guides la\n"
	.string "prochaine fois, haha.$"
