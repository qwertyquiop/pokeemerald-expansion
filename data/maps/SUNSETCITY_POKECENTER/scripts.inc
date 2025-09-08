SUNSETCITY_POKECENTER_MapScripts::
	.byte 0


GiftMonNickname::
# 5 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox GiftMonNickname_Text_0, MSGBOX_YESNO
# 6 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GiftMonNickname_1
	return

GiftMonNickname_1:
# 7 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 8 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


AlolaStarters::
# 12 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x025, AlolaStarters_1
# 43 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	lock
# 44 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	faceplayer
# 45 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaStarters_Text_8
# 46 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	release
	return

AlolaStarters_1:
# 13 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	lock
# 14 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	faceplayer
# 15 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaStarters_Text_0
# 16 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaStarters_Text_1
# 18 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaStarters_Text_2
# 19 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaStarters_Text_3
# 20 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	message AlolaStarters_Text_4
# 21 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	waitmessage
# 22 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, AlolaStarters_Text_5, AlolaStarters_Text_6
# 33 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AlolaStarters_5
# 36 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AlolaStarters_6
AlolaStarters_4:
# 40 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	release
	return

AlolaStarters_5:
# 34 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	call AlolaGift
	goto AlolaStarters_4

AlolaStarters_6:
# 37 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaStarters_Text_7
	goto AlolaStarters_4


AlolaGift::
# 51 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaGift_Text_0
# 52 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaGift_Text_1
# 54 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	call AlolaChoice
	return


AlolaChoice::
# 58 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	message AlolaChoice_Text_0
# 59 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	waitmessage
# 60 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, AlolaChoice_Text_1, AlolaChoice_Text_2, AlolaChoice_Text_3
# 71 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AlolaChoice_2
AlolaChoice_1:
# 86 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AlolaChoice_5
AlolaChoice_4:
# 102 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AlolaChoice_11
AlolaChoice_10:
# 116 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 117 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	release
	return

AlolaChoice_2:
# 72 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaChoice_Text_4, MSGBOX_YESNO
# 73 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlolaChoice_7
# 81 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaChoice_Text_7
# 82 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	call AlolaChoice
	goto AlolaChoice_1

AlolaChoice_5:
# 87 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaChoice_Text_8, MSGBOX_YESNO
# 88 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlolaChoice_13
# 97 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaChoice_Text_7
# 98 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	call AlolaChoice
	goto AlolaChoice_4

AlolaChoice_7:
# 74 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaChoice_Text_5
# 75 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	givemon SPECIES_ROWLET, 10, ITEM_ORAN_BERRY
# 76 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaChoice_Text_6
# 77 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 78 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	call GiftMonNickname
	goto AlolaChoice_1

AlolaChoice_11:
# 103 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaChoice_Text_10, MSGBOX_YESNO
# 104 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlolaChoice_16
# 112 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaChoice_Text_7
# 113 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	call AlolaChoice
	goto AlolaChoice_10

AlolaChoice_13:
# 89 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaChoice_Text_5
# 90 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	givemon SPECIES_LITTEN, 10, ITEM_ORAN_BERRY
# 91 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaChoice_Text_9
# 92 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 93 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	call GiftMonNickname
	goto AlolaChoice_4

AlolaChoice_16:
# 105 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaChoice_Text_5
# 106 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	givemon SPECIES_POPPLIO, 10, ITEM_ORAN_BERRY
# 107 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox AlolaChoice_Text_11
# 108 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 109 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	call GiftMonNickname
	goto AlolaChoice_10


PokeCenterGirlSS::
# 121 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	lock
# 122 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	faceplayer
# 123 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox PokeCenterGirlSS_Text_0
# 125 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	msgbox PokeCenterGirlSS_Text_1
# 126 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	release
	return


SunsetNurse::
# 130 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	setrespawn HEAL_LOCATION_SUNSET_CITY
# 131 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	call SlateportCity_PokemonCenter_1F_EventScript_Nurse
	return


GiftMonNickname_Text_0:
# 5 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "Nickname your POKEMON?$"

AlolaStarters_Text_0:
# 15 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "Hey kid!$"

AlolaStarters_Text_1:
# 16 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "You know... Sunset City reminds me\n"
	.string "of a certain other place in the world...$"

AlolaStarters_Text_2:
# 18 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "Somewhere tropical...$"

AlolaStarters_Text_3:
# 19 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "I can't quite put my finger on it though.$"

AlolaStarters_Text_4:
# 20 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "Mind helping me out?$"

AlolaStarters_Text_5:
# 29 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "Alola$"

AlolaStarters_Text_6:
# 30 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "I don't know$"

AlolaStarters_Text_7:
# 37 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "Well, if you remember, you know\n"
	.string "where to find me!$"

AlolaStarters_Text_8:
# 45 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "How's that POKEMON treating you?$"

AlolaGift_Text_0:
# 51 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "Yeah! Thats it!$"

AlolaGift_Text_1:
# 52 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "Now, I have three rare POKEMON\n"
	.string "from the Alola region.$"

AlolaChoice_Text_0:
# 58 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "Why don't you take your pick?$"

AlolaChoice_Text_1:
# 67 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "Rowlet$"

AlolaChoice_Text_2:
# 68 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "Litten$"

AlolaChoice_Text_3:
# 69 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "Popplio$"

AlolaChoice_Text_4:
# 72 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "So you want Rowlet?$"

AlolaChoice_Text_5:
# 74 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "Alright! Train them up nice and strong!$"

AlolaChoice_Text_6:
# 76 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "{PLAYER} recieved Rowlet!$"

AlolaChoice_Text_7:
# 81 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "Think it over carefully!$"

AlolaChoice_Text_8:
# 87 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "So you want Litten?$"

AlolaChoice_Text_9:
# 91 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "{PLAYER} recieved Litten!$"

AlolaChoice_Text_10:
# 103 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "So you want Popplio?$"

AlolaChoice_Text_11:
# 107 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "{PLAYER} recieved Popplio!$"

PokeCenterGirlSS_Text_0:
# 123 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "I heard that there's a commotion\n"
	.string "in Evergreen forest.$"

PokeCenterGirlSS_Text_1:
# 125 "data/maps/SUNSETCITY_POKECENTER/scripts.pory"
	.string "I wonder what's happening?$"
