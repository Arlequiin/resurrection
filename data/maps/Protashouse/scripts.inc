Protashouse_MapScripts::
	.byte 0


StopPlayer:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	face_left
	step_end

FaceMom:
	face_right
	step_end

maman::
	checkitem ITEM_ACRO_BIKE
	compare VAR_RESULT, 1
	goto_if_ne maman_2
maman_1:
	releaseall
	end

maman_2:
	lock
	faceplayer
	applymovement 1, StopPlayer
	applymovement OBJ_EVENT_ID_PLAYER, FaceMom
	playbgm MUS_DP_FOLLOW_ME, TRUE
	msgbox maman_Text_0
	closemessage
	msgbox maman_Text_1
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_EON_TICKET, 1
	waitfanfare
	closemessage
	msgbox maman_Text_2
	closemessage
	msgbox maman_Text_3
	closemessage
	setflag FLAG_RECEIVED_RUNNING_SHOES
	msgbox maman_Text_4
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_ACRO_BIKE, 1
	waitfanfare
	msgbox maman_Text_5
	closemessage
	msgbox maman_Text_6
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_FRESH_WATER, 5
	waitfanfare
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_LAVA_COOKIE, 5
	waitfanfare
	closemessage
	msgbox maman_Text_7
	closemessage
	playbgm MUS_HG_NEW_BARK, TRUE
	goto maman_1


larmes::
	getPartySize
	addvar VAR_RESULT, 1
	compare VAR_RESULT, 1
	goto_if_eq larmes_2
	msgbox larmes_Text_1
	msgbox larmes_Text_2
	buffernumberstring STR_VAR_2, VAR_RESULT
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq larmes_5
	msgbox larmes_Text_4
larmes_1:
	releaseall
	end

larmes_2:
	lock
	faceplayer
	msgbox larmes_Text_0
	goto larmes_1

larmes_5:
	msgbox larmes_Text_3
	goto larmes_1


carton::
	lock
	msgbox carton_Text_0
	msgbox carton_Text_1
	release
	end


etagere_zonezero::
	msgbox etagere_zonezero_Text_0
	msgbox etagere_zonezero_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne etagere_zonezero_2
etagere_zonezero_1:
	releaseall
	end

etagere_zonezero_2:
	msgbox etagere_zonezero_Text_2
	goto etagere_zonezero_1


etagere_origin::
	msgbox etagere_zonezero_Text_0
	msgbox etagere_origin_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne etagere_origin_2
etagere_origin_1:
	releaseall
	end

etagere_origin_2:
	msgbox etagere_origin_Text_1
	msgbox etagere_origin_Text_2
	msgbox etagere_origin_Text_3
	msgbox etagere_origin_Text_4
	msgbox etagere_origin_Text_5
	msgbox etagere_origin_Text_6
	msgbox etagere_origin_Text_7
	goto etagere_origin_1


frigo::
	msgbox frigo_Text_0, MSGBOX_YESNO
	random 9
	switch VAR_RESULT
	case 0, frigo_3
	case 1, frigo_4
	case 2, frigo_5
	case 3, frigo_6
	case 4, frigo_7
	case 5, frigo_8
	case 6, frigo_9
	case 7, frigo_10
	case 8, frigo_11
	case 9, frigo_12
	case 10, frigo_13
frigo_1:
	releaseall
	end

frigo_3:
	msgbox frigo_Text_1
	giveitem ITEM_FRESH_WATER
	goto frigo_1

frigo_4:
	msgbox frigo_Text_2
	giveitem ITEM_LEMONADE
	goto frigo_1

frigo_5:
	msgbox frigo_Text_3
	giveitem ITEM_SODA_POP
	goto frigo_1

frigo_6:
	msgbox frigo_Text_4
	giveitem ITEM_CASTELIACONE
	goto frigo_1

frigo_7:
	msgbox frigo_Text_5
	goto frigo_1

frigo_8:
	msgbox frigo_Text_5
	goto frigo_1

frigo_9:
	msgbox frigo_Text_5
	goto frigo_1

frigo_10:
	msgbox frigo_Text_5
	goto frigo_1

frigo_11:
	msgbox frigo_Text_5
	goto frigo_1

frigo_12:
	msgbox frigo_Text_5
	goto frigo_1

frigo_13:
	msgbox frigo_Text_5
	goto frigo_1


maman_Text_0:
	.string "Ah, tu es là!$"

maman_Text_1:
	.string "Bon, {PLAYER} tu vas être en retard,\n"
	.string "le train part dans moins d'une heure. Tu\l"
	.string "as dormi comme un Ronflex ! J'ai\l"
	.string "quelques objets à te donner avant que\l"
	.string "l'on se quitte$"

maman_Text_2:
	.string "C'est le ticket que tu devras présenter\n"
	.string "avant de prendre le train pour le\l"
	.string "Centre de Recherches. Quel chanceux\l"
	.string "tu es, seuls les scientifiques du labo\l"
	.string "l'utilisent.$"

maman_Text_3:
	.string "Ah et, pour faciliter tes déplacements,\n"
	.string "j'ai dépensé beaucoup d'argent. Tiens,\l"
	.string "de nouvelles chaussures de sport,\l"
	.string "c'est des chaussures de marques\l"
	.string "importées d'Unys$"

maman_Text_4:
	.string "Enfin, une petite surprise, une\n"
	.string "Poké-Monture!$"

maman_Text_5:
	.string "Il s'appelle Motorizard, il vient de la\n"
	.string "région de Paldea, pour l'instant il ne\l"
	.string "peut que marcher et faire de petits\l"
	.string "sauts mais je suis sûre qu'avec toi il\l"
	.string "apprendra à nager et escalader voire\l"
	.string "plus!$"

maman_Text_6:
	.string "Bien, n'oublies surtout pas de\n"
	.string "t'hydrater et de bien manger, je ne\l"
	.string "veux pas que tu sois anémique à ton\l"
	.string "retour ! Tiens, de l'eau fraiche et des\l"
	.string "cookies que ta tante m'a ramenée de la\l"
	.string "région de Hoenn.$"

maman_Text_7:
	.string "{PLAYER} s'il t'arrive quelque chose\n"
	.string "je ne pourrai pas m'en remettre. Les\l"
	.string "séparations sont toujours\l"
	.string "compliquées... Mais bon, la vie l'exige,\l"
	.string "moi aussi j'étais une grande dresseuse\l"
	.string "à une époque. Le niveau de Florizarre\l"
	.string "en témoigne. Dis lui au revoir en\l"
	.string "sortant ! Bien. Je ne te retiens pas\l"
	.string "plus. Au revoir mon bouchon ... (larme)$"

larmes_Text_0:
	.string "Snif... Au revoir {PLAYER}, profite\n"
	.string "bien de ton voyage.$"

larmes_Text_1:
	.string "Oh tu es revenu ! Alors, raconte moi\n"
	.string "tout !$"

larmes_Text_2:
	.string ".................$"

larmes_Text_3:
	.string "Tu as des badges et {STR_VAR_2}\n"
	.string "Pokémon ! Mais c'est fantastique ! Mon\l"
	.string "fils est un grand dresseur !$"

larmes_Text_4:
	.string "Tu as des badges {STR_VAR_2}\n"
	.string "Pokémon ! Mais c'est fantastique ! Ma\l"
	.string "fille est une grande dresseuse !$"

carton_Text_0:
	.string "C'est un carton. Il contient tous les\n"
	.string "souvenirs de Papa.$"

carton_Text_1:
	.string "Il y a ses papiers, sa photo et ses\n"
	.string "lunettes.$"

etagere_zonezero_Text_0:
	.string "C'est une bibliothèque.$"

etagere_zonezero_Text_1:
	.string "Il y a un livre qui parle de la Zone Zéro,\n"
	.string "le lire?$"

etagere_zonezero_Text_2:
	.string "Il y a 200 ans, un groupe d'explorateurs\n"
	.string "financé par l'académie regroupait les\l"
	.string "meilleurs talents de Paldea,\l"
	.string "combattants expérimentés et érudits.\l"
	.string "L'écrivain et spécialiste d'histoire\l"
	.string "naturelle Bruyer, accompagné de son\l"
	.string "Motorizard, faisait partie de cette\l"
	.string "équipe nommée : Le groupe\l"
	.string "d'observation de la Zone Zéro. Bruyer\l"
	.string "nous raconte les évènements et\l"
	.string "découvertes faites lors de cette\l"
	.string "expédition dans son ouvrage intitulé\l"
	.string "le Livre Écarlate ou Violet.$"

etagere_origin_Text_0:
	.string "Il y a un Journal du bord qui parle du\n"
	.string "dragon originel, il a été écrit par Papa.\l"
	.string "Le lire?$"

etagere_origin_Text_1:
	.string "Les 73 premières pages sont brûlées.$"

etagere_origin_Text_2:
	.string "Des expériences plutôt concluantes\n"
	.string "ont permis de déterminer que Reshiram,\l"
	.string "Zekrom et Kyurem ne formait à l'origine\l"
	.string "qu'un seul Pokémon, les mythes de la\l"
	.string "région d'Unys les concernant sont donc\l"
	.string "fondés. Nous avons trouvé des\l"
	.string "similitudes dans leurs gènes et, il y a\l"
	.string "de cela quelques années, en 2012, une\l"
	.string "organisation nommée 'Team Plasma'\l"
	.string "fusionna deux des trois Pokémon à\l"
	.string "l'aide d'un objet mystérieux nommé\l"
	.string "Pointeau ADN. Dans la mythologie\l"
	.string "d'Unys, Reshiram serait issu de la\l"
	.string "fission du Dragon Originel qui aurait\l"
	.string "fondé la région. Reshiram se serait\l"
	.string "allié à l'un des deux frères, l'aîné, en\l"
	.string "quête de réalité.$"

etagere_origin_Text_3:
	.string "Dans le but d'en savoir plus, je me suis\n"
	.string "procuré un Célébi, Pokémon possédant\l"
	.string "la faculté de voyager dans le temps.$"

etagere_origin_Text_4:
	.string "Journal du Bord, Jour 74$"

etagere_origin_Text_5:
	.string "Cher lecteur, j'ai pu voir le Dragon\n"
	.string "Originel de mes propres yeux suite à de\l"
	.string "nombreuses explorations\l"
	.string "spatio-temporelles, contrairement à ce\l"
	.string "que disent les livres, je l'ai vu dans la\l"
	.string "région d'Olnyris plutôt qu'Unys. Ce\l"
	.string "Pokémon est magnifique et extrêmement\l"
	.string "puissant. Je me demande si Arceus,\l"
	.string "prétendu créateur des autres Pokémon\l"
	.string "pourrait le battre. Son aura est\l"
	.string "dévastatrice, j'étais à 3 km de lui\l"
	.string "malgré ça l'une de mes deux jambes est\l"
	.string "immobilisée. À en croire mon appareil,\l"
	.string "nous sommes en l'an 3000 avant notre\l"
	.string "ère. Le Dragon semble être ami avec les\l"
	.string "civilisations de l'époque, les Olnims.$"

etagere_origin_Text_6:
	.string "Message Posthume$"

etagere_origin_Text_7:
	.string "Cher Lecteur, aujourd'hui ce n'est pas\n"
	.string "le Professeur .... qui vous écrit mais\l"
	.string "l'un de ses assistants, il finit par\l"
	.string "succomber suite à une paralysie\l"
	.string "totale. Je ne saurais vous dire si c'est\l"
	.string "dû au voyage dans le temps ou au choc\l"
	.string "lorsqu'il vu le Dragon. Toutes mes\l"
	.string "condoléances à ses proches. Il avait\l"
	.string "un enfant nommé {PLAYER}, ce dernier\l"
	.string "au jour où je vous écris est âgé de 3\l"
	.string "ans. Merci de remettre ce journal à sa\l"
	.string "famille.$"

frigo_Text_0:
	.string "Vous voulez ouvrir le réfrégirateur?$"

frigo_Text_1:
	.string "Génial, il y a une bouteille d'eau!$"

frigo_Text_2:
	.string "Génial, il y a une limonade!$"

frigo_Text_3:
	.string "Génial, il y a un soda!$"

frigo_Text_4:
	.string "Incroyable! Une glace Volute! Elle a du\n"
	.string "en faire du chemin pour arriver\l"
	.string "jusqu'ici.$"

frigo_Text_5:
	.string "Il n'y a rien dans le frigo.$"
