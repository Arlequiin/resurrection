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


	.align 2
FallarborTown_Mart_Pokemart:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE

FallarborTown_Mart_EventScript_Clerk_Text_0:
	.string "Bonjour! Je vends des objets de soins.\n"
	.string "Que puis-je faire pour vous?$"

FallarborTown_Mart_EventScript_Clerk_Text_1:
	.string "Merci pour votre visite!$"
