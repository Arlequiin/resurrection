CDR_Indoor_1_MapScripts::
	.byte 0


SCDR1::
	lock
	faceplayer
	msgbox SCDR1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_ne SCDR1_2
	msgbox SCDR1_Text_2
SCDR1_1:
	releaseall
	end

SCDR1_2:
	msgbox SCDR1_Text_1
	goto SCDR1_1


poubelle::
	msgbox poubelle_Text_0
	releaseall
	end


faceright:
	face_right
	step_end

faceup:
	face_up
	step_end

faceleft:
	face_left
	step_end

facedown:
	face_down
	step_end

donttouch1::
	applymovement 1, faceleft
	msgbox donttouch1_Text_0
	applymovement 1, faceup
	releaseall
	end


donttouch2::
	applymovement 2, faceright
	msgbox donttouch1_Text_0
	applymovement 2, facedown
	releaseall
	end


prive::
	msgbox prive_Text_0
	releaseall
	end


SCDR1_Text_0:
	.string "Éh, salut futur dresseur ! Tu vois ce\n"
	.string "qu'il y a devant moi, c'est LACIE ! LACIE\l"
	.string "est un serveur qui peut stocker\l"
	.string "jusqu'à 100 To ! On y stocke toutes les\l"
	.string "données concernant les recherches...\l"
	.string "secrètes du CDR... Tu veux que je te\l"
	.string "parle d'une découverte récente, ça\l"
	.string "reste entre nous... ?$"

SCDR1_Text_1:
	.string "Désolé... Je parle beaucoup.$"

SCDR1_Text_2:
	.string "Tu vois les énormes rochers qui\n"
	.string "encerclent Cellapolis Centre et le\l"
	.string "rocher qu'on a ramené ici ? Bah,\l"
	.string "paraît-il ils viennent d'une autre\l"
	.string "planète parce qu'ils peuvent faire\l"
	.string "évoluer des Mélofée, leur seul moyen\l"
	.string "d'évolution anciennement connu était\l"
	.string "la Pierre Lune, qui vient de l'espace !\l"
	.string "Après plusieurs tests on a pu\l"
	.string "comprendre que c'était le résultat\l"
	.string "d'une attaque Draco-Météore un peu\l"
	.string "spéciale... Il y a deux Pokémon dans le\l"
	.string "coup, Deoxys et Jirachi, deux fabuleux\l"
	.string "originaires de Hoenn. Ils ont laissé des\l"
	.string "traces un peu partout dans la région\l"
	.string "jusqu'au sud-est d'Onlyris, là-bas a\l"
	.string "été récemment découvert un vieux\l"
	.string "temple sans toît. On y a envoyé une\l"
	.string "équipe d'exploration, ils ont dit que\l"
	.string "tout y est bizarre, comme si ce temple\l"
	.string "n'était pas soumis aux lois physiques.\l"
	.string "Ils y ont trouvé des morceaux de\l"
	.string "météorites ce qui valide nos\l"
	.string "hypothèses. La dernière chose qu'ils\l"
	.string "ont trouvé est un triangle noir, qui\l"
	.string "bougeait de plus en plus vite jusqu'à\l"
	.string "devenir progressivement rouge, une\l"
	.string "chose horrible en est sortie. Depuis,\l"
	.string "les explorateurs que l'on a envoyé\l"
	.string "n'ont pas donné de nouvelles et ne\l"
	.string "sont jamais revenus.$"

poubelle_Text_0:
	.string "C'est vide.$"

donttouch1_Text_0:
	.string "Ne touche surtout pas à ça !$"

prive_Text_0:
	.string "Bonjour. Cette zone est interdite au\n"
	.string "public, elle est dédiée aux recherches.$"
