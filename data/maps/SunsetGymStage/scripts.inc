SunsetGymStage_MapScripts::
# 2 "data/maps/SunsetGymStage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunsetGymStage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunsetGymStage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SunsetGymStage/scripts.pory"
	map_script_2 VAR_TEMP_3, 0, LeaderCutscene
	.2byte 0


LeaderCutscene::
# 8 "data/maps/SunsetGymStage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveToStage
# 9 "data/maps/SunsetGymStage/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 10 "data/maps/SunsetGymStage/scripts.pory"
	msgbox LeaderCutscene_Text_0
# 11 "data/maps/SunsetGymStage/scripts.pory"
	applymovement 23, FaceCrowd
# 12 "data/maps/SunsetGymStage/scripts.pory"
	waitmovement 23
# 13 "data/maps/SunsetGymStage/scripts.pory"
	msgbox LeaderCutscene_Text_1
# 14 "data/maps/SunsetGymStage/scripts.pory"
	special SpawnCameraObject
# 15 "data/maps/SunsetGymStage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PanUp
# 16 "data/maps/SunsetGymStage/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 17 "data/maps/SunsetGymStage/scripts.pory"
	msgbox LeaderCutscene_Text_2
# 18 "data/maps/SunsetGymStage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraRevert
# 19 "data/maps/SunsetGymStage/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 20 "data/maps/SunsetGymStage/scripts.pory"
	applymovement 23, FaceCrowd
# 21 "data/maps/SunsetGymStage/scripts.pory"
	waitmovement 23
# 22 "data/maps/SunsetGymStage/scripts.pory"
	msgbox LeaderCutscene_Text_3
# 23 "data/maps/SunsetGymStage/scripts.pory"
	special RemoveCameraObject
# 24 "data/maps/SunsetGymStage/scripts.pory"
	applymovement 23, FaceYou
# 25 "data/maps/SunsetGymStage/scripts.pory"
	waitmovement 23
# 26 "data/maps/SunsetGymStage/scripts.pory"
	msgbox LeaderCutscene_Text_4
# 27 "data/maps/SunsetGymStage/scripts.pory"
	msgbox LeaderCutscene_Text_5
# 29 "data/maps/SunsetGymStage/scripts.pory"
	msgbox LeaderCutscene_Text_6
# 30 "data/maps/SunsetGymStage/scripts.pory"
	call SunsetBattleScript
	return


SunsetBattleScript::
# 34 "data/maps/SunsetGymStage/scripts.pory"
	msgbox SunsetBattleScript_Text_0
# 35 "data/maps/SunsetGymStage/scripts.pory"
	trainerbattle_no_intro TRAINER_LYRICA_1, LyricaDefeat
# 36 "data/maps/SunsetGymStage/scripts.pory"
	call PostBattleLyrica
	return


# 41 "data/maps/SunsetGymStage/scripts.pory"
PanUp:
# 42 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 42 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 42 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 42 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 42 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 42 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 42 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 42 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 42 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 42 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 42 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 42 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
	step_end

# 45 "data/maps/SunsetGymStage/scripts.pory"
CameraRevert:
# 46 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 46 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 46 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 46 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 46 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 46 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 46 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 46 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 46 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 46 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 46 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
# 46 "data/maps/SunsetGymStage/scripts.pory"
	walk_fast_down
	step_end

# 50 "data/maps/SunsetGymStage/scripts.pory"
MoveToStage:
# 51 "data/maps/SunsetGymStage/scripts.pory"
	face_up
# 52 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 52 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 52 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 52 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 52 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 52 "data/maps/SunsetGymStage/scripts.pory"
	walk_up
# 53 "data/maps/SunsetGymStage/scripts.pory"
	face_right
# 54 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 54 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 54 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 54 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 54 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 54 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 54 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 54 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 54 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 54 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 54 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
	step_end

# 57 "data/maps/SunsetGymStage/scripts.pory"
FaceCrowd:
# 58 "data/maps/SunsetGymStage/scripts.pory"
	face_up
# 59 "data/maps/SunsetGymStage/scripts.pory"
	jump_in_place_up
# 59 "data/maps/SunsetGymStage/scripts.pory"
	jump_in_place_up
	step_end

# 62 "data/maps/SunsetGymStage/scripts.pory"
FaceYou:
# 63 "data/maps/SunsetGymStage/scripts.pory"
	face_left
	step_end

# 65 "data/maps/SunsetGymStage/scripts.pory"
PlayerWalk:
# 66 "data/maps/SunsetGymStage/scripts.pory"
	face_left
# 67 "data/maps/SunsetGymStage/scripts.pory"
	walk_left
# 68 "data/maps/SunsetGymStage/scripts.pory"
	face_right
	step_end

# 71 "data/maps/SunsetGymStage/scripts.pory"
LeaderWalk:
# 72 "data/maps/SunsetGymStage/scripts.pory"
	face_right
# 73 "data/maps/SunsetGymStage/scripts.pory"
	walk_right
# 74 "data/maps/SunsetGymStage/scripts.pory"
	face_left
	step_end

PostBattleLyrica::
# 83 "data/maps/SunsetGymStage/scripts.pory"
	msgbox PostBattleLyrica_Text_0
# 84 "data/maps/SunsetGymStage/scripts.pory"
	msgbox PostBattleLyrica_Text_1
# 86 "data/maps/SunsetGymStage/scripts.pory"
	msgbox PostBattleLyrica_Text_2
# 88 "data/maps/SunsetGymStage/scripts.pory"
	msgbox PostBattleLyrica_Text_3
# 89 "data/maps/SunsetGymStage/scripts.pory"
	setflag FLAG_BADGE01_GET
# 90 "data/maps/SunsetGymStage/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 91 "data/maps/SunsetGymStage/scripts.pory"
	waitfanfare
# 92 "data/maps/SunsetGymStage/scripts.pory"
	msgbox PostBattleLyrica_Text_4
# 93 "data/maps/SunsetGymStage/scripts.pory"
	giveitem ITEM_TM34
# 94 "data/maps/SunsetGymStage/scripts.pory"
	msgbox PostBattleLyrica_Text_5
# 96 "data/maps/SunsetGymStage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/SunsetGymStage/scripts.pory"
	warpsilent MAP_SUNSET_GYM, 14, 4
	return


LeaderCutscene_Text_0:
# 10 "data/maps/SunsetGymStage/scripts.pory"
	.string "Hey hey! I'm Lyrica!$"

LeaderCutscene_Text_1:
# 13 "data/maps/SunsetGymStage/scripts.pory"
	.string "Everyone!! Are you ready?!$"

LeaderCutscene_Text_2:
# 17 "data/maps/SunsetGymStage/scripts.pory"
	.string "Audience: Woooo!!!$"

LeaderCutscene_Text_3:
# 22 "data/maps/SunsetGymStage/scripts.pory"
	.string "Keep your eyes on me, 'kay~?$"

LeaderCutscene_Text_4:
# 26 "data/maps/SunsetGymStage/scripts.pory"
	.string "I use the endearing ELECTRIC type!$"

LeaderCutscene_Text_5:
# 27 "data/maps/SunsetGymStage/scripts.pory"
	.string "With our shocking moves, we'll be sure\n"
	.string "to knock your socks off!$"

LeaderCutscene_Text_6:
# 29 "data/maps/SunsetGymStage/scripts.pory"
	.string "Now, let's get started, shall we?$"

SunsetBattleScript_Text_0:
# 34 "data/maps/SunsetGymStage/scripts.pory"
	.string "Show me your best!$"

PostBattleLyrica_Text_0:
# 83 "data/maps/SunsetGymStage/scripts.pory"
	.string "You totally stomped me!$"

PostBattleLyrica_Text_1:
# 84 "data/maps/SunsetGymStage/scripts.pory"
	.string "Congratulations on your first gym\n"
	.string "victory!$"

PostBattleLyrica_Text_2:
# 86 "data/maps/SunsetGymStage/scripts.pory"
	.string "Take this badge as proof of\n"
	.string "your efforts.$"

PostBattleLyrica_Text_3:
# 88 "data/maps/SunsetGymStage/scripts.pory"
	.string "{PLAYER} recieved the Thunderheart Badge!$"

PostBattleLyrica_Text_4:
# 92 "data/maps/SunsetGymStage/scripts.pory"
	.string "Take this TM too! It's one of my faves!$"

PostBattleLyrica_Text_5:
# 94 "data/maps/SunsetGymStage/scripts.pory"
	.string "That's pretty much all I have for you.\n"
	.string "Thanks for the amazing performance!$"

LyricaDefeat::
# 78 "data/maps/SunsetGymStage/scripts.pory"
	.string "What an electrifying victory!$"
