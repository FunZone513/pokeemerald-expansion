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
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 287
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 287
            .heldItem = ITEM_SCOPE_LENS,
#line 291
            .ev = TRAINER_PARTY_EVS(0, 248, 0, 244, 0, 8),
#line 293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 288
            .ability = ABILITY_SNIPER,
#line 289
            .lvl = 13,
#line 292
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 290
            .teraType = TYPE_BUG,
            .moves = {
#line 293
                MOVE_LEECH_LIFE,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 296
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_BUG_CATCHER] =
    {
#line 297
        .trainerName = _("Bert"),
#line 298
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 299
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 301
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 302
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 304
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 305
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 307
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 309
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 308
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 309
                MOVE_HARDEN,
                MOVE_TACKLE,
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 314
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 315
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 317
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_GIRL] =
    {
#line 318
        .trainerName = _("Lola"),
#line 319
        .trainerClass = TRAINER_CLASS_LASS,
#line 320
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 321
F_TRAINER_FEMALE | 
#line 322
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 323
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 325
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 327
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 326
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 328
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 329
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 331
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_BOY] =
    {
#line 332
        .trainerName = _("Mark"),
#line 333
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 334
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 336
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 337
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 339
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 340
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 342
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_GIRL] =
    {
#line 343
        .trainerName = _("Susie"),
#line 344
        .trainerClass = TRAINER_CLASS_LASS,
#line 345
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 346
F_TRAINER_FEMALE | 
#line 347
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 348
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 350
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 351
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 353
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 354
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 356
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_LITTLEGIRL] =
    {
#line 357
        .trainerName = _("Mary"),
#line 358
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 359
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 360
F_TRAINER_FEMALE | 
#line 361
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 362
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 364
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 365
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 366
                MOVE_WATER_GUN,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 369
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_FISHERMAN] =
    {
#line 370
        .trainerName = _("Jeff"),
#line 371
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 372
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 374
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 375
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 377
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 378
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 380
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 382
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 381
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 383
    [DIFFICULTY_NORMAL][TRAINER_ROUTE4_SCHOOLKID] =
    {
#line 384
        .trainerName = _("Timothy"),
#line 385
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 386
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 388
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 389
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 391
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 392
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 394
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 395
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 397
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_PICNICKER] =
    {
#line 398
        .trainerName = _("Brittany"),
#line 399
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 400
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 401
F_TRAINER_FEMALE | 
#line 402
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 403
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 405
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 407
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 406
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 408
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 411
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 409
            .ability = ABILITY_STURDY,
#line 410
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 413
    [DIFFICULTY_NORMAL][TRAINER_DRIPSTONE_CAVE_FISHERMAN] =
    {
#line 414
        .trainerName = _("Alan"),
#line 415
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 416
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 418
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 419
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 421
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 423
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 422
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 424
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 425
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 427
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 429
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 428
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 430
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_BLACKBELT] =
    {
#line 431
        .trainerName = _("Lister"),
#line 432
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 433
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 435
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 436
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 438
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 440
            .ev = TRAINER_PARTY_EVS(244, 248, 0, 0, 0, 8),
#line 443
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 439
            .ability = ABILITY_IRON_FIST,
#line 442
            .lvl = 20,
#line 441
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 443
                MOVE_SHADOW_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 448
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_HIKER] =
    {
#line 449
        .trainerName = _("Raymond"),
#line 450
        .trainerClass = TRAINER_CLASS_HIKER,
#line 451
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 453
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 454
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 456
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 458
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 457
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 459
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 461
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 460
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 462
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_PICNICKER] =
    {
#line 463
        .trainerName = _("Chloe"),
#line 464
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 465
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 466
F_TRAINER_FEMALE | 
#line 467
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 468
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 470
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 471
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 473
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 474
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 476
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_SCHOOL_KID] =
    {
#line 477
        .trainerName = _("Jerry"),
#line 478
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 479
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 481
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 482
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 484
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 485
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 487
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 489
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 488
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 490
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 491
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 493
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 495
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 494
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 496
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_HIKER] =
    {
#line 497
        .trainerName = _("Daniel"),
#line 498
        .trainerClass = TRAINER_CLASS_HIKER,
#line 499
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 501
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 502
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 504
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 505
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 507
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 509
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 508
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 510
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_BUG_CATCHER] =
    {
#line 511
        .trainerName = _("Charlie"),
#line 512
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 513
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 515
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 516
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 518
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 519
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 521
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 523
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 522
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 524
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 526
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 525
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 527
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_WOMAN] =
    {
#line 528
        .trainerName = _("Laurel"),
#line 529
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 530
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 531
F_TRAINER_FEMALE | 
#line 532
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 533
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 535
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 536
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 538
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 539
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 541
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_GIRL] =
    {
#line 542
        .trainerName = _("Grace"),
#line 543
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 544
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 545
F_TRAINER_FEMALE | 
#line 546
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 547
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 549
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 551
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 550
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 552
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 553
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 555
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_PICNICKER] =
    {
#line 556
        .trainerName = _("Riley"),
#line 557
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 558
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 559
F_TRAINER_FEMALE | 
#line 560
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 561
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 563
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 564
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 566
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 567
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 569
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_CAMPER] =
    {
#line 570
        .trainerName = _("Arthur"),
#line 571
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 572
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 574
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 575
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 577
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 578
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 580
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 582
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 581
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 583
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_BLACK_BELT] =
    {
#line 584
        .trainerName = _("Mitchell"),
#line 585
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 586
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 588
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 589
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 591
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 593
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 592
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 594
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 595
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 597
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_BATTLE_GIRL] =
    {
#line 598
        .trainerName = _("Leanna"),
#line 599
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 600
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 601
F_TRAINER_FEMALE | 
#line 602
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 603
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 605
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 607
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 606
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 608
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_PICNICKER] =
    {
#line 609
        .trainerName = _("Imogen"),
#line 610
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 611
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 612
F_TRAINER_FEMALE | 
#line 613
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 614
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 616
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 617
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 619
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 621
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 620
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 622
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 624
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 623
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 625
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_HIKER] =
    {
#line 626
        .trainerName = _("Aaron"),
#line 627
        .trainerClass = TRAINER_CLASS_HIKER,
#line 628
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 630
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 631
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 633
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 634
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 636
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 638
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 637
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 639
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 641
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 640
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 642
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 643
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 645
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 647
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 646
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 648
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 650
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 649
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 651
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_MAGMA_GRUNT1] =
    {
#line 652
        .trainerName = _("Ricky"),
#line 653
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 654
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 656
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 657
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 659
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 663
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 660
            .ability = ABILITY_SIMPLE,
#line 662
            .lvl = 18,
#line 661
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 663
                MOVE_EMBER,
                MOVE_AMNESIA,
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 668
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 669
            .ability = ABILITY_FLAME_BODY,
#line 671
            .lvl = 18,
#line 670
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 672
                MOVE_EMBER,
                MOVE_SMOG,
                MOVE_YAWN,
            },
            },
        },
    },
#line 676
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_MAGMA_GRUNT2] =
    {
#line 677
        .trainerName = _("Bessa"),
#line 678
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 679
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 680
F_TRAINER_FEMALE | 
#line 681
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 682
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 684
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 688
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 685
            .ability = ABILITY_WEAK_ARMOR,
#line 687
            .lvl = 20,
#line 686
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 688
                MOVE_ROCK_SLIDE,
                MOVE_BIND,
                MOVE_DRAGON_BREATH,
                MOVE_CURSE,
            },
            },
        },
    },
#line 693
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_ENTRANCE_MAGMA_GRUNT] =
    {
#line 694
        .trainerName = _("Harry"),
#line 695
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 696
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 698
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 699
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 701
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 704
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 703
            .ability = ABILITY_SAND_STREAM,
#line 702
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 704
                MOVE_SAND_ATTACK,
                MOVE_YAWN,
                MOVE_DIG,
                MOVE_BITE,
            },
            },
        },
    },
#line 709
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_HIKER] =
    {
#line 710
        .trainerName = _("Broden"),
#line 711
        .trainerClass = TRAINER_CLASS_HIKER,
#line 712
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 714
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 715
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 717
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 719
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 718
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 720
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 722
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 721
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 723
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_BATTLE_GIRL] =
    {
#line 724
        .trainerName = _("Angela"),
#line 725
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 726
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 727
F_TRAINER_FEMALE | 
#line 728
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 729
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 731
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 733
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 732
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 734
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 735
            .ability = ABILITY_HUGE_POWER,
#line 737
            .lvl = 20,
#line 736
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 738
                MOVE_ROLLOUT,
                MOVE_SLAM,
                MOVE_TACKLE,
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 743
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_BEAUTY] =
    {
#line 744
        .trainerName = _("Rachel"),
#line 745
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 746
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 747
F_TRAINER_FEMALE | 
#line 748
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 749
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 751
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 752
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 754
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 755
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 757
            .species = SPECIES_CARBINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 759
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 758
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 760
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 761
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 763
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_MAGMA_GRUNT] =
    {
#line 764
        .trainerName = _("Joseph"),
#line 765
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 766
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 768
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 769
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 771
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 772
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 774
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 776
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 775
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 777
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_LASS] =
    {
#line 778
        .trainerName = _("Rebecca"),
#line 779
        .trainerClass = TRAINER_CLASS_LASS,
#line 780
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 781
F_TRAINER_FEMALE | 
#line 782
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 783
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 785
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 786
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 788
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 790
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 789
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 791
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 793
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 792
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 794
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_MANIAC] =
    {
#line 795
        .trainerName = _("Blake"),
#line 796
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 797
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 799
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 800
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 802
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 803
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 805
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 808
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 806
            .ability = ABILITY_SAND_VEIL,
#line 807
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 808
                MOVE_ROCK_SLIDE,
                MOVE_STOMPING_TANTRUM,
                MOVE_SANDSTORM,
                MOVE_BITE,
            },
            },
        },
    },
#line 813
    [DIFFICULTY_NORMAL][GYM_LEADER_DOUGLAS] =
    {
#line 814
        .trainerName = _("Douglas"),
#line 815
        .trainerClass = TRAINER_CLASS_LEADER,
#line 816
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 818
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 819
        .items = { ITEM_SUPER_POTION, ITEM_FULL_HEAL },
#line 820
        .aiFlags = AI_FLAG_GYM_LEADER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 822
            .species = SPECIES_NACLI,
#line 822
            .gender = TRAINER_MON_MALE,
#line 822
            .heldItem = ITEM_EVIOLITE,
#line 825
            .ev = TRAINER_PARTY_EVS(236, 0, 36, 0, 0, 236),
#line 827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 823
            .ability = ABILITY_STURDY,
#line 824
            .lvl = 20,
#line 826
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 827
                MOVE_IRON_DEFENSE,
                MOVE_STEALTH_ROCK,
                MOVE_BULLDOZE,
                MOVE_TACKLE,
            },
            },
            {
#line 832
            .species = SPECIES_VIGOROTH,
#line 832
            .gender = TRAINER_MON_MALE,
#line 832
            .heldItem = ITEM_SILK_SCARF,
#line 835
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 248, 0, 4),
#line 837
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 833
            .ability = ABILITY_VITAL_SPIRIT,
#line 834
            .lvl = 20,
#line 836
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 837
                MOVE_SLASH,
                MOVE_NIGHT_SLASH,
                MOVE_BULK_UP,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 842
            .species = SPECIES_CHINCHOU,
#line 842
            .gender = TRAINER_MON_FEMALE,
#line 842
            .heldItem = ITEM_MAGNET,
#line 845
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
#line 847
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 843
            .ability = ABILITY_WATER_ABSORB,
#line 844
            .lvl = 20,
#line 846
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 848
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_BUBBLE_BEAM,
                MOVE_VOLT_SWITCH,
            },
            },
            {
#line 853
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 853
            .heldItem = ITEM_WIDE_LENS,
#line 856
            .ev = TRAINER_PARTY_EVS(236, 236, 0, 36, 0, 0),
#line 858
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 854
            .ability = ABILITY_LEVITATE,
#line 855
            .lvl = 20,
#line 857
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 858
                MOVE_COSMIC_POWER,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
                MOVE_MORNING_SUN,
            },
            },
            {
#line 863
            .species = SPECIES_CROBAT,
#line 863
            .gender = TRAINER_MON_FEMALE,
#line 863
            .heldItem = ITEM_LIFE_ORB,
#line 866
            .ev = TRAINER_PARTY_EVS(252, 248, 0, 0, 8, 0),
#line 868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 864
            .ability = ABILITY_INNER_FOCUS,
#line 865
            .lvl = 22,
#line 867
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 868
                MOVE_AIR_SLASH,
                MOVE_POISON_JAB,
                MOVE_LEECH_LIFE,
                MOVE_MEAN_LOOK,
            },
            },
        },
    },
#line 873
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_PICNICKER] =
    {
#line 874
        .trainerName = _("Madeline"),
#line 875
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 876
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 877
F_TRAINER_FEMALE | 
#line 878
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 879
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 881
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 882
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 884
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 886
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 885
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 887
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 888
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 890
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_COLLECTOR] =
    {
#line 891
        .trainerName = _("Johan"),
#line 892
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 893
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 895
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 896
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 898
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 899
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 901
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 903
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 902
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 904
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_TWINS] =
    {
#line 905
        .trainerName = _("Pibi & Jay"),
#line 906
        .trainerClass = TRAINER_CLASS_TWINS,
#line 907
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 908
F_TRAINER_FEMALE | 
#line 909
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 910
        .doubleBattle = TRUE,
#line 911
        .aiFlags = AI_FLAG_CHEESE_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 913
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 915
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 914
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 915
                MOVE_FAIRY_WIND,
                MOVE_POISON_POWDER,
                MOVE_SLEEP_POWDER,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 920
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 921
            .ability = ABILITY_TECHNICIAN,
#line 922
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 923
                MOVE_THIEF,
                MOVE_ECHOED_VOICE,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 927
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_BLACKBELT] =
    {
#line 928
        .trainerName = _("Soho"),
#line 929
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 930
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 932
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 933
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 935
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 936
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 938
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 939
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 941
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_POKECENTRE_MAGMA_GRUNT] =
    {
#line 942
        .trainerName = _("Evan"),
#line 943
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 944
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 946
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 947
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 949
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 951
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 950
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 952
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 954
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 953
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 955
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_YOUNGSTER] =
    {
#line 956
        .trainerName = _("Taylor"),
#line 957
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 958
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 960
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 961
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 963
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 964
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 966
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 968
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 967
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 969
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 970
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 972
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_COUPLE] =
    {
#line 973
        .trainerName = _("Amy & Luke"),
#line 974
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 975
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 977
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 978
        .doubleBattle = TRUE,
#line 979
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 981
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 983
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 982
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 984
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 985
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 987
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 989
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 988
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 990
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 992
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 991
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 993
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_RUNNERF] =
    {
#line 994
        .trainerName = _("Leila"),
#line 995
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 996
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 997
F_TRAINER_FEMALE | 
#line 998
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 999
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1001
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1003
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1002
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1004
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1006
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1005
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1007
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_RUNNERM] =
    {
#line 1008
        .trainerName = _("Matt"),
#line 1009
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 1010
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 1012
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1013
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1015
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1016
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1018
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1019
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1021
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1023
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1022
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1024
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_LADY] =
    {
#line 1025
        .trainerName = _("Cordelia"),
#line 1026
        .trainerClass = TRAINER_CLASS_LADY,
#line 1027
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1028
F_TRAINER_FEMALE | 
#line 1029
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1030
        .items = { ITEM_FULL_RESTORE },
#line 1031
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1033
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1035
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1034
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1036
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1038
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1037
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1039
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1041
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1040
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1042
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1043
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1045
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1047
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1046
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1048
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_TUBERM] =
    {
#line 1049
        .trainerName = _("Kyle"),
#line 1050
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1051
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1053
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1054
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1056
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1057
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1059
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1061
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1060
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1062
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_TUBERF] =
    {
#line 1063
        .trainerName = _("Kerry"),
#line 1064
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1065
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 1066
F_TRAINER_FEMALE | 
#line 1067
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1068
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1070
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1072
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1071
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1073
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1075
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1074
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1076
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_FISHERMAN] =
    {
#line 1077
        .trainerName = _("Leonard"),
#line 1078
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1079
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1081
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1082
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1084
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1086
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1085
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1087
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1088
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1090
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1091
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1093
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_EXPERT] =
    {
#line 1094
        .trainerName = _("Gergino"),
#line 1095
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1096
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 1098
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1099
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1101
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1103
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1102
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1104
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1105
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1107
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_HIKER] =
    {
#line 1108
        .trainerName = _("Rictor"),
#line 1109
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1110
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1112
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1113
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1115
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1116
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1118
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1119
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1121
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_YOUNGSTER] =
    {
#line 1122
        .trainerName = _("Henry"),
#line 1123
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1124
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 1126
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1127
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1129
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1130
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1132
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1133
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1135
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1137
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1136
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1138
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_HIKER] =
    {
#line 1139
        .trainerName = _("Hugh"),
#line 1140
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1141
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1143
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1144
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1146
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1147
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1149
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1150
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1152
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1153
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1155
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_PICNICKER] =
    {
#line 1156
        .trainerName = _("Rayleigh"),
#line 1157
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1158
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1159
F_TRAINER_FEMALE | 
#line 1160
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1161
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1163
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1164
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1166
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1167
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1169
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_GUITARIST] =
    {
#line 1170
        .trainerName = _("Kurt"),
#line 1171
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 1172
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 1174
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1175
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1177
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1178
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1180
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1182
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1181
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1183
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BUG_CATCHER] =
    {
#line 1184
        .trainerName = _("Bryan"),
#line 1185
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1186
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1188
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1189
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1191
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1192
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1194
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1195
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1197
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1198
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1200
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1202
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1201
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1203
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_FISHERMAN] =
    {
#line 1204
        .trainerName = _("Oscar"),
#line 1205
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1206
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1208
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1209
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1211
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1212
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1214
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BLACKBELT] =
    {
#line 1215
        .trainerName = _("Ian"),
#line 1216
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 1217
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 1219
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1220
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1222
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1223
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1225
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1226
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1228
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BATTLEGIRL] =
    {
#line 1229
        .trainerName = _("Elise"),
#line 1230
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 1231
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 1232
F_TRAINER_FEMALE | 
#line 1233
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1234
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1236
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1237
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1239
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1240
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1242
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_EXPERTF] =
    {
#line 1243
        .trainerName = _("Deborah"),
#line 1244
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1245
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1246
F_TRAINER_FEMALE | 
#line 1247
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1248
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1250
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1254
            .ev = TRAINER_PARTY_EVS(228, 0, 236, 12, 32, 0),
#line 1256
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1251
            .ability = ABILITY_HEALER,
#line 1252
            .lvl = 24,
#line 1255
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1253
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1257
                MOVE_SOFT_BOILED,
                MOVE_HEAL_PULSE,
                MOVE_ICY_WIND,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 1262
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_EXPERTM] =
    {
#line 1263
        .trainerName = _("Dale"),
#line 1264
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1265
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 1267
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1268
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1270
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1274
            .ev = TRAINER_PARTY_EVS(248, 248, 0, 4, 0, 0),
#line 1276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1271
            .ability = ABILITY_THICK_FAT,
#line 1272
            .lvl = 24,
#line 1275
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1273
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1276
                MOVE_HEAVY_SLAM,
                MOVE_CRUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 1281
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT1] =
    {
#line 1282
        .trainerName = _("Jeremy"),
#line 1283
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1284
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1286
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1287
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1289
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1290
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1292
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1293
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1295
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT2] =
    {
#line 1296
        .trainerName = _("Charles"),
#line 1297
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1298
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1300
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1301
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1303
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1304
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1306
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1307
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1309
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT3] =
    {
#line 1310
        .trainerName = _("Liam"),
#line 1311
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1312
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1314
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1315
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1317
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1319
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1318
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1320
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1322
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1321
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1323
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_ADMIN] =
    {
#line 1324
        .trainerName = _("Sayla"),
#line 1325
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 1326
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 1327
F_TRAINER_FEMALE | 
#line 1328
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1329
        .aiFlags = AI_FLAG_RIVAL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1331
            .species = SPECIES_CLAMPERL,
#line 1331
            .gender = TRAINER_MON_FEMALE,
#line 1333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1332
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1333
                MOVE_WHIRLPOOL,
                MOVE_SUPERSONIC,
            },
            },
            {
#line 1336
            .species = SPECIES_FRILLISH,
#line 1336
            .gender = TRAINER_MON_FEMALE,
#line 1339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1338
            .ability = ABILITY_CURSED_BODY,
#line 1337
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1339
                MOVE_ABSORB,
                MOVE_POISON_STING,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1343
            .species = SPECIES_SEEL,
#line 1343
            .gender = TRAINER_MON_FEMALE,
#line 1345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1344
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1345
                MOVE_HEADBUTT,
                MOVE_ICY_WIND,
                MOVE_ICE_SHARD,
                MOVE_LICK,
            },
            },
        },
    },
#line 1350
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_MAGMA_GRUNT] =
    {
#line 1351
        .trainerName = _("Malcolm"),
#line 1352
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1353
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1355
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1356
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1358
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1359
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1361
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1362
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1364
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1365
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1367
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1368
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1370
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT1] =
    {
#line 1371
        .trainerName = _("Fred"),
#line 1372
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1373
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1375
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1376
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1378
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1379
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1381
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT2] =
    {
#line 1382
        .trainerName = _("Stacy"),
#line 1383
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1384
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1385
F_TRAINER_FEMALE | 
#line 1386
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1387
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1389
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1391
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1390
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1392
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1393
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1395
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT3] =
    {
#line 1396
        .trainerName = _("Alec"),
#line 1397
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1398
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1400
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1401
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1403
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1404
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1406
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1407
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1409
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT4] =
    {
#line 1410
        .trainerName = _("Harold"),
#line 1411
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1412
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1414
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1415
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1417
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1418
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1420
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1422
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1421
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1423
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1424
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1426
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT5] =
    {
#line 1427
        .trainerName = _("Ricky"),
#line 1428
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1429
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1431
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1432
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1434
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1438
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1435
            .ability = ABILITY_SIMPLE,
#line 1437
            .lvl = 21,
#line 1436
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1438
                MOVE_HEAT_WAVE,
                MOVE_TACKLE,
                MOVE_STOCKPILE,
            },
            },
            {
#line 1442
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1443
            .ability = ABILITY_FLAME_BODY,
#line 1445
            .lvl = 21,
#line 1444
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1446
                MOVE_FLAMETHROWER,
                MOVE_SMOG,
                MOVE_YAWN,
            },
            },
        },
    },
#line 1450
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT6] =
    {
#line 1451
        .trainerName = _("Bessa"),
#line 1452
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1453
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1454
F_TRAINER_FEMALE | 
#line 1455
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1456
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1458
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1462
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1459
            .ability = ABILITY_WEAK_ARMOR,
#line 1461
            .lvl = 24,
#line 1460
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1462
                MOVE_ROCK_SLIDE,
                MOVE_BIND,
                MOVE_DRAGON_BREATH,
                MOVE_CURSE,
            },
            },
        },
    },
#line 1467
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT7] =
    {
#line 1468
        .trainerName = _("Carla"),
#line 1469
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1470
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1471
F_TRAINER_FEMALE | 
#line 1472
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1473
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1475
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1476
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1478
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1480
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1479
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1480
                MOVE_WILL_O_WISP,
                MOVE_EMBER,
                MOVE_QUICK_ATTACK,
                MOVE_DISABLE,
            },
            },
            {
#line 1485
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1487
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1486
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1489
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_ADMIN] =
    {
#line 1490
        .trainerName = _("Terrance"),
#line 1491
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 1492
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 1494
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1495
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1497
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1499
            .ability = ABILITY_DROUGHT,
#line 1498
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1500
                MOVE_PROTECT,
                MOVE_LAVA_PLUME,
                MOVE_SMOKESCREEN,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 1505
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1506
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1507
                MOVE_ROCK_SLIDE,
                MOVE_FLAMETHROWER,
                MOVE_YAWN,
            },
            },
            {
#line 1511
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1513
            .ability = ABILITY_FLAME_BODY,
#line 1512
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1514
                MOVE_CONFUSE_RAY,
                MOVE_HEX,
                MOVE_HEAT_WAVE,
                MOVE_SMOG,
            },
            },
        },
    },
#line 1521
    [DIFFICULTY_NORMAL][RIVAL_EVELYNN_1] =
    {
#line 1522
        .trainerName = _("Evelynn"),
#line 1523
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1524
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 1525
F_TRAINER_FEMALE | 
#line 1526
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1527
        .items = { ITEM_SUPER_POTION },
#line 1528
        .aiFlags = AI_FLAG_RIVAL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1530
            .species = SPECIES_ROSELIA,
#line 1530
            .gender = TRAINER_MON_FEMALE,
#line 1533
            .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
#line 1535
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1532
            .ability = ABILITY_POISON_POINT,
#line 1531
            .lvl = 16,
#line 1534
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1535
                MOVE_MAGICAL_LEAF,
                MOVE_POISON_STING,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1540
            .species = SPECIES_VENIPEDE,
#line 1540
            .gender = TRAINER_MON_FEMALE,
#line 1543
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 1545
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1542
            .ability = ABILITY_SPEED_BOOST,
#line 1541
            .lvl = 16,
#line 1544
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1545
                MOVE_ROLLOUT,
                MOVE_POISON_TAIL,
                MOVE_BUG_BITE,
                MOVE_PROTECT,
            },
            },
            {
#line 1550
            .species = SPECIES_MAWILE,
#line 1550
            .gender = TRAINER_MON_FEMALE,
#line 1553
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1552
            .ability = ABILITY_INTIMIDATE,
#line 1551
            .lvl = 18,
#line 1554
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1555
                MOVE_BITE,
                MOVE_SUCKER_PUNCH,
                MOVE_FAIRY_WIND,
            },
            },
        },
    },
