CustomRoute1_MapScripts::
# 2 "data/maps/CustomRoute1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideRival
	.byte 0


HideRival::
# 6 "data/maps/CustomRoute1/scripts.pory"
	goto_if_set FLAG_UNUSED_0x023, HideRival_1
	return

HideRival_1:
# 7 "data/maps/CustomRoute1/scripts.pory"
	removeobject 5
	return


NoPokemon::
# 12 "data/maps/CustomRoute1/scripts.pory"
	getpartysize
# 13 "data/maps/CustomRoute1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NoPokemon_1
	return

NoPokemon_1:
# 14 "data/maps/CustomRoute1/scripts.pory"
	lockall
# 15 "data/maps/CustomRoute1/scripts.pory"
	msgbox NoPokemon_Text_0
# 16 "data/maps/CustomRoute1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoBack
# 17 "data/maps/CustomRoute1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 18 "data/maps/CustomRoute1/scripts.pory"
	releaseall
	return


# 22 "data/maps/CustomRoute1/scripts.pory"
GoBack:
# 23 "data/maps/CustomRoute1/scripts.pory"
	face_right
# 24 "data/maps/CustomRoute1/scripts.pory"
	walk_right
	step_end

Defeatedbugcatcher::
# 28 "data/maps/CustomRoute1/scripts.pory"
	lock
# 29 "data/maps/CustomRoute1/scripts.pory"
	faceplayer
# 30 "data/maps/CustomRoute1/scripts.pory"
	msgbox Defeatedbugcatcher_Text_0
# 32 "data/maps/CustomRoute1/scripts.pory"
	msgbox Defeatedbugcatcher_Text_1
# 33 "data/maps/CustomRoute1/scripts.pory"
	release
	return


Unarmedgirl::
# 37 "data/maps/CustomRoute1/scripts.pory"
	goto_if_set FLAG_UNUSED_0x022, Unarmedgirl_1
# 44 "data/maps/CustomRoute1/scripts.pory"
	lockall
# 45 "data/maps/CustomRoute1/scripts.pory"
	faceplayer
# 46 "data/maps/CustomRoute1/scripts.pory"
	msgbox Unarmedgirl_Text_1
# 48 "data/maps/CustomRoute1/scripts.pory"
	msgbox Unarmedgirl_Text_2
# 50 "data/maps/CustomRoute1/scripts.pory"
	giveitem ITEM_POTION, 1
# 51 "data/maps/CustomRoute1/scripts.pory"
	msgbox Unarmedgirl_Text_0
# 52 "data/maps/CustomRoute1/scripts.pory"
	releaseall
# 53 "data/maps/CustomRoute1/scripts.pory"
	setflag FLAG_UNUSED_0x022
	return

Unarmedgirl_1:
# 38 "data/maps/CustomRoute1/scripts.pory"
	lock
# 39 "data/maps/CustomRoute1/scripts.pory"
	faceplayer
# 40 "data/maps/CustomRoute1/scripts.pory"
	msgbox Unarmedgirl_Text_0
# 41 "data/maps/CustomRoute1/scripts.pory"
	releaseall
	return


NandtaSign::
# 58 "data/maps/CustomRoute1/scripts.pory"
	lockall
# 59 "data/maps/CustomRoute1/scripts.pory"
	msgbox NandtaSign_Text_0
# 60 "data/maps/CustomRoute1/scripts.pory"
	releaseall
	return


Route1Youngster::
# 65 "data/maps/CustomRoute1/scripts.pory"
	trainerbattle_single TRAINER_NICK_1, Youngster1Intro, YoungsterDefeat
# 66 "data/maps/CustomRoute1/scripts.pory"
	msgbox Route1Youngster_Text_0
# 67 "data/maps/CustomRoute1/scripts.pory"
	releaseall
	return


Route1Lass::
# 71 "data/maps/CustomRoute1/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, LassIntro, LassDefeat
# 72 "data/maps/CustomRoute1/scripts.pory"
	msgbox Route1Lass_Text_0
# 73 "data/maps/CustomRoute1/scripts.pory"
	releaseall
	return


RivalGrass::
# 98 "data/maps/CustomRoute1/scripts.pory"
	lockall
# 99 "data/maps/CustomRoute1/scripts.pory"
	faceplayer
# 100 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalGrass_Text_0
# 102 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalGrass_Text_1
# 104 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalGrass_Text_2
# 105 "data/maps/CustomRoute1/scripts.pory"
	releaseall
	return


RivalEvent::
# 109 "data/maps/CustomRoute1/scripts.pory"
	compare VAR_UNUSED_0x404E, 0
	goto_if_eq RivalEvent_2
RivalEvent_1:
# 130 "data/maps/CustomRoute1/scripts.pory"
	call RivalBattle1
	return

RivalEvent_2:
# 110 "data/maps/CustomRoute1/scripts.pory"
	lockall
# 111 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_0
# 112 "data/maps/CustomRoute1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDown
# 113 "data/maps/CustomRoute1/scripts.pory"
	addobject 5
# 114 "data/maps/CustomRoute1/scripts.pory"
	applymovement 5, RivalUp
# 115 "data/maps/CustomRoute1/scripts.pory"
	waitmovement 5
# 116 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_1, MSGBOX_YESNO
# 117 "data/maps/CustomRoute1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RivalEvent_5
# 121 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_3
RivalEvent_4:
# 125 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_4
# 126 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_5
# 127 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_6
	goto RivalEvent_1

RivalEvent_5:
# 118 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_2
	goto RivalEvent_4


RivalEventLeft::
# 135 "data/maps/CustomRoute1/scripts.pory"
	compare VAR_UNUSED_0x404E, 0
	goto_if_eq RivalEventLeft_2
RivalEventLeft_1:
# 155 "data/maps/CustomRoute1/scripts.pory"
	call RivalBattle1
	return

RivalEventLeft_2:
# 136 "data/maps/CustomRoute1/scripts.pory"
	lockall
# 137 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_0
# 138 "data/maps/CustomRoute1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLeftDown
# 139 "data/maps/CustomRoute1/scripts.pory"
	addobject 5
# 140 "data/maps/CustomRoute1/scripts.pory"
	applymovement 5, RivalUp
# 141 "data/maps/CustomRoute1/scripts.pory"
	waitmovement 5
# 142 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_1, MSGBOX_YESNO
# 143 "data/maps/CustomRoute1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RivalEventLeft_5
# 147 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_3
RivalEventLeft_4:
# 150 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_4
# 151 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_5
# 152 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_6
	goto RivalEventLeft_1

RivalEventLeft_5:
# 144 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_2
	goto RivalEventLeft_4


RivalEventRight::
# 160 "data/maps/CustomRoute1/scripts.pory"
	compare VAR_UNUSED_0x404E, 0
	goto_if_eq RivalEventRight_2
RivalEventRight_1:
# 180 "data/maps/CustomRoute1/scripts.pory"
	call RivalBattle1
	return

RivalEventRight_2:
# 161 "data/maps/CustomRoute1/scripts.pory"
	lockall
# 162 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_0
# 163 "data/maps/CustomRoute1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRightDown
# 164 "data/maps/CustomRoute1/scripts.pory"
	addobject 5
# 165 "data/maps/CustomRoute1/scripts.pory"
	applymovement 5, RivalUp
# 166 "data/maps/CustomRoute1/scripts.pory"
	waitmovement 5
# 167 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_1, MSGBOX_YESNO
# 168 "data/maps/CustomRoute1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RivalEventRight_5
# 172 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_3
RivalEventRight_4:
# 175 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_4
# 176 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_5
# 177 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_6
	goto RivalEventRight_1

RivalEventRight_5:
# 169 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalEvent_Text_2
	goto RivalEventRight_4


RivalBattle1::
# 189 "data/maps/CustomRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, RivalDefeat1
# 190 "data/maps/CustomRoute1/scripts.pory"
	call RivalBattleOver1
	return


RivalBattleOver1::
# 195 "data/maps/CustomRoute1/scripts.pory"
	lockall
# 196 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalBattleOver1_Text_0
# 197 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalBattleOver1_Text_1
# 199 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalBattleOver1_Text_2
# 200 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalBattleOver1_Text_3
# 202 "data/maps/CustomRoute1/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 203 "data/maps/CustomRoute1/scripts.pory"
	msgbox RivalBattleOver1_Text_4
# 204 "data/maps/CustomRoute1/scripts.pory"
	applymovement 5, RivalLeave
# 205 "data/maps/CustomRoute1/scripts.pory"
	waitmovement 5
# 206 "data/maps/CustomRoute1/scripts.pory"
	removeobject 5
# 207 "data/maps/CustomRoute1/scripts.pory"
	setvar VAR_UNUSED_0x404E, 1
# 208 "data/maps/CustomRoute1/scripts.pory"
	releaseall
	return


# 211 "data/maps/CustomRoute1/scripts.pory"
RivalUp:
# 212 "data/maps/CustomRoute1/scripts.pory"
	walk_up
# 212 "data/maps/CustomRoute1/scripts.pory"
	walk_up
# 212 "data/maps/CustomRoute1/scripts.pory"
	walk_up
# 212 "data/maps/CustomRoute1/scripts.pory"
	walk_up
# 212 "data/maps/CustomRoute1/scripts.pory"
	walk_up
# 212 "data/maps/CustomRoute1/scripts.pory"
	walk_up
	step_end

# 215 "data/maps/CustomRoute1/scripts.pory"
RivalLeave:
# 216 "data/maps/CustomRoute1/scripts.pory"
	face_right
# 217 "data/maps/CustomRoute1/scripts.pory"
	walk_right
# 218 "data/maps/CustomRoute1/scripts.pory"
	face_up
# 219 "data/maps/CustomRoute1/scripts.pory"
	walk_up
# 219 "data/maps/CustomRoute1/scripts.pory"
	walk_up
# 219 "data/maps/CustomRoute1/scripts.pory"
	walk_up
# 219 "data/maps/CustomRoute1/scripts.pory"
	walk_up
# 219 "data/maps/CustomRoute1/scripts.pory"
	walk_up
# 219 "data/maps/CustomRoute1/scripts.pory"
	walk_up
# 219 "data/maps/CustomRoute1/scripts.pory"
	walk_up
	step_end

# 222 "data/maps/CustomRoute1/scripts.pory"
PlayerDown:
# 223 "data/maps/CustomRoute1/scripts.pory"
	emote_exclamation_mark
# 224 "data/maps/CustomRoute1/scripts.pory"
	face_down
	step_end

# 227 "data/maps/CustomRoute1/scripts.pory"
PlayerRightDown:
# 228 "data/maps/CustomRoute1/scripts.pory"
	emote_exclamation_mark
# 229 "data/maps/CustomRoute1/scripts.pory"
	face_right
# 230 "data/maps/CustomRoute1/scripts.pory"
	walk_right
# 231 "data/maps/CustomRoute1/scripts.pory"
	face_down
	step_end

# 235 "data/maps/CustomRoute1/scripts.pory"
PlayerLeftDown:
# 236 "data/maps/CustomRoute1/scripts.pory"
	emote_exclamation_mark
# 237 "data/maps/CustomRoute1/scripts.pory"
	face_left
# 238 "data/maps/CustomRoute1/scripts.pory"
	walk_left
# 239 "data/maps/CustomRoute1/scripts.pory"
	face_down
	step_end

NoPokemon_Text_0:
# 15 "data/maps/CustomRoute1/scripts.pory"
	.string "Can't leave without a POKEMON!$"

Defeatedbugcatcher_Text_0:
# 30 "data/maps/CustomRoute1/scripts.pory"
	.string "Some guy came through here...\n"
	.string "I challenged him to a battle but$"

Defeatedbugcatcher_Text_1:
# 32 "data/maps/CustomRoute1/scripts.pory"
	.string "he swept through my POKEMON...$"

Unarmedgirl_Text_0:
# 40 "data/maps/CustomRoute1/scripts.pory"
	.string "Good luck out there!$"

Unarmedgirl_Text_1:
# 46 "data/maps/CustomRoute1/scripts.pory"
	.string "Oh, did you want a battle?\n"
	.string "I'm not a trainer, sorry.$"

Unarmedgirl_Text_2:
# 48 "data/maps/CustomRoute1/scripts.pory"
	.string "This might be able to help\n"
	.string "you though!$"

NandtaSign_Text_0:
# 59 "data/maps/CustomRoute1/scripts.pory"
	.string "Nandta Town Ahead$"

Route1Youngster_Text_0:
# 66 "data/maps/CustomRoute1/scripts.pory"
	.string "That was fun!$"

Route1Lass_Text_0:
# 72 "data/maps/CustomRoute1/scripts.pory"
	.string "Nantda Town is just past this route.$"

RivalGrass_Text_0:
# 100 "data/maps/CustomRoute1/scripts.pory"
	.string "Yo. I'm looking for POKEMON\n"
	.string "right now.$"

RivalGrass_Text_1:
# 102 "data/maps/CustomRoute1/scripts.pory"
	.string "I heard that you can sometimes find\n"
	.string "Eevees around here,$"

RivalGrass_Text_2:
# 104 "data/maps/CustomRoute1/scripts.pory"
	.string "but I haven't had any luck.$"

RivalEvent_Text_0:
# 111 "data/maps/CustomRoute1/scripts.pory"
	.string "Hey!$"

RivalEvent_Text_1:
# 116 "data/maps/CustomRoute1/scripts.pory"
	.string "You're from Seacrest right?$"

RivalEvent_Text_2:
# 118 "data/maps/CustomRoute1/scripts.pory"
	.string "I thought so.$"

RivalEvent_Text_3:
# 121 "data/maps/CustomRoute1/scripts.pory"
	.string "Really? I thought I saw you\n"
	.string "come up from that way.$"

RivalEvent_Text_4:
# 125 "data/maps/CustomRoute1/scripts.pory"
	.string "Anyways, my name is Ryan.$"

RivalEvent_Text_5:
# 126 "data/maps/CustomRoute1/scripts.pory"
	.string "You're... {PLAYER}, aren't you?$"

RivalEvent_Text_6:
# 127 "data/maps/CustomRoute1/scripts.pory"
	.string "We both started our journeys\n"
	.string "at the same time, so why don't we battle?$"

RivalBattleOver1_Text_0:
# 196 "data/maps/CustomRoute1/scripts.pory"
	.string "You're pretty strong!$"

RivalBattleOver1_Text_1:
# 197 "data/maps/CustomRoute1/scripts.pory"
	.string "I'm on my way to Sunset City\n"
	.string "to challenge the gym leader.$"

RivalBattleOver1_Text_2:
# 199 "data/maps/CustomRoute1/scripts.pory"
	.string "Maybe we'll run into eachother there.$"

RivalBattleOver1_Text_3:
# 200 "data/maps/CustomRoute1/scripts.pory"
	.string "Oh, and I have something that might\n"
	.string "be useful for you.$"

RivalBattleOver1_Text_4:
# 203 "data/maps/CustomRoute1/scripts.pory"
	.string "Anyways, see you later!$"

Youngster1Intro::
# 77 "data/maps/CustomRoute1/scripts.pory"
	.string "You're a new trainer, right? So am I!$"

YoungsterDefeat::
# 81 "data/maps/CustomRoute1/scripts.pory"
	.string "Woah! Where did you even get that\n POKEMON?$"

LassIntro::
# 86 "data/maps/CustomRoute1/scripts.pory"
	.string "Are you on your way to\n"
	.string "Nantda Town too?$"

LassDefeat::
# 91 "data/maps/CustomRoute1/scripts.pory"
	.string "I guess I'll need to stop by the POKEMON\n"
	.string "Center...$"

RivalDefeat1::
# 184 "data/maps/CustomRoute1/scripts.pory"
	.string "Looks like I need more training...$"
