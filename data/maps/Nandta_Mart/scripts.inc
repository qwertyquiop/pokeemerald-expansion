Nandta_Mart_MapScripts::
	.byte 0


Nandta_Mart_NPC1::
# 4 "data/maps/Nandta_Mart/scripts.pory"
	lockall
# 5 "data/maps/Nandta_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/Nandta_Mart/scripts.pory"
	msgbox Nandta_Mart_NPC1_Text_0
# 7 "data/maps/Nandta_Mart/scripts.pory"
	releaseall
	return


Nandta_Mart_NPC1_Text_0:
# 6 "data/maps/Nandta_Mart/scripts.pory"
	.string "I'm looking for potions.$"
