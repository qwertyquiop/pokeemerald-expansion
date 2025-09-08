Nandta_Pokecenter_MapScripts::
	.byte 0


PokeCenterWoman::
# 4 "data/maps/Nandta_Pokecenter/scripts.pory"
	lockall
# 5 "data/maps/Nandta_Pokecenter/scripts.pory"
	faceplayer
# 6 "data/maps/Nandta_Pokecenter/scripts.pory"
	msgbox PokeCenterWoman_Text_0
# 8 "data/maps/Nandta_Pokecenter/scripts.pory"
	msgbox PokeCenterWoman_Text_1
# 10 "data/maps/Nandta_Pokecenter/scripts.pory"
	releaseall
	return


PokeCenterMan::
# 14 "data/maps/Nandta_Pokecenter/scripts.pory"
	lockall
# 15 "data/maps/Nandta_Pokecenter/scripts.pory"
	releaseall
# 16 "data/maps/Nandta_Pokecenter/scripts.pory"
	msgbox PokeCenterMan_Text_0
# 17 "data/maps/Nandta_Pokecenter/scripts.pory"
	msgbox PokeCenterMan_Text_1
# 19 "data/maps/Nandta_Pokecenter/scripts.pory"
	releaseall
	return


NandtaNurse::
# 23 "data/maps/Nandta_Pokecenter/scripts.pory"
	setrespawn HEAL_LOCATION_NANDTA_TOWN
# 24 "data/maps/Nandta_Pokecenter/scripts.pory"
	call SlateportCity_PokemonCenter_1F_EventScript_Nurse
	return


PokeCenterWoman_Text_0:
# 6 "data/maps/Nandta_Pokecenter/scripts.pory"
	.string "I heard a Titan POKEMON was spotted\n"
	.string "on Route 2!$"

PokeCenterWoman_Text_1:
# 8 "data/maps/Nandta_Pokecenter/scripts.pory"
	.string "Be careful if you're on your way\n"
	.string "to Sunset City.$"

PokeCenterMan_Text_0:
# 16 "data/maps/Nandta_Pokecenter/scripts.pory"
	.string "I'm resting before I commute.$"

PokeCenterMan_Text_1:
# 17 "data/maps/Nandta_Pokecenter/scripts.pory"
	.string "I work in Sunset City, so it's\n"
	.string "quite the trekk, as you can imagine.$"
