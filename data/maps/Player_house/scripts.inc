# 1 "data/maps/Player_house/scripts.pory"

# 2 "data/maps/Player_house/scripts.pory"
Player_house_MapScripts::
# 3 "data/maps/Player_house/scripts.pory"
	.byte 0

TV_Interact::
# 6 "data/maps/Player_house/scripts.pory"
	lockall
# 7 "data/maps/Player_house/scripts.pory"
	msgbox TV_Interact_Text_0
# 9 "data/maps/Player_house/scripts.pory"
	releaseall
	return


Kitchen_Shelf_Interact::
# 13 "data/maps/Player_house/scripts.pory"
	lockall
# 14 "data/maps/Player_house/scripts.pory"
	msgbox Kitchen_Shelf_Interact_Text_0
# 16 "data/maps/Player_house/scripts.pory"
	releaseall
	return


ObservePlants::
# 20 "data/maps/Player_house/scripts.pory"
	lockall
# 21 "data/maps/Player_house/scripts.pory"
	msgbox ObservePlants_Text_0
# 23 "data/maps/Player_house/scripts.pory"
	msgbox ObservePlants_Text_1
# 24 "data/maps/Player_house/scripts.pory"
	releaseall
	return


Mom_Idle_Dialogue::
# 29 "data/maps/Player_house/scripts.pory"
	getpartysize
# 30 "data/maps/Player_house/scripts.pory"
	lockall
# 32 "data/maps/Player_house/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge Mom_Idle_Dialogue_2
# 45 "data/maps/Player_house/scripts.pory"
	faceplayer
# 46 "data/maps/Player_house/scripts.pory"
	msgbox Mom_Idle_Dialogue_Text_2
Mom_Idle_Dialogue_1:
# 49 "data/maps/Player_house/scripts.pory"
	releaseall
# 50 "data/maps/Player_house/scripts.pory"
	applymovement 1, MomLikesTV
	return

Mom_Idle_Dialogue_2:
# 33 "data/maps/Player_house/scripts.pory"
	faceplayer
# 34 "data/maps/Player_house/scripts.pory"
	msgbox Mom_Idle_Dialogue_Text_0
# 35 "data/maps/Player_house/scripts.pory"
	fadescreen FADE_TO_BLACK
# 36 "data/maps/Player_house/scripts.pory"
	special HealPlayerParty
# 37 "data/maps/Player_house/scripts.pory"
	playse MUS_HEAL
# 38 "data/maps/Player_house/scripts.pory"
	delay 60
# 39 "data/maps/Player_house/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 40 "data/maps/Player_house/scripts.pory"
	msgbox Mom_Idle_Dialogue_Text_1
# 41 "data/maps/Player_house/scripts.pory"
	releaseall
	goto Mom_Idle_Dialogue_1


GameStart::
# 54 "data/maps/Player_house/scripts.pory"
	lock
# 55 "data/maps/Player_house/scripts.pory"
	applymovement 1, MomFace
# 56 "data/maps/Player_house/scripts.pory"
	waitmovement 1
# 57 "data/maps/Player_house/scripts.pory"
	msgbox GameStart_Text_0
# 58 "data/maps/Player_house/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whatdidyousay
# 59 "data/maps/Player_house/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 60 "data/maps/Player_house/scripts.pory"
	applymovement 1, MomWalk
# 61 "data/maps/Player_house/scripts.pory"
	waitmovement 1
# 62 "data/maps/Player_house/scripts.pory"
	msgbox GameStart_Text_1
# 64 "data/maps/Player_house/scripts.pory"
	msgbox GameStart_Text_2
# 66 "data/maps/Player_house/scripts.pory"
	msgbox GameStart_Text_3
# 67 "data/maps/Player_house/scripts.pory"
	msgbox GameStart_Text_4
# 68 "data/maps/Player_house/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 69 "data/maps/Player_house/scripts.pory"
	msgbox GameStart_Text_5
# 70 "data/maps/Player_house/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 71 "data/maps/Player_house/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 72 "data/maps/Player_house/scripts.pory"
	applymovement 1, MomWantsTV
# 73 "data/maps/Player_house/scripts.pory"
	waitmovement 1
# 74 "data/maps/Player_house/scripts.pory"
	setvar VAR_UNUSED_0x4083, 1
# 75 "data/maps/Player_house/scripts.pory"
	release
	return


# 79 "data/maps/Player_house/scripts.pory"
MomLikesTV:
# 80 "data/maps/Player_house/scripts.pory"
	face_up
	step_end

# 83 "data/maps/Player_house/scripts.pory"
Whatdidyousay:
# 84 "data/maps/Player_house/scripts.pory"
	face_down
	step_end

# 88 "data/maps/Player_house/scripts.pory"
MomFace:
# 89 "data/maps/Player_house/scripts.pory"
	emote_exclamation_mark
# 90 "data/maps/Player_house/scripts.pory"
	face_left
	step_end

# 93 "data/maps/Player_house/scripts.pory"
MomWalk:
# 94 "data/maps/Player_house/scripts.pory"
	face_left
# 95 "data/maps/Player_house/scripts.pory"
	walk_left
# 95 "data/maps/Player_house/scripts.pory"
	walk_left
# 96 "data/maps/Player_house/scripts.pory"
	walk_up
	step_end

# 99 "data/maps/Player_house/scripts.pory"
MomWantsTV:
# 100 "data/maps/Player_house/scripts.pory"
	walk_down
# 101 "data/maps/Player_house/scripts.pory"
	walk_right
# 101 "data/maps/Player_house/scripts.pory"
	walk_right
# 102 "data/maps/Player_house/scripts.pory"
	face_up
	step_end

TV_Interact_Text_0:
# 7 "data/maps/Player_house/scripts.pory"
	.string "It's playing a drama about\n"
	.string "a trainer who lost their POKEMON.$"

Kitchen_Shelf_Interact_Text_0:
# 14 "data/maps/Player_house/scripts.pory"
	.string "It's lined with recipe books that\n"
	.string "mom doesn't use anymore.$"

ObservePlants_Text_0:
# 21 "data/maps/Player_house/scripts.pory"
	.string "Flowers that mom bought while\n"
	.string "she was shopping.$"

ObservePlants_Text_1:
# 23 "data/maps/Player_house/scripts.pory"
	.string "She takes great care of them.$"

Mom_Idle_Dialogue_Text_0:
# 34 "data/maps/Player_house/scripts.pory"
	.string "You look tired, have a rest.$"

Mom_Idle_Dialogue_Text_1:
# 40 "data/maps/Player_house/scripts.pory"
	.string "Have fun out there!$"

Mom_Idle_Dialogue_Text_2:
# 46 "data/maps/Player_house/scripts.pory"
	.string "Did you go to see\n"
	.string "Professor Lavender yet?$"

GameStart_Text_0:
# 57 "data/maps/Player_house/scripts.pory"
	.string "Oh! You're awake!$"

GameStart_Text_1:
# 62 "data/maps/Player_house/scripts.pory"
	.string "You know you're supposed to meet\n"
	.string "the professor today right?$"

GameStart_Text_2:
# 64 "data/maps/Player_house/scripts.pory"
	.string "You should hurry over... I don't\n"
	.string "think she specified a time,$"

GameStart_Text_3:
# 66 "data/maps/Player_house/scripts.pory"
	.string "but it's better to be safe than sorry.$"

GameStart_Text_4:
# 67 "data/maps/Player_house/scripts.pory"
	.string "Oh, and take your running shoes too!$"

GameStart_Text_5:
# 69 "data/maps/Player_house/scripts.pory"
	.string "{PLAYER} recieved running shoes!$"
