ShadedForest_MapScripts::
	.byte 0


RivalNoticeL::
# 5 "data/maps/ShadedForest/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x027, RivalNoticeL_1
	return

RivalNoticeL_1:
# 6 "data/maps/ShadedForest/scripts.pory"
	lock
# 7 "data/maps/ShadedForest/scripts.pory"
	applymovement 1, ShadedNotice
# 8 "data/maps/ShadedForest/scripts.pory"
	waitmovement 1
# 9 "data/maps/ShadedForest/scripts.pory"
	msgbox RivalNoticeL_Text_0
# 10 "data/maps/ShadedForest/scripts.pory"
	applymovement 1, ShadedWalktoL
# 11 "data/maps/ShadedForest/scripts.pory"
	waitmovement 1
# 12 "data/maps/ShadedForest/scripts.pory"
	call ShadedFollow
	return


RivalNoticeR::
# 17 "data/maps/ShadedForest/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x027, RivalNoticeR_1
	return

RivalNoticeR_1:
# 18 "data/maps/ShadedForest/scripts.pory"
	lock
# 19 "data/maps/ShadedForest/scripts.pory"
	applymovement 1, ShadedNotice
# 20 "data/maps/ShadedForest/scripts.pory"
	waitmovement 1
# 21 "data/maps/ShadedForest/scripts.pory"
	msgbox RivalNoticeL_Text_0
# 22 "data/maps/ShadedForest/scripts.pory"
	applymovement 1, ShadedWalktoR
# 23 "data/maps/ShadedForest/scripts.pory"
	waitmovement 1
# 24 "data/maps/ShadedForest/scripts.pory"
	call ShadedFollow
	return


RivalNoticeMid::
# 29 "data/maps/ShadedForest/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x027, RivalNoticeMid_1
	return

RivalNoticeMid_1:
# 30 "data/maps/ShadedForest/scripts.pory"
	lock
# 31 "data/maps/ShadedForest/scripts.pory"
	applymovement 1, ShadedNotice
# 32 "data/maps/ShadedForest/scripts.pory"
	waitmovement 1
# 33 "data/maps/ShadedForest/scripts.pory"
	msgbox RivalNoticeL_Text_0
# 34 "data/maps/ShadedForest/scripts.pory"
	applymovement 1, ShadedWalktoMid
# 35 "data/maps/ShadedForest/scripts.pory"
	waitmovement 1
# 36 "data/maps/ShadedForest/scripts.pory"
	call ShadedFollow
	return


ShadedFollow::
# 43 "data/maps/ShadedForest/scripts.pory"
	msgbox ShadedFollow_Text_0
# 45 "data/maps/ShadedForest/scripts.pory"
	msgbox ShadedFollow_Text_1
# 47 "data/maps/ShadedForest/scripts.pory"
	waitmessage
# 48 "data/maps/ShadedForest/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ShadedFollow_Text_2, ShadedFollow_Text_3
# 58 "data/maps/ShadedForest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShadedFollow_2
ShadedFollow_1:
# 65 "data/maps/ShadedForest/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShadedFollow_4
	return

ShadedFollow_2:
# 59 "data/maps/ShadedForest/scripts.pory"
	msgbox ShadedFollow_Text_4
# 60 "data/maps/ShadedForest/scripts.pory"
	msgbox ShadedFollow_Text_5
# 61 "data/maps/ShadedForest/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 62 "data/maps/ShadedForest/scripts.pory"
	waitfanfare
# 63 "data/maps/ShadedForest/scripts.pory"
	setfollowernpc 1, FNPC_WHITE_OUT, FollowingDialogueShaded, PARTNER_RYAN
	goto ShadedFollow_1

ShadedFollow_4:
# 66 "data/maps/ShadedForest/scripts.pory"
	msgbox ShadedFollow_Text_6
# 67 "data/maps/ShadedForest/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ShadedFollow_Text_7
# 75 "data/maps/ShadedForest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShadedFollow_7
ShadedFollow_6:
# 83 "data/maps/ShadedForest/scripts.pory"
	releaseall
	return

ShadedFollow_7:
# 76 "data/maps/ShadedForest/scripts.pory"
	msgbox ShadedFollow_Text_4
# 77 "data/maps/ShadedForest/scripts.pory"
	msgbox ShadedFollow_Text_8
# 78 "data/maps/ShadedForest/scripts.pory"
	playfanfare MUS_TOO_BAD
# 79 "data/maps/ShadedForest/scripts.pory"
	waitfanfare
# 80 "data/maps/ShadedForest/scripts.pory"
	setfollowernpc 1, FNPC_WHITE_OUT, FollowingDialogueShaded, PARTNER_RYAN
	goto ShadedFollow_6


FollowingDialogueShaded::
# 88 "data/maps/ShadedForest/scripts.pory"
	msgbox FollowingDialogueShaded_Text_0
# 89 "data/maps/ShadedForest/scripts.pory"
	releaseall
	return


# 92 "data/maps/ShadedForest/scripts.pory"
ShadedNotice:
# 93 "data/maps/ShadedForest/scripts.pory"
	emote_exclamation_mark
	step_end

# 96 "data/maps/ShadedForest/scripts.pory"
ShadedWalktoL:
# 97 "data/maps/ShadedForest/scripts.pory"
	walk_down
# 97 "data/maps/ShadedForest/scripts.pory"
	walk_down
# 98 "data/maps/ShadedForest/scripts.pory"
	walk_left
# 99 "data/maps/ShadedForest/scripts.pory"
	walk_down
# 99 "data/maps/ShadedForest/scripts.pory"
	walk_down
	step_end

# 102 "data/maps/ShadedForest/scripts.pory"
ShadedWalktoR:
# 103 "data/maps/ShadedForest/scripts.pory"
	walk_down
# 103 "data/maps/ShadedForest/scripts.pory"
	walk_down
# 104 "data/maps/ShadedForest/scripts.pory"
	walk_right
# 105 "data/maps/ShadedForest/scripts.pory"
	walk_down
# 105 "data/maps/ShadedForest/scripts.pory"
	walk_down
	step_end

# 108 "data/maps/ShadedForest/scripts.pory"
ShadedWalktoMid:
# 109 "data/maps/ShadedForest/scripts.pory"
	walk_down
# 109 "data/maps/ShadedForest/scripts.pory"
	walk_down
# 109 "data/maps/ShadedForest/scripts.pory"
	walk_down
# 109 "data/maps/ShadedForest/scripts.pory"
	walk_down
	step_end

RivalNoticeL_Text_0:
# 9 "data/maps/ShadedForest/scripts.pory"
	.string "Hey! {PLAYER}!$"

ShadedFollow_Text_0:
# 43 "data/maps/ShadedForest/scripts.pory"
	.string "I'm trying to get through this forest,\n"
	.string "but I have no idea where I'm going...$"

ShadedFollow_Text_1:
# 45 "data/maps/ShadedForest/scripts.pory"
	.string "Want to partner up? We can get some training\n"
	.string "in at the same time.$"

ShadedFollow_Text_2:
# 55 "data/maps/ShadedForest/scripts.pory"
	.string "Yes$"

ShadedFollow_Text_3:
# 56 "data/maps/ShadedForest/scripts.pory"
	.string "Absolutely not$"

ShadedFollow_Text_4:
# 59 "data/maps/ShadedForest/scripts.pory"
	.string "Okay! Sweet!$"

ShadedFollow_Text_5:
# 60 "data/maps/ShadedForest/scripts.pory"
	.string "You let Ryan tag along.$"

ShadedFollow_Text_6:
# 66 "data/maps/ShadedForest/scripts.pory"
	.string "Come on, please?$"

ShadedFollow_Text_7:
# 73 "data/maps/ShadedForest/scripts.pory"
	.string "OK$"

ShadedFollow_Text_8:
# 77 "data/maps/ShadedForest/scripts.pory"
	.string "You let Ryan tag along... reluctantly.$"

FollowingDialogueShaded_Text_0:
# 88 "data/maps/ShadedForest/scripts.pory"
	.string "You know where to go, right?$"
