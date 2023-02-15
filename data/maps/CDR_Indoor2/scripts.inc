CDR_Indoor2_MapScripts::
	.byte 0


LV1::
	msgbox LV1_Text_0
	msgbox LV1_Text_1
	msgbox LV1_Text_2
	releaseall
	end


LV2::
	msgbox LV2_Text_0
	msgbox LV2_Text_1
	releaseall
	end


LV3::
	msgbox LV3_Text_0
	releaseall
	end


LV4::
	msgbox LV4_Text_0
	msgbox LV4_Text_1
	releaseall
	end


LV5::
	msgbox LV5_Text_0
	msgbox LV5_Text_1
	msgbox LV5_Text_2
	releaseall
	end


LV6::
	msgbox LV6_Text_0
	msgbox LV6_Text_1
	releaseall
	end


LV7::
	msgbox LV7_Text_0
	msgbox LV7_Text_1
	releaseall
	end


lizbefore::
	msgbox_mugshot lizbefore_Text_0, MSGBOX_SIGN, MUGSHOT_LISA_HAPPY
	releaseall
	end


midbefore::
	msgbox_mugshot midbefore_Text_0, MSGBOX_SIGN, MUGSHOT_MIDORI
	releaseall
	end


aleft:
	walk_right
	step_end

aup:
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_right
	face_left
	step_end

aup2:
	walk_right
	walk_right
	walk_up
	walk_up
	face_left
	step_end

fleft:
	face_left
	step_end

trigger2::
	goto_if_unset FLAG_UNUSED_0x022, trigger2_1
	return

trigger2_1:
	applymovement OBJ_EVENT_ID_PLAYER, aleft
	return


sch1:
	walk_right
	walk_up
	face_left
	walk_down
	walk_down
	face_left
	walk_up
	face_right
	step_end

sch2:
	walk_up
	walk_right
	face_right
	step_end

sch3:
	walk_down
	walk_down
	face_right
	step_end

sch4:
	walk_up
	face_right
	step_end

sch5:
	walk_right
	face_down
	step_end

lizlab:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	face_left
	step_end

midlab:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	face_left
	step_end

playlab:
	walk_right
	walk_right
	walk_up
	walk_up
	face_left
	step_end

Schwartz::
	goto_if_unset FLAG_UNUSED_0x023, Schwartz_2
Schwartz_1:
	releaseall
	end

Schwartz_2:
	msgbox Schwartz_Text_0
	applymovement 2, midlab
	waitmovement 2
	applymovement OBJ_EVENT_ID_PLAYER, playlab
	waitmovement 0
	applymovement 3, lizlab
	waitmovement 3
	applymovement 1, sch1
	msgbox Schwartz_Text_1
	msgbox_mugshot Schwartz_Text_2, MSGBOX_SIGN, MUGSHOT_SCHWARTZ
	msgbox_mugshot Schwartz_Text_3, MSGBOX_SIGN, MUGSHOT_SCHWARTZ
	applymovement 1, sch2
	msgbox_mugshot Schwartz_Text_4, MSGBOX_SIGN, MUGSHOT_SCHWARTZ
	playfanfare MUS_OBTAIN_ITEM
	msgbox Schwartz_Text_5
	applymovement 1, sch3
	msgbox_mugshot Schwartz_Text_6, MSGBOX_SIGN, MUGSHOT_SCHWARTZ
	playfanfare MUS_OBTAIN_ITEM
	msgbox Schwartz_Text_7
	msgbox_mugshot Schwartz_Text_8, MSGBOX_SIGN, MUGSHOT_LISA_HAPPY
	applymovement 1, sch4
	msgbox_mugshot Schwartz_Text_9, MSGBOX_SIGN, MUGSHOT_SCHWARTZ
	goto Schwartz_1


machineheal::
	msgbox machineheal_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne machineheal_2
machineheal_1:
	releaseall
	end

machineheal_2:
	special HealPlayerParty
	playfanfare MUS_HEAL
	goto machineheal_1


Schwartz0::
	faceplayer
	goto_if_unset FLAG_UNUSED_0x023, Schwartz0_2
	msgbox Schwartz0_Text_11
Schwartz0_1:
	releaseall
	end

Schwartz0_2:
	msgbox_mugshot Schwartz0_Text_0, MSGBOX_SIGN, MUGSHOT_SCHWARTZ
	multichoice 0, 0, MULTI_STARTERS, TRUE
	switch VAR_RESULT
	case 0, Schwartz0_7
	case 1, Schwartz0_8
	case 2, Schwartz0_9
	case 3, Schwartz0_10
	case 4, Schwartz0_11
	case 5, Schwartz0_12
	case 6, Schwartz0_13
	case 7, Schwartz0_14
	case 8, Schwartz0_15
Schwartz0_5:
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	playfanfare MUS_OBTAIN_ITEM
	msgbox Schwartz0_Text_1
	fadescreen 1
	playmoncry VAR_RESULT, 0
	waitmoncry
	showmonpic VAR_RESULT, 5, 3
	msgbox Schwartz0_Text_2
	msgbox Schwartz0_Text_3
	hidemonpic
	fadescreen 0
	msgbox Schwartz0_Text_4
	msgbox Schwartz0_Text_5
	msgbox Schwartz0_Text_6
	giveitem ITEM_POKE_BALL, 20
	msgbox Schwartz0_Text_7
	giveitem ITEM_ABILITY_PATCH, 1
	giveitem ITEM_ABILITY_CAPSULE, 1
	msgbox Schwartz0_Text_8
	giveitem ITEM_TM_CASE
	giveitem ITEM_TM10_HIDDEN_POWER
	msgbox Schwartz0_Text_9
	msgbox Schwartz0_Text_10
	fadescreen 1
	removeobject 2
	removeobject 3
	fadescreen 0
	setflag FLAG_UNUSED_0x023
	goto Schwartz0_1

Schwartz0_7:
	multichoice 0, 0, MULTI_FIREWATERGRASS, TRUE
	switch VAR_RESULT
	case 0, Schwartz0_17
	case 1, Schwartz0_18
	case 2, Schwartz0_19
	goto Schwartz0_5

Schwartz0_8:
	multichoice 0, 0, MULTI_FIREWATERGRASS, TRUE
	compare VAR_RESULT, 0
	goto_if_eq Schwartz0_21
Schwartz0_20:
	compare VAR_RESULT, 1
	goto_if_eq Schwartz0_42
Schwartz0_41:
	compare VAR_RESULT, 2
	goto_if_eq Schwartz0_62
	goto Schwartz0_5

Schwartz0_9:
	multichoice 0, 0, MULTI_FIREWATERGRASS, TRUE
	compare VAR_RESULT, 0
	goto_if_eq Schwartz0_24
Schwartz0_23:
	compare VAR_RESULT, 1
	goto_if_eq Schwartz0_45
Schwartz0_44:
	compare VAR_RESULT, 2
	goto_if_eq Schwartz0_64
	goto Schwartz0_5

Schwartz0_10:
	multichoice 0, 0, MULTI_FIREWATERGRASS, TRUE
	compare VAR_RESULT, 0
	goto_if_eq Schwartz0_27
Schwartz0_26:
	compare VAR_RESULT, 1
	goto_if_eq Schwartz0_48
Schwartz0_47:
	compare VAR_RESULT, 2
	goto_if_eq Schwartz0_66
	goto Schwartz0_5

Schwartz0_11:
	multichoice 0, 0, MULTI_FIREWATERGRASS, TRUE
	compare VAR_RESULT, 0
	goto_if_eq Schwartz0_30
Schwartz0_29:
	compare VAR_RESULT, 1
	goto_if_eq Schwartz0_51
Schwartz0_50:
	compare VAR_RESULT, 2
	goto_if_eq Schwartz0_68
	goto Schwartz0_5

Schwartz0_12:
	multichoice 0, 0, MULTI_FIREWATERGRASS, TRUE
	compare VAR_RESULT, 0
	goto_if_eq Schwartz0_33
Schwartz0_32:
	compare VAR_RESULT, 1
	goto_if_eq Schwartz0_54
Schwartz0_53:
	compare VAR_RESULT, 2
	goto_if_eq Schwartz0_70
	goto Schwartz0_5

Schwartz0_13:
	multichoice 0, 0, MULTI_FIREWATERGRASS, TRUE
	compare VAR_RESULT, 0
	goto_if_eq Schwartz0_36
Schwartz0_35:
	compare VAR_RESULT, 1
	goto_if_eq Schwartz0_57
Schwartz0_56:
	compare VAR_RESULT, 2
	goto_if_eq Schwartz0_72
	goto Schwartz0_5

Schwartz0_14:
	multichoice 0, 0, MULTI_FIREWATERGRASS, TRUE
	compare VAR_RESULT, 0
	goto_if_eq Schwartz0_39
Schwartz0_38:
	compare VAR_RESULT, 1
	goto_if_eq Schwartz0_60
Schwartz0_59:
	compare VAR_RESULT, 2
	goto_if_eq Schwartz0_74
	goto Schwartz0_5

Schwartz0_15:
	random SPECIES_CALYREX
	bufferspeciesname STR_VAR_1, VAR_RESULT
	givemon VAR_RESULT, 5, ITEM_LEFTOVERS
	goto Schwartz0_5

Schwartz0_17:
	givemon SPECIES_BULBASAUR, 5, ITEM_MIRACLE_SEED
	addvar VAR_RESULT, SPECIES_BULBASAUR
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
	goto Schwartz0_5

Schwartz0_18:
	givemon SPECIES_CHARMANDER, 5, ITEM_CHARCOAL
	addvar VAR_RESULT, SPECIES_CHARMANDER
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
	goto Schwartz0_5

Schwartz0_19:
	givemon SPECIES_SQUIRTLE, 5, ITEM_MYSTIC_WATER
	addvar VAR_RESULT, SPECIES_SQUIRTLE
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
	goto Schwartz0_5

Schwartz0_21:
	givemon SPECIES_CHIKORITA, 5, ITEM_MIRACLE_SEED
	addvar VAR_RESULT, SPECIES_CHIKORITA
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
	goto Schwartz0_20

Schwartz0_24:
	givemon SPECIES_TREECKO, 5, ITEM_MIRACLE_SEED
	addvar VAR_RESULT, SPECIES_TREECKO
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
	goto Schwartz0_23

Schwartz0_27:
	givemon SPECIES_TURTWIG, 5, ITEM_MIRACLE_SEED
	addvar VAR_RESULT, SPECIES_TURTWIG
	bufferspeciesname STR_VAR_1, SPECIES_TURTWIG
	goto Schwartz0_26

Schwartz0_30:
	givemon SPECIES_SNIVY, 5, ITEM_MIRACLE_SEED
	addvar VAR_RESULT, SPECIES_SNIVY
	bufferspeciesname STR_VAR_1, SPECIES_SNIVY
	goto Schwartz0_29

Schwartz0_33:
	givemon SPECIES_CHESPIN, 5, ITEM_MIRACLE_SEED
	addvar VAR_RESULT, SPECIES_CHESPIN
	bufferspeciesname STR_VAR_1, SPECIES_CHESPIN
	goto Schwartz0_32

Schwartz0_36:
	givemon SPECIES_ROWLET, 5, ITEM_MIRACLE_SEED
	addvar VAR_RESULT, SPECIES_ROWLET
	bufferspeciesname STR_VAR_1, SPECIES_ROWLET
	goto Schwartz0_35

Schwartz0_39:
	givemon SPECIES_GROOKEY, 5, ITEM_MIRACLE_SEED
	addvar VAR_RESULT, SPECIES_GROOKEY
	bufferspeciesname STR_VAR_1, SPECIES_GROOKEY
	goto Schwartz0_38

Schwartz0_42:
	givemon SPECIES_CYNDAQUIL, 5, ITEM_CHARCOAL
	addvar VAR_RESULT, SPECIES_CYNDAQUIL
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
	goto Schwartz0_41

Schwartz0_45:
	givemon SPECIES_TORCHIC, 5, ITEM_CHARCOAL
	addvar VAR_RESULT, SPECIES_TORCHIC
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
	goto Schwartz0_44

Schwartz0_48:
	givemon SPECIES_CHIMCHAR, 5, ITEM_CHARCOAL
	addvar VAR_RESULT, SPECIES_CHIMCHAR
	bufferspeciesname STR_VAR_1, SPECIES_CHIMCHAR
	goto Schwartz0_47

Schwartz0_51:
	givemon SPECIES_TEPIG, 5, ITEM_CHARCOAL
	addvar VAR_RESULT, SPECIES_TEPIG
	bufferspeciesname STR_VAR_1, SPECIES_TEPIG
	goto Schwartz0_50

Schwartz0_54:
	givemon SPECIES_FENNEKIN, 5, ITEM_CHARCOAL
	addvar VAR_RESULT, SPECIES_FENNEKIN
	bufferspeciesname STR_VAR_1, SPECIES_FENNEKIN
	goto Schwartz0_53

Schwartz0_57:
	givemon SPECIES_LITTEN, 5, ITEM_CHARCOAL
	addvar VAR_RESULT, SPECIES_LITTEN
	bufferspeciesname STR_VAR_1, SPECIES_LITTEN
	goto Schwartz0_56

Schwartz0_60:
	givemon SPECIES_SCORBUNNY, 5, ITEM_CHARCOAL
	addvar VAR_RESULT, SPECIES_SCORBUNNY
	bufferspeciesname STR_VAR_1, SPECIES_SCORBUNNY
	goto Schwartz0_59

Schwartz0_62:
	givemon SPECIES_TOTODILE, 5, ITEM_MYSTIC_WATER
	addvar VAR_RESULT, SPECIES_TOTODILE
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
	goto Schwartz0_5

Schwartz0_64:
	givemon SPECIES_MUDKIP, 5, ITEM_MYSTIC_WATER
	addvar VAR_RESULT, SPECIES_MUDKIP
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
	goto Schwartz0_5

Schwartz0_66:
	givemon SPECIES_PIPLUP, 5, ITEM_MYSTIC_WATER
	addvar VAR_RESULT, SPECIES_PIPLUP
	bufferspeciesname STR_VAR_1, SPECIES_PIPLUP
	goto Schwartz0_5

Schwartz0_68:
	givemon SPECIES_OSHAWOTT, 5, ITEM_MYSTIC_WATER
	addvar VAR_RESULT, SPECIES_OSHAWOTT
	bufferspeciesname STR_VAR_1, SPECIES_OSHAWOTT
	goto Schwartz0_5

Schwartz0_70:
	givemon SPECIES_FROAKIE, 5, ITEM_MYSTIC_WATER
	addvar VAR_RESULT, SPECIES_FROAKIE
	bufferspeciesname STR_VAR_1, SPECIES_FROAKIE
	goto Schwartz0_5

Schwartz0_72:
	givemon SPECIES_POPPLIO, 5, ITEM_MYSTIC_WATER
	addvar VAR_RESULT, SPECIES_POPPLIO
	bufferspeciesname STR_VAR_1, SPECIES_POPPLIO
	goto Schwartz0_5

Schwartz0_74:
	givemon SPECIES_SOBBLE, 5, ITEM_MYSTIC_WATER
	addvar VAR_RESULT, SPECIES_SOBBLE
	bufferspeciesname STR_VAR_1, SPECIES_SOBBLE
	goto Schwartz0_5


machine::
	msgbox machine_Text_0
	releaseall
	end


LV8::
	msgbox LV8_Text_0
	msgbox LV8_Text_1
	msgbox LV8_Text_2
	releaseall
	end


LV9::
	msgbox LV9_Text_0
	msgbox LV9_Text_1
	msgbox LV9_Text_2
	releaseall
	end


LV1_Text_0:
	.string "Trois essais sur la théorie sexuelle\n"
	.string "chez les Pokémon, en 12 volumes$"

LV1_Text_1:
	.string "De la camaraderie à la pension à l'oeuf$"

LV1_Text_2:
	.string "Adalbert Freud$"

LV2_Text_0:
	.string "17 équations qui ont changé le monde de\n"
	.string "la stratégie Pokémon$"

LV2_Text_1:
	.string "Rigobert Dagobert$"

LV3_Text_0:
	.string "C'est si compliqué que vous avez\n"
	.string "renoncé à lire le titre.$"

LV4_Text_0:
	.string "La fraude fiscale pour les nuls$"

LV4_Text_1:
	.string "{COLOR BLUE}Il semblerait que ce livre ne soit pas au\n"
	.string "bon endroit...$"

LV5_Text_0:
	.string "Origine des Fantominus$"

LV5_Text_1:
	.string "Et si ce Fantominus qui vous harcelait\n"
	.string "était votre ancien Pokémon?$"

LV5_Text_2:
	.string "Arnvald Rongier$"

LV6_Text_0:
	.string "Mélodelfe, Ectoplasma, quelle relation ?$"

LV6_Text_1:
	.string "Clodomir Duvald$"

LV7_Text_0:
	.string "AZOTH - V.N$"

LV7_Text_1:
	.string "{COLOR BLUE}Une feuille recouvre le nom de l'auteur$"

lizbefore_Text_0:
	.string "Je ne tiens plus en place!!!! Je vais\n"
	.string "avoir mon tout premier Pokémon!$"

midbefore_Text_0:
	.string "Pitié faites que Coupenotte ait une\n"
	.string "bonne nature.$"

Schwartz_Text_0:
	.string "Tout le monde est là?$"

Schwartz_Text_1:
	.string "........$"

Schwartz_Text_2:
	.string "Perfekt, je peux donc commencer. Vous\n"
	.string "êtes la 7ème promotion de dresseurs du\l"
	.string "CDR. Je ne vais pas vous raconter\l"
	.string "l'histoire du CDR, même si ça semble\l"
	.string "vous intéresser car il y a des panneaux\l"
	.string "avec tout ce qu'il y a à savoir dehors.\l"
	.string "Votre objectif en tant que dresseurs,\l"
	.string "ou plutôt vos objectifs sont de faire\l"
	.string "des découvertes diverses. Je\l"
	.string "m'explique : vous devrez, en tissant\l"
	.string "des spiels, heim, liens avec vos futurs\l"
	.string "Pokémon, les faire évoluer et nous les\l"
	.string "apporter, ici au Centre de Recherches\l"
	.string "afin que nous puissions les étudier,\l"
	.string "bien entendu vous n'allez pas vous\l"
	.string "déplacer à chaque fois, nous utilisons\l"
	.string "un système de transfert dernier cri, un\l"
	.string "simple ordinateur vous suffira pour\l"
	.string "nous les transférer. Les moyens de\l"
	.string "tissers des liens avec eux sont divers,\l"
	.string "le plus connu est de participer à des\l"
	.string "COMBATS de Pokémon. Les dresseurs les\l"
	.string "plus brillants participeront à la fin de\l"
	.string "l'année à la Ligue des Champions\l"
	.string "d'Olnyris, un énorme tournoi visant à\l"
	.string "déterminer le dresseur le plus puissant\l"
	.string "de l'année. Ce dresseur, va combattre\l"
	.string "par la suite le Conseil 4 d'Olnyris et\l"
	.string "essayer de vaincre le champion.$"

Schwartz_Text_3:
	.string "Bien, voyons voir les mails reçus...$"

Schwartz_Text_4:
	.string "Midori, tu as demandé un Coupenotte...\n"
	.string "Le voilà, tout chaud dans sa Poké Ball.$"

Schwartz_Text_5:
	.string "{COLOR BLUE}Midori obtient un COUPENOTTE$"

Schwartz_Text_6:
	.string "Lisa, tu as demandé un Évoli, tiens.$"

Schwartz_Text_7:
	.string "{COLOR BLUE} Lisa a obtenu une ÉVOLI$"

Schwartz_Text_8:
	.string "Oh ! Elle est si mignonne!!!$"

Schwartz_Text_9:
	.string "Enfin... {PLAYER}... Tu n'as même pas\n"
	.string "pris le temps d'envoyer ton mail, ce qui\l"
	.string "en dit long sur ton implication... Il est\l"
	.string "trop tard pour faire demi-tour donc,\l"
	.string "j'ai préparé quelques Pokémon pour toi.\l"
	.string "Il y a derrière moi 8 trios de Pokémon\l"
	.string "venant de différentes régions, 24 au\l"
	.string "total. La dernière machine est...\l"
	.string "quelque peu défaillante, le Pokémon\l"
	.string "reçu sera aléatoire.$"

machineheal_Text_0:
	.string "Soigner vos Pokémon?$"

Schwartz0_Text_0:
	.string "Lequel tu veux?$"

Schwartz0_Text_1:
	.string "{COLOR BLUE} Vous recevez un {STR_VAR_1}$"

Schwartz0_Text_2:
	.string "{STR_VAR_1}!$"

Schwartz0_Text_3:
	.string "{COLOR BLUE}On dirait que {STR_VAR_1} vous\n"
	.string "apprécie.$"

Schwartz0_Text_4:
	.string "Bien, passons aux objets. Voici un V.N\n"
	.string "Tech, un appareil fabriqué par Vitalis\l"
	.string "Navitas SARL qui vous permettra de\l"
	.string "nous contacter, il est muni d'une\l"
	.string "application nommé V.N Maps, un service\l"
	.string "mondial de carthographie et bien\l"
	.string "d'autre encore, je vous laisserai\l"
	.string "découvrir ça par vous-même.$"

Schwartz0_Text_5:
	.string "Un Pokédex pour chacun, il contient des\n"
	.string "descriptions très détaillées et des\l"
	.string "informations sur les Pokémon aussi\l"
	.string "bien sur leurs caractéristiques\l"
	.string "physiques que leurs atouts en combat,\l"
	.string "c'est le Pokédex National.$"

Schwartz0_Text_6:
	.string "20 Poké Balls, je pense que ça vous\n"
	.string "suffira pour l'instant.$"

Schwartz0_Text_7:
	.string "Et, un petit cadeau de ma part, un Patch\n"
	.string "Talent et une Pilule Talent, ces objets\l"
	.string "sont très rares, très chers et très\l"
	.string "convoités. Faites-en bon usage!$"

Schwartz0_Text_8:
	.string "Une dernière chose, voici une boîte CT\n"
	.string "accompagnée d'une CT Puissance\l"
	.string "Cachée.$"

Schwartz0_Text_9:
	.string "Bien, filez jeunesse, qui sait, peut être\n"
	.string "que deviendrez, en l'espace d'un an les\l"
	.string "meilleurs dresseurs de la région!$"

Schwartz0_Text_10:
	.string "Ne tardez pas, votre train va bientôt\n"
	.string "partir. Bonne chance !$"

Schwartz0_Text_11:
	.string "Tes amis sont déjà partis,\n"
	.string "qu'attends-tu?$"

machine_Text_0:
	.string "Des Pokémon sont stockés dans cette\n"
	.string "machine, il vaut mieux ne pas y toucher.$"

LV8_Text_0:
	.string "Mein Kampf$"

LV8_Text_1:
	.string "Le livre qui décrit avec une certaine\n"
	.string "intensité le combat d'un jeune\l"
	.string "dresseur pour devenir le Maître.$"

LV8_Text_2:
	.string "Adolph Nietschtler$"

LV9_Text_0:
	.string "Kalos n'a pas dit son dernier mot$"

LV9_Text_1:
	.string "Possesseur d'un café en plein Illumis et\n"
	.string "d'une entreprise concernant les\l"
	.string "nouvelles technologies, Lysandre\l"
	.string "explique dans ce livre comment\l"
	.string "redonner à Kalos sa gloire d'antan$"

LV9_Text_2:
	.string "Éric Lysandre$"
