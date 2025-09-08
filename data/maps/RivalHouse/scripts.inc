# 1 "data/maps/RivalHouse/scripts.pory"

# 2 "data/maps/RivalHouse/scripts.pory"
RivalHouse_MapScripts::
# 3 "data/maps/RivalHouse/scripts.pory"
	.byte 0

Rivalsister::
# 6 "data/maps/RivalHouse/scripts.pory"
	lockall
# 7 "data/maps/RivalHouse/scripts.pory"
	faceplayer
# 8 "data/maps/RivalHouse/scripts.pory"
	msgbox Rivalsister_Text_0
# 9 "data/maps/RivalHouse/scripts.pory"
	releaseall
	return


Rivalmother::
# 13 "data/maps/RivalHouse/scripts.pory"
	lockall
# 14 "data/maps/RivalHouse/scripts.pory"
	faceplayer
# 15 "data/maps/RivalHouse/scripts.pory"
	msgbox Rivalmother_Text_0
# 16 "data/maps/RivalHouse/scripts.pory"
	msgbox Rivalmother_Text_1
# 18 "data/maps/RivalHouse/scripts.pory"
	releaseall
	return


Rivalsister_Text_0:
# 8 "data/maps/RivalHouse/scripts.pory"
	.string "Hi, {PLAYER}!$"

Rivalmother_Text_0:
# 15 "data/maps/RivalHouse/scripts.pory"
	.string "Are you looking for Ryan?\n$"

Rivalmother_Text_1:
# 16 "data/maps/RivalHouse/scripts.pory"
	.string "He just left. He said that he was going\n"
	.string "on a journey to collect the gym badges...$"
