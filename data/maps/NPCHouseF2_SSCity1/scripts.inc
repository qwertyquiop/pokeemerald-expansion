NPCHouseF2_SSCity1_MapScripts::
	.byte 0


BlackBeltSunset::
# 4 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_SS_TIDAL_LOWER_DECK_LEFTOVERS, BlackBeltSunset_1
# 17 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	lock
# 18 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	faceplayer
# 19 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	msgbox BlackBeltSunset_Text_3
# 21 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	release
	return

BlackBeltSunset_1:
# 5 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	lock
# 6 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	faceplayer
# 7 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	msgbox BlackBeltSunset_Text_0
# 9 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	msgbox BlackBeltSunset_Text_1
# 10 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	msgbox BlackBeltSunset_Text_2
# 12 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 13 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_SS_TIDAL_LOWER_DECK_LEFTOVERS
# 14 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	release
	return


BlackBeltSunset_Text_0:
# 7 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	.string "The gym leader here has quite\n"
	.string "the singing voice.$"

BlackBeltSunset_Text_1:
# 9 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	.string "Her POKEMON pack a punch, too.$"

BlackBeltSunset_Text_2:
# 10 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	.string "Take this! It will help you match her\n"
	.string "power!$"

BlackBeltSunset_Text_3:
# 19 "data/maps/NPCHouseF2_SSCity1/scripts.pory"
	.string "Good luck getting that badge challenger!\n"
	.string "Show that leader who's boss!$"
