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
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 165
            .ability = ABILITY_STURDY,
#line 166
            .lvl = 12,
#line 168
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 169
                MOVE_STEALTH_ROCK,
                MOVE_TACKLE,
                MOVE_ROCK_TOMB,
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 174
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 177
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 236, 236, 0),
#line 179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 175
            .ability = ABILITY_SPEED_BOOST,
#line 176
            .lvl = 12,
#line 178
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 179
                MOVE_STRUGGLE_BUG,
                MOVE_QUICK_ATTACK,
                MOVE_AIR_SLASH,
                MOVE_DETECT,
            },
            },
            {
#line 184
            .species = SPECIES_CLAUNCHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 186
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 224, 224, 0),
#line 188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 185
            .lvl = 12,
#line 187
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 188
                MOVE_WATER_PULSE,
                MOVE_AQUA_JET,
                MOVE_FLAIL,
            },
            },
            {
#line 192
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 195
            .ev = TRAINER_PARTY_EVS(12, 0, 244, 0, 0, 224),
#line 197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 193
            .ability = ABILITY_PRANKSTER,
#line 194
            .lvl = 13,
#line 196
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 197
                MOVE_FAKE_OUT,
                MOVE_SHADOW_SNEAK,
                MOVE_WILL_O_WISP,
                MOVE_SCRATCH,
            },
            },
            {
#line 202
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 202
            .heldItem = ITEM_ORAN_BERRY,
#line 206
            .ev = TRAINER_PARTY_EVS(0, 228, 244, 0, 0, 28),
#line 208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 203
            .ability = ABILITY_GLUTTONY,
#line 204
            .lvl = 15,
#line 207
            .nature = NATURE_ADAMANT,
#line 205
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
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
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER1] =
    {
#line 214
        .trainerName = _("Carlos"),
#line 215
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 216
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 218
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 219
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 221
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 222
            .ability = ABILITY_INTIMIDATE,
#line 223
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 225
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 226
            .ability = ABILITY_HUSTLE,
#line 227
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 228
                MOVE_FURY_SWIPES,
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
            },
            },
            {
#line 232
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 233
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 235
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER2] =
    {
#line 236
        .trainerName = _("Cindy"),
#line 237
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 238
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 239
F_TRAINER_FEMALE | 
#line 240
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 241
        .aiFlags = AI_FLAG_CHEESE_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 243
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 244
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 245
                MOVE_TACKLE,
                MOVE_FAIRY_WIND,
                MOVE_POISON_POWDER,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 250
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 251
            .ability = ABILITY_STATIC,
#line 252
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 253
                MOVE_TACKLE,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 258
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER3] =
    {
#line 259
        .trainerName = _("David"),
#line 260
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 261
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 263
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 264
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 266
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 267
            .ability = ABILITY_WEAK_ARMOR,
#line 268
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 269
                MOVE_TACKLE,
                MOVE_MUD_SLAP,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 273
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 274
            .ability = ABILITY_WEAK_ARMOR,
#line 275
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 276
                MOVE_FURY_CUTTER,
                MOVE_ROCK_SLIDE,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 280
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER4] =
    {
#line 281
        .trainerName = _("Samuel"),
#line 282
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 283
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 285
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 286
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 288
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 288
            .heldItem = ITEM_SCOPE_LENS,
#line 292
            .ev = TRAINER_PARTY_EVS(0, 248, 0, 244, 0, 8),
#line 294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 289
            .ability = ABILITY_SNIPER,
#line 290
            .lvl = 13,
#line 293
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 291
            .teraType = TYPE_BUG,
            .moves = {
#line 294
                MOVE_LEECH_LIFE,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 297
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_BUG_CATCHER] =
    {
#line 298
        .trainerName = _("Bert"),
#line 299
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 300
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 302
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 303
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 305
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 306
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 308
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 309
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 310
                MOVE_HARDEN,
                MOVE_TACKLE,
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 315
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 316
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 318
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_GIRL] =
    {
#line 319
        .trainerName = _("Lola"),
#line 320
        .trainerClass = TRAINER_CLASS_LASS,
#line 321
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 322
F_TRAINER_FEMALE | 
#line 323
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 324
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 326
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 327
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 329
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 330
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 332
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_BOY] =
    {
#line 333
        .trainerName = _("Mark"),
#line 334
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 335
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 337
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 338
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 340
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 341
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 343
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_GIRL] =
    {
#line 344
        .trainerName = _("Susie"),
#line 345
        .trainerClass = TRAINER_CLASS_LASS,
#line 346
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 347
F_TRAINER_FEMALE | 
#line 348
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 349
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 351
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 352
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 354
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 355
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 357
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_LITTLEGIRL] =
    {
#line 358
        .trainerName = _("Mary"),
#line 359
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 360
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 361
F_TRAINER_FEMALE | 
#line 362
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 363
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 365
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 367
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 366
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 367
                MOVE_WATER_GUN,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 370
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_FISHERMAN] =
    {
#line 371
        .trainerName = _("Jeff"),
#line 372
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 373
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 375
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 376
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 378
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 379
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 381
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 383
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 382
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 384
    [DIFFICULTY_NORMAL][TRAINER_ROUTE4_SCHOOLKID] =
    {
#line 385
        .trainerName = _("Timothy"),
#line 386
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 387
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 389
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 390
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 392
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 393
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 395
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 397
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 396
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 398
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_PICNICKER] =
    {
#line 399
        .trainerName = _("Brittany"),
#line 400
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 401
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 402
F_TRAINER_FEMALE | 
#line 403
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 404
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 406
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 407
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 409
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 410
            .ability = ABILITY_STURDY,
#line 411
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 414
    [DIFFICULTY_NORMAL][TRAINER_DRIPSTONE_CAVE_FISHERMAN] =
    {
#line 415
        .trainerName = _("Alan"),
#line 416
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 417
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 419
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 420
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 422
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 424
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 423
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 425
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 426
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 428
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 430
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 429
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 431
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_BLACKBELT] =
    {
#line 432
        .trainerName = _("Lister"),
#line 433
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 434
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 436
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 437
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 439
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 441
            .ev = TRAINER_PARTY_EVS(244, 248, 0, 0, 0, 8),
#line 444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 440
            .ability = ABILITY_IRON_FIST,
#line 443
            .lvl = 20,
#line 442
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 444
                MOVE_SHADOW_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 449
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_HIKER] =
    {
#line 450
        .trainerName = _("Raymond"),
#line 451
        .trainerClass = TRAINER_CLASS_HIKER,
#line 452
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 454
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 455
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 457
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 458
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 460
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 462
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 461
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 463
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_PICNICKER] =
    {
#line 464
        .trainerName = _("Chloe"),
#line 465
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 466
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 467
F_TRAINER_FEMALE | 
#line 468
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 469
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 471
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 472
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 474
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 475
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 477
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_SCHOOL_KID] =
    {
#line 478
        .trainerName = _("Jerry"),
#line 479
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 480
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 482
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 483
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 485
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 487
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 486
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 488
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 490
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 489
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 491
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 492
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 494
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 496
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 495
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 497
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_HIKER] =
    {
#line 498
        .trainerName = _("Daniel"),
#line 499
        .trainerClass = TRAINER_CLASS_HIKER,
#line 500
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 502
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 503
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 505
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 506
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 508
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 510
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 509
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 511
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_BUG_CATCHER] =
    {
#line 512
        .trainerName = _("Charlie"),
#line 513
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 514
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 516
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 517
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 519
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 521
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 520
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 522
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 523
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 525
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 527
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 526
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 528
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_WOMAN] =
    {
#line 529
        .trainerName = _("Laurel"),
#line 530
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 531
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 532
F_TRAINER_FEMALE | 
#line 533
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 534
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 536
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 537
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 539
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 540
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 542
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_GIRL] =
    {
#line 543
        .trainerName = _("Grace"),
#line 544
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 545
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 546
F_TRAINER_FEMALE | 
#line 547
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 548
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 550
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 551
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 553
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 554
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 556
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_PICNICKER] =
    {
#line 557
        .trainerName = _("Riley"),
#line 558
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 559
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 560
F_TRAINER_FEMALE | 
#line 561
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 562
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 564
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 566
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 565
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 567
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 568
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 570
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_CAMPER] =
    {
#line 571
        .trainerName = _("Arthur"),
#line 572
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 573
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 575
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 576
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 578
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 579
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 581
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 583
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 582
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 584
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_BLACK_BELT] =
    {
#line 585
        .trainerName = _("Mitchell"),
#line 586
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 587
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 589
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 590
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 592
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 594
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 593
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 595
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 597
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 596
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 598
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_BATTLE_GIRL] =
    {
#line 599
        .trainerName = _("Leanna"),
#line 600
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 601
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 602
F_TRAINER_FEMALE | 
#line 603
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 604
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 606
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 608
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 607
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 609
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_PICNICKER] =
    {
#line 610
        .trainerName = _("Imogen"),
#line 611
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 612
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 613
F_TRAINER_FEMALE | 
#line 614
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 615
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 617
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 618
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 620
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 622
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 621
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 623
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 625
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 624
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 626
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_HIKER] =
    {
#line 627
        .trainerName = _("Aaron"),
#line 628
        .trainerClass = TRAINER_CLASS_HIKER,
#line 629
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 631
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 632
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 634
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 635
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 637
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 639
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 638
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 640
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 642
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 641
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 643
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 644
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 646
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 648
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 647
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 649
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 650
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 652
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_MAGMA_GRUNT1] =
    {
#line 653
        .trainerName = _("Ricky"),
#line 654
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 655
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 657
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 658
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 660
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 661
            .ability = ABILITY_SIMPLE,
#line 663
            .lvl = 20,
#line 662
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 664
                MOVE_EMBER,
                MOVE_AMNESIA,
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 669
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 670
            .ability = ABILITY_FLAME_BODY,
#line 672
            .lvl = 20,
#line 671
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 673
                MOVE_EMBER,
                MOVE_SMOG,
                MOVE_YAWN,
            },
            },
        },
    },
#line 677
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_MAGMA_GRUNT2] =
    {
#line 678
        .trainerName = _("Bessa"),
#line 679
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 680
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 681
F_TRAINER_FEMALE | 
#line 682
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 683
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 685
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 686
            .ability = ABILITY_WEAK_ARMOR,
#line 688
            .lvl = 24,
#line 687
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 689
                MOVE_ROCK_SLIDE,
                MOVE_BIND,
                MOVE_DRAGON_BREATH,
                MOVE_CURSE,
            },
            },
        },
    },
#line 694
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_ENTRANCE_MAGMA_GRUNT] =
    {
#line 695
        .trainerName = _("Corey"),
#line 696
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 697
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 699
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 700
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 702
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 704
            .ability = ABILITY_SAND_STREAM,
#line 703
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 705
                MOVE_SAND_ATTACK,
                MOVE_YAWN,
                MOVE_DIG,
                MOVE_BITE,
            },
            },
        },
    },
#line 710
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_HIKER] =
    {
#line 711
        .trainerName = _("Broden"),
#line 712
        .trainerClass = TRAINER_CLASS_HIKER,
#line 713
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 715
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 716
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 718
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 719
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 721
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 722
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 724
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_BATTLE_GIRL] =
    {
#line 725
        .trainerName = _("Angela"),
#line 726
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 727
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 728
F_TRAINER_FEMALE | 
#line 729
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 730
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 732
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 734
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 733
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 735
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 736
            .ability = ABILITY_HUGE_POWER,
#line 738
            .lvl = 20,
#line 737
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 739
                MOVE_ROLLOUT,
                MOVE_SLAM,
                MOVE_TACKLE,
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 744
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_BEAUTY] =
    {
#line 745
        .trainerName = _("Rachel"),
#line 746
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 747
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 748
F_TRAINER_FEMALE | 
#line 749
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 750
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 752
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 754
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 753
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 755
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 756
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 758
            .species = SPECIES_CARBINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 760
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 759
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 761
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 763
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 762
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 764
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_MAGMA_GRUNT] =
    {
#line 765
        .trainerName = _("Joseph"),
#line 766
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 767
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 769
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 770
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 772
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 774
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 773
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 775
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 777
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 776
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 778
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_LASS] =
    {
#line 779
        .trainerName = _("Rebecca"),
#line 780
        .trainerClass = TRAINER_CLASS_LASS,
#line 781
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 782
F_TRAINER_FEMALE | 
#line 783
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 784
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 786
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 787
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 789
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 791
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 790
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 792
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 794
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 793
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 795
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_MANIAC] =
    {
#line 796
        .trainerName = _("Blake"),
#line 797
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 798
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 800
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 801
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 803
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 805
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 804
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 806
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 807
            .ability = ABILITY_SAND_VEIL,
#line 808
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 809
                MOVE_ROCK_SLIDE,
                MOVE_STOMPING_TANTRUM,
                MOVE_SANDSTORM,
                MOVE_BITE,
            },
            },
        },
    },
#line 814
    [DIFFICULTY_NORMAL][GYM_LEADER_DOUGLAS] =
    {
#line 815
        .trainerName = _("Douglas"),
#line 816
        .trainerClass = TRAINER_CLASS_LEADER,
#line 817
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 819
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 820
        .items = { ITEM_SUPER_POTION, ITEM_FULL_HEAL },
#line 821
        .aiFlags = AI_FLAG_GYM_LEADER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 823
            .species = SPECIES_NACLI,
#line 823
            .gender = TRAINER_MON_MALE,
#line 823
            .heldItem = ITEM_EVIOLITE,
#line 826
            .ev = TRAINER_PARTY_EVS(236, 0, 36, 0, 0, 236),
#line 828
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 824
            .ability = ABILITY_STURDY,
#line 825
            .lvl = 20,
#line 827
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 828
                MOVE_IRON_DEFENSE,
                MOVE_STEALTH_ROCK,
                MOVE_BULLDOZE,
                MOVE_TACKLE,
            },
            },
            {
#line 833
            .species = SPECIES_VIGOROTH,
#line 833
            .gender = TRAINER_MON_MALE,
#line 833
            .heldItem = ITEM_SILK_SCARF,
#line 836
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 248, 0, 4),
#line 838
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 834
            .ability = ABILITY_VITAL_SPIRIT,
#line 835
            .lvl = 20,
#line 837
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 838
                MOVE_SLASH,
                MOVE_NIGHT_SLASH,
                MOVE_BULK_UP,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 843
            .species = SPECIES_CHINCHOU,
#line 843
            .gender = TRAINER_MON_FEMALE,
#line 843
            .heldItem = ITEM_MAGNET,
#line 846
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
#line 848
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 844
            .ability = ABILITY_WATER_ABSORB,
#line 845
            .lvl = 20,
#line 847
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 849
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_BUBBLE_BEAM,
                MOVE_VOLT_SWITCH,
            },
            },
            {
#line 854
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 854
            .heldItem = ITEM_WIDE_LENS,
#line 857
            .ev = TRAINER_PARTY_EVS(236, 236, 0, 36, 0, 0),
#line 859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 855
            .ability = ABILITY_LEVITATE,
#line 856
            .lvl = 20,
#line 858
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 859
                MOVE_COSMIC_POWER,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
                MOVE_MORNING_SUN,
            },
            },
            {
#line 864
            .species = SPECIES_CROBAT,
#line 864
            .gender = TRAINER_MON_FEMALE,
#line 864
            .heldItem = ITEM_LIFE_ORB,
#line 868
            .ev = TRAINER_PARTY_EVS(252, 248, 0, 0, 8, 0),
#line 870
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 865
            .ability = ABILITY_INNER_FOCUS,
#line 866
            .lvl = 22,
#line 869
            .nature = NATURE_NAUGHTY,
#line 867
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 870
                MOVE_AIR_SLASH,
                MOVE_POISON_JAB,
                MOVE_LEECH_LIFE,
                MOVE_MEAN_LOOK,
            },
            },
        },
    },
#line 875
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_PICNICKER] =
    {
#line 876
        .trainerName = _("Madeline"),
#line 877
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 878
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 879
F_TRAINER_FEMALE | 
#line 880
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 881
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 883
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 885
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 884
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 886
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 888
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 887
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 889
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 890
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 892
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_COLLECTOR] =
    {
#line 893
        .trainerName = _("Johan"),
#line 894
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 895
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 897
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 898
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 900
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 902
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 901
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 903
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 904
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 906
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_TWINS] =
    {
#line 907
        .trainerName = _("Pibi & Jay"),
#line 908
        .trainerClass = TRAINER_CLASS_TWINS,
#line 909
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 910
F_TRAINER_FEMALE | 
#line 911
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 912
        .doubleBattle = TRUE,
#line 913
        .aiFlags = AI_FLAG_CHEESE_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 915
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 916
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 917
                MOVE_FAIRY_WIND,
                MOVE_POISON_POWDER,
                MOVE_SLEEP_POWDER,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 922
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 925
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 923
            .ability = ABILITY_TECHNICIAN,
#line 924
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 925
                MOVE_THIEF,
                MOVE_ECHOED_VOICE,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 929
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_BLACKBELT] =
    {
#line 930
        .trainerName = _("Soho"),
#line 931
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 932
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 934
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 935
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 937
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 939
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 938
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 940
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 942
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 941
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 943
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_POKECENTRE_MAGMA_GRUNT] =
    {
#line 944
        .trainerName = _("Evan"),
#line 945
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 946
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 948
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 949
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 951
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 953
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 952
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 954
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 955
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 957
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_YOUNGSTER] =
    {
#line 958
        .trainerName = _("Taylor"),
#line 959
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 960
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 962
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 963
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 965
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 967
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 966
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 968
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 969
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 971
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 973
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 972
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 974
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_COUPLE] =
    {
#line 975
        .trainerName = _("Amy & Luke"),
#line 976
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 977
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 979
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 980
        .doubleBattle = TRUE,
#line 981
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 983
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 985
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 984
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 986
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 987
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 989
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 991
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 990
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 992
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 994
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 993
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 995
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_RUNNERF] =
    {
#line 996
        .trainerName = _("Leila"),
#line 997
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 998
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 999
F_TRAINER_FEMALE | 
#line 1000
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1001
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1003
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1004
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1006
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1007
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1009
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_RUNNERM] =
    {
#line 1010
        .trainerName = _("Matt"),
#line 1011
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 1012
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 1014
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1015
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1017
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1019
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1018
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1020
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1022
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1021
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1023
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1024
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1026
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_LADY] =
    {
#line 1027
        .trainerName = _("Cordelia"),
#line 1028
        .trainerClass = TRAINER_CLASS_LADY,
#line 1029
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1030
F_TRAINER_FEMALE | 
#line 1031
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1032
        .items = { ITEM_FULL_RESTORE },
#line 1033
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1035
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1037
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1036
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1038
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1040
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1039
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1041
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1043
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1042
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1044
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1046
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1045
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1047
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1048
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1050
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_TUBERM] =
    {
#line 1051
        .trainerName = _("Kyle"),
#line 1052
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1053
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1055
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1056
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1058
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1059
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1061
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1063
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1062
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1064
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_TUBERF] =
    {
#line 1065
        .trainerName = _("Kerry"),
#line 1066
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1067
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 1068
F_TRAINER_FEMALE | 
#line 1069
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1070
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1072
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1074
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1073
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1075
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1077
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1076
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1078
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_FISHERMAN] =
    {
#line 1079
        .trainerName = _("Leonard"),
#line 1080
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1081
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1083
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1084
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1086
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1088
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1087
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1089
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1090
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1092
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1093
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1095
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_EXPERT] =
    {
#line 1096
        .trainerName = _("Gergino"),
#line 1097
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1098
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 1100
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1101
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1103
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1104
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1106
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1107
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1109
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_HIKER] =
    {
#line 1110
        .trainerName = _("Rictor"),
#line 1111
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1112
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1114
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1115
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1117
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1119
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1118
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1120
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1122
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1121
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1123
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_YOUNGSTER] =
    {
#line 1124
        .trainerName = _("Henry"),
#line 1125
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1126
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 1128
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1129
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1131
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1132
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1134
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1136
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1135
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1137
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1138
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1140
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_HIKER] =
    {
#line 1141
        .trainerName = _("Hugh"),
#line 1142
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1143
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1145
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1146
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1148
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1149
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1151
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1152
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1154
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1155
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1157
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_PICNICKER] =
    {
#line 1158
        .trainerName = _("Rayleigh"),
#line 1159
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1160
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1161
F_TRAINER_FEMALE | 
#line 1162
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1163
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1165
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1167
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1166
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1168
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1169
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1171
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_GUITARIST] =
    {
#line 1172
        .trainerName = _("Kurt"),
#line 1173
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 1174
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 1176
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1177
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1179
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1180
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1182
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1183
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1185
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BUG_CATCHER] =
    {
#line 1186
        .trainerName = _("Bryan"),
#line 1187
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1188
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1190
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1191
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1193
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1194
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1196
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1198
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1197
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1199
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1200
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1202
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1203
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1205
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_FISHERMAN] =
    {
#line 1206
        .trainerName = _("Oscar"),
#line 1207
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1208
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1210
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1211
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1213
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1215
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1214
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1216
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BLACKBELT] =
    {
#line 1217
        .trainerName = _("Ian"),
#line 1218
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 1219
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 1221
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1222
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1224
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1225
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1227
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1228
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1230
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BATTLEGIRL] =
    {
#line 1231
        .trainerName = _("Elise"),
#line 1232
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 1233
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 1234
F_TRAINER_FEMALE | 
#line 1235
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1236
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1238
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1239
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1241
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1242
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1244
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_EXPERTF] =
    {
#line 1245
        .trainerName = _("Deborah"),
#line 1246
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1247
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1248
F_TRAINER_FEMALE | 
#line 1249
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1250
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1252
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1256
            .ev = TRAINER_PARTY_EVS(228, 0, 236, 12, 32, 0),
#line 1258
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1253
            .ability = ABILITY_HEALER,
#line 1254
            .lvl = 24,
#line 1257
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1255
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1259
                MOVE_SOFT_BOILED,
                MOVE_HEAL_PULSE,
                MOVE_ICY_WIND,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 1264
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_EXPERTM] =
    {
#line 1265
        .trainerName = _("Dale"),
#line 1266
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1267
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 1269
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1270
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1272
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1276
            .ev = TRAINER_PARTY_EVS(248, 248, 0, 4, 0, 0),
#line 1278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1273
            .ability = ABILITY_THICK_FAT,
#line 1274
            .lvl = 24,
#line 1277
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1275
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1278
                MOVE_HEAVY_SLAM,
                MOVE_CRUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
