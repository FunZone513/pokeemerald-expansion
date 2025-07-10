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
            .heldItem = ITEM_SITRUS_BERRY,
#line 205
            .ev = TRAINER_PARTY_EVS(0, 228, 244, 0, 0, 28),
#line 207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 203
            .ability = ABILITY_GLUTTONY,
#line 204
            .lvl = 15,
#line 206
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 207
                MOVE_LICK,
                MOVE_TACKLE,
                MOVE_RECYCLE,
                MOVE_CURSE,
            },
            },
        },
    },
#line 212
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER1] =
    {
#line 213
        .trainerName = _("Carlos"),
#line 214
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 215
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 217
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 218
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 220
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 221
            .ability = ABILITY_INTIMIDATE,
#line 222
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 224
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 225
            .ability = ABILITY_HUSTLE,
#line 226
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 227
                MOVE_FURY_SWIPES,
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
            },
            },
            {
#line 231
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 232
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 234
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER2] =
    {
#line 235
        .trainerName = _("Cindy"),
#line 236
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 237
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 238
F_TRAINER_FEMALE | 
#line 239
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 240
        .aiFlags = AI_FLAG_CHEESE_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 242
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 243
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 244
                MOVE_TACKLE,
                MOVE_FAIRY_WIND,
                MOVE_POISON_POWDER,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 249
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 250
            .ability = ABILITY_STATIC,
#line 251
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 252
                MOVE_TACKLE,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 257
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER3] =
    {
#line 258
        .trainerName = _("David"),
#line 259
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 260
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 262
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 263
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 265
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 266
            .ability = ABILITY_WEAK_ARMOR,
#line 267
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 268
                MOVE_TACKLE,
                MOVE_MUD_SLAP,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 272
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 273
            .ability = ABILITY_WEAK_ARMOR,
#line 274
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 275
                MOVE_FURY_CUTTER,
                MOVE_ROCK_SLIDE,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 279
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER4] =
    {
#line 280
        .trainerName = _("Samuel"),
#line 281
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 282
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 284
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 285
        .doubleBattle = TRUE,
#line 286
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 288
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 291
            .ev = TRAINER_PARTY_EVS(248, 8, 0, 0, 252, 0),
#line 293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 289
            .ability = ABILITY_COMPOUND_EYES,
#line 290
            .lvl = 13,
#line 292
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 293
                MOVE_POISON_POWDER,
                MOVE_VENOSHOCK,
                MOVE_GUST,
                MOVE_BUG_BITE,
            },
            },
            {
#line 298
            .species = SPECIES_BEAUTIFLY,
#line 298
            .gender = TRAINER_MON_FEMALE,
#line 300
            .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
#line 302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 299
            .ability = ABILITY_SWARM,
#line 302
            .lvl = 100,
#line 301
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 302
                MOVE_GUST,
                MOVE_MEGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 307
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_BUG_CATCHER] =
    {
#line 308
        .trainerName = _("Bert"),
#line 309
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 310
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 312
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 313
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 315
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 316
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 318
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 319
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 320
                MOVE_HARDEN,
                MOVE_TACKLE,
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 325
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 327
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 326
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 328
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_GIRL] =
    {
#line 329
        .trainerName = _("Lola"),
#line 330
        .trainerClass = TRAINER_CLASS_LASS,
#line 331
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 332
F_TRAINER_FEMALE | 
#line 333
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 334
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 336
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 338
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 337
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 339
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 340
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 342
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_BOY] =
    {
#line 343
        .trainerName = _("Mark"),
#line 344
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 345
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 347
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 348
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 350
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 351
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 353
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_GIRL] =
    {
#line 354
        .trainerName = _("Susie"),
#line 355
        .trainerClass = TRAINER_CLASS_LASS,
#line 356
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 357
F_TRAINER_FEMALE | 
#line 358
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 359
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 361
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 362
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 364
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 365
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 367
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_LITTLEGIRL] =
    {
#line 368
        .trainerName = _("Mary"),
#line 369
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 370
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 371
F_TRAINER_FEMALE | 
#line 372
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 373
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 375
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 376
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 377
                MOVE_WATER_GUN,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 380
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_FISHERMAN] =
    {
#line 381
        .trainerName = _("Jeff"),
#line 382
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 383
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 385
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 386
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 388
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 390
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 389
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 391
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 392
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 394
    [DIFFICULTY_NORMAL][TRAINER_ROUTE4_SCHOOLKID] =
    {
#line 395
        .trainerName = _("Timothy"),
#line 396
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 397
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 399
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 400
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 402
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 403
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 405
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 407
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 406
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 408
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_PICNICKER] =
    {
#line 409
        .trainerName = _("Brittany"),
#line 410
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 411
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 412
F_TRAINER_FEMALE | 
#line 413
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 414
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 416
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 417
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 419
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 422
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 420
            .ability = ABILITY_STURDY,
#line 421
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 424
    [DIFFICULTY_NORMAL][TRAINER_DRIPSTONE_CAVE_FISHERMAN] =
    {
#line 425
        .trainerName = _("Alan"),
#line 426
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 427
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 429
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 430
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 432
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 433
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 435
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 436
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 438
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 440
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 439
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 441
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_BLACKBELT] =
    {
#line 442
        .trainerName = _("Lister"),
#line 443
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 444
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 446
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 447
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 449
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 451
            .ev = TRAINER_PARTY_EVS(244, 248, 0, 0, 0, 8),
#line 454
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 450
            .ability = ABILITY_IRON_FIST,
#line 453
            .lvl = 20,
#line 452
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 454
                MOVE_SHADOW_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 459
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_HIKER] =
    {
#line 460
        .trainerName = _("Raymond"),
#line 461
        .trainerClass = TRAINER_CLASS_HIKER,
#line 462
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 464
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 465
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 467
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 468
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 470
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 471
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 473
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_PICNICKER] =
    {
#line 474
        .trainerName = _("Chloe"),
#line 475
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 476
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 477
F_TRAINER_FEMALE | 
#line 478
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 479
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 481
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 483
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 482
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 484
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 485
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 487
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_SCHOOL_KID] =
    {
#line 488
        .trainerName = _("Jerry"),
#line 489
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 490
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 492
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 493
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 495
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 496
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 498
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 499
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 501
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 503
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 502
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 504
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 505
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 507
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_HIKER] =
    {
#line 508
        .trainerName = _("Daniel"),
#line 509
        .trainerClass = TRAINER_CLASS_HIKER,
#line 510
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 512
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 513
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 515
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 516
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 518
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 519
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 521
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_BUG_CATCHER] =
    {
#line 522
        .trainerName = _("Charlie"),
#line 523
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 524
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 526
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 527
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 529
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 530
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 532
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 533
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 535
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 536
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 538
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_WOMAN] =
    {
#line 539
        .trainerName = _("Laurel"),
#line 540
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 541
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 542
F_TRAINER_FEMALE | 
#line 543
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 544
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 546
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 548
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 547
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 549
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 551
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 550
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 552
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_GIRL] =
    {
#line 553
        .trainerName = _("Grace"),
#line 554
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 555
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 556
F_TRAINER_FEMALE | 
#line 557
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 558
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 560
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 562
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 561
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 563
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 564
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 566
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_PICNICKER] =
    {
#line 567
        .trainerName = _("Riley"),
#line 568
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 569
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 570
F_TRAINER_FEMALE | 
#line 571
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 572
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 574
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 575
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 577
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 578
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 580
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_CAMPER] =
    {
#line 581
        .trainerName = _("Arthur"),
#line 582
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 583
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 585
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 586
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 588
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 590
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 589
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 591
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 593
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 592
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 594
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_BLACK_BELT] =
    {
#line 595
        .trainerName = _("Mitchell"),
#line 596
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 597
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 599
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 600
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 602
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 603
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 605
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 607
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 606
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 608
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_BATTLE_GIRL] =
    {
#line 609
        .trainerName = _("Leanna"),
#line 610
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 611
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 612
F_TRAINER_FEMALE | 
#line 613
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 614
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 616
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 617
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 619
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_PICNICKER] =
    {
#line 620
        .trainerName = _("Imogen"),
#line 621
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 622
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 623
F_TRAINER_FEMALE | 
#line 624
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 625
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 627
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 629
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 628
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 630
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 631
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 633
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 634
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 636
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_HIKER] =
    {
#line 637
        .trainerName = _("Aaron"),
#line 638
        .trainerClass = TRAINER_CLASS_HIKER,
#line 639
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 641
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 642
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 644
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 646
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 645
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 647
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 648
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 650
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 651
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 653
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 655
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 654
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 656
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 658
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 657
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 659
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 661
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 660
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 662
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_MAGMA_GRUNT1] =
    {
#line 663
        .trainerName = _("Ricky"),
#line 664
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 665
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 667
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 668
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 670
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 674
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 671
            .ability = ABILITY_SIMPLE,
#line 673
            .lvl = 18,
#line 672
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 674
                MOVE_EMBER,
                MOVE_AMNESIA,
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 679
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 680
            .ability = ABILITY_FLAME_BODY,
#line 682
            .lvl = 18,
#line 681
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 683
                MOVE_EMBER,
                MOVE_SMOG,
                MOVE_YAWN,
            },
            },
        },
    },
#line 687
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_MAGMA_GRUNT2] =
    {
#line 688
        .trainerName = _("Bessa"),
#line 689
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 690
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 691
F_TRAINER_FEMALE | 
#line 692
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 693
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 695
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 696
            .ability = ABILITY_WEAK_ARMOR,
#line 698
            .lvl = 20,
#line 697
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 699
                MOVE_ROCK_SLIDE,
                MOVE_BIND,
                MOVE_DRAGON_BREATH,
                MOVE_CURSE,
            },
            },
        },
    },
#line 704
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_ENTRANCE_MAGMA_GRUNT] =
    {
#line 705
        .trainerName = _("Harry"),
#line 706
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 707
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 709
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 710
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 712
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 714
            .ability = ABILITY_SAND_STREAM,
#line 713
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 715
                MOVE_SAND_ATTACK,
                MOVE_YAWN,
                MOVE_DIG,
                MOVE_BITE,
            },
            },
        },
    },
#line 720
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_HIKER] =
    {
#line 721
        .trainerName = _("Broden"),
#line 722
        .trainerClass = TRAINER_CLASS_HIKER,
#line 723
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 725
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 726
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 728
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 730
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 729
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 731
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 733
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 732
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 734
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_BATTLE_GIRL] =
    {
#line 735
        .trainerName = _("Angela"),
#line 736
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 737
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 738
F_TRAINER_FEMALE | 
#line 739
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 740
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 742
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 744
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 743
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 745
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 746
            .ability = ABILITY_HUGE_POWER,
#line 748
            .lvl = 20,
#line 747
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 749
                MOVE_ROLLOUT,
                MOVE_SLAM,
                MOVE_TACKLE,
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 754
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_BEAUTY] =
    {
#line 755
        .trainerName = _("Rachel"),
#line 756
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 757
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 758
F_TRAINER_FEMALE | 
#line 759
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 760
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 762
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 764
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 763
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 765
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 767
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 766
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 768
            .species = SPECIES_CARBINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 769
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 771
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 772
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 774
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_MAGMA_GRUNT] =
    {
#line 775
        .trainerName = _("Joseph"),
#line 776
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 777
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 779
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 780
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 782
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 784
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 783
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 785
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 786
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 788
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_LASS] =
    {
#line 789
        .trainerName = _("Rebecca"),
#line 790
        .trainerClass = TRAINER_CLASS_LASS,
#line 791
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 792
F_TRAINER_FEMALE | 
#line 793
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 794
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 796
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 798
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 797
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 799
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 800
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 802
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 803
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 805
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_MANIAC] =
    {
#line 806
        .trainerName = _("Blake"),
#line 807
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 808
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 810
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 811
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 813
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 815
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 814
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 816
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 819
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 817
            .ability = ABILITY_SAND_VEIL,
#line 818
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 819
                MOVE_ROCK_SLIDE,
                MOVE_STOMPING_TANTRUM,
                MOVE_SANDSTORM,
                MOVE_BITE,
            },
            },
        },
    },
#line 824
    [DIFFICULTY_NORMAL][GYM_LEADER_DOUGLAS] =
    {
#line 825
        .trainerName = _("Douglas"),
#line 826
        .trainerClass = TRAINER_CLASS_LEADER,
#line 827
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 829
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 830
        .items = { ITEM_SUPER_POTION, ITEM_FULL_HEAL },
#line 831
        .aiFlags = AI_FLAG_GYM_LEADER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 833
            .species = SPECIES_NACLI,
#line 833
            .gender = TRAINER_MON_MALE,
#line 833
            .heldItem = ITEM_EVIOLITE,
#line 836
            .ev = TRAINER_PARTY_EVS(236, 0, 36, 0, 0, 236),
#line 838
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 834
            .ability = ABILITY_STURDY,
#line 835
            .lvl = 20,
#line 837
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 838
                MOVE_IRON_DEFENSE,
                MOVE_STEALTH_ROCK,
                MOVE_BULLDOZE,
                MOVE_TACKLE,
            },
            },
            {
#line 843
            .species = SPECIES_VIGOROTH,
#line 843
            .gender = TRAINER_MON_MALE,
#line 843
            .heldItem = ITEM_SILK_SCARF,
#line 846
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 248, 0, 4),
#line 848
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 844
            .ability = ABILITY_VITAL_SPIRIT,
#line 845
            .lvl = 20,
#line 847
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 848
                MOVE_SLASH,
                MOVE_NIGHT_SLASH,
                MOVE_BULK_UP,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 853
            .species = SPECIES_CHINCHOU,
#line 853
            .gender = TRAINER_MON_FEMALE,
#line 853
            .heldItem = ITEM_MAGNET,
#line 856
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
#line 858
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 854
            .ability = ABILITY_WATER_ABSORB,
#line 855
            .lvl = 20,
#line 857
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 859
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_BUBBLE_BEAM,
                MOVE_VOLT_SWITCH,
            },
            },
            {
#line 864
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 864
            .heldItem = ITEM_WIDE_LENS,
#line 867
            .ev = TRAINER_PARTY_EVS(236, 236, 0, 36, 0, 0),
#line 869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 865
            .ability = ABILITY_LEVITATE,
#line 866
            .lvl = 20,
#line 868
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 869
                MOVE_COSMIC_POWER,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
                MOVE_MORNING_SUN,
            },
            },
            {
#line 874
            .species = SPECIES_CROBAT,
#line 874
            .gender = TRAINER_MON_FEMALE,
#line 874
            .heldItem = ITEM_LIFE_ORB,
#line 877
            .ev = TRAINER_PARTY_EVS(252, 248, 0, 0, 8, 0),
#line 879
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 875
            .ability = ABILITY_INNER_FOCUS,
#line 876
            .lvl = 22,
#line 878
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 879
                MOVE_AIR_SLASH,
                MOVE_POISON_JAB,
                MOVE_LEECH_LIFE,
                MOVE_MEAN_LOOK,
            },
            },
        },
    },
#line 884
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_PICNICKER] =
    {
#line 885
        .trainerName = _("Madeline"),
#line 886
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 887
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 888
F_TRAINER_FEMALE | 
#line 889
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 890
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 892
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 894
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 893
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 895
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 896
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 898
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 899
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 901
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_COLLECTOR] =
    {
#line 902
        .trainerName = _("Johan"),
#line 903
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 904
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 906
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 907
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 909
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 911
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 910
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 912
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 914
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 913
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 915
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_TWINS] =
    {
#line 916
        .trainerName = _("Pibi & Jay"),
#line 917
        .trainerClass = TRAINER_CLASS_TWINS,
#line 918
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 919
F_TRAINER_FEMALE | 
#line 920
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 921
        .doubleBattle = TRUE,
#line 922
        .aiFlags = AI_FLAG_CHEESE_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 924
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 926
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 925
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 926
                MOVE_FAIRY_WIND,
                MOVE_POISON_POWDER,
                MOVE_SLEEP_POWDER,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 931
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 934
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 932
            .ability = ABILITY_TECHNICIAN,
#line 933
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 934
                MOVE_THIEF,
                MOVE_ECHOED_VOICE,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 938
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_BLACKBELT] =
    {
#line 939
        .trainerName = _("Soho"),
#line 940
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 941
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 943
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 944
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 946
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 947
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 949
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 951
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 950
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 952
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_POKECENTRE_MAGMA_GRUNT] =
    {
#line 953
        .trainerName = _("Evan"),
#line 954
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 955
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 957
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 958
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 960
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 961
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 963
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 964
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 966
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_YOUNGSTER] =
    {
#line 967
        .trainerName = _("Taylor"),
#line 968
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 969
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 971
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 972
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 974
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 976
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 975
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 977
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 978
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 980
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 982
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 981
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 983
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_COUPLE] =
    {
#line 984
        .trainerName = _("Amy & Luke"),
#line 985
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 986
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 988
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 989
        .doubleBattle = TRUE,
#line 990
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 992
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 994
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 993
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 995
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 997
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 996
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 998
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 999
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1001
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1003
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1002
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1004
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_RUNNERF] =
    {
#line 1005
        .trainerName = _("Leila"),
#line 1006
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 1007
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 1008
F_TRAINER_FEMALE | 
#line 1009
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1010
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1012
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1014
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1013
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1015
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1016
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1018
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_RUNNERM] =
    {
#line 1019
        .trainerName = _("Matt"),
#line 1020
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 1021
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 1023
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1024
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1026
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1027
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1029
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1031
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1030
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1032
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1033
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1035
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_LADY] =
    {
#line 1036
        .trainerName = _("Cordelia"),
#line 1037
        .trainerClass = TRAINER_CLASS_LADY,
#line 1038
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1039
F_TRAINER_FEMALE | 
#line 1040
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1041
        .items = { ITEM_FULL_RESTORE },
#line 1042
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1044
            .species = SPECIES_MINCCINO,
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
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1048
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1050
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1052
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1051
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1053
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1055
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1054
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1056
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1057
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1059
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_TUBERM] =
    {
#line 1060
        .trainerName = _("Kyle"),
#line 1061
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1062
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1064
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1065
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1067
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1069
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1068
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1070
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1072
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1071
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1073
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_TUBERF] =
    {
#line 1074
        .trainerName = _("Kerry"),
#line 1075
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1076
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 1077
F_TRAINER_FEMALE | 
#line 1078
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1079
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1081
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1082
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1084
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1086
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1085
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1087
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_FISHERMAN] =
    {
#line 1088
        .trainerName = _("Leonard"),
#line 1089
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1090
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1092
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1093
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1095
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1096
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1098
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1099
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1101
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1103
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1102
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1104
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_EXPERT] =
    {
#line 1105
        .trainerName = _("Gergino"),
#line 1106
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1107
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 1109
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1110
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1112
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1113
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1115
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1116
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1118
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_HIKER] =
    {
#line 1119
        .trainerName = _("Rictor"),
#line 1120
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1121
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1123
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1124
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1126
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1127
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1129
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1130
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1132
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_YOUNGSTER] =
    {
#line 1133
        .trainerName = _("Henry"),
#line 1134
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1135
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 1137
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1138
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1140
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1142
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1141
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1143
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1144
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1146
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1147
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1149
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_HIKER] =
    {
#line 1150
        .trainerName = _("Hugh"),
#line 1151
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1152
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1154
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1155
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1157
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1158
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1160
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1161
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1163
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1164
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1166
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_PICNICKER] =
    {
#line 1167
        .trainerName = _("Rayleigh"),
#line 1168
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1169
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1170
F_TRAINER_FEMALE | 
#line 1171
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1172
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1174
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1176
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1175
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1177
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1178
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1180
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_GUITARIST] =
    {
#line 1181
        .trainerName = _("Kurt"),
#line 1182
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 1183
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 1185
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1186
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1188
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1190
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1189
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1191
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1192
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1194
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BUG_CATCHER] =
    {
#line 1195
        .trainerName = _("Bryan"),
#line 1196
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1197
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1199
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1200
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1202
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1203
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1205
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1206
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1208
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1209
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1211
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1212
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1214
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_FISHERMAN] =
    {
#line 1215
        .trainerName = _("Oscar"),
#line 1216
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1217
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1219
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1220
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1222
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1223
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1225
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BLACKBELT] =
    {
#line 1226
        .trainerName = _("Ian"),
#line 1227
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 1228
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 1230
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1231
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1233
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1234
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1236
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1237
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1239
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BATTLEGIRL] =
    {
#line 1240
        .trainerName = _("Elise"),
#line 1241
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 1242
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 1243
F_TRAINER_FEMALE | 
#line 1244
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1245
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1247
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1248
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1250
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1251
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1253
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_EXPERTF] =
    {
#line 1254
        .trainerName = _("Deborah"),
#line 1255
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1256
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1257
F_TRAINER_FEMALE | 
#line 1258
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1259
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1261
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1265
            .ev = TRAINER_PARTY_EVS(228, 0, 236, 12, 32, 0),
#line 1267
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1262
            .ability = ABILITY_HEALER,
#line 1263
            .lvl = 24,
#line 1266
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1264
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1268
                MOVE_SOFT_BOILED,
                MOVE_HEAL_PULSE,
                MOVE_ICY_WIND,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 1273
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_EXPERTM] =
    {
#line 1274
        .trainerName = _("Dale"),
#line 1275
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1276
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 1278
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1279
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1281
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1285
            .ev = TRAINER_PARTY_EVS(248, 248, 0, 4, 0, 0),
#line 1287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1282
            .ability = ABILITY_THICK_FAT,
#line 1283
            .lvl = 24,
#line 1286
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1284
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1287
                MOVE_HEAVY_SLAM,
                MOVE_CRUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 1292
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT1] =
    {
#line 1293
        .trainerName = _("Jeremy"),
#line 1294
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1295
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1297
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1298
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1300
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1301
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1303
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1304
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1306
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT2] =
    {
#line 1307
        .trainerName = _("Charles"),
#line 1308
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1309
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1311
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1312
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1314
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1315
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1317
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1319
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1318
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1320
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT3] =
    {
#line 1321
        .trainerName = _("Liam"),
#line 1322
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1323
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1325
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1326
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1328
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1329
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1331
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1332
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1334
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_ADMIN] =
    {
#line 1335
        .trainerName = _("Sayla"),
#line 1336
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 1337
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 1338
F_TRAINER_FEMALE | 
#line 1339
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1340
        .aiFlags = AI_FLAG_RIVAL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1342
            .species = SPECIES_CLAMPERL,
#line 1342
            .gender = TRAINER_MON_FEMALE,
#line 1344
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1343
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1344
                MOVE_WHIRLPOOL,
                MOVE_SUPERSONIC,
            },
            },
            {
#line 1347
            .species = SPECIES_FRILLISH,
#line 1347
            .gender = TRAINER_MON_FEMALE,
#line 1350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1349
            .ability = ABILITY_CURSED_BODY,
#line 1348
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1350
                MOVE_ABSORB,
                MOVE_POISON_STING,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1354
            .species = SPECIES_SEEL,
#line 1354
            .gender = TRAINER_MON_FEMALE,
#line 1356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1355
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1356
                MOVE_HEADBUTT,
                MOVE_ICY_WIND,
                MOVE_ICE_SHARD,
                MOVE_LICK,
            },
            },
        },
    },
#line 1361
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_MAGMA_GRUNT] =
    {
#line 1362
        .trainerName = _("Malcolm"),
#line 1363
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1364
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1366
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1367
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1369
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1370
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1372
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1374
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1373
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1375
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1376
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1378
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1379
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1381
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT1] =
    {
#line 1382
        .trainerName = _("Fred"),
#line 1383
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1384
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1386
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1387
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1389
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1391
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1390
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1392
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT2] =
    {
#line 1393
        .trainerName = _("Stacy"),
#line 1394
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1395
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1396
F_TRAINER_FEMALE | 
#line 1397
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1398
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1400
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1401
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1403
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1404
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1406
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT3] =
    {
#line 1407
        .trainerName = _("Alec"),
#line 1408
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1409
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1411
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1412
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1414
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1416
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1415
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1417
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1418
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1420
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT4] =
    {
#line 1421
        .trainerName = _("Harold"),
#line 1422
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1423
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1425
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1426
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1428
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1430
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1429
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1431
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1432
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1434
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1435
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1437
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT5] =
    {
#line 1438
        .trainerName = _("Ricky"),
#line 1439
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1440
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1442
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1443
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1445
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1449
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1446
            .ability = ABILITY_SIMPLE,
#line 1448
            .lvl = 21,
#line 1447
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1449
                MOVE_HEAT_WAVE,
                MOVE_TACKLE,
                MOVE_STOCKPILE,
            },
            },
            {
#line 1453
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1457
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1454
            .ability = ABILITY_FLAME_BODY,
#line 1456
            .lvl = 21,
#line 1455
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1457
                MOVE_FLAMETHROWER,
                MOVE_SMOG,
                MOVE_YAWN,
            },
            },
        },
    },
#line 1461
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT6] =
    {
#line 1462
        .trainerName = _("Bessa"),
#line 1463
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1464
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1465
F_TRAINER_FEMALE | 
#line 1466
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1467
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1469
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1470
            .ability = ABILITY_WEAK_ARMOR,
#line 1472
            .lvl = 24,
#line 1471
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1473
                MOVE_ROCK_SLIDE,
                MOVE_BIND,
                MOVE_DRAGON_BREATH,
                MOVE_CURSE,
            },
            },
        },
    },
#line 1478
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT7] =
    {
#line 1479
        .trainerName = _("Carla"),
#line 1480
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1481
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1482
F_TRAINER_FEMALE | 
#line 1483
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1484
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1486
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1487
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1489
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1491
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1490
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1491
                MOVE_WILL_O_WISP,
                MOVE_EMBER,
                MOVE_QUICK_ATTACK,
                MOVE_DISABLE,
            },
            },
            {
#line 1496
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1497
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1500
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_ADMIN] =
    {
#line 1501
        .trainerName = _("Terrance"),
#line 1502
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 1503
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 1505
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1506
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1508
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1511
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1510
            .ability = ABILITY_DROUGHT,
#line 1509
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1511
                MOVE_PROTECT,
                MOVE_LAVA_PLUME,
                MOVE_SMOKESCREEN,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 1516
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1517
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1518
                MOVE_ROCK_SLIDE,
                MOVE_FLAMETHROWER,
                MOVE_YAWN,
            },
            },
            {
#line 1522
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1525
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1524
            .ability = ABILITY_FLAME_BODY,
#line 1523
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1525
                MOVE_CONFUSE_RAY,
                MOVE_HEX,
                MOVE_HEAT_WAVE,
                MOVE_SMOG,
            },
            },
        },
    },
#line 1532
    [DIFFICULTY_NORMAL][RIVAL_EVELYNN_1] =
    {
#line 1533
        .trainerName = _("Evelynn"),
#line 1534
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1535
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 1536
F_TRAINER_FEMALE | 
#line 1537
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1538
        .items = { ITEM_SUPER_POTION },
#line 1539
        .aiFlags = AI_FLAG_RIVAL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1541
            .species = SPECIES_ROSELIA,
#line 1541
            .gender = TRAINER_MON_FEMALE,
#line 1544
            .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
#line 1546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1543
            .ability = ABILITY_POISON_POINT,
#line 1542
            .lvl = 16,
#line 1545
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1546
                MOVE_MAGICAL_LEAF,
                MOVE_POISON_STING,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1551
            .species = SPECIES_VENIPEDE,
#line 1551
            .gender = TRAINER_MON_FEMALE,
#line 1554
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 1556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1553
            .ability = ABILITY_SPEED_BOOST,
#line 1552
            .lvl = 16,
#line 1555
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1556
                MOVE_ROLLOUT,
                MOVE_POISON_TAIL,
                MOVE_BUG_BITE,
                MOVE_PROTECT,
            },
            },
            {
#line 1561
            .species = SPECIES_MAWILE,
#line 1561
            .gender = TRAINER_MON_FEMALE,
#line 1564
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1566
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1563
            .ability = ABILITY_INTIMIDATE,
#line 1562
            .lvl = 18,
#line 1565
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1566
                MOVE_BITE,
                MOVE_SUCKER_PUNCH,
                MOVE_FAIRY_WIND,
            },
            },
        },
    },
