# 1 "data/maps/Home_Town/scripts.pory"

# 2 "data/maps/Home_Town/scripts.pory"
Home_Town_MapScripts::
# 3 "data/maps/Home_Town/scripts.pory"
	.byte 0

Garden_Interact::
# 8 "data/maps/Home_Town/scripts.pory"
	lockall
# 9 "data/maps/Home_Town/scripts.pory"
	msgbox Garden_Interact_Text_0
# 11 "data/maps/Home_Town/scripts.pory"
	releaseall
	return


Lavender_Sign::
# 15 "data/maps/Home_Town/scripts.pory"
	lockall
# 16 "data/maps/Home_Town/scripts.pory"
	msgbox Lavender_Sign_Text_0
# 18 "data/maps/Home_Town/scripts.pory"
	releaseall
	return


BackyardItem::
# 22 "data/maps/Home_Town/scripts.pory"
	lockall
# 23 "data/maps/Home_Town/scripts.pory"
	giveitem ITEM_POTION
# 24 "data/maps/Home_Town/scripts.pory"
	setflag FLAG_ITEM_ROUTE_104_POTION
# 25 "data/maps/Home_Town/scripts.pory"
	removeobject 5
# 26 "data/maps/Home_Town/scripts.pory"
	releaseall
	return


TestingGirl::
# 31 "data/maps/Home_Town/scripts.pory"
	getpartysize
# 33 "data/maps/Home_Town/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge TestingGirl_1
# 43 "data/maps/Home_Town/scripts.pory"
	lock
# 44 "data/maps/Home_Town/scripts.pory"
	faceplayer
# 45 "data/maps/Home_Town/scripts.pory"
	msgbox TestingGirl_Text_2
# 47 "data/maps/Home_Town/scripts.pory"
	msgbox TestingGirl_Text_3
# 49 "data/maps/Home_Town/scripts.pory"
	msgbox TestingGirl_Text_4
# 50 "data/maps/Home_Town/scripts.pory"
	release
	return

TestingGirl_1:
# 34 "data/maps/Home_Town/scripts.pory"
	lock
# 35 "data/maps/Home_Town/scripts.pory"
	faceplayer
# 36 "data/maps/Home_Town/scripts.pory"
	msgbox TestingGirl_Text_0
# 38 "data/maps/Home_Town/scripts.pory"
	msgbox TestingGirl_Text_1
# 39 "data/maps/Home_Town/scripts.pory"
	release
	return


SeashellBoy::
# 56 "data/maps/Home_Town/scripts.pory"
	lock
# 57 "data/maps/Home_Town/scripts.pory"
	faceplayer
# 58 "data/maps/Home_Town/scripts.pory"
	msgbox SeashellBoy_Text_0
# 59 "data/maps/Home_Town/scripts.pory"
	release
	return


SeashellBrother::
# 63 "data/maps/Home_Town/scripts.pory"
	lock
# 64 "data/maps/Home_Town/scripts.pory"
	faceplayer
# 65 "data/maps/Home_Town/scripts.pory"
	msgbox SeashellBrother_Text_0
# 66 "data/maps/Home_Town/scripts.pory"
	release
	return


EXPALLTEST::
# 70 "data/maps/Home_Town/scripts.pory"
	lockall
# 71 "data/maps/Home_Town/scripts.pory"
	faceplayer
# 72 "data/maps/Home_Town/scripts.pory"
	msgbox EXPALLTEST_Text_0
# 73 "data/maps/Home_Town/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 74 "data/maps/Home_Town/scripts.pory"
	releaseall
	return


SafetyScientist::
# 78 "data/maps/Home_Town/scripts.pory"
	getpartysize
# 80 "data/maps/Home_Town/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge SafetyScientist_1
# 93 "data/maps/Home_Town/scripts.pory"
	lockall
# 94 "data/maps/Home_Town/scripts.pory"
	msgbox SafetyScientist_Text_1
# 96 "data/maps/Home_Town/scripts.pory"
	msgbox SafetyScientist_Text_2
# 98 "data/maps/Home_Town/scripts.pory"
	releaseall
	return

SafetyScientist_1:
# 81 "data/maps/Home_Town/scripts.pory"
	lockall
# 82 "data/maps/Home_Town/scripts.pory"
	msgbox SafetyScientist_Text_0
# 84 "data/maps/Home_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepBack
# 85 "data/maps/Home_Town/scripts.pory"
	applymovement 1, ScientistLeave
# 86 "data/maps/Home_Town/scripts.pory"
	waitmovement 1
# 87 "data/maps/Home_Town/scripts.pory"
	removeobject 1
# 88 "data/maps/Home_Town/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 89 "data/maps/Home_Town/scripts.pory"
	releaseall
	return


# 103 "data/maps/Home_Town/scripts.pory"
StepBack:
# 104 "data/maps/Home_Town/scripts.pory"
	walk_left
# 105 "data/maps/Home_Town/scripts.pory"
	face_right
	step_end

# 108 "data/maps/Home_Town/scripts.pory"
ScientistLeave:
# 109 "data/maps/Home_Town/scripts.pory"
	walk_left
# 110 "data/maps/Home_Town/scripts.pory"
	face_down
# 111 "data/maps/Home_Town/scripts.pory"
	walk_down
# 111 "data/maps/Home_Town/scripts.pory"
	walk_down
# 111 "data/maps/Home_Town/scripts.pory"
	walk_down
# 111 "data/maps/Home_Town/scripts.pory"
	walk_down
# 111 "data/maps/Home_Town/scripts.pory"
	walk_down
# 111 "data/maps/Home_Town/scripts.pory"
	walk_down
# 111 "data/maps/Home_Town/scripts.pory"
	walk_down
	step_end

Garden_Interact_Text_0:
# 9 "data/maps/Home_Town/scripts.pory"
	.string "Mom's garden!\n"
	.string "...better leave it alone.$"

Lavender_Sign_Text_0:
# 16 "data/maps/Home_Town/scripts.pory"
	.string "The sign reads, 'Professor Lavender.'\n"
	.string "...looks like this is the place.$"

TestingGirl_Text_0:
# 36 "data/maps/Home_Town/scripts.pory"
	.string "Wait, you were on your\n"
	.string "way to get a POKEMON?$"

TestingGirl_Text_1:
# 38 "data/maps/Home_Town/scripts.pory"
	.string "You're lucky! It looks cute!$"

TestingGirl_Text_2:
# 45 "data/maps/Home_Town/scripts.pory"
	.string "Are you on your way to Miss Lavender's?\n"
	.string "What?$"

TestingGirl_Text_3:
# 47 "data/maps/Home_Town/scripts.pory"
	.string "How do I know you're not going somewhere\n"
	.string "else?$"

TestingGirl_Text_4:
# 49 "data/maps/Home_Town/scripts.pory"
	.string "You have a look on your face. That's why!$"

SeashellBoy_Text_0:
# 58 "data/maps/Home_Town/scripts.pory"
	.string "I'm collecting sea shells!$"

SeashellBrother_Text_0:
# 65 "data/maps/Home_Town/scripts.pory"
	.string "He's only collecting the rocks...$"

EXPALLTEST_Text_0:
# 72 "data/maps/Home_Town/scripts.pory"
	.string "Exp. All Test$"

SafetyScientist_Text_0:
# 82 "data/maps/Home_Town/scripts.pory"
	.string "Great! You got your POKEMON!\n"
	.string "Now I can leave this spot!$"

SafetyScientist_Text_1:
# 94 "data/maps/Home_Town/scripts.pory"
	.string "I'm studying the POKEMON\n"
	.string "in this patch of grass.$"

SafetyScientist_Text_2:
# 96 "data/maps/Home_Town/scripts.pory"
	.string "If you don't have a POKEMON\n"
	.string "yet, I can't let you through.$"
