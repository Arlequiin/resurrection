train_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, train_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

train_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, rivaux_train_1
	map_script_2 VAR_TEMP_0, 1, train_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

train_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
	return


haut:
	face_up
	step_end

bas:
	face_down
	step_end

regard_droit:
	face_right
	step_end

sc_train::
	random 3
	switch VAR_RESULT
	case 0, sc_train_3
	case 1, sc_train_4
	case 2, sc_train_5
sc_train_1:
	releaseall
	end

sc_train_3:
	msgbox sc_train_Text_0
	giveitem ITEM_ROCKY_HELMET
	goto sc_train_1

sc_train_4:
	msgbox sc_train_Text_1
	goto sc_train_1

sc_train_5:
	msgbox sc_train_Text_2
	goto sc_train_1


rivaux_train_1::
	compare VAR_TEMP_0, 0
	goto_if_eq rivaux_train_1_1
	return

rivaux_train_1_1:
	getpartysize
	compare VAR_RESULT, 1
	goto_if_lt rivaux_train_1_4
	applymovement 9, bas
	waitmovement 9
	applymovement 4, haut
	waitmovement 4
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox_mugshot rivaux_train_1_Text_18, MSGBOX_SIGN, MUGSHOT_MIDORI
	getpartysize
	compare VAR_RESULT, 1
	goto_if_gt rivaux_train_1_8
rivaux_train_1_7:
	msgbox_mugshot rivaux_train_1_Text_20, MSGBOX_SIGN, MUGSHOT_MIDORI
	applymovement OBJ_EVENT_ID_PLAYER, bas
	msgbox_mugshot rivaux_train_1_Text_21, MSGBOX_SIGN, MUGSHOT_LISA_AWK
	applymovement OBJ_EVENT_ID_PLAYER, haut
	msgbox_mugshot rivaux_train_1_Text_22, MSGBOX_SIGN, MUGSHOT_MIDORI_HAPPY
	msgbox_mugshot rivaux_train_1_Text_23, MSGBOX_SIGN, MUGSHOT_MIDORI_HAPPY
	fadescreen 1
	msgbox rivaux_train_1_Text_24
	showobjectat 7, MAP_TRAIN
	showobjectat 6, MAP_TRAIN
	showobjectat 5, MAP_TRAIN
	fadescreen 0
	playbgm MUS_DP_CATASTROPHE, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, regard_droit
	msgbox_mugshot rivaux_train_1_Text_25, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox rivaux_train_1_Text_26
	playmoncry SPECIES_ELECTRODE, 0
	waitmoncry
	playmoncry SPECIES_ELECTRODE, 0
	waitmoncry
	playmoncry SPECIES_ELECTRODE, 0
	waitmoncry
	msgbox rivaux_train_1_Text_27
	msgbox rivaux_train_1_Text_28
	msgbox_mugshot rivaux_train_1_Text_29, MSGBOX_SIGN, MUGSHOT_MIDORI
	showobjectat 8, MAP_TRAIN
	playmoncry SPECIES_GEODUDE, 0
	waitmoncry
	msgbox_mugshot rivaux_train_1_Text_30, MSGBOX_SIGN, MUGSHOT_MIDORI
	fadescreen 3
	playse SE_M_ROCK_THROW
	waitse
	playse SE_M_EXPLOSION
	waitse
	setvar VAR_TEMP_0, 1
	warp MAP_LAVARIDGE_TOWN, 0
	fadescreen 2
rivaux_train_1_3:
	releaseall
	end

rivaux_train_1_4:
	applymovement 9, bas
	waitmovement 9
	applymovement 4, haut
	waitmovement 4
	applymovement OBJ_EVENT_ID_PLAYER, haut
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox_mugshot rivaux_train_1_Text_0, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox_mugshot rivaux_train_1_Text_1, MSGBOX_SIGN, MUGSHOT_MIDORI_HAPPY
	msgbox_mugshot rivaux_train_1_Text_2, MSGBOX_SIGN, MUGSHOT_MIDORI
	applymovement OBJ_EVENT_ID_PLAYER, bas
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox_mugshot rivaux_train_1_Text_3, MSGBOX_SIGN, MUGSHOT_LISA
	applymovement OBJ_EVENT_ID_PLAYER, haut
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox_mugshot rivaux_train_1_Text_4, MSGBOX_SIGN, MUGSHOT_MIDORI_HAPPY
	applymovement OBJ_EVENT_ID_PLAYER, bas
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox_mugshot rivaux_train_1_Text_5, MSGBOX_SIGN, MUGSHOT_LISA_AWK
	applymovement OBJ_EVENT_ID_PLAYER, haut
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox_mugshot rivaux_train_1_Text_6, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox rivaux_train_1_Text_7
	msgbox_mugshot rivaux_train_1_Text_8, MSGBOX_SIGN, MUGSHOT_MIDORI
	applymovement OBJ_EVENT_ID_PLAYER, bas
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox_mugshot rivaux_train_1_Text_9, MSGBOX_SIGN, MUGSHOT_LISA_ANGRY
	msgbox rivaux_train_1_Text_10
	msgbox_mugshot rivaux_train_1_Text_11, MSGBOX_SIGN, MUGSHOT_LISA_SAD
	applymovement OBJ_EVENT_ID_PLAYER, haut
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox_mugshot rivaux_train_1_Text_12, MSGBOX_SIGN, MUGSHOT_MIDORI_HAPPY
	applymovement OBJ_EVENT_ID_PLAYER, bas
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox_mugshot rivaux_train_1_Text_13, MSGBOX_SIGN, MUGSHOT_LISA_HAPPY
	msgbox rivaux_train_1_Text_10
	msgbox_mugshot rivaux_train_1_Text_14, MSGBOX_SIGN, MUGSHOT_LISA_ANGRY
	applymovement OBJ_EVENT_ID_PLAYER, haut
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox_mugshot rivaux_train_1_Text_15, MSGBOX_SIGN, MUGSHOT_MIDORI
	applymovement OBJ_EVENT_ID_PLAYER, regard_droit
	waitmovement OBJ_EVENT_ID_PLAYER
	playfanfare FANFARE_RG_DEX_RATING
	msgbox rivaux_train_1_Text_16
	waitfanfare
	fadescreen 1
	msgbox rivaux_train_1_Text_17
	warp MAP_CDR_INT_GARE, 1
	setvar VAR_TEMP_0, 1
	fadescreen 0
	goto rivaux_train_1_3

rivaux_train_1_8:
	msgbox_mugshot rivaux_train_1_Text_19, MSGBOX_SIGN, MUGSHOT_MIDORI_HAPPY
	goto rivaux_train_1_7


sc_train_Text_0:
	.string "Je vous donne un petit cadeau, disons\n"
	.string "que c'est pour vous souhaiter bonne\l"
	.string "chance.$"

sc_train_Text_1:
	.string "Salut les jeunes! C'est donc vous les\n"
	.string "trois boursiers dont tout le monde\l"
	.string "parle?$"

sc_train_Text_2:
	.string "Surtout pensez ?? parler ?? tous les\n"
	.string "scientifiques avant de quitter le CDR,\l"
	.string "ils ont des choses ?? vous apprendre...\l"
	.string "voire vous donner.$"

rivaux_train_1_Text_0:
	.string "...$"

rivaux_train_1_Text_1:
	.string "Salut.$"

rivaux_train_1_Text_2:
	.string "C'est toi le troisi??me boursier?$"

rivaux_train_1_Text_3:
	.string "De toute ??vidence oui, autrement ce\n"
	.string "serait un scientifique. Oups, j'ai\l"
	.string "oubli?? de me pr??senter. Je m'appelle\l"
	.string "Lisa, tu peux m'appeler Liz si ??a te\l"
	.string "chante. Je viens de la ville de Portokov\l"
	.string "et, avant de m'installer ?? Olnyris,\l"
	.string "j'habitais ?? Unys, ?? Maillard.$"

rivaux_train_1_Text_4:
	.string "Moi c'est Midori. Moi aussi j'suis un\n"
	.string "expat, je viens de la r??gion de Kanto.$"

rivaux_train_1_Text_5:
	.string "Ma m??re assiste la Prof. Keteleeria,\n"
	.string "c'est une grande dresseuse et c'est\l"
	.string "gr??ce ?? elle que je m'y connais bien en\l"
	.string "Pok??mon.$"

rivaux_train_1_Text_6:
	.string "Je suis le fils de l'ex-ma??tre de la\n"
	.string "r??gion de Kanto qui, aujourd'hui est le\l"
	.string "Champion de l'ar??ne de Jadielle.$"

rivaux_train_1_Text_7:
	.string "........$"

rivaux_train_1_Text_8:
	.string "Ton p??re ??tait le PDG de Vitalis\n"
	.string "Navitas?! Ouah la dinguerie!$"

rivaux_train_1_Text_9:
	.string "Tu dis ??tait, sous-entendant ainsi qu'il\n"
	.string "n'a plus ce post. Pourquoi il a quitt??\l"
	.string "son poste?$"

rivaux_train_1_Text_10:
	.string ".........$"

rivaux_train_1_Text_11:
	.string "Je suis d??sol?? de l'apprendre.$"

rivaux_train_1_Text_12:
	.string "Vous avez choisi quel Pok??mon? Perso\n"
	.string "j'ai demand?? un Coupenotte, j'ai\l"
	.string "toujours r??v?? d'en avoir un.$"

rivaux_train_1_Text_13:
	.string "Pour ma part, un ??voli, tellement de\n"
	.string "possibilit??s avec ce Pok??mon! Et toi?$"

rivaux_train_1_Text_14:
	.string "Tu n'en as pas demand???! Mais... La date\n"
	.string "limite pour envoyer le mail c'??tait il y a\l"
	.string "une semaine! Ils doivent pr??parer les\l"
	.string "Pok??mon ?? ??tre re??us par leurs\l"
	.string "dresseurs. J'esp??re qu'ils en\l"
	.string "trouveront un pour toi.$"

rivaux_train_1_Text_15:
	.string "Le train ralentit, je pense qu'on va\n"
	.string "bient??t arriver.$"

rivaux_train_1_Text_16:
	.string "{COLOR RED}{SHADOW LIGHT_RED}(jingle ENCF) Le train pour le CDR est\n"
	.string "arriv?? ?? destination, veillez ?? ne pas\l"
	.string "oublier vos bagages.$"

rivaux_train_1_Text_17:
	.string "Agent : Bienvenue ?? la gare du Centre\n"
	.string "de Recherches, j'esp??re que le voyage\l"
	.string "n'a pas ??t?? trop long. Voici vos\l"
	.string "bagages. Bonne journ??e et au plaisir de\l"
	.string "vous revoir!$"

rivaux_train_1_Text_18:
	.string "Re, vous avez chopp?? d'autres Pok??mon?$"

rivaux_train_1_Text_19:
	.string "Oh styl?? un Pikachu. D??s qu'on arrive ??\n"
	.string "destination, on fera notre premier\l"
	.string "combat.$"

rivaux_train_1_Text_20:
	.string "Comme autre Pok??mon j'ai chopp?? un\n"
	.string "Racaillou, rassurez-vous je l'ai pas\l"
	.string "captur?? mais on me l'a donn??. Un\l"
	.string "scientifique m'a expliqu?? qu'il se\l"
	.string "sentait pas bien et tout, fallait qu'il\l"
	.string "change de cadre.$"

rivaux_train_1_Text_21:
	.string "Lisa : Moi j'ai ramen?? que ma petite\n"
	.string "??voli.$"

rivaux_train_1_Text_22:
	.string "Bon, {PLAYER} je pense que t'es du\n"
	.string "m??me avis$"

rivaux_train_1_Text_23:
	.string "Objectif, battre le champion de toutes\n"
	.string "les ar??nes d'Olnyris pour participer au\l"
	.string "Grand Tournoi d'Olnyris, je compte sur\l"
	.string "toi pour ??tre mon adversaire en finale.$"

rivaux_train_1_Text_24:
	.string "Apr??s de longues discussions....$"

rivaux_train_1_Text_25:
	.string "Pourquoi le train s'arr??te?$"

rivaux_train_1_Text_26:
	.string "{COLOR LIGHT_RED}{COLOR RED}HAUT PARLEURS : Salut tout le monde,\n"
	.string "j'suis pas sp??cialement croyant mais je\l"
	.string "me suis dit que ce serait bien de vous\l"
	.string "pr??venir pour les derni??res pri??res.$"

rivaux_train_1_Text_27:
	.string "Scientique : Qu'est-ce qui se passe?\n"
	.string "Qu'est-ce que c'est que ce bordel?\l"
	.string "Pourquoi y a des ??lectrodes, ils ont\l"
	.string "l'air dopp??s ma parole, 20 ans que\l"
	.string "j'observe des Pok??mon j'en ai jamais vu\l"
	.string "d'aussi renfrogn??s!$"

rivaux_train_1_Text_28:
	.string "{COLOR LIGHT_RED}{COLOR RED}HAUT-PARLEURS : Bon bah on vous aura\n"
	.string "pr??venu, on a besoin du moteur du train\l"
	.string "vite fait bien fait. Je vais pas\l"
	.string "m'??terniser parce que dans 1 min et 37\l"
	.string "secondes ils auront compris que le\l"
	.string "train s'est arr??t?? et enverront une\l"
	.string "??quipe sp??ciale qui mettra au plus 15\l"
	.string "min ?? arriver. Vous allez pas trop\l"
	.string "souffrir l'explosion sera si forte que\l"
	.string "votre ??me quittera le corps en une\l"
	.string "seconde.$"

rivaux_train_1_Text_29:
	.string "Putain on est mal, bon, un dernier\n"
	.string "espoir, Go Racaillou!$"

rivaux_train_1_Text_30:
	.string "LANCE TON ATTAQUE B??LIER LA PLUS\n"
	.string "PUISSANTE SUR CETTE VITRE!\l"
	.string "{PLAYER}, Lisa, faut qu'on sorte de\l"
	.string "l??!$"
