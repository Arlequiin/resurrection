EventScript_UseFlash:: @ 82926F8
	msgbox Text_PlayerUsedLantern, MSGBOX_DEFAULT
	closemessage
	animateflash 1
	setflashlevel 1
	end

Text_PlayerUsedLantern:
	.string "{PLAYER} utilise la LANTERNE!$"
