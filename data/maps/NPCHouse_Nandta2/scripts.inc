NPCHouse_Nandta2_MapScripts::
	.byte 0


Nandta_OldWoman::
# 4 "data/maps/NPCHouse_Nandta2/scripts.pory"
	lockall
# 5 "data/maps/NPCHouse_Nandta2/scripts.pory"
	faceplayer
# 6 "data/maps/NPCHouse_Nandta2/scripts.pory"
	msgbox Nandta_OldWoman_Text_0
# 8 "data/maps/NPCHouse_Nandta2/scripts.pory"
	msgbox Nandta_OldWoman_Text_1
# 10 "data/maps/NPCHouse_Nandta2/scripts.pory"
	releaseall
	return


Nandta_OldWoman_Text_0:
# 6 "data/maps/NPCHouse_Nandta2/scripts.pory"
	.string "I've lived here since I was\n"
	.string "a little girl.$"

Nandta_OldWoman_Text_1:
# 8 "data/maps/NPCHouse_Nandta2/scripts.pory"
	.string "It's a quiet town, and the other\n"
	.string "cities aren't to my liking.$"
