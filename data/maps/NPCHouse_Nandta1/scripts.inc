NPCHouse_Nandta1_MapScripts::
	.byte 0


TwinFan::
# 4 "data/maps/NPCHouse_Nandta1/scripts.pory"
	lockall
# 5 "data/maps/NPCHouse_Nandta1/scripts.pory"
	faceplayer
# 6 "data/maps/NPCHouse_Nandta1/scripts.pory"
	msgbox TwinFan_Text_0
# 8 "data/maps/NPCHouse_Nandta1/scripts.pory"
	releaseall
	return


NandtaDad::
# 12 "data/maps/NPCHouse_Nandta1/scripts.pory"
	lockall
# 13 "data/maps/NPCHouse_Nandta1/scripts.pory"
	faceplayer
# 14 "data/maps/NPCHouse_Nandta1/scripts.pory"
	msgbox NandtaDad_Text_0
# 16 "data/maps/NPCHouse_Nandta1/scripts.pory"
	releaseall
	return


TwinFan_Text_0:
# 6 "data/maps/NPCHouse_Nandta1/scripts.pory"
	.string "I want to go to Sunset City to see\n"
	.string "Lyrica, but my dad won't take me!$"

NandtaDad_Text_0:
# 14 "data/maps/NPCHouse_Nandta1/scripts.pory"
	.string "The environment of Sunset City\n"
	.string "gives me a headache...$"
