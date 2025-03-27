//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 76
    [DIFFICULTY_NORMAL][TRAINER_NONE] =
    {
#line 78
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 79
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 81
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 82
        .doubleBattle = FALSE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 84
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 85
        .trainerName = _("RED"),
#line 86
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 87
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 89
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 90
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 92
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 94
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 93
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 96
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 97
        .trainerName = _("LEAF"),
#line 98
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 99
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 100
F_TRAINER_FEMALE | 
#line 101
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 102
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 104
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 105
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 108
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 109
        .trainerName = _("BRENDAN"),
#line 110
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 111
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 113
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 114
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 116
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 118
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 117
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 120
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 121
        .trainerName = _("MAY"),
#line 122
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 123
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 124
F_TRAINER_FEMALE | 
#line 125
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 126
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 128
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 129
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 135
    [DIFFICULTY_NORMAL][TRAINER_GYM_LEADER_MARTIN] =
    {
#line 136
        .trainerName = _("MARTIN"),
#line 137
        .trainerClass = TRAINER_CLASS_LEADER,
#line 138
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 140
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 141
        .items = { ITEM_POTION, ITEM_SUPER_POTION },
#line 142
        .doubleBattle = FALSE,
#line 143
        .aiFlags = AI_FLAG_GYM_LEADER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 145
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 149
            .ev = TRAINER_PARTY_EVS(236, 236, 36, 0, 0, 0),
#line 151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 146
            .ability = ABILITY_STURDY,
#line 147
            .lvl = 12,
#line 150
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 148
            .teraType = TYPE_ROCK,
            .moves = {
#line 152
                MOVE_STEALTH_ROCK,
                MOVE_TACKLE,
                MOVE_ROCK_TOMB,
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 157
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 161
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 236, 236, 0),
#line 163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 158
            .ability = ABILITY_SPEED_BOOST,
#line 159
            .lvl = 12,
#line 162
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 160
            .teraType = TYPE_BUG,
            .moves = {
#line 163
                MOVE_STRUGGLE_BUG,
                MOVE_QUICK_ATTACK,
                MOVE_AIR_SLASH,
                MOVE_DETECT,
            },
            },
            {
#line 168
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 172
            .ev = TRAINER_PARTY_EVS(12, 0, 244, 0, 0, 224),
#line 174
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 169
            .ability = ABILITY_PRANKSTER,
#line 170
            .lvl = 12,
#line 173
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 171
            .teraType = TYPE_DARK,
            .moves = {
#line 174
                MOVE_FAKE_OUT,
                MOVE_SHADOW_SNEAK,
                MOVE_WILL_O_WISP,
                MOVE_SCRATCH,
            },
            },
            {
#line 179
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 183
            .ev = TRAINER_PARTY_EVS(0, 52, 0, 224, 224, 0),
#line 185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 180
            .ability = ABILITY_STATIC,
#line 181
            .lvl = 12,
#line 184
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 182
            .teraType = TYPE_ELECTRIC,
            .moves = {
#line 185
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_BITE,
            },
            },
            {
#line 190
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 190
            .heldItem = ITEM_SCOPE_LENS,
#line 194
            .ev = TRAINER_PARTY_EVS(0, 248, 0, 244, 0, 8),
#line 196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 191
            .ability = ABILITY_SNIPER,
#line 192
            .lvl = 14,
#line 195
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 193
            .teraType = TYPE_BUG,
            .moves = {
#line 196
                MOVE_PIN_MISSILE,
                MOVE_AERIAL_ACE,
                MOVE_LEECH_LIFE,
                MOVE_POISON_JAB,
            },
            },
            {
#line 201
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 201
            .heldItem = ITEM_ORAN_BERRY,
#line 206
            .ev = TRAINER_PARTY_EVS(0, 228, 244, 0, 0, 28),
#line 208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 202
            .ability = ABILITY_GLUTTONY,
#line 203
            .lvl = 15,
#line 207
            .nature = NATURE_ADAMANT,
#line 204
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 205
            .teraType = TYPE_NORMAL,
            .moves = {
#line 208
                MOVE_LICK,
                MOVE_TACKLE,
                MOVE_RECYCLE,
                MOVE_CURSE,
            },
            },
        },
    },
#line 213
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_BUG_CATCHER] =
    {
#line 214
        .trainerName = _("BERT"),
#line 215
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 216
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 218
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 219
        .doubleBattle = FALSE,
#line 220
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 222
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 223
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 225
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 226
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 227
                MOVE_HARDEN,
                MOVE_TACKLE,
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 232
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 233
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 235
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_GIRL] =
    {
#line 236
        .trainerName = _("LOLA"),
#line 237
        .trainerClass = TRAINER_CLASS_LASS,
#line 238
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 239
F_TRAINER_FEMALE | 
#line 240
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 241
        .doubleBattle = FALSE,
#line 242
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 244
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 245
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 247
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 248
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 250
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_BOY] =
    {
#line 251
        .trainerName = _("MARK"),
#line 252
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 253
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 255
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 256
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 258
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 259
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 261
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_GIRL] =
    {
#line 262
        .trainerName = _("SUSIE"),
#line 263
        .trainerClass = TRAINER_CLASS_LASS,
#line 264
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 265
F_TRAINER_FEMALE | 
#line 266
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 267
        .doubleBattle = FALSE,
#line 268
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 270
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 271
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 273
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 274
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 275
                MOVE_WATER_GUN,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
