CDRAreas_MapScripts::
	.byte 0


LGPE::
	msgbox LGPE_Text_0
	msgbox LGPE_Text_1
	msgbox LGPE_Text_2
	msgbox LGPE_Text_3
	getpartysize
	compare VAR_RESULT, 1
	goto_if_ge LGPE_2
	msgbox LGPE_Text_6
LGPE_1:
	releaseall
	end

LGPE_2:
	msgbox LGPE_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LGPE_5
	msgbox LGPE_Text_6
	goto LGPE_1

LGPE_5:
	removeobject 54
	givemon SPECIES_PIKACHU_PARTNER_CAP, 10, ITEM_LIGHT_BALL
	msgbox LGPE_Text_5
	fadescreen 1
	removeobject 52
	removeobject 53
	fadescreen 0
	setflag FLAG_UNUSED_0x024
	goto LGPE_1


LGPE_Text_0:
	.string "Oh... Quel système stupide.$"

LGPE_Text_1:
	.string "Je vais bientôt quitter Olnyris pour le\n"
	.string "travail mais je ne peux emmener que l'un\l"
	.string "de mes deux amis.$"

LGPE_Text_2:
	.string "Ils ont été modifié génétiquement par\n"
	.string "une organisation criminelle, je les ai\l"
	.string "combattus et j'ai pu les libérer. Cela\l"
	.string "fait maintenant plusieurs années que\l"
	.string "je viens à cet endroit les nourrir et\l"
	.string "jouer avec eux.$"

LGPE_Text_3:
	.string "J'aimerai donner celui que je\n"
	.string "n'emmenerai pas à un dresseur qui saura\l"
	.string "s'en occuper.$"

LGPE_Text_4:
	.string "Ton Pokémon... Il a l'air heureux. Tu\n"
	.string "voudrais prendre soin de mon Pikachu?$"

LGPE_Text_5:
	.string "Prends en soin. Au revoir.$"

LGPE_Text_6:
	.string "Tu n'es pas la personne que je cherche.$"
