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
#line 155
    [DIFFICULTY_NORMAL][GYM_LEADER_MARTIN] =
    {
#line 156
        .trainerName = _("Martin"),
#line 157
        .trainerClass = TRAINER_CLASS_LEADER,
#line 158
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 160
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 161
        .items = { ITEM_POTION, ITEM_SUPER_POTION },
#line 162
        .aiFlags = AI_FLAG_GYM_LEADER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 164
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 167
            .ev = TRAINER_PARTY_EVS(236, 236, 36, 0, 0, 0),
#line 169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 165
            .ability = ABILITY_STURDY,
#line 166
            .lvl = 13,
#line 168
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 170
                MOVE_STEALTH_ROCK,
                MOVE_TACKLE,
                MOVE_ROCK_TOMB,
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 175
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 178
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 236, 236, 0),
#line 180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 176
            .ability = ABILITY_SPEED_BOOST,
#line 177
            .lvl = 13,
#line 179
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 180
                MOVE_STRUGGLE_BUG,
                MOVE_QUICK_ATTACK,
                MOVE_AIR_SLASH,
                MOVE_DETECT,
            },
            },
            {
#line 185
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 188
            .ev = TRAINER_PARTY_EVS(12, 0, 244, 0, 0, 224),
#line 190
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 186
            .ability = ABILITY_PRANKSTER,
#line 187
            .lvl = 14,
#line 189
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 190
                MOVE_FAKE_OUT,
                MOVE_SHADOW_SNEAK,
                MOVE_WILL_O_WISP,
                MOVE_SCRATCH,
            },
            },
            {
#line 195
            .species = SPECIES_CLAUNCHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 197
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 224, 224, 0),
#line 199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 196
            .lvl = 13,
#line 198
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 199
                MOVE_WATER_PULSE,
                MOVE_AQUA_JET,
                MOVE_FLAIL,
            },
            },
            {
#line 203
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 203
            .heldItem = ITEM_ORAN_BERRY,
#line 207
            .ev = TRAINER_PARTY_EVS(0, 228, 244, 0, 0, 28),
#line 209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 204
            .ability = ABILITY_GLUTTONY,
#line 205
            .lvl = 15,
#line 208
            .nature = NATURE_ADAMANT,
#line 206
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 209
                MOVE_LICK,
                MOVE_TACKLE,
                MOVE_RECYCLE,
                MOVE_CURSE,
            },
            },
        },
    },
#line 214
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER1] =
    {
#line 215
        .trainerName = _("Carlos"),
#line 216
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 217
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 219
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 220
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 222
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 223
            .ability = ABILITY_INTIMIDATE,
#line 224
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 226
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 227
            .ability = ABILITY_HUSTLE,
#line 228
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 229
                MOVE_FURY_SWIPES,
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
            },
            },
            {
#line 233
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 234
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 236
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER2] =
    {
#line 237
        .trainerName = _("Cindy"),
#line 238
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 239
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 240
F_TRAINER_FEMALE | 
#line 241
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 242
        .aiFlags = AI_FLAG_CHEESE_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 244
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 245
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 246
                MOVE_TACKLE,
                MOVE_FAIRY_WIND,
                MOVE_POISON_POWDER,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 251
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 254
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 252
            .ability = ABILITY_STATIC,
#line 253
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 254
                MOVE_TACKLE,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 259
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER3] =
    {
#line 260
        .trainerName = _("David"),
#line 261
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 262
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 264
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 265
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 267
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 270
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 268
            .ability = ABILITY_WEAK_ARMOR,
#line 269
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 270
                MOVE_TACKLE,
                MOVE_MUD_SLAP,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 274
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 275
            .ability = ABILITY_WEAK_ARMOR,
#line 276
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 277
                MOVE_FURY_CUTTER,
                MOVE_ROCK_SLIDE,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 282
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER4] =
    {
#line 283
        .trainerName = _("Samuel"),
#line 284
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 285
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 287
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 288
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 290
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 290
            .heldItem = ITEM_SCOPE_LENS,
#line 294
            .ev = TRAINER_PARTY_EVS(0, 248, 0, 244, 0, 8),
#line 296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 291
            .ability = ABILITY_SNIPER,
#line 292
            .lvl = 14,
#line 295
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 293
            .teraType = TYPE_BUG,
            .moves = {
#line 296
                MOVE_LEECH_LIFE,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 300
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_BUG_CATCHER] =
    {
#line 301
        .trainerName = _("Bert"),
#line 302
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 303
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 305
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 306
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 308
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 309
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 311
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 312
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 313
                MOVE_HARDEN,
                MOVE_TACKLE,
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 318
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 319
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 321
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_GIRL] =
    {
#line 322
        .trainerName = _("Lola"),
#line 323
        .trainerClass = TRAINER_CLASS_LASS,
#line 324
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 325
F_TRAINER_FEMALE | 
#line 326
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 327
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 329
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 330
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 332
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 333
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 335
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_BOY] =
    {
#line 336
        .trainerName = _("Mark"),
#line 337
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 338
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 340
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 341
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 343
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 344
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 346
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_GIRL] =
    {
#line 347
        .trainerName = _("Susie"),
#line 348
        .trainerClass = TRAINER_CLASS_LASS,
#line 349
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 350
F_TRAINER_FEMALE | 
#line 351
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 352
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 354
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 355
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 357
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 359
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 358
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 359
                MOVE_WATER_GUN,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
