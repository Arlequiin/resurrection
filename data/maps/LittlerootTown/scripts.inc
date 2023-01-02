LittlerootTown_MapScripts::
	.byte 0


btl::
	lock
	msgbox btl_Text_0
	releaseall
	end


eolienne::
	lock
	msgbox eolienne_Text_0
	random 9
	switch VAR_RESULT
	case 0, eolienne_3
	case 1, eolienne_4
	case 2, eolienne_5
	case 3, eolienne_6
	case 4, eolienne_7
	case 5, eolienne_8
	case 6, eolienne_9
eolienne_1:
	releaseall
	end

eolienne_3:
	msgbox eolienne_Text_1
	giveitem ITEM_HEALTH_FEATHER
	goto eolienne_1

eolienne_4:
	msgbox eolienne_Text_1
	giveitem ITEM_MUSCLE_FEATHER
	goto eolienne_1

eolienne_5:
	msgbox eolienne_Text_1
	giveitem ITEM_RESIST_FEATHER
	goto eolienne_1

eolienne_6:
	msgbox eolienne_Text_1
	giveitem ITEM_GENIUS_FEATHER
	goto eolienne_1

eolienne_7:
	msgbox eolienne_Text_1
	giveitem ITEM_CLEVER_FEATHER
	goto eolienne_1

eolienne_8:
	msgbox eolienne_Text_1
	giveitem ITEM_SWIFT_FEATHER
	goto eolienne_1

eolienne_9:
	msgbox eolienne_Text_1
	giveitem ITEM_PRETTY_FEATHER
	goto eolienne_1


Rocks::
	lock
	msgbox Rocks_Text_0
	releaseall
	end


btl_Text_0:
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Maison de {PLAYER}$"

eolienne_Text_0:
	.string "C'est une éolienne. Elle produit de\n"
	.string "l'énergie à l'aide du vent.$"

eolienne_Text_1:
	.string "Oh, il y a quelque chose au sol.$"

Rocks_Text_0:
	.string "Ces roches émettent des ondes\n"
	.string "étranges. Elles sont infranchissables.$"
