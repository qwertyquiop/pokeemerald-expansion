SunsetGym_MapScripts::
	.byte 0


SunsetReceptionist::
# 4 "data/maps/SunsetGym/scripts.pory"
	lock
# 5 "data/maps/SunsetGym/scripts.pory"
	msgbox SunsetReceptionist_Text_0
# 6 "data/maps/SunsetGym/scripts.pory"
	msgbox SunsetReceptionist_Text_1
# 8 "data/maps/SunsetGym/scripts.pory"
	msgbox SunsetReceptionist_Text_2
# 10 "data/maps/SunsetGym/scripts.pory"
	releaseall
	return


SunsetGymGuide::
# 14 "data/maps/SunsetGym/scripts.pory"
	lock
# 15 "data/maps/SunsetGym/scripts.pory"
	goto_if_unset FLAG_ITEM_RUSTBORO_CITY_X_DEFEND, SunsetGymGuide_2
# 34 "data/maps/SunsetGym/scripts.pory"
	lock
# 35 "data/maps/SunsetGym/scripts.pory"
	msgbox SunsetGymGuide_Text_6
SunsetGymGuide_1:
# 37 "data/maps/SunsetGym/scripts.pory"
	releaseall
	return

SunsetGymGuide_2:
# 16 "data/maps/SunsetGym/scripts.pory"
	msgbox SunsetGymGuide_Text_0, MSGBOX_YESNO
# 17 "data/maps/SunsetGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunsetGymGuide_5
# 29 "data/maps/SunsetGym/scripts.pory"
	msgbox SunsetGymGuide_Text_5
	goto SunsetGymGuide_1

SunsetGymGuide_5:
# 18 "data/maps/SunsetGym/scripts.pory"
	msgbox SunsetGymGuide_Text_1
# 19 "data/maps/SunsetGym/scripts.pory"
	msgbox SunsetGymGuide_Text_2
# 21 "data/maps/SunsetGym/scripts.pory"
	msgbox SunsetGymGuide_Text_3
# 23 "data/maps/SunsetGym/scripts.pory"
	msgbox SunsetGymGuide_Text_4
# 25 "data/maps/SunsetGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 26 "data/maps/SunsetGym/scripts.pory"
	setflag FLAG_ITEM_RUSTBORO_CITY_X_DEFEND
	goto SunsetGymGuide_1


SunsetGuard::
# 41 "data/maps/SunsetGym/scripts.pory"
	lock
# 42 "data/maps/SunsetGym/scripts.pory"
	msgbox SunsetGuard_Text_0
# 43 "data/maps/SunsetGym/scripts.pory"
	msgbox SunsetGuard_Text_1
# 45 "data/maps/SunsetGym/scripts.pory"
	releaseall
	return


# 48 "data/maps/SunsetGym/scripts.pory"
StepAside:
# 49 "data/maps/SunsetGym/scripts.pory"
	face_left
# 50 "data/maps/SunsetGym/scripts.pory"
	walk_left
# 51 "data/maps/SunsetGym/scripts.pory"
	face_down
	step_end

ZanderGymTrainer::
# 57 "data/maps/SunsetGym/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, ZanderIntro, ZanderOutro
# 58 "data/maps/SunsetGym/scripts.pory"
	msgbox ZanderGymTrainer_Text_0
# 59 "data/maps/SunsetGym/scripts.pory"
	releaseall
	return


LeahGymTrainer::
# 63 "data/maps/SunsetGym/scripts.pory"
	trainerbattle_single TRAINER_LEAH, LeahIntro, LeahOutro
# 64 "data/maps/SunsetGym/scripts.pory"
	msgbox LeahGymTrainer_Text_0
# 65 "data/maps/SunsetGym/scripts.pory"
	releaseall
	return


SunsetReceptionist_Text_0:
# 5 "data/maps/SunsetGym/scripts.pory"
	.string "Welcome to the Sunset Theatre!$"

SunsetReceptionist_Text_1:
# 6 "data/maps/SunsetGym/scripts.pory"
	.string "If you're here to challenge the gym\n"
	.string "leader,$"

SunsetReceptionist_Text_2:
# 8 "data/maps/SunsetGym/scripts.pory"
	.string "you'll need to defeat the trainers\n"
	.string "in queue ahead of you.$"

SunsetGymGuide_Text_0:
# 16 "data/maps/SunsetGym/scripts.pory"
	.string "Hey! Is this your first time in the gym?$"

SunsetGymGuide_Text_1:
# 18 "data/maps/SunsetGym/scripts.pory"
	.string "Well, allow me to give you some advice.$"

SunsetGymGuide_Text_2:
# 19 "data/maps/SunsetGym/scripts.pory"
	.string "The gym leader, Lyrica uses Electric\n"
	.string "types to leave a shocking impression!$"

SunsetGymGuide_Text_3:
# 21 "data/maps/SunsetGym/scripts.pory"
	.string "It would do you some good to bring some\n"
	.string "ground types!$"

SunsetGymGuide_Text_4:
# 23 "data/maps/SunsetGym/scripts.pory"
	.string "Also, take this, on me. Think of it as\n"
	.string "a ''good luck charm.''$"

SunsetGymGuide_Text_5:
# 29 "data/maps/SunsetGym/scripts.pory"
	.string "Well, then you probably don't need\n"
	.string "my help!$"

SunsetGymGuide_Text_6:
# 35 "data/maps/SunsetGym/scripts.pory"
	.string "Go show 'em what you can do!$"

SunsetGuard_Text_0:
# 42 "data/maps/SunsetGym/scripts.pory"
	.string "...$"

SunsetGuard_Text_1:
# 43 "data/maps/SunsetGym/scripts.pory"
	.string "...Doesn't seem to be in the mood\n"
	.string "for conversation...$"

ZanderGymTrainer_Text_0:
# 58 "data/maps/SunsetGym/scripts.pory"
	.string "I need to catch more POKEMON.$"

LeahGymTrainer_Text_0:
# 64 "data/maps/SunsetGym/scripts.pory"
	.string "They say it's never too late, right?$"

ZanderIntro::
# 69 "data/maps/SunsetGym/scripts.pory"
	.string "I'm going to beat you, then I'm going\n"
	.string "to beat Lyrica!$"

ZanderOutro::
# 74 "data/maps/SunsetGym/scripts.pory"
	.string "Well, shoot.$"

LeahIntro::
# 78 "data/maps/SunsetGym/scripts.pory"
	.string "You're probably wondering why I want\n"
	.string "to challenge the gym at my age, right?$"

LeahOutro::
# 83 "data/maps/SunsetGym/scripts.pory"
	.string "Well, I wanted to broaden my horizons!$"
