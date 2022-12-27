Protasroom_MapScripts::
	.byte 0


TV::
	msgbox TV_Text_0
	msgbox TV_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne TV_2
	msgbox TV_Text_7
TV_1:
	releaseall
	end

TV_2:
	msgbox TV_Text_2
	msgbox TV_Text_3
	msgbox TV_Text_4
	msgbox TV_Text_5
	msgbox TV_Text_6
	goto TV_1


Lit::
	lock
	msgbox Lit_Text_0, MSGBOX_SIGN
	release
	end


NintendoSwitch::
	lock
	msgbox NintendoSwitch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NintendoSwitch_2
	msgbox NintendoSwitch_Text_6
NintendoSwitch_1:
	release
	end

NintendoSwitch_2:
	random SPECIES_JIRACHI
	addvar VAR_RESULT, 1
	bufferspeciesname STR_VAR_1, VAR_RESULT
	showmonpic VAR_RESULT, 0, 3
	playmoncry VAR_RESULT, 0
	waitmoncry
	closemessage
	random 100
	addvar VAR_RESULT, 1
	buffernumberstring STR_VAR_2, VAR_RESULT
	msgbox NintendoSwitch_Text_1
	msgbox NintendoSwitch_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NintendoSwitch_5
	msgbox NintendoSwitch_Text_5
	hidemonpic
	goto NintendoSwitch_1

NintendoSwitch_5:
	random 2
	switch VAR_RESULT
	case 0, NintendoSwitch_9
	case 1, NintendoSwitch_10
	goto NintendoSwitch_1

NintendoSwitch_9:
	msgbox NintendoSwitch_Text_3
	hidemonpic
	goto NintendoSwitch_1

NintendoSwitch_10:
	playfanfare FANFARE_OBTAIN_ITEM
	msgbox NintendoSwitch_Text_4
	hidemonpic
	goto NintendoSwitch_1


ordinateur::
	msgbox ordinateur_Text_0
	releaseall
	end


TV_Text_0:
	.string "On dirait qu'il y a une émission...$"

TV_Text_1:
	.string "Voir l'émission (durée : 25 min) ?$"

TV_Text_2:
	.string "INFO SPÉCIALE CELLAPOLIS : La ville de\n"
	.string "Cellapolis est en pleine phase de\l"
	.string "périurbaisation, plutôt devrais-je dire\l"
	.string "était car oui, depuis quelques\l"
	.string "semaines, des rochers ont fait leur\l"
	.string "apparition autour de la ville, bloquant\l"
	.string "tous les accès, plein de pokémon acier\l"
	.string "ce sont rassemblés dans la ville,\l"
	.string "empêchant le passage au dessus du\l"
	.string "pont, ils attaquent quiconque qui s'en\l"
	.string "approcherait le seul moyen de quitter\l"
	.string "la ville est de prendre le train, train\l"
	.string "qui malheureusement ne peut être pris\l"
	.string "que par les privilégiés cela fait office\l"
	.string "de blocus terrestre, empêchant toute\l"
	.string "activité commerciale cela pourrait\l"
	.string "fortement impacter l'économie\l"
	.string "d'Olnyris, car plein de marques de\l"
	.string "fabriques ne se situent que dans cette\l"
	.string "ville, nous ferons un bilan détaillé\l"
	.string "dans la chaîne Economie TV d'ici peu\l"
	.string "Nous avons interrogé certains témoins\l"
	.string "ATTENTION, LEURS TEMOIGNAGES SONT A\l"
	.string "PRENDRE AU SECOND DEGRÉ, NOUS NE\l"
	.string "POSSÉDONS AUCUN MOYEN DE VERIFIER LA\l"
	.string "VÉRACITÉ DE LEURS INFORMATIONS.$"

TV_Text_3:
	.string "Témoin 1 : J'étais traaaanquille, je\n"
	.string "sortais du magasin de vélos quand j'ai\l"
	.string "vu de grosses météorites bombarder les\l"
	.string "alentours de la ville, j'ai vraiment cru\l"
	.string "que j'allais y passer. Après leur chute,\l"
	.string "j'ai vu un Pokémon qui avait l'air être\l"
	.string "trop fortiche, genre un légendaire ou\l"
	.string "un fabuleux.$"

TV_Text_4:
	.string "Témoin 2 : Je n'ai pas assisté à la chute\n"
	.string "des météorites, et je ne crois pas en\l"
	.string "ces histoires. J'ai vu un Pokémon qui\l"
	.string "resplendissait de lumière, des étoiles\l"
	.string "l'entourait, c'est lui qui les a déposé.\l"
	.string "J'irai dire qu'il était manipulé par\l"
	.string "quelqu'un voulant bloquer les échanges\l"
	.string "commerciaux de la ville.$"

TV_Text_5:
	.string "Témoin 3 : Je n'ai entendu aucun bruit\n"
	.string "lors des bombardements, je pense aussi\l"
	.string "que quelqu'un les a déposé. Le Pokémon\l"
	.string "que j'ai vu avait une sorte de miroirs\l"
	.string "attachés au visage et il allait\l"
	.string "suuuuuper vite, j'crois c'est un\l"
	.string "pokémon dragon.$"

TV_Text_6:
	.string "Merci pour tous vos renseignements.\n"
	.string "grâce aux informations récoltées nous\l"
	.string "avons pu émettre quelques théories :\l"
	.string "Le Pokémon qui a été vu devait être un\l"
	.string "Deoxys ou un Jirachi. Il possédait la\l"
	.string "capacité Draco-Météore, hors, aucun de\l"
	.string "ses deux Pokémon ne possède cette\l"
	.string "capacité. Après avoir fait des tests\l"
	.string "d'identification de matière nous avons\l"
	.string "pu trouver que diverses sortes de\l"
	.string "métaux étaient dans les rochers et\l"
	.string "certains d'entre eux sont extrêmement\l"
	.string "magnétiques nous n'avons pas pu vous\l"
	.string "prendre des photos car tous nos\l"
	.string "appareils électriques étaient attirés\l"
	.string "par une si grande force magnetique et\l"
	.string "se fracassaient contre les rochers ça\l"
	.string "semble être la cause de la frustration\l"
	.string "des Pokémon acier. Merci d'avoir\l"
	.string "regardé ce reportage, rappel : Nous\l"
	.string "parlerons des impacts de cet incident\l"
	.string "au niveau économique plus\l"
	.string "profondément dans la chaîne Economie\l"
	.string "TV d'ici peu.$"

TV_Text_7:
	.string "La télé s'est éteinte.$"

Lit_Text_0:
	.string "C'est votre lit.$"

NintendoSwitch_Text_0:
	.string "C'est une Nintendo Switch. \nVoulez-vous y jouer ?$"

NintendoSwitch_Text_1:
	.string "Un {STR_VAR_1} sauvage apparaît ! (Nv.{STR_VAR_2})$"

NintendoSwitch_Text_2:
	.string "Le capturer ?$"

NintendoSwitch_Text_3:
	.string "Mince, il casse la Ball$"

NintendoSwitch_Text_4:
	.string "Félicitations {STR_VAR_1} est capturé !$"

NintendoSwitch_Text_5:
	.string "Vous prenez la fuite !$"

NintendoSwitch_Text_6:
	.string "Pas l'temps.$"

ordinateur_Text_0:
	.string "C'est une vidéo d'un chercheur Pokémon\n"
	.string "nommé Flomars. Il parle d'un certain\l"
	.string "dragon originel, Pokémon étant la\l"
	.string "fusion de Reshiram, Zekrom et Kyurem\l"
	.string "qui risque d'être ressucité.$"
