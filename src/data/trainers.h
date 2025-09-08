//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 75
    [DIFFICULTY_NORMAL][TRAINER_NICK_1] =
    {
#line 76
        .trainerName = _("Nick"),
#line 77
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 78
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 80
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 81
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 82
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 84
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 86
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 85
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 88
    [DIFFICULTY_NORMAL][TRAINER_MARCEL] =
    {
#line 89
        .trainerName = _("Marcel"),
#line 90
        .trainerClass = TRAINER_CLASS_LASS,
#line 91
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 92
F_TRAINER_FEMALE | 
#line 93
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 94
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 95
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 97
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 99
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 98
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 101
            .species = SPECIES_ROOKIDEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 103
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 102
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 105
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 106
        .trainerName = _("Ryan"),
#line 107
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 108
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 110
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 111
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 112
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 114
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 116
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 115
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 118
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_1] =
    {
#line 119
        .trainerName = _("Edwin"),
#line 120
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 121
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 123
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 124
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 125
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 127
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 128
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 131
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 133
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 132
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 135
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 136
        .trainerName = _("Hudson"),
#line 137
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 138
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 140
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 141
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 142
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 144
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 145
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 148
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 149
        .trainerName = _("Reyna"),
#line 150
        .trainerClass = TRAINER_CLASS_LASS,
#line 151
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 152
F_TRAINER_FEMALE | 
#line 153
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 154
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 155
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 157
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 158
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 161
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 162
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 165
    [DIFFICULTY_NORMAL][TRAINER_ZANDER] =
    {
#line 166
        .trainerName = _("Zander"),
#line 167
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 168
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 170
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 171
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 172
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 174
            .species = SPECIES_YAMPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 176
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 175
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 178
    [DIFFICULTY_NORMAL][TRAINER_LEAH] =
    {
#line 179
        .trainerName = _("Leah"),
#line 180
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 181
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 182
F_TRAINER_FEMALE | 
#line 183
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 184
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 185
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 187
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 189
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 188
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 191
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 193
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 192
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 195
    [DIFFICULTY_NORMAL][TRAINER_LYRICA_1] =
    {
#line 196
        .trainerName = _("Lyrica"),
#line 197
        .trainerClass = TRAINER_CLASS_LEADER,
#line 198
        .trainerPic = TRAINER_PIC_LYRICA,
        .encounterMusic_gender =
#line 199
F_TRAINER_FEMALE | 
0,
#line 200
        .items = { ITEM_POTION, ITEM_POTION },
#line 201
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 202
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 204
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 206
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 205
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 208
            .species = SPECIES_AXEW_A,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 209
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 211
                MOVE_CHARGE,
                MOVE_THUNDERSHOCK,
                MOVE_GROWL,
                MOVE_SCRATCH,
            },
            },
        },
    },
