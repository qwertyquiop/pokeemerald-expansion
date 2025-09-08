NPCHouse_SSCity2_MapScripts::
	.byte 0


SunsetWomanWander::
# 4 "data/maps/NPCHouse_SSCity2/scripts.pory"
	lock
# 5 "data/maps/NPCHouse_SSCity2/scripts.pory"
	faceplayer
# 6 "data/maps/NPCHouse_SSCity2/scripts.pory"
	msgbox SunsetWomanWander_Text_0
# 7 "data/maps/NPCHouse_SSCity2/scripts.pory"
	msgbox SunsetWomanWander_Text_1
# 9 "data/maps/NPCHouse_SSCity2/scripts.pory"
	release
	return


BoyTooLoud::
# 13 "data/maps/NPCHouse_SSCity2/scripts.pory"
	lock
# 14 "data/maps/NPCHouse_SSCity2/scripts.pory"
	faceplayer
# 15 "data/maps/NPCHouse_SSCity2/scripts.pory"
	msgbox BoyTooLoud_Text_0
# 17 "data/maps/NPCHouse_SSCity2/scripts.pory"
	msgbox BoyTooLoud_Text_1
	return


TVRecording::
# 22 "data/maps/NPCHouse_SSCity2/scripts.pory"
	lockall
# 23 "data/maps/NPCHouse_SSCity2/scripts.pory"
	msgbox TVRecording_Text_0
# 25 "data/maps/NPCHouse_SSCity2/scripts.pory"
	releaseall
	return


SunsetWomanWander_Text_0:
# 6 "data/maps/NPCHouse_SSCity2/scripts.pory"
	.string "Lyrica specializes in Electric types.$"

SunsetWomanWander_Text_1:
# 7 "data/maps/NPCHouse_SSCity2/scripts.pory"
	.string "Her performances are extra lively, but\n"
	.string "the electricity ruins my hair!$"

BoyTooLoud_Text_0:
# 15 "data/maps/NPCHouse_SSCity2/scripts.pory"
	.string "I like to listen to Lyrica's music,\n"
	.string "but the live shows are too loud for me.$"

BoyTooLoud_Text_1:
# 17 "data/maps/NPCHouse_SSCity2/scripts.pory"
	.string "Instead of going in person, I watch\n"
	.string "them on TV!$"

TVRecording_Text_0:
# 23 "data/maps/NPCHouse_SSCity2/scripts.pory"
	.string "The TV is playing a recording\n"
	.string "of one of the gym leader's shows.$"
