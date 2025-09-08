Route2_MapScripts::
	.byte 0


AmuletcoinBall::
# 5 "data/maps/Route2/scripts.pory"
	lockall
# 6 "data/maps/Route2/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 7 "data/maps/Route2/scripts.pory"
	setflag FLAG_ITEM_ABANDONED_SHIP_ROOMS_1F_HARBOR_MAIL
# 8 "data/maps/Route2/scripts.pory"
	removeobject 1
# 9 "data/maps/Route2/scripts.pory"
	releaseall
	return


ReviveBall::
# 13 "data/maps/Route2/scripts.pory"
	lockall
# 14 "data/maps/Route2/scripts.pory"
	giveitem ITEM_REVIVE
# 15 "data/maps/Route2/scripts.pory"
	setflag FLAG_ITEM_ROUTE_117_REVIVE
# 16 "data/maps/Route2/scripts.pory"
	removeobject 2
# 17 "data/maps/Route2/scripts.pory"
	releaseall
	return


MysticwaterBall::
# 21 "data/maps/Route2/scripts.pory"
	lockall
# 22 "data/maps/Route2/scripts.pory"
	giveitem ITEM_MYSTIC_WATER
# 23 "data/maps/Route2/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_ELIXIR
# 24 "data/maps/Route2/scripts.pory"
	removeobject 3
# 25 "data/maps/Route2/scripts.pory"
	releaseall
	return


SunsetSign::
# 29 "data/maps/Route2/scripts.pory"
	lockall
# 30 "data/maps/Route2/scripts.pory"
	msgbox SunsetSign_Text_0
# 31 "data/maps/Route2/scripts.pory"
	releaseall
	return


Edwin_Route2::
# 36 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Edwin2_Intro, Edwin2_Loss
# 37 "data/maps/Route2/scripts.pory"
	msgbox Edwin_Route2_Text_0
# 38 "data/maps/Route2/scripts.pory"
	releaseall
	return


Hudson_Route2::
# 42 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_HUDSON, Hudson_Intro, Hudson_Outro
# 43 "data/maps/Route2/scripts.pory"
	msgbox Hudson_Route2_Text_0
# 44 "data/maps/Route2/scripts.pory"
	releaseall
	return


Reyna_Route2::
# 48 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_REYNA, Reyna_Intro, Reyna_Outro
# 49 "data/maps/Route2/scripts.pory"
	msgbox Reyna_Route2_Text_0
# 50 "data/maps/Route2/scripts.pory"
	releaseall
	return


Sandboy::
# 80 "data/maps/Route2/scripts.pory"
	lockall
# 81 "data/maps/Route2/scripts.pory"
	faceplayer
# 82 "data/maps/Route2/scripts.pory"
	msgbox Sandboy_Text_0
# 83 "data/maps/Route2/scripts.pory"
	releaseall
	return


TitanRockruff::
# 88 "data/maps/Route2/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x02A, TitanRockruff_1
	return

TitanRockruff_1:
# 89 "data/maps/Route2/scripts.pory"
	lockall
# 90 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerCalledOut
# 91 "data/maps/Route2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 92 "data/maps/Route2/scripts.pory"
	msgbox TitanRockruff_Text_0
# 93 "data/maps/Route2/scripts.pory"
	msgbox TitanRockruff_Text_1
# 94 "data/maps/Route2/scripts.pory"
	msgbox TitanRockruff_Text_2
# 95 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_ENCOUNTER
# 96 "data/maps/Route2/scripts.pory"
	waitmoncry
# 97 "data/maps/Route2/scripts.pory"
	msgbox TitanRockruff_Text_3
# 98 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerGottaHelp
# 99 "data/maps/Route2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 100 "data/maps/Route2/scripts.pory"
	releaseall
	return


TriggerBattle::
# 105 "data/maps/Route2/scripts.pory"
	goto_if_unset FLAG_SYS_CAVE_BATTLE, TriggerBattle_1
	return

TriggerBattle_1:
# 106 "data/maps/Route2/scripts.pory"
	lock
# 107 "data/maps/Route2/scripts.pory"
	msgbox TriggerBattle_Text_0
# 108 "data/maps/Route2/scripts.pory"
	msgbox TriggerBattle_Text_1
# 109 "data/maps/Route2/scripts.pory"
	msgbox TriggerBattle_Text_2, MSGBOX_YESNO
# 110 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TriggerBattle_3
# 116 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerGottaHelp
# 117 "data/maps/Route2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 118 "data/maps/Route2/scripts.pory"
	msgbox TriggerBattle_Text_3
# 119 "data/maps/Route2/scripts.pory"
	msgbox TriggerBattle_Text_4
# 120 "data/maps/Route2/scripts.pory"
	releaseall
	return

TriggerBattle_3:
# 111 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveToRockruff
# 112 "data/maps/Route2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 113 "data/maps/Route2/scripts.pory"
	call RockruffBattle
	return


RockruffBattle::
# 126 "data/maps/Route2/scripts.pory"
	lockall
# 127 "data/maps/Route2/scripts.pory"
	applymovement 4, RockruffFace
# 128 "data/maps/Route2/scripts.pory"
	msgbox RockruffBattle_Text_0
# 129 "data/maps/Route2/scripts.pory"
	applymovement 4, RockruffStance
# 130 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_ENCOUNTER
# 131 "data/maps/Route2/scripts.pory"
	waitmoncry
# 132 "data/maps/Route2/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 133 "data/maps/Route2/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 134 "data/maps/Route2/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 0, 0, 0, 0, 0
# 135 "data/maps/Route2/scripts.pory"
	setwildbattle SPECIES_ROCKRUFF, 10, item = ITEM_NONE
# 136 "data/maps/Route2/scripts.pory"
	dowildbattle
# 137 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 138 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RockruffBattle_1
	return

RockruffBattle_1:
# 139 "data/maps/Route2/scripts.pory"
	call PostBattleRockruff
	return


HikerRockruffPost::
# 146 "data/maps/Route2/scripts.pory"
	lockall
# 147 "data/maps/Route2/scripts.pory"
	applymovement 5, HikerApproach
# 148 "data/maps/Route2/scripts.pory"
	waitmovement 5
# 149 "data/maps/Route2/scripts.pory"
	msgbox HikerRockruffPost_Text_0
# 151 "data/maps/Route2/scripts.pory"
	msgbox HikerRockruffPost_Text_1
# 152 "data/maps/Route2/scripts.pory"
	msgbox HikerRockruffPost_Text_2
# 154 "data/maps/Route2/scripts.pory"
	waitmessage
# 155 "data/maps/Route2/scripts.pory"
	giveitem ITEM_NUGGET
# 156 "data/maps/Route2/scripts.pory"
	msgbox HikerRockruffPost_Text_3
# 158 "data/maps/Route2/scripts.pory"
	applymovement 5, HikerLeave
# 159 "data/maps/Route2/scripts.pory"
	waitmovement 5
# 160 "data/maps/Route2/scripts.pory"
	removeobject 5
# 161 "data/maps/Route2/scripts.pory"
	setflag FLAG_UNUSED_0x02A
# 162 "data/maps/Route2/scripts.pory"
	setflag FLAG_SYS_CAVE_BATTLE
# 163 "data/maps/Route2/scripts.pory"
	releaseall
	return


PostBattleRockruff::
# 168 "data/maps/Route2/scripts.pory"
	lockall
# 169 "data/maps/Route2/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 170 "data/maps/Route2/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 171 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_WEAK
# 172 "data/maps/Route2/scripts.pory"
	waitmoncry
# 173 "data/maps/Route2/scripts.pory"
	removeobject 4
# 174 "data/maps/Route2/scripts.pory"
	call HikerRockruffPost
# 175 "data/maps/Route2/scripts.pory"
	releaseall
	return


# 178 "data/maps/Route2/scripts.pory"
MoveToRockruff:
# 179 "data/maps/Route2/scripts.pory"
	face_up
# 180 "data/maps/Route2/scripts.pory"
	walk_up
# 181 "data/maps/Route2/scripts.pory"
	face_left
# 182 "data/maps/Route2/scripts.pory"
	walk_left
# 182 "data/maps/Route2/scripts.pory"
	walk_left
# 182 "data/maps/Route2/scripts.pory"
	walk_left
# 182 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 185 "data/maps/Route2/scripts.pory"
RockruffStance:
# 186 "data/maps/Route2/scripts.pory"
	jump_in_place_right
# 186 "data/maps/Route2/scripts.pory"
	jump_in_place_right
	step_end

# 189 "data/maps/Route2/scripts.pory"
PlayerCalledOut:
# 190 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
	step_end

# 193 "data/maps/Route2/scripts.pory"
RockruffFace:
# 194 "data/maps/Route2/scripts.pory"
	face_right
	step_end

# 198 "data/maps/Route2/scripts.pory"
PlayerGottaHelp:
# 199 "data/maps/Route2/scripts.pory"
	face_down
# 200 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 203 "data/maps/Route2/scripts.pory"
HikerApproach:
# 204 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 207 "data/maps/Route2/scripts.pory"
HikerLeave:
# 208 "data/maps/Route2/scripts.pory"
	face_down
# 209 "data/maps/Route2/scripts.pory"
	walk_down
# 210 "data/maps/Route2/scripts.pory"
	face_right
# 211 "data/maps/Route2/scripts.pory"
	walk_right
# 211 "data/maps/Route2/scripts.pory"
	walk_right
# 211 "data/maps/Route2/scripts.pory"
	walk_right
# 211 "data/maps/Route2/scripts.pory"
	walk_right
# 211 "data/maps/Route2/scripts.pory"
	walk_right
# 212 "data/maps/Route2/scripts.pory"
	face_down
# 213 "data/maps/Route2/scripts.pory"
	walk_down
# 213 "data/maps/Route2/scripts.pory"
	walk_down
# 213 "data/maps/Route2/scripts.pory"
	walk_down
# 213 "data/maps/Route2/scripts.pory"
	walk_down
# 213 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

SunsetSign_Text_0:
# 30 "data/maps/Route2/scripts.pory"
	.string "Tunnel to Sunset City$"

Edwin_Route2_Text_0:
# 37 "data/maps/Route2/scripts.pory"
	.string "My mom forced me to come out here.$"

Hudson_Route2_Text_0:
# 43 "data/maps/Route2/scripts.pory"
	.string "Who did you pay to train yours?$"

Reyna_Route2_Text_0:
# 49 "data/maps/Route2/scripts.pory"
	.string "I caught my Vulpix on this route!$"

Sandboy_Text_0:
# 82 "data/maps/Route2/scripts.pory"
	.string "It's fun, playing in the sand!$"

TitanRockruff_Text_0:
# 92 "data/maps/Route2/scripts.pory"
	.string "H-Hey! You! Down there!$"

TitanRockruff_Text_1:
# 93 "data/maps/Route2/scripts.pory"
	.string "I was hiking and this Titan cornered me!$"

TitanRockruff_Text_2:
# 94 "data/maps/Route2/scripts.pory"
	.string "I don't have any POKEMON! Please help!$"

TitanRockruff_Text_3:
# 97 "data/maps/Route2/scripts.pory"
	.string "Gahhh!! Hurry! Please!$"

TriggerBattle_Text_0:
# 107 "data/maps/Route2/scripts.pory"
	.string "Thank goodness you're here!$"

TriggerBattle_Text_1:
# 108 "data/maps/Route2/scripts.pory"
	.string "I have no idea what it wants from me!$"

TriggerBattle_Text_2:
# 109 "data/maps/Route2/scripts.pory"
	.string "Help the man?$"

TriggerBattle_Text_3:
# 118 "data/maps/Route2/scripts.pory"
	.string "Wait, what?$"

TriggerBattle_Text_4:
# 119 "data/maps/Route2/scripts.pory"
	.string "Where are you going?!$"

RockruffBattle_Text_0:
# 128 "data/maps/Route2/scripts.pory"
	.string "Ruff!!$"

HikerRockruffPost_Text_0:
# 149 "data/maps/Route2/scripts.pory"
	.string "Thanks for saving me! I thought I was\n"
	.string "a goner!$"

HikerRockruffPost_Text_1:
# 151 "data/maps/Route2/scripts.pory"
	.string "Here, take this.$"

HikerRockruffPost_Text_2:
# 152 "data/maps/Route2/scripts.pory"
	.string "I found it on a hike earlier,\n"
	.string "but I think you should have it.$"

HikerRockruffPost_Text_3:
# 156 "data/maps/Route2/scripts.pory"
	.string "Maybe I should catch a POKEMON\n"
	.string "to defend myself...$"

Edwin2_Intro::
# 54 "data/maps/Route2/scripts.pory"
	.string "This route is good for fresh air!$"

Edwin2_Loss::
# 58 "data/maps/Route2/scripts.pory"
	.string "Oh...$"

Hudson_Intro::
# 62 "data/maps/Route2/scripts.pory"
	.string "I paid a professional to train my POKEMON!$"

Hudson_Outro::
# 66 "data/maps/Route2/scripts.pory"
	.string "...I think I got scammed.$"

Reyna_Intro::
# 70 "data/maps/Route2/scripts.pory"
	.string "I came out here to find some cute POKEMON!$"

Reyna_Outro::
# 74 "data/maps/Route2/scripts.pory"
	.string "Oh no! My POKEMON!$"
