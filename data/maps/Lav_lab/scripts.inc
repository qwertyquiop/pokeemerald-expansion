Lav_lab_MapScripts::
# 2 "data/maps/Lav_lab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lav_lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lav_lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Lav_lab/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, StarterEvent
	.2byte 0


FireStarter::
# 9 "data/maps/Lav_lab/scripts.pory"
	lock
# 10 "data/maps/Lav_lab/scripts.pory"
	getpartysize
# 11 "data/maps/Lav_lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge FireStarter_1
# 17 "data/maps/Lav_lab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 18 "data/maps/Lav_lab/scripts.pory"
	msgbox FireStarter_Text_1, MSGBOX_YESNO
# 20 "data/maps/Lav_lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarter_5
# 31 "data/maps/Lav_lab/scripts.pory"
	hidemonpic
# 32 "data/maps/Lav_lab/scripts.pory"
	msgbox FireStarter_Text_3
FireStarter_4:
# 34 "data/maps/Lav_lab/scripts.pory"
	waitmessage
# 35 "data/maps/Lav_lab/scripts.pory"
	releaseall
	end

FireStarter_1:
# 12 "data/maps/Lav_lab/scripts.pory"
	lockall
# 13 "data/maps/Lav_lab/scripts.pory"
	msgbox FireStarter_Text_0
# 14 "data/maps/Lav_lab/scripts.pory"
	releaseall
	return

FireStarter_5:
# 21 "data/maps/Lav_lab/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, ITEM_ORAN_BERRY
# 22 "data/maps/Lav_lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 23 "data/maps/Lav_lab/scripts.pory"
	msgbox FireStarter_Text_2
# 24 "data/maps/Lav_lab/scripts.pory"
	removeobject 1
# 25 "data/maps/Lav_lab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 26 "data/maps/Lav_lab/scripts.pory"
	setvar VAR_UNUSED_0x408B, 1
# 27 "data/maps/Lav_lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 28 "data/maps/Lav_lab/scripts.pory"
	call NicknamePartyMon
	goto FireStarter_4


WaterStarter::
# 41 "data/maps/Lav_lab/scripts.pory"
	lock
# 42 "data/maps/Lav_lab/scripts.pory"
	getpartysize
# 43 "data/maps/Lav_lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge WaterStarter_1
# 49 "data/maps/Lav_lab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 50 "data/maps/Lav_lab/scripts.pory"
	msgbox WaterStarter_Text_0, MSGBOX_YESNO
# 52 "data/maps/Lav_lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarter_5
# 63 "data/maps/Lav_lab/scripts.pory"
	hidemonpic
# 64 "data/maps/Lav_lab/scripts.pory"
	msgbox FireStarter_Text_3
WaterStarter_4:
# 66 "data/maps/Lav_lab/scripts.pory"
	waitmessage
# 67 "data/maps/Lav_lab/scripts.pory"
	releaseall
	end

WaterStarter_1:
# 44 "data/maps/Lav_lab/scripts.pory"
	lockall
# 45 "data/maps/Lav_lab/scripts.pory"
	msgbox FireStarter_Text_0
# 46 "data/maps/Lav_lab/scripts.pory"
	releaseall
	return

WaterStarter_5:
# 53 "data/maps/Lav_lab/scripts.pory"
	givemon SPECIES_TOTODILE, 5, ITEM_ORAN_BERRY
# 54 "data/maps/Lav_lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 55 "data/maps/Lav_lab/scripts.pory"
	msgbox WaterStarter_Text_1
# 56 "data/maps/Lav_lab/scripts.pory"
	removeobject 2
# 57 "data/maps/Lav_lab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 58 "data/maps/Lav_lab/scripts.pory"
	setvar VAR_UNUSED_0x408B, 1
# 59 "data/maps/Lav_lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 60 "data/maps/Lav_lab/scripts.pory"
	call NicknamePartyMon
	goto WaterStarter_4


GrassStarter::
# 73 "data/maps/Lav_lab/scripts.pory"
	lock
# 74 "data/maps/Lav_lab/scripts.pory"
	getpartysize
# 75 "data/maps/Lav_lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge GrassStarter_1
# 81 "data/maps/Lav_lab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 82 "data/maps/Lav_lab/scripts.pory"
	msgbox GrassStarter_Text_0, MSGBOX_YESNO
# 84 "data/maps/Lav_lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarter_5
# 95 "data/maps/Lav_lab/scripts.pory"
	hidemonpic
# 96 "data/maps/Lav_lab/scripts.pory"
	msgbox FireStarter_Text_3
GrassStarter_4:
# 98 "data/maps/Lav_lab/scripts.pory"
	waitmessage
# 99 "data/maps/Lav_lab/scripts.pory"
	releaseall
	end

GrassStarter_1:
# 76 "data/maps/Lav_lab/scripts.pory"
	lockall
# 77 "data/maps/Lav_lab/scripts.pory"
	msgbox FireStarter_Text_0
# 78 "data/maps/Lav_lab/scripts.pory"
	releaseall
	return

GrassStarter_5:
# 85 "data/maps/Lav_lab/scripts.pory"
	givemon SPECIES_SNIVY, 5, ITEM_ORAN_BERRY
# 86 "data/maps/Lav_lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/Lav_lab/scripts.pory"
	msgbox GrassStarter_Text_1
# 88 "data/maps/Lav_lab/scripts.pory"
	removeobject 3
# 89 "data/maps/Lav_lab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 90 "data/maps/Lav_lab/scripts.pory"
	setvar VAR_UNUSED_0x408B, 1
# 91 "data/maps/Lav_lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 92 "data/maps/Lav_lab/scripts.pory"
	call NicknamePartyMon
	goto GrassStarter_4


NicknamePartyMon::
# 106 "data/maps/Lav_lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 107 "data/maps/Lav_lab/scripts.pory"
	hidemonpic
# 108 "data/maps/Lav_lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
# 111 "data/maps/Lav_lab/scripts.pory"
	call DexGive
	return

NicknamePartyMon_2:
# 109 "data/maps/Lav_lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


LabDialogue1::
# 115 "data/maps/Lav_lab/scripts.pory"
	lockall
# 116 "data/maps/Lav_lab/scripts.pory"
	faceplayer
# 117 "data/maps/Lav_lab/scripts.pory"
	msgbox LabDialogue1_Text_0
# 119 "data/maps/Lav_lab/scripts.pory"
	releaseall
	return


LabDialogue2::
# 123 "data/maps/Lav_lab/scripts.pory"
	lockall
# 124 "data/maps/Lav_lab/scripts.pory"
	faceplayer
# 125 "data/maps/Lav_lab/scripts.pory"
	msgbox LabDialogue2_Text_0
# 127 "data/maps/Lav_lab/scripts.pory"
	releaseall
	return


LabDialogue3::
# 131 "data/maps/Lav_lab/scripts.pory"
	lockall
# 132 "data/maps/Lav_lab/scripts.pory"
	msgbox LabDialogue3_Text_0
# 133 "data/maps/Lav_lab/scripts.pory"
	msgbox LabDialogue3_Text_1
# 134 "data/maps/Lav_lab/scripts.pory"
	releaseall
	return


LavenderIdle::
# 138 "data/maps/Lav_lab/scripts.pory"
	getpartysize
# 140 "data/maps/Lav_lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge LavenderIdle_1
# 148 "data/maps/Lav_lab/scripts.pory"
	lock
# 149 "data/maps/Lav_lab/scripts.pory"
	faceplayer
# 150 "data/maps/Lav_lab/scripts.pory"
	msgbox LavenderIdle_Text_1
# 151 "data/maps/Lav_lab/scripts.pory"
	release
	return

LavenderIdle_1:
# 141 "data/maps/Lav_lab/scripts.pory"
	lock
# 142 "data/maps/Lav_lab/scripts.pory"
	faceplayer
# 143 "data/maps/Lav_lab/scripts.pory"
	msgbox LavenderIdle_Text_0
# 144 "data/maps/Lav_lab/scripts.pory"
	release
	return


StarterEvent::
# 156 "data/maps/Lav_lab/scripts.pory"
	getpartysize
# 158 "data/maps/Lav_lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq StarterEvent_1
	return

StarterEvent_1:
# 159 "data/maps/Lav_lab/scripts.pory"
	lockall
# 160 "data/maps/Lav_lab/scripts.pory"
	applymovement 4, Emotions
# 161 "data/maps/Lav_lab/scripts.pory"
	waitmovement 4
# 162 "data/maps/Lav_lab/scripts.pory"
	msgbox StarterEvent_Text_0
# 164 "data/maps/Lav_lab/scripts.pory"
	waitmessage
# 165 "data/maps/Lav_lab/scripts.pory"
	applymovement 4, LookaroundLav
# 166 "data/maps/Lav_lab/scripts.pory"
	waitmovement 4
# 167 "data/maps/Lav_lab/scripts.pory"
	msgbox StarterEvent_Text_1
# 169 "data/maps/Lav_lab/scripts.pory"
	waitmessage
# 170 "data/maps/Lav_lab/scripts.pory"
	applymovement 4, RunLav
# 171 "data/maps/Lav_lab/scripts.pory"
	waitmovement 4
# 172 "data/maps/Lav_lab/scripts.pory"
	msgbox StarterEvent_Text_2
# 174 "data/maps/Lav_lab/scripts.pory"
	waitmessage
# 175 "data/maps/Lav_lab/scripts.pory"
	msgbox StarterEvent_Text_3
# 177 "data/maps/Lav_lab/scripts.pory"
	waitmessage
# 178 "data/maps/Lav_lab/scripts.pory"
	msgbox StarterEvent_Text_4
# 180 "data/maps/Lav_lab/scripts.pory"
	waitmessage
# 181 "data/maps/Lav_lab/scripts.pory"
	msgbox StarterEvent_Text_5
# 183 "data/maps/Lav_lab/scripts.pory"
	waitmessage
# 184 "data/maps/Lav_lab/scripts.pory"
	msgbox StarterEvent_Text_6
# 186 "data/maps/Lav_lab/scripts.pory"
	waitmessage
# 187 "data/maps/Lav_lab/scripts.pory"
	msgbox StarterEvent_Text_7
# 189 "data/maps/Lav_lab/scripts.pory"
	waitmessage
# 190 "data/maps/Lav_lab/scripts.pory"
	msgbox StarterEvent_Text_8
# 192 "data/maps/Lav_lab/scripts.pory"
	waitmessage
# 193 "data/maps/Lav_lab/scripts.pory"
	applymovement 4, Jump
# 194 "data/maps/Lav_lab/scripts.pory"
	waitmovement 4
# 195 "data/maps/Lav_lab/scripts.pory"
	msgbox StarterEvent_Text_9
# 196 "data/maps/Lav_lab/scripts.pory"
	waitmessage
# 197 "data/maps/Lav_lab/scripts.pory"
	applymovement 4, BlockLav
# 198 "data/maps/Lav_lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFollow
# 199 "data/maps/Lav_lab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 200 "data/maps/Lav_lab/scripts.pory"
	waitmovement 4
# 201 "data/maps/Lav_lab/scripts.pory"
	msgbox StarterEvent_Text_10
# 203 "data/maps/Lav_lab/scripts.pory"
	waitmessage
# 204 "data/maps/Lav_lab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 205 "data/maps/Lav_lab/scripts.pory"
	setvar VAR_UNUSED_0x408B, 0
# 206 "data/maps/Lav_lab/scripts.pory"
	releaseall
	return


PushUp::
# 211 "data/maps/Lav_lab/scripts.pory"
	compare VAR_UNUSED_0x408B, 0
	goto_if_eq PushUp_1
	return

PushUp_1:
# 212 "data/maps/Lav_lab/scripts.pory"
	lockall
# 213 "data/maps/Lav_lab/scripts.pory"
	applymovement 4, Emotions
# 214 "data/maps/Lav_lab/scripts.pory"
	waitmovement 4
# 215 "data/maps/Lav_lab/scripts.pory"
	msgbox PushUp_Text_0
# 216 "data/maps/Lav_lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UP
# 217 "data/maps/Lav_lab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 218 "data/maps/Lav_lab/scripts.pory"
	applymovement 4, FaceToRight
# 219 "data/maps/Lav_lab/scripts.pory"
	waitmovement 4
# 220 "data/maps/Lav_lab/scripts.pory"
	releaseall
	return


DexGive::
# 225 "data/maps/Lav_lab/scripts.pory"
	lockall
# 226 "data/maps/Lav_lab/scripts.pory"
	msgbox DexGive_Text_0
# 227 "data/maps/Lav_lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FacetoLeft
# 228 "data/maps/Lav_lab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 229 "data/maps/Lav_lab/scripts.pory"
	msgbox DexGive_Text_1
# 231 "data/maps/Lav_lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 232 "data/maps/Lav_lab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 233 "data/maps/Lav_lab/scripts.pory"
	special EnableNationalPokedex
# 234 "data/maps/Lav_lab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 235 "data/maps/Lav_lab/scripts.pory"
	special SetUnlockedPokedexFlags
# 236 "data/maps/Lav_lab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 237 "data/maps/Lav_lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 238 "data/maps/Lav_lab/scripts.pory"
	msgbox DexGive_Text_2
# 239 "data/maps/Lav_lab/scripts.pory"
	msgbox DexGive_Text_3
# 240 "data/maps/Lav_lab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 241 "data/maps/Lav_lab/scripts.pory"
	msgbox DexGive_Text_4
# 242 "data/maps/Lav_lab/scripts.pory"
	msgbox DexGive_Text_5
# 244 "data/maps/Lav_lab/scripts.pory"
	msgbox DexGive_Text_6
# 246 "data/maps/Lav_lab/scripts.pory"
	msgbox DexGive_Text_7
# 248 "data/maps/Lav_lab/scripts.pory"
	setrespawn HEAL_LOCATION_HOME_TOWN
# 249 "data/maps/Lav_lab/scripts.pory"
	setvar VAR_UNUSED_0x404E, 0
# 250 "data/maps/Lav_lab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 251 "data/maps/Lav_lab/scripts.pory"
	releaseall
	return


PushLeft::
# 255 "data/maps/Lav_lab/scripts.pory"
	lockall
# 256 "data/maps/Lav_lab/scripts.pory"
	applymovement 4, Emotions
# 257 "data/maps/Lav_lab/scripts.pory"
	waitmovement 4
# 258 "data/maps/Lav_lab/scripts.pory"
	msgbox PushUp_Text_0
# 259 "data/maps/Lav_lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LEFT
# 260 "data/maps/Lav_lab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 261 "data/maps/Lav_lab/scripts.pory"
	releaseall
	return


# 266 "data/maps/Lav_lab/scripts.pory"
Emotions:
# 267 "data/maps/Lav_lab/scripts.pory"
	emote_exclamation_mark
# 268 "data/maps/Lav_lab/scripts.pory"
	face_down
	step_end

# 271 "data/maps/Lav_lab/scripts.pory"
FacetoLeft:
# 272 "data/maps/Lav_lab/scripts.pory"
	face_left
	step_end

# 275 "data/maps/Lav_lab/scripts.pory"
FaceToRight:
# 276 "data/maps/Lav_lab/scripts.pory"
	face_right
	step_end

# 279 "data/maps/Lav_lab/scripts.pory"
Jump:
# 280 "data/maps/Lav_lab/scripts.pory"
	jump_in_place_down
# 280 "data/maps/Lav_lab/scripts.pory"
	jump_in_place_down
	step_end

# 282 "data/maps/Lav_lab/scripts.pory"
LookaroundLav:
# 283 "data/maps/Lav_lab/scripts.pory"
	face_left
# 284 "data/maps/Lav_lab/scripts.pory"
	face_right
# 285 "data/maps/Lav_lab/scripts.pory"
	face_left
	step_end

# 288 "data/maps/Lav_lab/scripts.pory"
RunLav:
# 289 "data/maps/Lav_lab/scripts.pory"
	face_left
# 290 "data/maps/Lav_lab/scripts.pory"
	walk_fast_left
# 290 "data/maps/Lav_lab/scripts.pory"
	walk_fast_left
# 290 "data/maps/Lav_lab/scripts.pory"
	walk_fast_left
# 290 "data/maps/Lav_lab/scripts.pory"
	walk_fast_left
# 290 "data/maps/Lav_lab/scripts.pory"
	walk_fast_left
# 290 "data/maps/Lav_lab/scripts.pory"
	walk_fast_left
# 291 "data/maps/Lav_lab/scripts.pory"
	face_down
# 292 "data/maps/Lav_lab/scripts.pory"
	walk_fast_down
# 292 "data/maps/Lav_lab/scripts.pory"
	walk_fast_down
# 292 "data/maps/Lav_lab/scripts.pory"
	walk_fast_down
	step_end

# 296 "data/maps/Lav_lab/scripts.pory"
BlockLav:
# 297 "data/maps/Lav_lab/scripts.pory"
	face_right
# 298 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 298 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 298 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 298 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 298 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 298 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 298 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 298 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 298 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 299 "data/maps/Lav_lab/scripts.pory"
	face_up
# 300 "data/maps/Lav_lab/scripts.pory"
	walk_up
# 300 "data/maps/Lav_lab/scripts.pory"
	walk_up
# 300 "data/maps/Lav_lab/scripts.pory"
	walk_up
# 300 "data/maps/Lav_lab/scripts.pory"
	walk_up
# 300 "data/maps/Lav_lab/scripts.pory"
	walk_up
# 301 "data/maps/Lav_lab/scripts.pory"
	face_right
	step_end

# 304 "data/maps/Lav_lab/scripts.pory"
PlayerFollow:
# 305 "data/maps/Lav_lab/scripts.pory"
	walk_up
# 306 "data/maps/Lav_lab/scripts.pory"
	face_right
# 307 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 307 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 307 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 307 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 307 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 307 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 307 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 307 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 307 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 307 "data/maps/Lav_lab/scripts.pory"
	walk_right
# 308 "data/maps/Lav_lab/scripts.pory"
	face_up
# 309 "data/maps/Lav_lab/scripts.pory"
	walk_up
# 309 "data/maps/Lav_lab/scripts.pory"
	walk_up
# 309 "data/maps/Lav_lab/scripts.pory"
	walk_up
# 309 "data/maps/Lav_lab/scripts.pory"
	walk_up
# 309 "data/maps/Lav_lab/scripts.pory"
	walk_up
# 310 "data/maps/Lav_lab/scripts.pory"
	face_left
	step_end

# 313 "data/maps/Lav_lab/scripts.pory"
UP:
# 314 "data/maps/Lav_lab/scripts.pory"
	face_up
# 315 "data/maps/Lav_lab/scripts.pory"
	walk_up
	step_end

# 318 "data/maps/Lav_lab/scripts.pory"
LEFT:
# 319 "data/maps/Lav_lab/scripts.pory"
	face_left
# 320 "data/maps/Lav_lab/scripts.pory"
	walk_left
	step_end

FireStarter_Text_0:
# 13 "data/maps/Lav_lab/scripts.pory"
	.string "Probably shouldn't take more than 1!$"

FireStarter_Text_1:
# 18 "data/maps/Lav_lab/scripts.pory"
	.string "Choose Fennekin?$"

FireStarter_Text_2:
# 23 "data/maps/Lav_lab/scripts.pory"
	.string "Recieved Fennekin!$"

FireStarter_Text_3:
# 32 "data/maps/Lav_lab/scripts.pory"
	.string "Choose wisely!$"

WaterStarter_Text_0:
# 50 "data/maps/Lav_lab/scripts.pory"
	.string "Choose Totodile?$"

WaterStarter_Text_1:
# 55 "data/maps/Lav_lab/scripts.pory"
	.string "Recieved Totodile!$"

GrassStarter_Text_0:
# 82 "data/maps/Lav_lab/scripts.pory"
	.string "Choose Snivy?$"

GrassStarter_Text_1:
# 87 "data/maps/Lav_lab/scripts.pory"
	.string "Recieved Snivy!$"

NicknamePartyMon_Text_0:
# 106 "data/maps/Lav_lab/scripts.pory"
	.string "Nickname your POKEMON?$"

LabDialogue1_Text_0:
# 117 "data/maps/Lav_lab/scripts.pory"
	.string "Prof. Lavender is quite short, so we\n"
	.string "often have to help her reach things.$"

LabDialogue2_Text_0:
# 125 "data/maps/Lav_lab/scripts.pory"
	.string "We're studying the recent influx\n"
	.string "of ''Titan'' POKEMON.$"

LabDialogue3_Text_0:
# 132 "data/maps/Lav_lab/scripts.pory"
	.string "...$"

LabDialogue3_Text_1:
# 133 "data/maps/Lav_lab/scripts.pory"
	.string "(He's busy enjoying his coffee...)$"

LavenderIdle_Text_0:
# 143 "data/maps/Lav_lab/scripts.pory"
	.string "How's the adventure going?$"

LavenderIdle_Text_1:
# 150 "data/maps/Lav_lab/scripts.pory"
	.string "Go ahead and pick one!$"

StarterEvent_Text_0:
# 162 "data/maps/Lav_lab/scripts.pory"
	.string "Oh!\n"
	.string "You're right on time!$"

StarterEvent_Text_1:
# 167 "data/maps/Lav_lab/scripts.pory"
	.string "Well... Not really,\n"
	.string "but that's fine! Great even!$"

StarterEvent_Text_2:
# 172 "data/maps/Lav_lab/scripts.pory"
	.string "I wanted to see you because...\n"
	.string "I'm giving you your own POKEMON!$"

StarterEvent_Text_3:
# 175 "data/maps/Lav_lab/scripts.pory"
	.string "Fun! Right?!\n"
	.string "...Anyways, you might not know this,$"

StarterEvent_Text_4:
# 178 "data/maps/Lav_lab/scripts.pory"
	.string "But I'm looking into the sudden\n"
	.string "appearance of ''Titan'' POKEMON.$"

StarterEvent_Text_5:
# 181 "data/maps/Lav_lab/scripts.pory"
	.string "These POKEMON are apparently much\n"
	.string "stronger than others of their kind.$"

StarterEvent_Text_6:
# 184 "data/maps/Lav_lab/scripts.pory"
	.string "I wanted to enlist you to help study\n"
	.string "them. What do you think?$"

StarterEvent_Text_7:
# 187 "data/maps/Lav_lab/scripts.pory"
	.string "Like I said, I'll throw in a free POKEMON\n"
	.string "to help you.$"

StarterEvent_Text_8:
# 190 "data/maps/Lav_lab/scripts.pory"
	.string "You'll do it?! Great! Fantastic\n"
	.string "Even!$"

StarterEvent_Text_9:
# 195 "data/maps/Lav_lab/scripts.pory"
	.string "Here, come with me.$"

StarterEvent_Text_10:
# 201 "data/maps/Lav_lab/scripts.pory"
	.string "You can go ahead and take your pick.\n"
	.string "These POKEMON are quite rare, you know!$"

PushUp_Text_0:
# 215 "data/maps/Lav_lab/scripts.pory"
	.string "Wait! I thought you wanted a POKEMON!$"

DexGive_Text_0:
# 226 "data/maps/Lav_lab/scripts.pory"
	.string "Oh! Before I forget!$"

DexGive_Text_1:
# 229 "data/maps/Lav_lab/scripts.pory"
	.string "Take this POKEDEX!\n"
	.string "It's quite handy to have.$"

DexGive_Text_2:
# 238 "data/maps/Lav_lab/scripts.pory"
	.string "{PLAYER} got a POKEDEX!$"

DexGive_Text_3:
# 239 "data/maps/Lav_lab/scripts.pory"
	.string "Take these, too. Catch some POKEMON!$"

DexGive_Text_4:
# 241 "data/maps/Lav_lab/scripts.pory"
	.string "Now, as for your first steps...$"

DexGive_Text_5:
# 242 "data/maps/Lav_lab/scripts.pory"
	.string "I'd suggest challenging the gym at\n"
	.string "Sunset City.$"

DexGive_Text_6:
# 244 "data/maps/Lav_lab/scripts.pory"
	.string "You can get there by cutting\n"
	.string "through Nandta Town, just past Route 1.$"

DexGive_Text_7:
# 246 "data/maps/Lav_lab/scripts.pory"
	.string "Good luck out there!\n"
	.string "I'll be rooting for you!$"
