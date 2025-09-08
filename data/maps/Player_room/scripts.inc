# 1 "data/maps/Player_room/scripts.pory"

# 2 "data/maps/Player_room/scripts.pory"
Player_room_MapScripts::
# 3 "data/maps/Player_room/scripts.pory"
	.byte 0

WarpOptions::
# 7 "data/maps/Player_room/scripts.pory"
	lock
# 8 "data/maps/Player_room/scripts.pory"
	msgbox WarpOptions_Text_0
# 9 "data/maps/Player_room/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 10 "data/maps/Player_room/scripts.pory"
	waitfanfare
# 11 "data/maps/Player_room/scripts.pory"
	givemon SPECIES_SYLVEON, 20
# 12 "data/maps/Player_room/scripts.pory"
	msgbox WarpOptions_Text_1
# 13 "data/maps/Player_room/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, WarpOptions_Text_2, WarpOptions_Text_3, WarpOptions_Text_4
# 24 "data/maps/Player_room/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WarpOptions_2
WarpOptions_1:
# 27 "data/maps/Player_room/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WarpOptions_5
WarpOptions_4:
# 30 "data/maps/Player_room/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq WarpOptions_8
WarpOptions_7:
# 33 "data/maps/Player_room/scripts.pory"
	releaseall
	return

WarpOptions_2:
# 25 "data/maps/Player_room/scripts.pory"
	warp MAP_NANDTA_TOWN, 3, 5
	goto WarpOptions_1

WarpOptions_5:
# 28 "data/maps/Player_room/scripts.pory"
	warp MAP_SUNSET_CITY, 4, 6
	goto WarpOptions_4

WarpOptions_8:
# 31 "data/maps/Player_room/scripts.pory"
	msgbox WarpOptions_Text_5
	goto WarpOptions_7


WarpOptions_Text_0:
# 8 "data/maps/Player_room/scripts.pory"
	.string "Gave POKEMON!$"

WarpOptions_Text_1:
# 12 "data/maps/Player_room/scripts.pory"
	.string "Warp where?$"

WarpOptions_Text_2:
# 20 "data/maps/Player_room/scripts.pory"
	.string "Nandta Town$"

WarpOptions_Text_3:
# 21 "data/maps/Player_room/scripts.pory"
	.string "Sunset City$"

WarpOptions_Text_4:
# 22 "data/maps/Player_room/scripts.pory"
	.string "Do not Warp$"

WarpOptions_Text_5:
# 31 "data/maps/Player_room/scripts.pory"
	.string "Butts$"
