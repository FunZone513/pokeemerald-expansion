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
#line 133
    [DIFFICULTY_NORMAL][TRAINER_GYM_LEADER_MARTIN] =
    {
#line 134
        .trainerName = _("MARTIN"),
#line 135
        .trainerClass = TRAINER_CLASS_LEADER,
#line 136
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 138
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 139
        .items = { ITEM_POTION, ITEM_SUPER_POTION },
#line 140
        .doubleBattle = FALSE,
#line 141
        .aiFlags = AI_FLAG_GYM_LEADER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 143
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 147
            .ev = TRAINER_PARTY_EVS(236, 236, 36, 0, 0, 0),
#line 149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 144
            .ability = ABILITY_STURDY,
#line 145
            .lvl = 12,
#line 148
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 146
            .teraType = TYPE_ROCK,
            .moves = {
#line 150
                MOVE_STEALTH_ROCK,
                MOVE_TACKLE,
                MOVE_ROCK_TOMB,
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 155
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 159
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 236, 236, 0),
#line 161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 156
            .ability = ABILITY_SPEED_BOOST,
#line 157
            .lvl = 12,
#line 160
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 158
            .teraType = TYPE_BUG,
            .moves = {
#line 161
                MOVE_STRUGGLE_BUG,
                MOVE_QUICK_ATTACK,
                MOVE_AIR_SLASH,
                MOVE_DETECT,
            },
            },
            {
#line 166
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 170
            .ev = TRAINER_PARTY_EVS(12, 0, 244, 0, 0, 224),
#line 172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 167
            .ability = ABILITY_PRANKSTER,
#line 168
            .lvl = 12,
#line 171
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 169
            .teraType = TYPE_DARK,
            .moves = {
#line 172
                MOVE_FAKE_OUT,
                MOVE_SHADOW_SNEAK,
                MOVE_WILL_O_WISP,
                MOVE_SCRATCH,
            },
            },
            {
#line 177
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 181
            .ev = TRAINER_PARTY_EVS(0, 52, 0, 224, 224, 0),
#line 183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 178
            .ability = ABILITY_STATIC,
#line 179
            .lvl = 12,
#line 182
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 180
            .teraType = TYPE_ELECTRIC,
            .moves = {
#line 183
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_BITE,
            },
            },
            {
#line 188
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 188
            .heldItem = ITEM_SCOPE_LENS,
#line 192
            .ev = TRAINER_PARTY_EVS(0, 248, 0, 244, 0, 8),
#line 194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 189
            .ability = ABILITY_SNIPER,
#line 190
            .lvl = 14,
#line 193
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 191
            .teraType = TYPE_BUG,
            .moves = {
#line 194
                MOVE_PIN_MISSILE,
                MOVE_AERIAL_ACE,
                MOVE_LEECH_LIFE,
                MOVE_POISON_JAB,
            },
            },
            {
#line 199
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 199
            .heldItem = ITEM_ORAN_BERRY,
#line 204
            .ev = TRAINER_PARTY_EVS(0, 228, 244, 0, 0, 28),
#line 206
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 200
            .ability = ABILITY_GLUTTONY,
#line 201
            .lvl = 15,
#line 205
            .nature = NATURE_ADAMANT,
#line 202
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 203
            .teraType = TYPE_NORMAL,
            .moves = {
#line 206
                MOVE_LICK,
                MOVE_TACKLE,
                MOVE_RECYCLE,
                MOVE_CURSE,
            },
            },
        },
    },
