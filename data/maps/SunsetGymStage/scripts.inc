SunsetGymStage_MapScripts::
# 2 "data/maps/SunsetGymStage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunsetGymStage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunsetGymStage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SunsetGymStage/scripts.pory"
	map_script_2 VAR_TEMP_3, 0, LeaderCutscene
	.2byte 0


LeaderCutscene::
# 9 "data/maps/SunsetGymStage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveToStage
# 10 "data/maps/SunsetGymStage/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 11 "data/maps/SunsetGymStage/scripts.pory"
	msgbox LeaderCutscene_Text_0
# 12 "data/maps/SunsetGymStage/scripts.pory"
	applymovement 23, FaceCrowd
# 13 "data/maps/SunsetGymStage/scripts.pory"
	waitmovement 23
# 14 "data/maps/SunsetGymStage/scripts.pory"
	msgbox LeaderCutscene_Text_1
# 15 "data/maps/SunsetGymStage/scripts.pory"
	special SpawnCameraObject
# 16 "data/maps/SunsetGymStage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PanUp
# 17 "data/maps/SunsetGymStage/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 18 "data/maps/SunsetGymStage/scripts.pory"
	msgbox LeaderCutscene_Text_2
# 19 "data/maps/SunsetGymStage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraRevert
# 20 "data/maps/SunsetGymStage/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 21 "data/maps/SunsetGymStage/scripts.pory"
	applymovement 23, FaceCrowd
# 22 "data/maps/SunsetGymStage/scripts.pory"
	waitmovement 23
# 23 "data/maps/SunsetGymStage/scripts.pory"
	msgbox LeaderCutscene_Text_3
# 24 "data/maps/SunsetGymStage/scripts.pory"
	special RemoveCameraObject
# 25 "data/maps/SunsetGymStage/scripts.pory"
	applymovement 23, FaceYou
# 26 "data/maps/SunsetGymStage/scripts.pory"
	waitmovement 23
# 27 "data/maps/SunsetGymStage/scripts.pory"
	msgbox LeaderCutscene_Text_4
# 28 "data/maps/SunsetGymStage/scripts.pory"
	msgbox LeaderCutscene_Text_5
# 30 "data/maps/SunsetGymStage/scripts.pory"
	msgbox LeaderCutscene_Text_6
# 31 "data/maps/SunsetGymStage/scripts.pory"
	call SunsetBattleScript
	return


SunsetBattleScript::
# 35 "data/maps/SunsetGymStage/scripts.pory"
	msgbox SunsetBattleScript_Text_0
# 36 "data/maps/SunsetGymStage/scripts.pory"
	trainerbattle_no_intro TRAINER_LYRICA_1, LyricaDefeat
# 37 "data/maps/SunsetGymStage/scripts.pory"
	call PostBattleLyrica
	return


# 42 "data/maps/SunsetGymStage/scripts.pory"
PanUp:
# 43 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 43 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 43 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 43 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 43 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 43 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 43 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 43 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 43 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 43 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 43 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 43 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
	step_end

# 46 "data/maps/SunsetGymStage/scripts.pory"
CameraRevert:
# 47 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 47 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 47 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 47 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 47 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 47 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 47 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 47 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 47 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 47 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 47 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 47 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
	step_end

# 51 "data/maps/SunsetGymStage/scripts.pory"
MoveToStage:
# 52 "data/maps/SunsetGymStage/scripts.pory"
	face_up
# 53 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 53 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 53 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 53 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 53 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 53 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 54 "data/maps/SunsetGymStage/scripts.pory"
	face_right
# 55 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 55 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 55 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 55 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 55 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 55 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 55 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 55 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 55 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 55 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 55 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
	step_end

# 58 "data/maps/SunsetGymStage/scripts.pory"
FaceCrowd:
# 59 "data/maps/SunsetGymStage/scripts.pory"
	face_up
# 60 "data/maps/SunsetGymStage/scripts.pory"
	jump_in_place_up
# 60 "data/maps/SunsetGymStage/scripts.pory"
	jump_in_place_up
	step_end

# 63 "data/maps/SunsetGymStage/scripts.pory"
FaceYou:
# 64 "data/maps/SunsetGymStage/scripts.pory"
	face_left
	step_end

# 66 "data/maps/SunsetGymStage/scripts.pory"
PlayerWalk:
# 67 "data/maps/SunsetGymStage/scripts.pory"
	face_left
# 68 "data/maps/SunsetGymStage/scripts.pory"
	walk_left
# 69 "data/maps/SunsetGymStage/scripts.pory"
	face_right
	step_end

# 72 "data/maps/SunsetGymStage/scripts.pory"
LeaderWalk:
# 73 "data/maps/SunsetGymStage/scripts.pory"
	face_right
# 74 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 75 "data/maps/SunsetGymStage/scripts.pory"
	face_left
	step_end

PostBattleLyrica::
# 84 "data/maps/SunsetGymStage/scripts.pory"
	msgbox PostBattleLyrica_Text_0
# 85 "data/maps/SunsetGymStage/scripts.pory"
	msgbox PostBattleLyrica_Text_1
# 87 "data/maps/SunsetGymStage/scripts.pory"
	msgbox PostBattleLyrica_Text_2
# 89 "data/maps/SunsetGymStage/scripts.pory"
	msgbox PostBattleLyrica_Text_3
# 90 "data/maps/SunsetGymStage/scripts.pory"
	setflag FLAG_BADGE01_GET
# 91 "data/maps/SunsetGymStage/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 92 "data/maps/SunsetGymStage/scripts.pory"
	waitfanfare
# 93 "data/maps/SunsetGymStage/scripts.pory"
	msgbox PostBattleLyrica_Text_4
# 94 "data/maps/SunsetGymStage/scripts.pory"
	giveitem ITEM_TM34
# 95 "data/maps/SunsetGymStage/scripts.pory"
	msgbox PostBattleLyrica_Text_5
# 97 "data/maps/SunsetGymStage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/SunsetGymStage/scripts.pory"
	warpsilent MAP_SUNSET_GYM, 14, 4
	return


LeaderCutscene_Text_0:
# 11 "data/maps/SunsetGymStage/scripts.pory"
	.string "Hey hey! I'm Lyrica!$"

LeaderCutscene_Text_1:
# 14 "data/maps/SunsetGymStage/scripts.pory"
	.string "Everyone!! Are you ready?!$"

LeaderCutscene_Text_2:
# 18 "data/maps/SunsetGymStage/scripts.pory"
	.string "Audience: Woooo!!!$"

LeaderCutscene_Text_3:
# 23 "data/maps/SunsetGymStage/scripts.pory"
	.string "Keep your eyes on me, 'kay~?$"

LeaderCutscene_Text_4:
# 27 "data/maps/SunsetGymStage/scripts.pory"
	.string "I use the endearing ELECTRIC type!$"

LeaderCutscene_Text_5:
# 28 "data/maps/SunsetGymStage/scripts.pory"
	.string "With our shocking moves, we'll be sure\n"
	.string "to knock your socks off!$"

LeaderCutscene_Text_6:
# 30 "data/maps/SunsetGymStage/scripts.pory"
	.string "Now, let's get started, shall we?$"

SunsetBattleScript_Text_0:
# 35 "data/maps/SunsetGymStage/scripts.pory"
	.string "Show me your best!$"

PostBattleLyrica_Text_0:
# 84 "data/maps/SunsetGymStage/scripts.pory"
	.string "You totally stomped me!$"

PostBattleLyrica_Text_1:
# 85 "data/maps/SunsetGymStage/scripts.pory"
	.string "Congratulations on your first gym\n"
	.string "victory!$"

PostBattleLyrica_Text_2:
# 87 "data/maps/SunsetGymStage/scripts.pory"
	.string "Take this badge as proof of\n"
	.string "your efforts.$"

PostBattleLyrica_Text_3:
# 89 "data/maps/SunsetGymStage/scripts.pory"
	.string "{PLAYER} recieved the Thunderheart Badge!$"

PostBattleLyrica_Text_4:
# 93 "data/maps/SunsetGymStage/scripts.pory"
	.string "Take this TM too! It's one of my faves!$"

PostBattleLyrica_Text_5:
# 95 "data/maps/SunsetGymStage/scripts.pory"
	.string "That's pretty much all I have for you.\n"
	.string "Thanks for the amazing performance!$"

LyricaDefeat::
# 79 "data/maps/SunsetGymStage/scripts.pory"
	.string "What an electrifying victory!$"
