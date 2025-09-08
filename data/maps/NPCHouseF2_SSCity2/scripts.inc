NPCHouseF2_SSCity2_MapScripts::
	.byte 0


EeveeMan::
# 4 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x024, EeveeMan_1
# 31 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	lock
# 32 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	faceplayer
# 33 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	msgbox EeveeMan_Text_8
# 34 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	releaseall
	return

EeveeMan_1:
# 5 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	lock
# 6 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	faceplayer
# 7 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	msgbox EeveeMan_Text_0
# 9 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	msgbox EeveeMan_Text_1
# 11 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	msgbox EeveeMan_Text_2
# 13 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	msgbox EeveeMan_Text_3, MSGBOX_YESNO
# 15 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EeveeMan_5
# 25 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	msgbox EeveeMan_Text_6
# 26 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	msgbox EeveeMan_Text_7
EeveeMan_4:
# 28 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	release
	return

EeveeMan_5:
# 16 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	msgbox EeveeMan_Text_4
# 18 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	givemon SPECIES_EEVEE, 10, ITEM_ORAN_BERRY
# 19 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	msgbox EeveeMan_Text_5
# 20 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	call GiftMonNickname
# 21 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 22 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	removeobject 2
	goto EeveeMan_4


EeveeInteract::
# 40 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	lock
# 41 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	faceplayer
# 42 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	msgbox EeveeInteract_Text_0
# 43 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_ENCOUNTER
# 44 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	waitmoncry
# 45 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	release
	return


EeveeMan_Text_0:
# 7 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	.string "This Eevee followed me home\n"
	.string " from Route 1...$"

EeveeMan_Text_1:
# 9 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	.string "I'm much too busy to take care\n"
	.string "of it though.$"

EeveeMan_Text_2:
# 11 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	.string "You look like a dependable\n"
	.string "young trainer.$"

EeveeMan_Text_3:
# 13 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	.string "Do you want to take it?$"

EeveeMan_Text_4:
# 16 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	.string "Excellent! I trust you'll\n"
	.string "raise it with care?$"

EeveeMan_Text_5:
# 19 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	.string "{PLAYER} recieved Eevee!$"

EeveeMan_Text_6:
# 25 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	.string "Oh, thats fine.$"

EeveeMan_Text_7:
# 26 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	.string "What shall I do...$"

EeveeMan_Text_8:
# 33 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	.string "How is Eevee?$"

EeveeInteract_Text_0:
# 42 "data/maps/NPCHouseF2_SSCity2/scripts.pory"
	.string "Veee!$"
