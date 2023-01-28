FallarborTown_Mart_MapScripts::
	.byte 0


FallarborTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	msgbox FallarborTown_Mart_EventScript_Clerk_Text_0
	waitmessage
	pokemart FallarborTown_Mart_Pokemart
	msgbox FallarborTown_Mart_EventScript_Clerk_Text_1
	release
	end


FallarborTown_Mart_EventScript_CT::
	lock
	faceplayer
	msgbox FallarborTown_Mart_EventScript_CT_Text_0
	waitmessage
	pokemart Mirabilis_CT
	msgbox FallarborTown_Mart_EventScript_Clerk_Text_1
	release
	end


	.align 2
FallarborTown_Mart_Pokemart:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE

	.align 2
Mirabilis_CT:
	.2byte ITEM_TM07_HAIL
	.2byte ITEM_TM11_SUNNY_DAY
	.2byte ITEM_TM18_RAIN_DANCE
	.2byte ITEM_TM37_SANDSTORM
	.2byte ITEM_NONE

FallarborTown_Mart_EventScript_Clerk_Text_0:
	.string "Bonjour! Que puis-je faire pour vous?$"

FallarborTown_Mart_EventScript_Clerk_Text_1:
	.string "Merci pour votre visite!$"

FallarborTown_Mart_EventScript_CT_Text_0:
	.string "Bonjour! Bienvenue au point de vente\n"
	.string "des CT. Que puis-je faire pour vous?$"
