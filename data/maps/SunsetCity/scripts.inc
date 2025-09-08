SunsetCity_MapScripts::
# 2 "data/maps/SunsetCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RemoveGrunts
	.byte 0


BiggerThanItLooks::
# 6 "data/maps/SunsetCity/scripts.pory"
	lock
# 7 "data/maps/SunsetCity/scripts.pory"
	faceplayer
# 8 "data/maps/SunsetCity/scripts.pory"
	msgbox BiggerThanItLooks_Text_0
# 10 "data/maps/SunsetCity/scripts.pory"
	release
	return


SunsetGrunt1::
# 14 "data/maps/SunsetCity/scripts.pory"
	lock
# 15 "data/maps/SunsetCity/scripts.pory"
	faceplayer
# 16 "data/maps/SunsetCity/scripts.pory"
	msgbox SunsetGrunt1_Text_0
# 18 "data/maps/SunsetCity/scripts.pory"
	releaseall
	return


SunsetGrunt2::
# 22 "data/maps/SunsetCity/scripts.pory"
	lock
# 23 "data/maps/SunsetCity/scripts.pory"
	faceplayer
# 24 "data/maps/SunsetCity/scripts.pory"
	msgbox SunsetGrunt2_Text_0
# 25 "data/maps/SunsetCity/scripts.pory"
	releaseall
	return


SunsetGrunt3::
# 29 "data/maps/SunsetCity/scripts.pory"
	lock
# 30 "data/maps/SunsetCity/scripts.pory"
	faceplayer
# 31 "data/maps/SunsetCity/scripts.pory"
	msgbox SunsetGrunt3_Text_0
# 32 "data/maps/SunsetCity/scripts.pory"
	releaseall
	return


RemoveGrunts::
# 36 "data/maps/SunsetCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RemoveGrunts_1
	return

RemoveGrunts_1:
# 37 "data/maps/SunsetCity/scripts.pory"
	removeobject 2
# 38 "data/maps/SunsetCity/scripts.pory"
	removeobject 4
# 39 "data/maps/SunsetCity/scripts.pory"
	removeobject 3
	return


BiggerThanItLooks_Text_0:
# 8 "data/maps/SunsetCity/scripts.pory"
	.string "The gym looks small on the outside, but\n"
	.string "the inside is bigger than you'd think.$"

SunsetGrunt1_Text_0:
# 16 "data/maps/SunsetCity/scripts.pory"
	.string "What? A guy can't loiter with his pals\n"
	.string "nowadays?$"

SunsetGrunt2_Text_0:
# 24 "data/maps/SunsetCity/scripts.pory"
	.string "Get lost, kid.$"

SunsetGrunt3_Text_0:
# 31 "data/maps/SunsetCity/scripts.pory"
	.string "Don't you have better things to do?$"
