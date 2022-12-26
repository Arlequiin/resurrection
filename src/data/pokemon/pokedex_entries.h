const struct PokedexEntry gPokedexEntries[] =
{
    [NATIONAL_DEX_NONE] =
    {
        .categoryName = _("Inconnu"),
        .height = 0,
        .weight = 0,
        .description = gDummyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BULBASAUR] =
    {
        .categoryName = _("Graine"),
        .height = 7,
        .weight = 69,
        .description = gBulbasaurPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IVYSAUR] =
    {
        .categoryName = _("Graine"),
        .height = 10,
        .weight = 130,
        .description = gIvysaurPokedexText,
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENUSAUR] =
    {
        .categoryName = _("Graine"),
        .height = 20,
        .weight = 1000,
        .description = gVenusaurPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_CHARMANDER] =
    {
        .categoryName = _("Lézard"),
        .height = 6,
        .weight = 85,
        .description = gCharmanderPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARMELEON] =
    {
        .categoryName = _("Flamme"),
        .height = 11,
        .weight = 190,
        .description = gCharmeleonPokedexText,
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARIZARD] =
    {
        .categoryName = _("Flamme"),
        .height = 17,
        .weight = 905,
        .description = gCharizardPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SQUIRTLE] =
    {
        .categoryName = _("Minitortue"),
        .height = 5,
        .weight = 90,
        .description = gSquirtlePokedexText,
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WARTORTLE] =
    {
        .categoryName = _("Tortue"),
        .height = 10,
        .weight = 225,
        .description = gWartortlePokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLASTOISE] =
    {
        .categoryName = _("Carapace"),
        .height = 16,
        .weight = 855,
        .description = gBlastoisePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CATERPIE] =
    {
        .categoryName = _("Ver"),
        .height = 3,
        .weight = 29,
        .description = gCaterpiePokedexText,
        .pokemonScale = 549,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METAPOD] =
    {
        .categoryName = _("Cocon"),
        .height = 7,
        .weight = 99,
        .description = gMetapodPokedexText,
        .pokemonScale = 350,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUTTERFREE] =
    {
        .categoryName = _("Papillon"),
        .height = 11,
        .weight = 320,
        .description = gButterfreePokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEEDLE] =
    {
        .categoryName = _("Insectopic"),
        .height = 3,
        .weight = 32,
        .description = gWeedlePokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KAKUNA] =
    {
        .categoryName = _("Cocon"),
        .height = 6,
        .weight = 100,
        .description = gKakunaPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEEDRILL] =
    {
        .categoryName = _("Guêpoison"),
        .height = 10,
        .weight = 295,
        .description = gBeedrillPokedexText,
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEY] =
    {
        .categoryName = _("Minoiseau"),
        .height = 3,
        .weight = 18,
        .description = gPidgeyPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEOTTO] =
    {
        .categoryName = _("Oiseau"),
        .height = 11,
        .weight = 300,
        .description = gPidgeottoPokedexText,
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEOT] =
    {
        .categoryName = _("Oiseau"),
        .height = 15,
        .weight = 395,
        .description = gPidgeotPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RATTATA] =
    {
        .categoryName = _("Souris"),
        .height = 3,
        .weight = 35,
        .description = gRattataPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RATICATE] =
    {
        .categoryName = _("Souris"),
        .height = 7,
        .weight = 185,
        .description = gRaticatePokedexText,
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPEAROW] =
    {
        .categoryName = _("Minoiseau"),
        .height = 3,
        .weight = 20,
        .description = gSpearowPokedexText,
        .pokemonScale = 571,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FEAROW] =
    {
        .categoryName = _("Bec-Oiseau"),
        .height = 12,
        .weight = 380,
        .description = gFearowPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EKANS] =
    {
        .categoryName = _("Serpent"),
        .height = 20,
        .weight = 69,
        .description = gEkansPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARBOK] =
    {
        .categoryName = _("Cobra"),
        .height = 35,
        .weight = 650,
        .description = gArbokPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PIKACHU] =
    {
        .categoryName = _("Souris"),
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAICHU] =
    {
        .categoryName = _("Souris"),
        .height = 8,
        .weight = 300,
        .description = gRaichuPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDSHREW] =
    {
        .categoryName = _("Souris"),
        .height = 6,
        .weight = 120,
        .description = gSandshrewPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDSLASH] =
    {
        .categoryName = _("Souris"),
        .height = 10,
        .weight = 295,
        .description = gSandslashPokedexText,
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORAN_F] =
    {
        .categoryName = _("Vénépic"),
        .height = 4,
        .weight = 70,
        .description = gNidoranFPokedexText,
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORINA] =
    {
        .categoryName = _("Vénépic"),
        .height = 8,
        .weight = 200,
        .description = gNidorinaPokedexText,
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDOQUEEN] =
    {
        .categoryName = _("Perceur"),
        .height = 13,
        .weight = 600,
        .description = gNidoqueenPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORAN_M] =
    {
        .categoryName = _("Vénépic"),
        .height = 5,
        .weight = 90,
        .description = gNidoranMPokedexText,
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORINO] =
    {
        .categoryName = _("Vénépic"),
        .height = 9,
        .weight = 195,
        .description = gNidorinoPokedexText,
        .pokemonScale = 408,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDOKING] =
    {
        .categoryName = _("Perceur"),
        .height = 14,
        .weight = 620,
        .description = gNidokingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLEFAIRY] =
    {
        .categoryName = _("Fée"),
        .height = 6,
        .weight = 75,
        .description = gClefairyPokedexText,
        .pokemonScale = 441,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLEFABLE] =
    {
        .categoryName = _("Fée"),
        .height = 13,
        .weight = 400,
        .description = gClefablePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VULPIX] =
    {
        .categoryName = _("Renard"),
        .height = 6,
        .weight = 99,
        .description = gVulpixPokedexText,
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NINETALES] =
    {
        .categoryName = _("Renard"),
        .height = 11,
        .weight = 199,
        .description = gNinetalesPokedexText,
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JIGGLYPUFF] =
    {
        .categoryName = _("Bouboule"),
        .height = 5,
        .weight = 55,
        .description = gJigglypuffPokedexText,
        .pokemonScale = 433,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WIGGLYTUFF] =
    {
        .categoryName = _("Bouboule"),
        .height = 10,
        .weight = 120,
        .description = gWigglytuffPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZUBAT] =
    {
        .categoryName = _("Chovsouris"),
        .height = 8,
        .weight = 75,
        .description = gZubatPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLBAT] =
    {
        .categoryName = _("Chovsouris"),
        .height = 16,
        .weight = 550,
        .description = gGolbatPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ODDISH] =
    {
        .categoryName = _("Racine"),
        .height = 5,
        .weight = 54,
        .description = gOddishPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLOOM] =
    {
        .categoryName = _("Racine"),
        .height = 8,
        .weight = 86,
        .description = gGloomPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VILEPLUME] =
    {
        .categoryName = _("Fleur"),
        .height = 12,
        .weight = 186,
        .description = gVileplumePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PARAS] =
    {
        .categoryName = _("Champignon"),
        .height = 3,
        .weight = 54,
        .description = gParasPokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PARASECT] =
    {
        .categoryName = _("Champignon"),
        .height = 10,
        .weight = 295,
        .description = gParasectPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENONAT] =
    {
        .categoryName = _("Vermine"),
        .height = 10,
        .weight = 300,
        .description = gVenonatPokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_VENOMOTH] =
    {
        .categoryName = _("Papipoison"),
        .height = 15,
        .weight = 125,
        .description = gVenomothPokedexText,
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_DIGLETT] =
    {
        .categoryName = _("Taupe"),
        .height = 2,
        .weight = 8,
        .description = gDiglettPokedexText,
        .pokemonScale = 833,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUGTRIO] =
    {
        .categoryName = _("Taupe"),
        .height = 7,
        .weight = 333,
        .description = gDugtrioPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEOWTH] =
    {
        .categoryName = _("Chadégout"),
        .height = 4,
        .weight = 42,
        .description = gMeowthPokedexText,
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PERSIAN] =
    {
        .categoryName = _("Chadeville"),
        .height = 10,
        .weight = 320,
        .description = gPersianPokedexText,
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PSYDUCK] =
    {
        .categoryName = _("Canard"),
        .height = 8,
        .weight = 196,
        .description = gPsyduckPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLDUCK] =
    {
        .categoryName = _("Canard"),
        .height = 17,
        .weight = 766,
        .description = gGolduckPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_MANKEY] =
    {
        .categoryName = _("Porsinge"),
        .height = 5,
        .weight = 280,
        .description = gMankeyPokedexText,
        .pokemonScale = 404,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PRIMEAPE] =
    {
        .categoryName = _("Porsinge"),
        .height = 10,
        .weight = 320,
        .description = gPrimeapePokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROWLITHE] =
    {
        .categoryName = _("Chiot"),
        .height = 7,
        .weight = 190,
        .description = gGrowlithePokedexText,
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCANINE] =
    {
        .categoryName = _("Légendaire"),
        .height = 19,
        .weight = 1550,
        .description = gArcaninePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_POLIWAG] =
    {
        .categoryName = _("Têtard"),
        .height = 6,
        .weight = 124,
        .description = gPoliwagPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLIWHIRL] =
    {
        .categoryName = _("Têtard"),
        .height = 10,
        .weight = 200,
        .description = gPoliwhirlPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLIWRATH] =
    {
        .categoryName = _("Têtard"),
        .height = 13,
        .weight = 540,
        .description = gPoliwrathPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABRA] =
    {
        .categoryName = _("Psy"),
        .height = 9,
        .weight = 195,
        .description = gAbraPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KADABRA] =
    {
        .categoryName = _("Psy"),
        .height = 13,
        .weight = 565,
        .description = gKadabraPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALAKAZAM] =
    {
        .categoryName = _("Psy"),
        .height = 15,
        .weight = 480,
        .description = gAlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MACHOP] =
    {
        .categoryName = _("Colosse"),
        .height = 8,
        .weight = 195,
        .description = gMachopPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MACHOKE] =
    {
        .categoryName = _("Colosse"),
        .height = 15,
        .weight = 705,
        .description = gMachokePokedexText,
        .pokemonScale = 323,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MACHAMP] =
    {
        .categoryName = _("Colosse"),
        .height = 16,
        .weight = 1300,
        .description = gMachampPokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_BELLSPROUT] =
    {
        .categoryName = _("Fleur"),
        .height = 7,
        .weight = 40,
        .description = gBellsproutPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEEPINBELL] =
    {
        .categoryName = _("Carnivore"),
        .height = 10,
        .weight = 64,
        .description = gWeepinbellPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VICTREEBEL] =
    {
        .categoryName = _("Carnivore"),
        .height = 17,
        .weight = 155,
        .description = gVictreebelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_TENTACOOL] =
    {
        .categoryName = _("Mollusque"),
        .height = 9,
        .weight = 455,
        .description = gTentacoolPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TENTACRUEL] =
    {
        .categoryName = _("Mollusque"),
        .height = 16,
        .weight = 550,
        .description = gTentacruelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GEODUDE] =
    {
        .categoryName = _("Roche"),
        .height = 4,
        .weight = 200,
        .description = gGeodudePokedexText,
        .pokemonScale = 347,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRAVELER] =
    {
        .categoryName = _("Roche"),
        .height = 10,
        .weight = 1050,
        .description = gGravelerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLEM] =
    {
        .categoryName = _("Titanesque"),
        .height = 14,
        .weight = 3000,
        .description = gGolemPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PONYTA] =
    {
        .categoryName = _("Cheval Feu"),
        .height = 10,
        .weight = 300,
        .description = gPonytaPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAPIDASH] =
    {
        .categoryName = _("Cheval Feu"),
        .height = 17,
        .weight = 950,
        .description = gRapidashPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_SLOWPOKE] =
    {
        .categoryName = _("Crétin"),
        .height = 12,
        .weight = 360,
        .description = gSlowpokePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLOWBRO] =
    {
        .categoryName = _("Symbiose"),
        .height = 16,
        .weight = 785,
        .description = gSlowbroPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAGNEMITE] =
    {
        .categoryName = _("Magnétique"),
        .height = 3,
        .weight = 60,
        .description = gMagnemitePokedexText,
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGNETON] =
    {
        .categoryName = _("Magnétique"),
        .height = 10,
        .weight = 600,
        .description = gMagnetonPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FARFETCHD] =
    {
        .categoryName = _("Canard Fou"),
        .height = 8,
        .weight = 150,
        .description = gFarfetchdPokedexText,
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DODUO] =
    {
        .categoryName = _("Duoiseau"),
        .height = 14,
        .weight = 392,
        .description = gDoduoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_DODRIO] =
    {
        .categoryName = _("Trioiseau"),
        .height = 18,
        .weight = 852,
        .description = gDodrioPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEEL] =
    {
        .categoryName = _("Otarie"),
        .height = 11,
        .weight = 900,
        .description = gSeelPokedexText,
        .pokemonScale = 297,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEWGONG] =
    {
        .categoryName = _("Otarie"),
        .height = 17,
        .weight = 1200,
        .description = gDewgongPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 275,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRIMER] =
    {
        .categoryName = _("Dégueu"),
        .height = 9,
        .weight = 300,
        .description = gGrimerPokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUK] =
    {
        .categoryName = _("Dégueu"),
        .height = 12,
        .weight = 300,
        .description = gMukPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELLDER] =
    {
        .categoryName = _("Bivalve"),
        .height = 3,
        .weight = 40,
        .description = gShellderPokedexText,
        .pokemonScale = 675,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLOYSTER] =
    {
        .categoryName = _("Bivalve"),
        .height = 15,
        .weight = 1325,
        .description = gCloysterPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 269,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GASTLY] =
    {
        .categoryName = _("Gaz"),
        .height = 13,
        .weight = 1,
        .description = gGastlyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAUNTER] =
    {
        .categoryName = _("Gaz"),
        .height = 16,
        .weight = 1,
        .description = gHaunterPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GENGAR] =
    {
        .categoryName = _("Ombre"),
        .height = 15,
        .weight = 405,
        .description = gGengarPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ONIX] =
    {
        .categoryName = _("Serpenroc"),
        .height = 88,
        .weight = 2100,
        .description = gOnixPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_DROWZEE] =
    {
        .categoryName = _("Hypnose"),
        .height = 10,
        .weight = 324,
        .description = gDrowzeePokedexText,
        .pokemonScale = 274,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HYPNO] =
    {
        .categoryName = _("Hypnose"),
        .height = 16,
        .weight = 756,
        .description = gHypnoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KRABBY] =
    {
        .categoryName = _("Doux Crabe"),
        .height = 4,
        .weight = 65,
        .description = gKrabbyPokedexText,
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KINGLER] =
    {
        .categoryName = _("Pince"),
        .height = 13,
        .weight = 600,
        .description = gKinglerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VOLTORB] =
    {
        .categoryName = _("Balle"),
        .height = 5,
        .weight = 104,
        .description = gVoltorbPokedexText,
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECTRODE] =
    {
        .categoryName = _("Balle"),
        .height = 12,
        .weight = 666,
        .description = gElectrodePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXEGGCUTE] =
    {
        .categoryName = _("Œuf"),
        .height = 4,
        .weight = 25,
        .description = gExeggcutePokedexText,
        .pokemonScale = 489,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXEGGUTOR] =
    {
        .categoryName = _("Fruitpalme"),
        .height = 20,
        .weight = 1200,
        .description = gExeggutorPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_CUBONE] =
    {
        .categoryName = _("Solitaire"),
        .height = 4,
        .weight = 65,
        .description = gCubonePokedexText,
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAROWAK] =
    {
        .categoryName = _("Gard'Os"),
        .height = 10,
        .weight = 450,
        .description = gMarowakPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HITMONLEE] =
    {
        .categoryName = _("Latteur"),
        .height = 15,
        .weight = 498,
        .description = gHitmonleePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_HITMONCHAN] =
    {
        .categoryName = _("Puncheur"),
        .height = 14,
        .weight = 502,
        .description = gHitmonchanPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LICKITUNG] =
    {
        .categoryName = _("Lécheur"),
        .height = 12,
        .weight = 655,
        .description = gLickitungPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOFFING] =
    {
        .categoryName = _("Gaz Mortel"),
        .height = 6,
        .weight = 10,
        .description = gKoffingPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEEZING] =
    {
        .categoryName = _("Gaz Mortel"),
        .height = 12,
        .weight = 95,
        .description = gWeezingPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RHYHORN] =
    {
        .categoryName = _("Piquant"),
        .height = 10,
        .weight = 1150,
        .description = gRhyhornPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RHYDON] =
    {
        .categoryName = _("Perceur"),
        .height = 19,
        .weight = 1200,
        .description = gRhydonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CHANSEY] =
    {
        .categoryName = _("Œuf"),
        .height = 11,
        .weight = 346,
        .description = gChanseyPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TANGELA] =
    {
        .categoryName = _("Vigne"),
        .height = 10,
        .weight = 350,
        .description = gTangelaPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KANGASKHAN] =
    {
        .categoryName = _("Maternel"),
        .height = 22,
        .weight = 800,
        .description = gKangaskhanPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_HORSEA] =
    {
        .categoryName = _("Dragon"),
        .height = 4,
        .weight = 80,
        .description = gHorseaPokedexText,
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEADRA] =
    {
        .categoryName = _("Dragon"),
        .height = 12,
        .weight = 250,
        .description = gSeadraPokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLDEEN] =
    {
        .categoryName = _("Poisson"),
        .height = 6,
        .weight = 150,
        .description = gGoldeenPokedexText,
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEAKING] =
    {
        .categoryName = _("Poisson"),
        .height = 13,
        .weight = 390,
        .description = gSeakingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARYU] =
    {
        .categoryName = _("Étoile"),
        .height = 8,
        .weight = 345,
        .description = gStaryuPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARMIE] =
    {
        .categoryName = _("Mystérieux"),
        .height = 11,
        .weight = 800,
        .description = gStarmiePokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MR_MIME] =
    {
        .categoryName = _("Bloqueur"),
        .height = 13,
        .weight = 545,
        .description = gMrMimePokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCYTHER] =
    {
        .categoryName = _("Mante"),
        .height = 15,
        .weight = 560,
        .description = gScytherPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_JYNX] =
    {
        .categoryName = _("Humanoïde"),
        .height = 14,
        .weight = 406,
        .description = gJynxPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_ELECTABUZZ] =
    {
        .categoryName = _("Électrique"),
        .height = 11,
        .weight = 300,
        .description = gElectabuzzPokedexText,
        .pokemonScale = 351,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGMAR] =
    {
        .categoryName = _("Crache-Feu"),
        .height = 13,
        .weight = 445,
        .description = gMagmarPokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINSIR] =
    {
        .categoryName = _("Scarabée"),
        .height = 15,
        .weight = 550,
        .description = gPinsirPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAUROS] =
    {
        .categoryName = _("Buffle"),
        .height = 14,
        .weight = 884,
        .description = gTaurosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGIKARP] =
    {
        .categoryName = _("Poisson"),
        .height = 9,
        .weight = 100,
        .description = gMagikarpPokedexText,
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GYARADOS] =
    {
        .categoryName = _("Terrifiant"),
        .height = 65,
        .weight = 2350,
        .description = gGyaradosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 481,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_LAPRAS] =
    {
        .categoryName = _("Transport"),
        .height = 25,
        .weight = 2200,
        .description = gLaprasPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_DITTO] =
    {
        .categoryName = _("Morphing"),
        .height = 3,
        .weight = 40,
        .description = gDittoPokedexText,
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EEVEE] =
    {
        .categoryName = _("Évolutif"),
        .height = 3,
        .weight = 65,
        .description = gEeveePokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VAPOREON] =
    {
        .categoryName = _("Bulleur"),
        .height = 10,
        .weight = 290,
        .description = gVaporeonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JOLTEON] =
    {
        .categoryName = _("Orage"),
        .height = 8,
        .weight = 245,
        .description = gJolteonPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAREON] =
    {
        .categoryName = _("Flamme"),
        .height = 9,
        .weight = 250,
        .description = gFlareonPokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORYGON] =
    {
        .categoryName = _("Virtuel"),
        .height = 8,
        .weight = 365,
        .description = gPorygonPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OMANYTE] =
    {
        .categoryName = _("Spirale"),
        .height = 4,
        .weight = 75,
        .description = gOmanytePokedexText,
        .pokemonScale = 521,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OMASTAR] =
    {
        .categoryName = _("Spirale"),
        .height = 10,
        .weight = 350,
        .description = gOmastarPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KABUTO] =
    {
        .categoryName = _("Carapace"),
        .height = 5,
        .weight = 115,
        .description = gKabutoPokedexText,
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KABUTOPS] =
    {
        .categoryName = _("Carapace"),
        .height = 13,
        .weight = 405,
        .description = gKabutopsPokedexText,
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AERODACTYL] =
    {
        .categoryName = _("Fossile"),
        .height = 18,
        .weight = 590,
        .description = gAerodactylPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_SNORLAX] =
    {
        .categoryName = _("Pionceur"),
        .height = 21,
        .weight = 4600,
        .description = gSnorlaxPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
    },

    [NATIONAL_DEX_ARTICUNO] =
    {
        .categoryName = _("Glaciaire"),
        .height = 17,
        .weight = 554,
        .description = gArticunoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ZAPDOS] =
    {
        .categoryName = _("Électrique"),
        .height = 16,
        .weight = 526,
        .description = gZapdosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 318,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_MOLTRES] =
    {
        .categoryName = _("Flamme"),
        .height = 20,
        .weight = 600,
        .description = gMoltresPokedexText,
        .pokemonScale = 270,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_DRATINI] =
    {
        .categoryName = _("Dragon"),
        .height = 18,
        .weight = 33,
        .description = gDratiniPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_DRAGONAIR] =
    {
        .categoryName = _("Dragon"),
        .height = 40,
        .weight = 165,
        .description = gDragonairPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_DRAGONITE] =
    {
        .categoryName = _("Dragon"),
        .height = 22,
        .weight = 2100,
        .description = gDragonitePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MEWTWO] =
    {
        .categoryName = _("Génétique"),
        .height = 20,
        .weight = 1220,
        .description = gMewtwoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MEW] =
    {
        .categoryName = _("Nouveau"),
        .height = 4,
        .weight = 40,
        .description = gMewPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHIKORITA] =
    {
        .categoryName = _("Feuille"),
        .height = 9,
        .weight = 64,
        .description = gChikoritaPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAYLEEF] =
    {
        .categoryName = _("Feuille"),
        .height = 12,
        .weight = 158,
        .description = gBayleefPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEGANIUM] =
    {
        .categoryName = _("Herbe"),
        .height = 18,
        .weight = 1005,
        .description = gMeganiumPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 277,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CYNDAQUIL] =
    {
        .categoryName = _("Souris Feu"),
        .height = 5,
        .weight = 79,
        .description = gCyndaquilPokedexText,
        .pokemonScale = 539,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUILAVA] =
    {
        .categoryName = _("Volcan"),
        .height = 9,
        .weight = 190,
        .description = gQuilavaPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYPHLOSION] =
    {
        .categoryName = _("Volcan"),
        .height = 17,
        .weight = 795,
        .description = gTyphlosionPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_TOTODILE] =
    {
        .categoryName = _("Mâchoire"),
        .height = 6,
        .weight = 95,
        .description = gTotodilePokedexText,
        .pokemonScale = 487,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CROCONAW] =
    {
        .categoryName = _("Mâchoire"),
        .height = 11,
        .weight = 250,
        .description = gCroconawPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FERALIGATR] =
    {
        .categoryName = _("Mâchoire"),
        .height = 23,
        .weight = 888,
        .description = gFeraligatrPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SENTRET] =
    {
        .categoryName = _("Espion"),
        .height = 8,
        .weight = 60,
        .description = gSentretPokedexText,
        .pokemonScale = 439,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FURRET] =
    {
        .categoryName = _("Allongé"),
        .height = 18,
        .weight = 325,
        .description = gFurretPokedexText,
        .pokemonScale = 346,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOOTHOOT] =
    {
        .categoryName = _("Hibou"),
        .height = 7,
        .weight = 212,
        .description = gHoothootPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOCTOWL] =
    {
        .categoryName = _("Hibou"),
        .height = 16,
        .weight = 408,
        .description = gNoctowlPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEDYBA] =
    {
        .categoryName = _("5 Étoiles"),
        .height = 10,
        .weight = 108,
        .description = gLedybaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEDIAN] =
    {
        .categoryName = _("5 Étoiles"),
        .height = 14,
        .weight = 356,
        .description = gLedianPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPINARAK] =
    {
        .categoryName = _("Crache Fil"),
        .height = 5,
        .weight = 85,
        .description = gSpinarakPokedexText,
        .pokemonScale = 414,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARIADOS] =
    {
        .categoryName = _("Long-Patte"),
        .height = 11,
        .weight = 335,
        .description = gAriadosPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CROBAT] =
    {
        .categoryName = _("Chovsouris"),
        .height = 18,
        .weight = 750,
        .description = gCrobatPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CHINCHOU] =
    {
        .categoryName = _("Poisson"),
        .height = 5,
        .weight = 120,
        .description = gChinchouPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LANTURN] =
    {
        .categoryName = _("Lumière"),
        .height = 12,
        .weight = 225,
        .description = gLanturnPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PICHU] =
    {
        .categoryName = _("Minisouris"),
        .height = 3,
        .weight = 20,
        .description = gPichuPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLEFFA] =
    {
        .categoryName = _("Étoile"),
        .height = 3,
        .weight = 30,
        .description = gCleffaPokedexText,
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IGGLYBUFF] =
    {
        .categoryName = _("Bouboule"),
        .height = 3,
        .weight = 10,
        .description = gIgglybuffPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGEPI] =
    {
        .categoryName = _("Balle Pic"),
        .height = 3,
        .weight = 15,
        .description = gTogepiPokedexText,
        .pokemonScale = 507,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGETIC] =
    {
        .categoryName = _("Bonheur"),
        .height = 6,
        .weight = 32,
        .description = gTogeticPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NATU] =
    {
        .categoryName = _("Minoiseau"),
        .height = 2,
        .weight = 20,
        .description = gNatuPokedexText,
        .pokemonScale = 610,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XATU] =
    {
        .categoryName = _("Mystique"),
        .height = 15,
        .weight = 150,
        .description = gXatuPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 318,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MAREEP] =
    {
        .categoryName = _("Laine"),
        .height = 6,
        .weight = 78,
        .description = gMareepPokedexText,
        .pokemonScale = 379,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAAFFY] =
    {
        .categoryName = _("Laine"),
        .height = 8,
        .weight = 133,
        .description = gFlaaffyPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMPHAROS] =
    {
        .categoryName = _("Lumière"),
        .height = 14,
        .weight = 615,
        .description = gAmpharosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BELLOSSOM] =
    {
        .categoryName = _("Fleur"),
        .height = 4,
        .weight = 58,
        .description = gBellossomPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARILL] =
    {
        .categoryName = _("Aquasouris"),
        .height = 4,
        .weight = 85,
        .description = gMarillPokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AZUMARILL] =
    {
        .categoryName = _("Aqualapin"),
        .height = 8,
        .weight = 285,
        .description = gAzumarillPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUDOWOODO] =
    {
        .categoryName = _("Imitation"),
        .height = 12,
        .weight = 380,
        .description = gSudowoodoPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLITOED] =
    {
        .categoryName = _("Grenouille"),
        .height = 11,
        .weight = 339,
        .description = gPolitoedPokedexText,
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOPPIP] =
    {
        .categoryName = _("Pissenlit"),
        .height = 4,
        .weight = 5,
        .description = gHoppipPokedexText,
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKIPLOOM] =
    {
        .categoryName = _("Pissenlit"),
        .height = 6,
        .weight = 10,
        .description = gSkiploomPokedexText,
        .pokemonScale = 387,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JUMPLUFF] =
    {
        .categoryName = _("Pissenlit"),
        .height = 8,
        .weight = 30,
        .description = gJumpluffPokedexText,
        .pokemonScale = 418,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AIPOM] =
    {
        .categoryName = _("Longqueue"),
        .height = 8,
        .weight = 115,
        .description = gAipomPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUNKERN] =
    {
        .categoryName = _("Graine"),
        .height = 3,
        .weight = 18,
        .description = gSunkernPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUNFLORA] =
    {
        .categoryName = _("Soleil"),
        .height = 8,
        .weight = 85,
        .description = gSunfloraPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YANMA] =
    {
        .categoryName = _("Translaile"),
        .height = 12,
        .weight = 380,
        .description = gYanmaPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOOPER] =
    {
        .categoryName = _("Poisson"),
        .height = 4,
        .weight = 85,
        .description = gWooperPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUAGSIRE] =
    {
        .categoryName = _("Poisson"),
        .height = 14,
        .weight = 750,
        .description = gQuagsirePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ESPEON] =
    {
        .categoryName = _("Soleil"),
        .height = 9,
        .weight = 265,
        .description = gEspeonPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UMBREON] =
    {
        .categoryName = _("Lune"),
        .height = 10,
        .weight = 270,
        .description = gUmbreonPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MURKROW] =
    {
        .categoryName = _("Obscurité"),
        .height = 5,
        .weight = 21,
        .description = gMurkrowPokedexText,
        .pokemonScale = 401,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_SLOWKING] =
    {
        .categoryName = _("Royal"),
        .height = 20,
        .weight = 795,
        .description = gSlowkingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_MISDREAVUS] =
    {
        .categoryName = _("Strident"),
        .height = 7,
        .weight = 10,
        .description = gMisdreavusPokedexText,
        .pokemonScale = 407,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNOWN] =
    {
        .categoryName = _("Symbolique"),
        .height = 5,
        .weight = 50,
        .description = gUnownPokedexText,
        .pokemonScale = 411,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOBBUFFET] =
    {
        .categoryName = _("Patient"),
        .height = 13,
        .weight = 285,
        .description = gWobbuffetPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIRAFARIG] =
    {
        .categoryName = _("Long-Cou"),
        .height = 15,
        .weight = 415,
        .description = gGirafarigPokedexText,
        .pokemonScale = 281,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINECO] =
    {
        .categoryName = _("Ver Caché"),
        .height = 6,
        .weight = 72,
        .description = gPinecoPokedexText,
        .pokemonScale = 445,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FORRETRESS] =
    {
        .categoryName = _("Ver Caché"),
        .height = 12,
        .weight = 1258,
        .description = gForretressPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUNSPARCE] =
    {
        .categoryName = _("Serpent"),
        .height = 15,
        .weight = 140,
        .description = gDunsparcePokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLIGAR] =
    {
        .categoryName = _("Scorpivol"),
        .height = 11,
        .weight = 648,
        .description = gGligarPokedexText,
        .pokemonScale = 350,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STEELIX] =
    {
        .categoryName = _("Serpenfer"),
        .height = 92,
        .weight = 4000,
        .description = gSteelixPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_SNUBBULL] =
    {
        .categoryName = _("Fée"),
        .height = 6,
        .weight = 78,
        .description = gSnubbullPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRANBULL] =
    {
        .categoryName = _("Fée"),
        .height = 14,
        .weight = 487,
        .description = gGranbullPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QWILFISH] =
    {
        .categoryName = _("Bouboule"),
        .height = 5,
        .weight = 39,
        .description = gQwilfishPokedexText,
        .pokemonScale = 430,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCIZOR] =
    {
        .categoryName = _("Pince"),
        .height = 18,
        .weight = 1180,
        .description = gScizorPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHUCKLE] =
    {
        .categoryName = _("Pourri"),
        .height = 6,
        .weight = 205,
        .description = gShucklePokedexText,
        .pokemonScale = 485,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HERACROSS] =
    {
        .categoryName = _("Unicorne"),
        .height = 15,
        .weight = 540,
        .description = gHeracrossPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNEASEL] =
    {
        .categoryName = _("Grifacérée"),
        .height = 9,
        .weight = 280,
        .description = gSneaselPokedexText,
        .pokemonScale = 413,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TEDDIURSA] =
    {
        .categoryName = _("Mini Ours"),
        .height = 6,
        .weight = 88,
        .description = gTeddiursaPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_URSARING] =
    {
        .categoryName = _("Hibernant"),
        .height = 18,
        .weight = 1258,
        .description = gUrsaringPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLUGMA] =
    {
        .categoryName = _("Lave"),
        .height = 7,
        .weight = 350,
        .description = gSlugmaPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGCARGO] =
    {
        .categoryName = _("Lave"),
        .height = 8,
        .weight = 550,
        .description = gMagcargoPokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWINUB] =
    {
        .categoryName = _("Cochon"),
        .height = 4,
        .weight = 65,
        .description = gSwinubPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PILOSWINE] =
    {
        .categoryName = _("Porc"),
        .height = 11,
        .weight = 558,
        .description = gPiloswinePokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORSOLA] =
    {
        .categoryName = _("Corail"),
        .height = 6,
        .weight = 50,
        .description = gCorsolaPokedexText,
        .pokemonScale = 410,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REMORAID] =
    {
        .categoryName = _("Jet"),
        .height = 6,
        .weight = 120,
        .description = gRemoraidPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OCTILLERY] =
    {
        .categoryName = _("Jet"),
        .height = 9,
        .weight = 285,
        .description = gOctilleryPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DELIBIRD] =
    {
        .categoryName = _("Livraison"),
        .height = 9,
        .weight = 160,
        .description = gDelibirdPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANTINE] =
    {
        .categoryName = _("Cervolant"),
        .height = 21,
        .weight = 2200,
        .description = gMantinePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SKARMORY] =
    {
        .categoryName = _("Armoiseau"),
        .height = 17,
        .weight = 505,
        .description = gSkarmoryPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_HOUNDOUR] =
    {
        .categoryName = _("Sombre"),
        .height = 6,
        .weight = 108,
        .description = gHoundourPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOUNDOOM] =
    {
        .categoryName = _("Sombre"),
        .height = 14,
        .weight = 350,
        .description = gHoundoomPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KINGDRA] =
    {
        .categoryName = _("Dragon"),
        .height = 18,
        .weight = 1520,
        .description = gKingdraPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHANPY] =
    {
        .categoryName = _("Long-Nez"),
        .height = 5,
        .weight = 335,
        .description = gPhanpyPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DONPHAN] =
    {
        .categoryName = _("Armure"),
        .height = 11,
        .weight = 1200,
        .description = gDonphanPokedexText,
        .pokemonScale = 313,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORYGON2] =
    {
        .categoryName = _("Virtuel"),
        .height = 6,
        .weight = 325,
        .description = gPorygon2PokedexText,
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STANTLER] =
    {
        .categoryName = _("Maxi Corne"),
        .height = 14,
        .weight = 712,
        .description = gStantlerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMEARGLE] =
    {
        .categoryName = _("Peintre"),
        .height = 12,
        .weight = 580,
        .description = gSmearglePokedexText,
        .pokemonScale = 287,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYROGUE] =
    {
        .categoryName = _("Bagarreur"),
        .height = 7,
        .weight = 210,
        .description = gTyroguePokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HITMONTOP] =
    {
        .categoryName = _("Poirier"),
        .height = 14,
        .weight = 480,
        .description = gHitmontopPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMOOCHUM] =
    {
        .categoryName = _("Bisou"),
        .height = 4,
        .weight = 60,
        .description = gSmoochumPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELEKID] =
    {
        .categoryName = _("Électrique"),
        .height = 6,
        .weight = 235,
        .description = gElekidPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGBY] =
    {
        .categoryName = _("Charbon"),
        .height = 7,
        .weight = 214,
        .description = gMagbyPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MILTANK] =
    {
        .categoryName = _("Vachalait"),
        .height = 12,
        .weight = 755,
        .description = gMiltankPokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLISSEY] =
    {
        .categoryName = _("Bonheur"),
        .height = 15,
        .weight = 468,
        .description = gBlisseyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_RAIKOU] =
    {
        .categoryName = _("Foudre"),
        .height = 19,
        .weight = 1780,
        .description = gRaikouPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_ENTEI] =
    {
        .categoryName = _("Volcan"),
        .height = 21,
        .weight = 1980,
        .description = gEnteiPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SUICUNE] =
    {
        .categoryName = _("Aurore"),
        .height = 20,
        .weight = 1870,
        .description = gSuicunePokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LARVITAR] =
    {
        .categoryName = _("Peaupierre"),
        .height = 6,
        .weight = 720,
        .description = gLarvitarPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUPITAR] =
    {
        .categoryName = _("Carapadure"),
        .height = 12,
        .weight = 1520,
        .description = gPupitarPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYRANITAR] =
    {
        .categoryName = _("Armure"),
        .height = 20,
        .weight = 2020,
        .description = gTyranitarPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LUGIA] =
    {
        .categoryName = _("Plongeon"),
        .height = 52,
        .weight = 2160,
        .description = gLugiaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

    [NATIONAL_DEX_HO_OH] =
    {
        .categoryName = _("Arcenciel"),
        .height = 38,
        .weight = 1990,
        .description = gHoOhPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
    },

    [NATIONAL_DEX_CELEBI] =
    {
        .categoryName = _("Temporel"),
        .height = 6,
        .weight = 50,
        .description = gCelebiPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = -10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TREECKO] =
    {
        .categoryName = _("Bois Gecko"),
        .height = 5,
        .weight = 50,
        .description = gTreeckoPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROVYLE] =
    {
        .categoryName = _("Bois Gecko"),
        .height = 9,
        .weight = 216,
        .description = gGrovylePokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCEPTILE] =
    {
        .categoryName = _("Forêt"),
        .height = 17,
        .weight = 522,
        .description = gSceptilePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TORCHIC] =
    {
        .categoryName = _("Poussin"),
        .height = 4,
        .weight = 25,
        .description = gTorchicPokedexText,
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMBUSKEN] =
    {
        .categoryName = _("Poulet"),
        .height = 9,
        .weight = 195,
        .description = gCombuskenPokedexText,
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLAZIKEN] =
    {
        .categoryName = _("Ardent"),
        .height = 19,
        .weight = 520,
        .description = gBlazikenPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MUDKIP] =
    {
        .categoryName = _("Poissonboue"),
        .height = 4,
        .weight = 76,
        .description = gMudkipPokedexText,
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARSHTOMP] =
    {
        .categoryName = _("Poissonboue"),
        .height = 7,
        .weight = 280,
        .description = gMarshtompPokedexText,
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWAMPERT] =
    {
        .categoryName = _("Poissonboue"),
        .height = 15,
        .weight = 819,
        .description = gSwampertPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POOCHYENA] =
    {
        .categoryName = _("Morsure"),
        .height = 5,
        .weight = 136,
        .description = gPoochyenaPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIGHTYENA] =
    {
        .categoryName = _("Morsure"),
        .height = 10,
        .weight = 370,
        .description = gMightyenaPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZIGZAGOON] =
    {
        .categoryName = _("Petit Raton"),
        .height = 4,
        .weight = 175,
        .description = gZigzagoonPokedexText,
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LINOONE] =
    {
        .categoryName = _("Fonceur"),
        .height = 5,
        .weight = 325,
        .description = gLinoonePokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WURMPLE] =
    {
        .categoryName = _("Ver"),
        .height = 3,
        .weight = 36,
        .description = gWurmplePokedexText,
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SILCOON] =
    {
        .categoryName = _("Cocon"),
        .height = 6,
        .weight = 100,
        .description = gSilcoonPokedexText,
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEAUTIFLY] =
    {
        .categoryName = _("Papillon"),
        .height = 10,
        .weight = 284,
        .description = gBeautiflyPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CASCOON] =
    {
        .categoryName = _("Cocon"),
        .height = 7,
        .weight = 115,
        .description = gCascoonPokedexText,
        .pokemonScale = 391,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSTOX] =
    {
        .categoryName = _("Papipoison"),
        .height = 12,
        .weight = 316,
        .description = gDustoxPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOTAD] =
    {
        .categoryName = _("Aquaplante"),
        .height = 5,
        .weight = 26,
        .description = gLotadPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOMBRE] =
    {
        .categoryName = _("Jovial"),
        .height = 12,
        .weight = 325,
        .description = gLombrePokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUDICOLO] =
    {
        .categoryName = _("Insouciant"),
        .height = 15,
        .weight = 550,
        .description = gLudicoloPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_SEEDOT] =
    {
        .categoryName = _("Gland"),
        .height = 5,
        .weight = 40,
        .description = gSeedotPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NUZLEAF] =
    {
        .categoryName = _("Malin"),
        .height = 10,
        .weight = 280,
        .description = gNuzleafPokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHIFTRY] =
    {
        .categoryName = _("Malveillant"),
        .height = 13,
        .weight = 596,
        .description = gShiftryPokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAILLOW] =
    {
        .categoryName = _("Minirondel"),
        .height = 3,
        .weight = 23,
        .description = gTaillowPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWELLOW] =
    {
        .categoryName = _("Hirondelle"),
        .height = 7,
        .weight = 198,
        .description = gSwellowPokedexText,
        .pokemonScale = 428,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WINGULL] =
    {
        .categoryName = _("Mouette"),
        .height = 6,
        .weight = 95,
        .description = gWingullPokedexText,
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PELIPPER] =
    {
        .categoryName = _("Oiseaudo"),
        .height = 12,
        .weight = 280,
        .description = gPelipperPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RALTS] =
    {
        .categoryName = _("Sentiment"),
        .height = 4,
        .weight = 66,
        .description = gRaltsPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KIRLIA] =
    {
        .categoryName = _("Émotion"),
        .height = 8,
        .weight = 202,
        .description = gKirliaPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARDEVOIR] =
    {
        .categoryName = _("Étreinte"),
        .height = 16,
        .weight = 484,
        .description = gGardevoirPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SURSKIT] =
    {
        .categoryName = _("Maresurfeur"),
        .height = 5,
        .weight = 17,
        .description = gSurskitPokedexText,
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MASQUERAIN] =
    {
        .categoryName = _("Boule Œil"),
        .height = 8,
        .weight = 36,
        .description = gMasquerainPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHROOMISH] =
    {
        .categoryName = _("Champignon"),
        .height = 4,
        .weight = 45,
        .description = gShroomishPokedexText,
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRELOOM] =
    {
        .categoryName = _("Champignon"),
        .height = 12,
        .weight = 392,
        .description = gBreloomPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLAKOTH] =
    {
        .categoryName = _("Flâneur"),
        .height = 8,
        .weight = 240,
        .description = gSlakothPokedexText,
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIGOROTH] =
    {
        .categoryName = _("Turbusinge"),
        .height = 14,
        .weight = 465,
        .description = gVigorothPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLAKING] =
    {
        .categoryName = _("Fainéant"),
        .height = 20,
        .weight = 1305,
        .description = gSlakingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_NINCADA] =
    {
        .categoryName = _("Apprenti"),
        .height = 5,
        .weight = 55,
        .description = gNincadaPokedexText,
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NINJASK] =
    {
        .categoryName = _("Ninja"),
        .height = 8,
        .weight = 120,
        .description = gNinjaskPokedexText,
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHEDINJA] =
    {
        .categoryName = _("Exuvie"),
        .height = 8,
        .weight = 12,
        .description = gShedinjaPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHISMUR] =
    {
        .categoryName = _("Chuchoteur"),
        .height = 6,
        .weight = 163,
        .description = gWhismurPokedexText,
        .pokemonScale = 373,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOUDRED] =
    {
        .categoryName = _("Grosse Voix"),
        .height = 10,
        .weight = 405,
        .description = gLoudredPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXPLOUD] =
    {
        .categoryName = _("Bruit Sourd"),
        .height = 15,
        .weight = 840,
        .description = gExploudPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAKUHITA] =
    {
        .categoryName = _("Tenace"),
        .height = 10,
        .weight = 864,
        .description = gMakuhitaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HARIYAMA] =
    {
        .categoryName = _("Cogneur"),
        .height = 23,
        .weight = 2538,
        .description = gHariyamaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 343,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_AZURILL] =
    {
        .categoryName = _("Point Polka"),
        .height = 2,
        .weight = 20,
        .description = gAzurillPokedexText,
        .pokemonScale = 603,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOSEPASS] =
    {
        .categoryName = _("Boussole"),
        .height = 10,
        .weight = 970,
        .description = gNosepassPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SKITTY] =
    {
        .categoryName = _("Chaton"),
        .height = 6,
        .weight = 110,
        .description = gSkittyPokedexText,
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DELCATTY] =
    {
        .categoryName = _("Guindé"),
        .height = 11,
        .weight = 326,
        .description = gDelcattyPokedexText,
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SABLEYE] =
    {
        .categoryName = _("Obscurité"),
        .height = 5,
        .weight = 110,
        .description = gSableyePokedexText,
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAWILE] =
    {
        .categoryName = _("Trompeur"),
        .height = 6,
        .weight = 115,
        .description = gMawilePokedexText,
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARON] =
    {
        .categoryName = _("Armurfer"),
        .height = 4,
        .weight = 600,
        .description = gAronPokedexText,
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LAIRON] =
    {
        .categoryName = _("Armurfer"),
        .height = 9,
        .weight = 1200,
        .description = gLaironPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AGGRON] =
    {
        .categoryName = _("Armurfer"),
        .height = 21,
        .weight = 3600,
        .description = gAggronPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_MEDITITE] =
    {
        .categoryName = _("Méditation"),
        .height = 6,
        .weight = 112,
        .description = gMedititePokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEDICHAM] =
    {
        .categoryName = _("Méditation"),
        .height = 13,
        .weight = 315,
        .description = gMedichamPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECTRIKE] =
    {
        .categoryName = _("Orage"),
        .height = 6,
        .weight = 152,
        .description = gElectrikePokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANECTRIC] =
    {
        .categoryName = _("Décharge"),
        .height = 15,
        .weight = 402,
        .description = gManectricPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PLUSLE] =
    {
        .categoryName = _("Acclameur"),
        .height = 4,
        .weight = 42,
        .description = gPluslePokedexText,
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINUN] =
    {
        .categoryName = _("Acclameur"),
        .height = 4,
        .weight = 42,
        .description = gMinunPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VOLBEAT] =
    {
        .categoryName = _("Luciole"),
        .height = 7,
        .weight = 177,
        .description = gVolbeatPokedexText,
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ILLUMISE] =
    {
        .categoryName = _("Luciole"),
        .height = 6,
        .weight = 177,
        .description = gIllumisePokedexText,
        .pokemonScale = 572,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROSELIA] =
    {
        .categoryName = _("Épine"),
        .height = 3,
        .weight = 20,
        .description = gRoseliaPokedexText,
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GULPIN] =
    {
        .categoryName = _("Estomac"),
        .height = 4,
        .weight = 103,
        .description = gGulpinPokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWALOT] =
    {
        .categoryName = _("Sac Poison"),
        .height = 17,
        .weight = 800,
        .description = gSwalotPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_CARVANHA] =
    {
        .categoryName = _("Féroce"),
        .height = 8,
        .weight = 208,
        .description = gCarvanhaPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHARPEDO] =
    {
        .categoryName = _("Brutal"),
        .height = 18,
        .weight = 888,
        .description = gSharpedoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_WAILMER] =
    {
        .categoryName = _("Baleinboule"),
        .height = 20,
        .weight = 1300,
        .description = gWailmerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WAILORD] =
    {
        .categoryName = _("Cachabouée"),
        .height = 145,
        .weight = 3980,
        .description = gWailordPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
    },

    [NATIONAL_DEX_NUMEL] =
    {
        .categoryName = _("Engourdi"),
        .height = 7,
        .weight = 240,
        .description = gNumelPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CAMERUPT] =
    {
        .categoryName = _("Éruption"),
        .height = 19,
        .weight = 2200,
        .description = gCameruptPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_TORKOAL] =
    {
        .categoryName = _("Charbon"),
        .height = 5,
        .weight = 804,
        .description = gTorkoalPokedexText,
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPOINK] =
    {
        .categoryName = _("Rebond"),
        .height = 7,
        .weight = 306,
        .description = gSpoinkPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRUMPIG] =
    {
        .categoryName = _("Magouilleur"),
        .height = 9,
        .weight = 715,
        .description = gGrumpigPokedexText,
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPINDA] =
    {
        .categoryName = _("Panda Tache"),
        .height = 11,
        .weight = 50,
        .description = gSpindaPokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRAPINCH] =
    {
        .categoryName = _("Piégeur"),
        .height = 7,
        .weight = 150,
        .description = gTrapinchPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIBRAVA] =
    {
        .categoryName = _("Vibration"),
        .height = 11,
        .weight = 153,
        .description = gVibravaPokedexText,
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLYGON] =
    {
        .categoryName = _("Mystique"),
        .height = 20,
        .weight = 820,
        .description = gFlygonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CACNEA] =
    {
        .categoryName = _("Cactus"),
        .height = 4,
        .weight = 513,
        .description = gCacneaPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CACTURNE] =
    {
        .categoryName = _("Épouvantail"),
        .height = 13,
        .weight = 774,
        .description = gCacturnePokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWABLU] =
    {
        .categoryName = _("Oiseaucoton"),
        .height = 4,
        .weight = 12,
        .description = gSwabluPokedexText,
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALTARIA] =
    {
        .categoryName = _("Virevolteur"),
        .height = 11,
        .weight = 206,
        .description = gAltariaPokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZANGOOSE] =
    {
        .categoryName = _("Chat Furet"),
        .height = 13,
        .weight = 403,
        .description = gZangoosePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEVIPER] =
    {
        .categoryName = _("Serpacroc"),
        .height = 27,
        .weight = 525,
        .description = gSeviperPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUNATONE] =
    {
        .categoryName = _("Météorite"),
        .height = 10,
        .weight = 1680,
        .description = gLunatonePokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOLROCK] =
    {
        .categoryName = _("Météorite"),
        .height = 12,
        .weight = 1540,
        .description = gSolrockPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BARBOACH] =
    {
        .categoryName = _("Barbillon"),
        .height = 4,
        .weight = 19,
        .description = gBarboachPokedexText,
        .pokemonScale = 581,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHISCASH] =
    {
        .categoryName = _("Barbillon"),
        .height = 9,
        .weight = 236,
        .description = gWhiscashPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORPHISH] =
    {
        .categoryName = _("Brute"),
        .height = 6,
        .weight = 115,
        .description = gCorphishPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRAWDAUNT] =
    {
        .categoryName = _("Crapule"),
        .height = 11,
        .weight = 328,
        .description = gCrawdauntPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BALTOY] =
    {
        .categoryName = _("Poupargile"),
        .height = 5,
        .weight = 215,
        .description = gBaltoyPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAYDOL] =
    {
        .categoryName = _("Poupargile"),
        .height = 15,
        .weight = 1080,
        .description = gClaydolPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_LILEEP] =
    {
        .categoryName = _("Lis d'Eau"),
        .height = 10,
        .weight = 238,
        .description = gLileepPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRADILY] =
    {
        .categoryName = _("Bernacle"),
        .height = 15,
        .weight = 604,
        .description = gCradilyPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANORITH] =
    {
        .categoryName = _("Crustage"),
        .height = 7,
        .weight = 125,
        .description = gAnorithPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARMALDO] =
    {
        .categoryName = _("Blindage"),
        .height = 15,
        .weight = 682,
        .description = gArmaldoPokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FEEBAS] =
    {
        .categoryName = _("Poisson"),
        .height = 6,
        .weight = 74,
        .description = gFeebasPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MILOTIC] =
    {
        .categoryName = _("Tendre"),
        .height = 62,
        .weight = 1620,
        .description = gMiloticPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_CASTFORM] =
    {
        .categoryName = _("Climat"),
        .height = 3,
        .weight = 8,
        .description = gCastformPokedexText,
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KECLEON] =
    {
        .categoryName = _("Multicolor"),
        .height = 10,
        .weight = 220,
        .description = gKecleonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHUPPET] =
    {
        .categoryName = _("Poupée"),
        .height = 6,
        .weight = 23,
        .description = gShuppetPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BANETTE] =
    {
        .categoryName = _("Marionnette"),
        .height = 11,
        .weight = 125,
        .description = gBanettePokedexText,
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSKULL] =
    {
        .categoryName = _("Requiem"),
        .height = 8,
        .weight = 150,
        .description = gDuskullPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSCLOPS] =
    {
        .categoryName = _("Appel"),
        .height = 16,
        .weight = 306,
        .description = gDusclopsPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 299,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_TROPIUS] =
    {
        .categoryName = _("Fruit"),
        .height = 20,
        .weight = 1000,
        .description = gTropiusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 344,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_CHIMECHO] =
    {
        .categoryName = _("Carillon"),
        .height = 6,
        .weight = 10,
        .description = gChimechoPokedexText,
        .pokemonScale = 505,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABSOL] =
    {
        .categoryName = _("Désastre"),
        .height = 12,
        .weight = 470,
        .description = gAbsolPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WYNAUT] =
    {
        .categoryName = _("Ravi"),
        .height = 6,
        .weight = 140,
        .description = gWynautPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNORUNT] =
    {
        .categoryName = _("Capuche"),
        .height = 7,
        .weight = 168,
        .description = gSnoruntPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLALIE] =
    {
        .categoryName = _("Face"),
        .height = 15,
        .weight = 2565,
        .description = gGlaliePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPHEAL] =
    {
        .categoryName = _("Clap Clap"),
        .height = 8,
        .weight = 395,
        .description = gSphealPokedexText,
        .pokemonScale = 315,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEALEO] =
    {
        .categoryName = _("Roule Boule"),
        .height = 11,
        .weight = 876,
        .description = gSealeoPokedexText,
        .pokemonScale = 338,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WALREIN] =
    {
        .categoryName = _("Brise Glace"),
        .height = 14,
        .weight = 1506,
        .description = gWalreinPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAMPERL] =
    {
        .categoryName = _("Bivalve"),
        .height = 4,
        .weight = 525,
        .description = gClamperlPokedexText,
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HUNTAIL] =
    {
        .categoryName = _("Abysse"),
        .height = 17,
        .weight = 270,
        .description = gHuntailPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOREBYSS] =
    {
        .categoryName = _("Mer du Sud"),
        .height = 18,
        .weight = 226,
        .description = gGorebyssPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RELICANTH] =
    {
        .categoryName = _("Longévité"),
        .height = 10,
        .weight = 234,
        .description = gRelicanthPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUVDISC] =
    {
        .categoryName = _("Rendezvous"),
        .height = 6,
        .weight = 87,
        .description = gLuvdiscPokedexText,
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAGON] =
    {
        .categoryName = _("Tête de Roc"),
        .height = 6,
        .weight = 421,
        .description = gBagonPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELGON] =
    {
        .categoryName = _("Endurant"),
        .height = 11,
        .weight = 1105,
        .description = gShelgonPokedexText,
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALAMENCE] =
    {
        .categoryName = _("Dragon"),
        .height = 15,
        .weight = 1026,
        .description = gSalamencePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BELDUM] =
    {
        .categoryName = _("Boulefer"),
        .height = 6,
        .weight = 952,
        .description = gBeldumPokedexText,
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METANG] =
    {
        .categoryName = _("Pincefer"),
        .height = 12,
        .weight = 2025,
        .description = gMetangPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METAGROSS] =
    {
        .categoryName = _("Pattefer"),
        .height = 16,
        .weight = 5500,
        .description = gMetagrossPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
    },

    [NATIONAL_DEX_REGIROCK] =
    {
        .categoryName = _("Pic Rocheux"),
        .height = 17,
        .weight = 2300,
        .description = gRegirockPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_REGICE] =
    {
        .categoryName = _("Iceberg"),
        .height = 18,
        .weight = 1750,
        .description = gRegicePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_REGISTEEL] =
    {
        .categoryName = _("Fer"),
        .height = 19,
        .weight = 2050,
        .description = gRegisteelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_LATIAS] =
    {
        .categoryName = _("Éon"),
        .height = 14,
        .weight = 400,
        .description = gLatiasPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LATIOS] =
    {
        .categoryName = _("Éon"),
        .height = 20,
        .weight = 600,
        .description = gLatiosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_KYOGRE] =
    {
        .categoryName = _("Bassinmarin"),
        .height = 45,
        .weight = 3520,
        .description = gKyogrePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_GROUDON] =
    {
        .categoryName = _("Continent"),
        .height = 35,
        .weight = 9500,
        .description = gGroudonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_RAYQUAZA] =
    {
        .categoryName = _("Cieux"),
        .height = 70,
        .weight = 2065,
        .description = gRayquazaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
    },

    [NATIONAL_DEX_JIRACHI] =
    {
        .categoryName = _("Souhait"),
        .height = 3,
        .weight = 11,
        .description = gJirachiPokedexText,
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEOXYS] =
    {
        .categoryName = _("ADN"),
        .height = 17,
        .weight = 608,
        .description = gDeoxysPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

#if P_GEN_4_POKEMON == TRUE
    [NATIONAL_DEX_TURTWIG] =
    {
        .categoryName = _("Minifeuille"),
        .height = 4,
        .weight = 102,
        .description = gTurtwigPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROTLE] =
    {
        .categoryName = _("Bosquet"),
        .height = 11,
        .weight = 970,
        .description = gGrotlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TORTERRA] =
    {
        .categoryName = _("Continent"),
        .height = 22,
        .weight = 3100,
        .description = gTorterraPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHIMCHAR] =
    {
        .categoryName = _("Chimpanzé"),
        .height = 5,
        .weight = 62,
        .description = gChimcharPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MONFERNO] =
    {
        .categoryName = _("Garnement"),
        .height = 9,
        .weight = 220,
        .description = gMonfernoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_INFERNAPE] =
    {
        .categoryName = _("Flamme"),
        .height = 12,
        .weight = 550,
        .description = gInfernapePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIPLUP] =
    {
        .categoryName = _("Pingouin"),
        .height = 4,
        .weight = 52,
        .description = gPiplupPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PRINPLUP] =
    {
        .categoryName = _("Pingouin"),
        .height = 8,
        .weight = 230,
        .description = gPrinplupPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EMPOLEON] =
    {
        .categoryName = _("Empereur"),
        .height = 17,
        .weight = 845,
        .description = gEmpoleonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARLY] =
    {
        .categoryName = _("Étourneau"),
        .height = 3,
        .weight = 20,
        .description = gStarlyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARAVIA] =
    {
        .categoryName = _("Étourneau"),
        .height = 6,
        .weight = 155,
        .description = gStaraviaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARAPTOR] =
    {
        .categoryName = _("Rapace"),
        .height = 12,
        .weight = 249,
        .description = gStaraptorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIDOOF] =
    {
        .categoryName = _("Souridodue"),
        .height = 5,
        .weight = 200,
        .description = gBidoofPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIBAREL] =
    {
        .categoryName = _("Castor"),
        .height = 10,
        .weight = 315,
        .description = gBibarelPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KRICKETOT] =
    {
        .categoryName = _("Criquet"),
        .height = 3,
        .weight = 22,
        .description = gKricketotPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KRICKETUNE] =
    {
        .categoryName = _("Criquet"),
        .height = 10,
        .weight = 255,
        .description = gKricketunePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHINX] =
    {
        .categoryName = _("Flash"),
        .height = 5,
        .weight = 95,
        .description = gShinxPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUXIO] =
    {
        .categoryName = _("Étincelle"),
        .height = 9,
        .weight = 305,
        .description = gLuxioPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUXRAY] =
    {
        .categoryName = _("Brillœil"),
        .height = 14,
        .weight = 420,
        .description = gLuxrayPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUDEW] =
    {
        .categoryName = _("Bourgeon"),
        .height = 2,
        .weight = 12,
        .description = gBudewPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROSERADE] =
    {
        .categoryName = _("Bouquet"),
        .height = 9,
        .weight = 145,
        .description = gRoseradePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRANIDOS] =
    {
        .categoryName = _("Coud'Boule"),
        .height = 9,
        .weight = 315,
        .description = gCranidosPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAMPARDOS] =
    {
        .categoryName = _("Coud'Boule"),
        .height = 16,
        .weight = 1025,
        .description = gRampardosPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHIELDON] =
    {
        .categoryName = _("Bouclier"),
        .height = 5,
        .weight = 570,
        .description = gShieldonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BASTIODON] =
    {
        .categoryName = _("Bouclier"),
        .height = 13,
        .weight = 1495,
        .description = gBastiodonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BURMY] =
    {
        .categoryName = _("Ver Caché"),
        .height = 2,
        .weight = 34,
        .description = gBurmyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WORMADAM] =
    {
        .categoryName = _("Ver Caché"),
        .height = 5,
        .weight = 65,
        .description = gWormadamPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MOTHIM] =
    {
        .categoryName = _("Phalène"),
        .height = 9,
        .weight = 233,
        .description = gMothimPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMBEE] =
    {
        .categoryName = _("Miniabeille"),
        .height = 3,
        .weight = 55,
        .description = gCombeePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VESPIQUEN] =
    {
        .categoryName = _("Ruche"),
        .height = 12,
        .weight = 385,
        .description = gVespiquenPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PACHIRISU] =
    {
        .categoryName = _("Écurélec"),
        .height = 4,
        .weight = 39,
        .description = gPachirisuPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUIZEL] =
    {
        .categoryName = _("Aquabelette"),
        .height = 7,
        .weight = 295,
        .description = gBuizelPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLOATZEL] =
    {
        .categoryName = _("Aquabelette"),
        .height = 11,
        .weight = 335,
        .description = gFloatzelPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHERUBI] =
    {
        .categoryName = _("Cerise"),
        .height = 4,
        .weight = 33,
        .description = gCherubiPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHERRIM] =
    {
        .categoryName = _("Floraison"),
        .height = 5,
        .weight = 93,
        .description = gCherrimPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELLOS] =
    {
        .categoryName = _("Aqualimace"),
        .height = 3,
        .weight = 63,
        .description = gShellosPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GASTRODON] =
    {
        .categoryName = _("Aqualimace"),
        .height = 9,
        .weight = 299,
        .description = gGastrodonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMBIPOM] =
    {
        .categoryName = _("Longqueue"),
        .height = 12,
        .weight = 203,
        .description = gAmbipomPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRIFLOON] =
    {
        .categoryName = _("Bouboule"),
        .height = 4,
        .weight = 12,
        .description = gDrifloonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRIFBLIM] =
    {
        .categoryName = _("Ballon"),
        .height = 12,
        .weight = 150,
        .description = gDrifblimPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUNEARY] =
    {
        .categoryName = _("Lapin"),
        .height = 4,
        .weight = 55,
        .description = gBunearyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOPUNNY] =
    {
        .categoryName = _("Lapin"),
        .height = 12,
        .weight = 333,
        .description = gLopunnyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MISMAGIUS] =
    {
        .categoryName = _("Magique"),
        .height = 9,
        .weight = 44,
        .description = gMismagiusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HONCHKROW] =
    {
        .categoryName = _("Big Boss"),
        .height = 9,
        .weight = 273,
        .description = gHonchkrowPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLAMEOW] =
    {
        .categoryName = _("Chafouin"),
        .height = 5,
        .weight = 39,
        .description = gGlameowPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PURUGLY] =
    {
        .categoryName = _("Chatigre"),
        .height = 10,
        .weight = 438,
        .description = gPuruglyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHINGLING] =
    {
        .categoryName = _("Clochette"),
        .height = 2,
        .weight = 6,
        .description = gChinglingPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STUNKY] =
    {
        .categoryName = _("Moufette"),
        .height = 4,
        .weight = 192,
        .description = gStunkyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKUNTANK] =
    {
        .categoryName = _("Moufette"),
        .height = 10,
        .weight = 380,
        .description = gSkuntankPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRONZOR] =
    {
        .categoryName = _("Bronze"),
        .height = 5,
        .weight = 605,
        .description = gBronzorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRONZONG] =
    {
        .categoryName = _(""),
        .height = 13,
        .weight = 1870,
        .description = gBronzongPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BONSLY] =
    {
        .categoryName = _("Bonsaï"),
        .height = 5,
        .weight = 150,
        .description = gBonslyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIME_JR] =
    {
        .categoryName = _("Mime"),
        .height = 6,
        .weight = 130,
        .description = gMimeJrPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAPPINY] =
    {
        .categoryName = _("Maisonjouet"),
        .height = 6,
        .weight = 244,
        .description = gHappinyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHATOT] =
    {
        .categoryName = _("NoteMusique"),
        .height = 5,
        .weight = 19,
        .description = gChatotPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPIRITOMB] =
    {
        .categoryName = _("Interdit"),
        .height = 10,
        .weight = 1080,
        .description = gSpiritombPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIBLE] =
    {
        .categoryName = _("Terrequin"),
        .height = 7,
        .weight = 205,
        .description = gGiblePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GABITE] =
    {
        .categoryName = _("Caverne"),
        .height = 14,
        .weight = 560,
        .description = gGabitePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARCHOMP] =
    {
        .categoryName = _("Supersonic"),
        .height = 19,
        .weight = 950,
        .description = gGarchompPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUNCHLAX] =
    {
        .categoryName = _("Goinfre"),
        .height = 6,
        .weight = 1050,
        .description = gMunchlaxPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RIOLU] =
    {
        .categoryName = _("Émanation"),
        .height = 7,
        .weight = 202,
        .description = gRioluPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUCARIO] =
    {
        .categoryName = _("Aura"),
        .height = 12,
        .weight = 540,
        .description = gLucarioPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HIPPOPOTAS] =
    {
        .categoryName = _("Hippo"),
        .height = 8,
        .weight = 495,
        .description = gHippopotasPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HIPPOWDON] =
    {
        .categoryName = _("Poids Lourd"),
        .height = 20,
        .weight = 3000,
        .description = gHippowdonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKORUPI] =
    {
        .categoryName = _("Scorpion"),
        .height = 8,
        .weight = 120,
        .description = gSkorupiPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAPION] =
    {
        .categoryName = _("Ogre Scorp"),
        .height = 13,
        .weight = 615,
        .description = gDrapionPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CROAGUNK] =
    {
        .categoryName = _("Toxique"),
        .height = 7,
        .weight = 230,
        .description = gCroagunkPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOXICROAK] =
    {
        .categoryName = _("Toxique"),
        .height = 13,
        .weight = 444,
        .description = gToxicroakPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CARNIVINE] =
    {
        .categoryName = _("Chopinsecte"),
        .height = 14,
        .weight = 270,
        .description = gCarnivinePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FINNEON] =
    {
        .categoryName = _("PoissonAilé"),
        .height = 4,
        .weight = 70,
        .description = gFinneonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUMINEON] =
    {
        .categoryName = _("Néon"),
        .height = 12,
        .weight = 240,
        .description = gLumineonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANTYKE] =
    {
        .categoryName = _("Cervolant"),
        .height = 10,
        .weight = 650,
        .description = gMantykePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNOVER] =
    {
        .categoryName = _("Arbregelé"),
        .height = 10,
        .weight = 505,
        .description = gSnoverPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABOMASNOW] =
    {
        .categoryName = _("Arbregelé"),
        .height = 22,
        .weight = 1355,
        .description = gAbomasnowPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEAVILE] =
    {
        .categoryName = _("Grifacérée"),
        .height = 11,
        .weight = 340,
        .description = gWeavilePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGNEZONE] =
    {
        .categoryName = _("Aimant"),
        .height = 12,
        .weight = 1800,
        .description = gMagnezonePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LICKILICKY] =
    {
        .categoryName = _("Lécheur"),
        .height = 17,
        .weight = 1400,
        .description = gLickilickyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RHYPERIOR] =
    {
        .categoryName = _("Perceur"),
        .height = 24,
        .weight = 2828,
        .description = gRhyperiorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TANGROWTH] =
    {
        .categoryName = _("Vigne"),
        .height = 20,
        .weight = 1286,
        .description = gTangrowthPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECTIVIRE] =
    {
        .categoryName = _("Foudrélec"),
        .height = 18,
        .weight = 1386,
        .description = gElectivirePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGMORTAR] =
    {
        .categoryName = _("Explosion"),
        .height = 16,
        .weight = 680,
        .description = gMagmortarPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGEKISS] =
    {
        .categoryName = _("Célébration"),
        .height = 15,
        .weight = 380,
        .description = gTogekissPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YANMEGA] =
    {
        .categoryName = _("Libellogre"),
        .height = 19,
        .weight = 515,
        .description = gYanmegaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEAFEON] =
    {
        .categoryName = _("Verdoyant"),
        .height = 10,
        .weight = 255,
        .description = gLeafeonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLACEON] =
    {
        .categoryName = _("Poudreuse"),
        .height = 8,
        .weight = 259,
        .description = gGlaceonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLISCOR] =
    {
        .categoryName = _("Fang Scorp"),
        .height = 20,
        .weight = 425,
        .description = gGliscorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAMOSWINE] =
    {
        .categoryName = _("Deudéfenses"),
        .height = 25,
        .weight = 2910,
        .description = gMamoswinePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORYGON_Z] =
    {
        .categoryName = _("Virtuel"),
        .height = 9,
        .weight = 340,
        .description = gPorygonZPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GALLADE] =
    {
        .categoryName = _("Lame"),
        .height = 16,
        .weight = 520,
        .description = gGalladePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PROBOPASS] =
    {
        .categoryName = _("Boussole"),
        .height = 14,
        .weight = 3400,
        .description = gProbopassPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSKNOIR] =
    {
        .categoryName = _("Mainpince"),
        .height = 22,
        .weight = 1066,
        .description = gDusknoirPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROSLASS] =
    {
        .categoryName = _("Enneigement"),
        .height = 13,
        .weight = 266,
        .description = gFroslassPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROTOM] =
    {
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = gRotomPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UXIE] =
    {
        .categoryName = _("Savoir"),
        .height = 3,
        .weight = 3,
        .description = gUxiePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MESPRIT] =
    {
        .categoryName = _("Émotion"),
        .height = 3,
        .weight = 3,
        .description = gMespritPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AZELF] =
    {
        .categoryName = _("Volonté"),
        .height = 3,
        .weight = 3,
        .description = gAzelfPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DIALGA] =
    {
        .categoryName = _("Temps"),
        .height = 54,
        .weight = 6830,
        .description = gDialgaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PALKIA] =
    {
        .categoryName = _("Espace"),
        .height = 42,
        .weight = 3360,
        .description = gPalkiaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HEATRAN] =
    {
        .categoryName = _("Caldeira"),
        .height = 17,
        .weight = 4300,
        .description = gHeatranPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REGIGIGAS] =
    {
        .categoryName = _("Prodigieux"),
        .height = 37,
        .weight = 4200,
        .description = gRegigigasPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIRATINA] =
    {
        .categoryName = _("Renégat"),
        .height = 45,
        .weight = 7500,
        .description = gGiratinaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRESSELIA] =
    {
        .categoryName = _("Lunaire"),
        .height = 15,
        .weight = 856,
        .description = gCresseliaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHIONE] =
    {
        .categoryName = _("Dérivenmer"),
        .height = 4,
        .weight = 31,
        .description = gPhionePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANAPHY] =
    {
        .categoryName = _("Voyagenmer"),
        .height = 3,
        .weight = 14,
        .description = gManaphyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARKRAI] =
    {
        .categoryName = _("Noirtotal"),
        .height = 15,
        .weight = 505,
        .description = gDarkraiPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHAYMIN] =
    {
        .categoryName = _("Gratitude"),
        .height = 2,
        .weight = 21,
        .description = gShayminPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCEUS] =
    {
        .categoryName = _("Alpha"),
        .height = 32,
        .weight = 3200,
        .description = gArceusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif

#if P_GEN_5_POKEMON == TRUE
    [NATIONAL_DEX_VICTINI] =
    {
        .categoryName = _("Victoire"),
        .height = 4,
        .weight = 40,
        .description = gVictiniPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNIVY] =
    {
        .categoryName = _("Serpenterbe"),
        .height = 6,
        .weight = 81,
        .description = gSnivyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SERVINE] =
    {
        .categoryName = _("Serpenterbe"),
        .height = 8,
        .weight = 160,
        .description = gServinePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SERPERIOR] =
    {
        .categoryName = _("Majestueux"),
        .height = 33,
        .weight = 630,
        .description = gSerperiorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TEPIG] =
    {
        .categoryName = _("Cochon Feu"),
        .height = 5,
        .weight = 99,
        .description = gTepigPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIGNITE] =
    {
        .categoryName = _("Cochon Feu"),
        .height = 10,
        .weight = 555,
        .description = gPignitePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EMBOAR] =
    {
        .categoryName = _("Cochon Feu"),
        .height = 16,
        .weight = 1500,
        .description = gEmboarPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OSHAWOTT] =
    {
        .categoryName = _("Loutre"),
        .height = 5,
        .weight = 59,
        .description = gOshawottPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEWOTT] =
    {
        .categoryName = _(""),
        .height = 8,
        .weight = 245,
        .description = gDewottPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAMUROTT] =
    {
        .categoryName = _("Dignitaire"),
        .height = 15,
        .weight = 946,
        .description = gSamurottPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PATRAT] =
    {
        .categoryName = _("Espion"),
        .height = 5,
        .weight = 116,
        .description = gPatratPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WATCHOG] =
    {
        .categoryName = _("Vigilant"),
        .height = 11,
        .weight = 270,
        .description = gWatchogPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LILLIPUP] =
    {
        .categoryName = _("Chiot"),
        .height = 4,
        .weight = 41,
        .description = gLillipupPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HERDIER] =
    {
        .categoryName = _("ChienFidèle"),
        .height = 9,
        .weight = 147,
        .description = gHerdierPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STOUTLAND] =
    {
        .categoryName = _("Magnanime"),
        .height = 12,
        .weight = 610,
        .description = gStoutlandPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PURRLOIN] =
    {
        .categoryName = _("Scélérat"),
        .height = 4,
        .weight = 101,
        .description = gPurrloinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LIEPARD] =
    {
        .categoryName = _("Implacable"),
        .height = 11,
        .weight = 375,
        .description = gLiepardPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANSAGE] =
    {
        .categoryName = _("Singe Herbe"),
        .height = 6,
        .weight = 105,
        .description = gPansagePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIMISAGE] =
    {
        .categoryName = _("Singépine"),
        .height = 11,
        .weight = 305,
        .description = gSimisagePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANSEAR] =
    {
        .categoryName = _("Brûlant"),
        .height = 6,
        .weight = 110,
        .description = gPansearPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIMISEAR] =
    {
        .categoryName = _("Braise"),
        .height = 10,
        .weight = 280,
        .description = gSimisearPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANPOUR] =
    {
        .categoryName = _("Jet d'Eau"),
        .height = 6,
        .weight = 135,
        .description = gPanpourPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIMIPOUR] =
    {
        .categoryName = _("Drainage"),
        .height = 10,
        .weight = 290,
        .description = gSimipourPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUNNA] =
    {
        .categoryName = _("Mangerêve"),
        .height = 6,
        .weight = 233,
        .description = gMunnaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUSHARNA] =
    {
        .categoryName = _("Rêveur"),
        .height = 11,
        .weight = 605,
        .description = gMusharnaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDOVE] =
    {
        .categoryName = _("Tipigeon"),
        .height = 3,
        .weight = 21,
        .description = gPidovePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRANQUILL] =
    {
        .categoryName = _("Sauvapigeon"),
        .height = 6,
        .weight = 150,
        .description = gTranquillPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNFEZANT] =
    {
        .categoryName = _("Fier"),
        .height = 12,
        .weight = 290,
        .description = gUnfezantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLITZLE] =
    {
        .categoryName = _("Étincélec"),
        .height = 8,
        .weight = 298,
        .description = gBlitzlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZEBSTRIKA] =
    {
        .categoryName = _("Foudrélec"),
        .height = 16,
        .weight = 795,
        .description = gZebstrikaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROGGENROLA] =
    {
        .categoryName = _("Manteau"),
        .height = 4,
        .weight = 180,
        .description = gRoggenrolaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOLDORE] =
    {
        .categoryName = _("Minerai"),
        .height = 9,
        .weight = 1020,
        .description = gBoldorePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIGALITH] =
    {
        .categoryName = _("Surpression"),
        .height = 17,
        .weight = 2600,
        .description = gGigalithPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOOBAT] =
    {
        .categoryName = _("Chovsouris"),
        .height = 4,
        .weight = 21,
        .description = gWoobatPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWOOBAT] =
    {
        .categoryName = _("Cupidon"),
        .height = 9,
        .weight = 105,
        .description = gSwoobatPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRILBUR] =
    {
        .categoryName = _("Taupe"),
        .height = 3,
        .weight = 85,
        .description = gDrilburPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXCADRILL] =
    {
        .categoryName = _("Souterrain"),
        .height = 7,
        .weight = 404,
        .description = gExcadrillPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AUDINO] =
    {
        .categoryName = _("Audition"),
        .height = 11,
        .weight = 310,
        .description = gAudinoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TIMBURR] =
    {
        .categoryName = _("Costaud"),
        .height = 6,
        .weight = 125,
        .description = gTimburrPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GURDURR] =
    {
        .categoryName = _("Costaud"),
        .height = 12,
        .weight = 400,
        .description = gGurdurrPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CONKELDURR] =
    {
        .categoryName = _("Costaud"),
        .height = 14,
        .weight = 870,
        .description = gConkeldurrPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYMPOLE] =
    {
        .categoryName = _("Têtard"),
        .height = 5,
        .weight = 45,
        .description = gTympolePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PALPITOAD] =
    {
        .categoryName = _("Vibration"),
        .height = 8,
        .weight = 170,
        .description = gPalpitoadPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEISMITOAD] =
    {
        .categoryName = _("Vibration"),
        .height = 15,
        .weight = 620,
        .description = gSeismitoadPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THROH] =
    {
        .categoryName = _("Judo"),
        .height = 13,
        .weight = 555,
        .description = gThrohPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAWK] =
    {
        .categoryName = _("Karaté"),
        .height = 14,
        .weight = 510,
        .description = gSawkPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEWADDLE] =
    {
        .categoryName = _("Couture"),
        .height = 3,
        .weight = 25,
        .description = gSewaddlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWADLOON] =
    {
        .categoryName = _("Capefeuille"),
        .height = 5,
        .weight = 73,
        .description = gSwadloonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEAVANNY] =
    {
        .categoryName = _("Précepteur"),
        .height = 12,
        .weight = 205,
        .description = gLeavannyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENIPEDE] =
    {
        .categoryName = _("Chilopode"),
        .height = 4,
        .weight = 53,
        .description = gVenipedePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHIRLIPEDE] =
    {
        .categoryName = _(""),
        .height = 12,
        .weight = 585,
        .description = gWhirlipedePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCOLIPEDE] =
    {
        .categoryName = _("Mégaplopode"),
        .height = 25,
        .weight = 2005,
        .description = gScolipedePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COTTONEE] =
    {
        .categoryName = _("Boule Coton"),
        .height = 3,
        .weight = 6,
        .description = gCottoneePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHIMSICOTT] =
    {
        .categoryName = _("Vole Vent"),
        .height = 7,
        .weight = 66,
        .description = gWhimsicottPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PETILIL] =
    {
        .categoryName = _("Racine"),
        .height = 5,
        .weight = 66,
        .description = gPetililPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LILLIGANT] =
    {
        .categoryName = _("Chef-Fleur"),
        .height = 11,
        .weight = 163,
        .description = gLilligantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BASCULIN] =
    {
        .categoryName = _("Violent"),
        .height = 10,
        .weight = 180,
        .description = gBasculinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDILE] =
    {
        .categoryName = _("Croco Sable"),
        .height = 7,
        .weight = 152,
        .description = gSandilePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KROKOROK] =
    {
        .categoryName = _("Croco Sable"),
        .height = 10,
        .weight = 334,
        .description = gKrokorokPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KROOKODILE] =
    {
        .categoryName = _("Intimidate"),
        .height = 15,
        .weight = 963,
        .description = gKrookodilePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARUMAKA] =
    {
        .categoryName = _("Daruma"),
        .height = 6,
        .weight = 375,
        .description = gDarumakaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARMANITAN] =
    {
        .categoryName = _("Enflammé"),
        .height = 13,
        .weight = 929,
        .description = gDarmanitanPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARACTUS] =
    {
        .categoryName = _("Cactus"),
        .height = 10,
        .weight = 280,
        .description = gMaractusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DWEBBLE] =
    {
        .categoryName = _("Lithicole"),
        .height = 3,
        .weight = 145,
        .description = gDwebblePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRUSTLE] =
    {
        .categoryName = _("Lapidicole"),
        .height = 14,
        .weight = 2000,
        .description = gCrustlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCRAGGY] =
    {
        .categoryName = _("Mue"),
        .height = 6,
        .weight = 118,
        .description = gScraggyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCRAFTY] =
    {
        .categoryName = _("Gang"),
        .height = 11,
        .weight = 300,
        .description = gScraftyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIGILYPH] =
    {
        .categoryName = _("Similoiseau"),
        .height = 14,
        .weight = 140,
        .description = gSigilyphPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YAMASK] =
    {
        .categoryName = _("Âme"),
        .height = 5,
        .weight = 15,
        .description = gYamaskPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COFAGRIGUS] =
    {
        .categoryName = _("Cercueil"),
        .height = 17,
        .weight = 765,
        .description = gCofagrigusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TIRTOUGA] =
    {
        .categoryName = _("Tortantique"),
        .height = 7,
        .weight = 165,
        .description = gTirtougaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CARRACOSTA] =
    {
        .categoryName = _("Tortantique"),
        .height = 12,
        .weight = 810,
        .description = gCarracostaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCHEN] =
    {
        .categoryName = _("Oisancien"),
        .height = 5,
        .weight = 95,
        .description = gArchenPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCHEOPS] =
    {
        .categoryName = _("Oisancien"),
        .height = 14,
        .weight = 320,
        .description = gArcheopsPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRUBBISH] =
    {
        .categoryName = _("SacPoubelle"),
        .height = 6,
        .weight = 310,
        .description = gTrubbishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARBODOR] =
    {
        .categoryName = _("Dépotoir"),
        .height = 19,
        .weight = 1073,
        .description = gGarbodorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZORUA] =
    {
        .categoryName = _("Sombrenard"),
        .height = 7,
        .weight = 125,
        .description = gZoruaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZOROARK] =
    {
        .categoryName = _("Polymorfox"),
        .height = 16,
        .weight = 811,
        .description = gZoroarkPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINCCINO] =
    {
        .categoryName = _("Chinchilla"),
        .height = 4,
        .weight = 58,
        .description = gMinccinoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CINCCINO] =
    {
        .categoryName = _("Écharpe"),
        .height = 5,
        .weight = 75,
        .description = gCinccinoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTHITA] =
    {
        .categoryName = _("Dévisageur"),
        .height = 4,
        .weight = 58,
        .description = gGothitaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTHORITA] =
    {
        .categoryName = _("Magouilleur"),
        .height = 7,
        .weight = 180,
        .description = gGothoritaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTHITELLE] =
    {
        .categoryName = _("Cosmique"),
        .height = 15,
        .weight = 440,
        .description = gGothitellePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOLOSIS] =
    {
        .categoryName = _("Cellule"),
        .height = 3,
        .weight = 10,
        .description = gSolosisPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUOSION] =
    {
        .categoryName = _("Divisé"),
        .height = 6,
        .weight = 80,
        .description = gDuosionPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REUNICLUS] =
    {
        .categoryName = _("Multiplié"),
        .height = 10,
        .weight = 201,
        .description = gReuniclusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUCKLETT] =
    {
        .categoryName = _("Oiseaudo"),
        .height = 5,
        .weight = 55,
        .description = gDucklettPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWANNA] =
    {
        .categoryName = _("Cygne"),
        .height = 13,
        .weight = 242,
        .description = gSwannaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VANILLITE] =
    {
        .categoryName = _("Poudreuse"),
        .height = 4,
        .weight = 57,
        .description = gVanillitePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VANILLISH] =
    {
        .categoryName = _("Grêle"),
        .height = 11,
        .weight = 410,
        .description = gVanillishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VANILLUXE] =
    {
        .categoryName = _("Congère"),
        .height = 13,
        .weight = 575,
        .description = gVanilluxePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEERLING] =
    {
        .categoryName = _("Saison"),
        .height = 6,
        .weight = 195,
        .description = gDeerlingPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAWSBUCK] =
    {
        .categoryName = _("Saison"),
        .height = 19,
        .weight = 925,
        .description = gSawsbuckPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EMOLGA] =
    {
        .categoryName = _("Pteromys"),
        .height = 4,
        .weight = 50,
        .description = gEmolgaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KARRABLAST] =
    {
        .categoryName = _("Carabe"),
        .height = 5,
        .weight = 59,
        .description = gKarrablastPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ESCAVALIER] =
    {
        .categoryName = _("Chevalier"),
        .height = 10,
        .weight = 330,
        .description = gEscavalierPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FOONGUS] =
    {
        .categoryName = _("Champignon"),
        .height = 2,
        .weight = 10,
        .description = gFoongusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMOONGUSS] =
    {
        .categoryName = _("Champignon"),
        .height = 6,
        .weight = 105,
        .description = gAmoongussPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FRILLISH] =
    {
        .categoryName = _("Flottaison"),
        .height = 12,
        .weight = 330,
        .description = gFrillishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JELLICENT] =
    {
        .categoryName = _("Flottaison"),
        .height = 22,
        .weight = 1350,
        .description = gJellicentPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALOMOMOLA] =
    {
        .categoryName = _("Soigneur"),
        .height = 12,
        .weight = 316,
        .description = gAlomomolaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JOLTIK] =
    {
        .categoryName = _("Crampon"),
        .height = 1,
        .weight = 6,
        .description = gJoltikPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GALVANTULA] =
    {
        .categoryName = _("Araclectrik"),
        .height = 8,
        .weight = 143,
        .description = gGalvantulaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FERROSEED] =
    {
        .categoryName = _("GraineÉpine"),
        .height = 6,
        .weight = 188,
        .description = gFerroseedPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FERROTHORN] =
    {
        .categoryName = _("Boule Épine"),
        .height = 10,
        .weight = 1100,
        .description = gFerrothornPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KLINK] =
    {
        .categoryName = _("Engrenage"),
        .height = 3,
        .weight = 210,
        .description = gKlinkPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KLANG] =
    {
        .categoryName = _("Engrenage"),
        .height = 6,
        .weight = 510,
        .description = gKlangPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KLINKLANG] =
    {
        .categoryName = _("Engrenage"),
        .height = 6,
        .weight = 810,
        .description = gKlinklangPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYNAMO] =
    {
        .categoryName = _(""),
        .height = 2,
        .weight = 3,
        .description = gTynamoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EELEKTRIK] =
    {
        .categoryName = _(""),
        .height = 12,
        .weight = 220,
        .description = gEelektrikPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EELEKTROSS] =
    {
        .categoryName = _(""),
        .height = 21,
        .weight = 805,
        .description = gEelektrossPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELGYEM] =
    {
        .categoryName = _("Cerveau"),
        .height = 5,
        .weight = 90,
        .description = gElgyemPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEHEEYEM] =
    {
        .categoryName = _("Cerveau"),
        .height = 10,
        .weight = 345,
        .description = gBeheeyemPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LITWICK] =
    {
        .categoryName = _("Chandelle"),
        .height = 3,
        .weight = 31,
        .description = gLitwickPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LAMPENT] =
    {
        .categoryName = _("Lampe"),
        .height = 6,
        .weight = 130,
        .description = gLampentPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHANDELURE] =
    {
        .categoryName = _("Invitation"),
        .height = 10,
        .weight = 343,
        .description = gChandelurePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AXEW] =
    {
        .categoryName = _("Crocs"),
        .height = 6,
        .weight = 180,
        .description = gAxewPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FRAXURE] =
    {
        .categoryName = _("Hachomenton"),
        .height = 10,
        .weight = 360,
        .description = gFraxurePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAXORUS] =
    {
        .categoryName = _("Hachomenton"),
        .height = 18,
        .weight = 1055,
        .description = gHaxorusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CUBCHOO] =
    {
        .categoryName = _("Gelé"),
        .height = 5,
        .weight = 85,
        .description = gCubchooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEARTIC] =
    {
        .categoryName = _("Congelé"),
        .height = 26,
        .weight = 2600,
        .description = gBearticPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRYOGONAL] =
    {
        .categoryName = _("Crystallize"),
        .height = 11,
        .weight = 1480,
        .description = gCryogonalPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELMET] =
    {
        .categoryName = _("Escargot"),
        .height = 4,
        .weight = 77,
        .description = gShelmetPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ACCELGOR] =
    {
        .categoryName = _("Exuviateur"),
        .height = 8,
        .weight = 253,
        .description = gAccelgorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STUNFISK] =
    {
        .categoryName = _("Piège"),
        .height = 7,
        .weight = 110,
        .description = gStunfiskPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIENFOO] =
    {
        .categoryName = _("Art Martial"),
        .height = 9,
        .weight = 200,
        .description = gMienfooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIENSHAO] =
    {
        .categoryName = _("Art Martial"),
        .height = 14,
        .weight = 355,
        .description = gMienshaoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRUDDIGON] =
    {
        .categoryName = _("Caverne"),
        .height = 16,
        .weight = 1390,
        .description = gDruddigonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLETT] =
    {
        .categoryName = _("GolemAncien"),
        .height = 10,
        .weight = 920,
        .description = gGolettPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLURK] =
    {
        .categoryName = _("GolemAncien"),
        .height = 28,
        .weight = 3300,
        .description = gGolurkPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PAWNIARD] =
    {
        .categoryName = _("Coupant"),
        .height = 5,
        .weight = 102,
        .description = gPawniardPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BISHARP] =
    {
        .categoryName = _("Tranchant"),
        .height = 16,
        .weight = 700,
        .description = gBisharpPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOUFFALANT] =
    {
        .categoryName = _("Coup d'Bœuf"),
        .height = 16,
        .weight = 946,
        .description = gBouffalantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RUFFLET] =
    {
        .categoryName = _("Aiglon"),
        .height = 5,
        .weight = 105,
        .description = gRuffletPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRAVIARY] =
    {
        .categoryName = _("Vaillant"),
        .height = 15,
        .weight = 410,
        .description = gBraviaryPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VULLABY] =
    {
        .categoryName = _("Couche"),
        .height = 5,
        .weight = 90,
        .description = gVullabyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANDIBUZZ] =
    {
        .categoryName = _("Vostour"),
        .height = 12,
        .weight = 395,
        .description = gMandibuzzPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HEATMOR] =
    {
        .categoryName = _("Tamanoir"),
        .height = 14,
        .weight = 580,
        .description = gHeatmorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DURANT] =
    {
        .categoryName = _("Fourmi Dure"),
        .height = 3,
        .weight = 330,
        .description = gDurantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEINO] =
    {
        .categoryName = _("Rude"),
        .height = 8,
        .weight = 173,
        .description = gDeinoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZWEILOUS] =
    {
        .categoryName = _("Violent"),
        .height = 14,
        .weight = 500,
        .description = gZweilousPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HYDREIGON] =
    {
        .categoryName = _("Brutal"),
        .height = 18,
        .weight = 1600,
        .description = gHydreigonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LARVESTA] =
    {
        .categoryName = _("Torche"),
        .height = 11,
        .weight = 288,
        .description = gLarvestaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VOLCARONA] =
    {
        .categoryName = _("Soleil"),
        .height = 16,
        .weight = 460,
        .description = gVolcaronaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COBALION] =
    {
        .categoryName = _("Cœur de Fer"),
        .height = 21,
        .weight = 2500,
        .description = gCobalionPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TERRAKION] =
    {
        .categoryName = _("Grotte"),
        .height = 19,
        .weight = 2600,
        .description = gTerrakionPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIRIZION] =
    {
        .categoryName = _("PlaineVerte"),
        .height = 20,
        .weight = 2000,
        .description = gVirizionPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TORNADUS] =
    {
        .categoryName = _("Tornade"),
        .height = 15,
        .weight = 630,
        .description = gTornadusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THUNDURUS] =
    {
        .categoryName = _("Foudroyeur"),
        .height = 15,
        .weight = 610,
        .description = gThundurusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RESHIRAM] =
    {
        .categoryName = _("Blanc Réel"),
        .height = 32,
        .weight = 3300,
        .description = gReshiramPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZEKROM] =
    {
        .categoryName = _("Noir Idéal"),
        .height = 29,
        .weight = 3450,
        .description = gZekromPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LANDORUS] =
    {
        .categoryName = _("Fertilité"),
        .height = 15,
        .weight = 680,
        .description = gLandorusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KYUREM] =
    {
        .categoryName = _("Frontière"),
        .height = 30,
        .weight = 3250,
        .description = gKyuremPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KELDEO] =
    {
        .categoryName = _("Poulain"),
        .height = 14,
        .weight = 485,
        .description = gKeldeoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MELOETTA] =
    {
        .categoryName = _("Mélodie"),
        .height = 6,
        .weight = 65,
        .description = gMeloettaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GENESECT] =
    {
        .categoryName = _("Paléozoïque"),
        .height = 15,
        .weight = 825,
        .description = gGenesectPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif

#if P_GEN_6_POKEMON == TRUE
    [NATIONAL_DEX_CHESPIN] =
    {
        .categoryName = _("Bogue"),
        .height = 4,
        .weight = 90,
        .description = gChespinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUILLADIN] =
    {
        .categoryName = _("Épinarmure"),
        .height = 7,
        .weight = 290,
        .description = gQuilladinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHESNAUGHT] =
    {
        .categoryName = _("Épinarmure"),
        .height = 16,
        .weight = 900,
        .description = gChesnaughtPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FENNEKIN] =
    {
        .categoryName = _("Renard"),
        .height = 4,
        .weight = 94,
        .description = gFennekinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRAIXEN] =
    {
        .categoryName = _("Renard"),
        .height = 10,
        .weight = 145,
        .description = gBraixenPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DELPHOX] =
    {
        .categoryName = _("Renard"),
        .height = 15,
        .weight = 390,
        .description = gDelphoxPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROAKIE] =
    {
        .categoryName = _("Crapobulle"),
        .height = 3,
        .weight = 70,
        .description = gFroakiePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROGADIER] =
    {
        .categoryName = _("Crapobulle"),
        .height = 6,
        .weight = 109,
        .description = gFrogadierPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRENINJA] =
    {
        .categoryName = _("Ninja"),
        .height = 15,
        .weight = 400,
        .description = gGreninjaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUNNELBY] =
    {
        .categoryName = _("Fouisseur"),
        .height = 4,
        .weight = 50,
        .description = gBunnelbyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DIGGERSBY] =
    {
        .categoryName = _("Fouisseur"),
        .height = 10,
        .weight = 424,
        .description = gDiggersbyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLETCHLING] =
    {
        .categoryName = _("Rougegorge"),
        .height = 3,
        .weight = 17,
        .description = gFletchlingPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLETCHINDER] =
    {
        .categoryName = _("Braise"),
        .height = 7,
        .weight = 160,
        .description = gFletchinderPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TALONFLAME] =
    {
        .categoryName = _("Fournaise"),
        .height = 12,
        .weight = 245,
        .description = gTalonflamePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCATTERBUG] =
    {
        .categoryName = _(""),
        .height = 3,
        .weight = 25,
        .description = gScatterbugPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPEWPA] =
    {
        .categoryName = _(""),
        .height = 3,
        .weight = 84,
        .description = gSpewpaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIVILLON] =
    {
        .categoryName = _(""),
        .height = 12,
        .weight = 170,
        .description = gVivillonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LITLEO] =
    {
        .categoryName = _("Lionceau"),
        .height = 6,
        .weight = 135,
        .description = gLitleoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PYROAR] =
    {
        .categoryName = _("Royal"),
        .height = 15,
        .weight = 815,
        .description = gPyroarPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLABEBE] =
    {
        .categoryName = _("Uniflore"),
        .height = 1,
        .weight = 1,
        .description = gFlabebePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLOETTE] =
    {
        .categoryName = _("Uniflore"),
        .height = 2,
        .weight = 9,
        .description = gFloettePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLORGES] =
    {
        .categoryName = _("Jardin"),
        .height = 11,
        .weight = 100,
        .description = gFlorgesPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKIDDO] =
    {
        .categoryName = _("Monture"),
        .height = 9,
        .weight = 310,
        .description = gSkiddoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOGOAT] =
    {
        .categoryName = _("Monture"),
        .height = 17,
        .weight = 910,
        .description = gGogoatPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANCHAM] =
    {
        .categoryName = _("Garnement"),
        .height = 6,
        .weight = 80,
        .description = gPanchamPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANGORO] =
    {
        .categoryName = _("Patibulaire"),
        .height = 21,
        .weight = 1360,
        .description = gPangoroPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FURFROU] =
    {
        .categoryName = _("Caniche"),
        .height = 12,
        .weight = 280,
        .description = gFurfrouPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ESPURR] =
    {
        .categoryName = _("Retenue"),
        .height = 3,
        .weight = 35,
        .description = gEspurrPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEOWSTIC] =
    {
        .categoryName = _(""),
        .height = 6,
        .weight = 85,
        .description = gMeowsticPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HONEDGE] =
    {
        .categoryName = _("Glaive"),
        .height = 8,
        .weight = 20,
        .description = gHonedgePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOUBLADE] =
    {
        .categoryName = _("Glaive"),
        .height = 8,
        .weight = 45,
        .description = gDoubladePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AEGISLASH] =
    {
        .categoryName = _("Noble Lame"),
        .height = 17,
        .weight = 530,
        .description = gAegislashPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPRITZEE] =
    {
        .categoryName = _("Fragrance"),
        .height = 2,
        .weight = 5,
        .description = gSpritzeePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AROMATISSE] =
    {
        .categoryName = _("Parfum"),
        .height = 8,
        .weight = 155,
        .description = gAromatissePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWIRLIX] =
    {
        .categoryName = _("Confiserie"),
        .height = 4,
        .weight = 35,
        .description = gSwirlixPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLURPUFF] =
    {
        .categoryName = _("Mousseline"),
        .height = 8,
        .weight = 50,
        .description = gSlurpuffPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_INKAY] =
    {
        .categoryName = _("Rotation"),
        .height = 4,
        .weight = 35,
        .description = gInkayPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MALAMAR] =
    {
        .categoryName = _("Révolution"),
        .height = 15,
        .weight = 470,
        .description = gMalamarPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BINACLE] =
    {
        .categoryName = _("Bimane"),
        .height = 5,
        .weight = 310,
        .description = gBinaclePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BARBARACLE] =
    {
        .categoryName = _("Assemblage"),
        .height = 13,
        .weight = 960,
        .description = gBarbaraclePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKRELP] =
    {
        .categoryName = _("Simulalgue"),
        .height = 5,
        .weight = 73,
        .description = gSkrelpPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAGALGE] =
    {
        .categoryName = _("Simulalgue"),
        .height = 18,
        .weight = 815,
        .description = gDragalgePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAUNCHER] =
    {
        .categoryName = _("Lance à Eau"),
        .height = 5,
        .weight = 83,
        .description = gClauncherPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAWITZER] =
    {
        .categoryName = _("Blaster"),
        .height = 13,
        .weight = 353,
        .description = gClawitzerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HELIOPTILE] =
    {
        .categoryName = _("Générateur"),
        .height = 5,
        .weight = 60,
        .description = gHelioptilePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HELIOLISK] =
    {
        .categoryName = _("Générateur"),
        .height = 10,
        .weight = 210,
        .description = gHelioliskPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYRUNT] =
    {
        .categoryName = _("Prince"),
        .height = 8,
        .weight = 260,
        .description = gTyruntPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYRANTRUM] =
    {
        .categoryName = _("Tyran"),
        .height = 25,
        .weight = 2700,
        .description = gTyrantrumPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMAURA] =
    {
        .categoryName = _("Toundra"),
        .height = 13,
        .weight = 252,
        .description = gAmauraPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AURORUS] =
    {
        .categoryName = _("Toundra"),
        .height = 27,
        .weight = 2250,
        .description = gAurorusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SYLVEON] =
    {
        .categoryName = _("Intertwine"),
        .height = 10,
        .weight = 235,
        .description = gSylveonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAWLUCHA] =
    {
        .categoryName = _("Catcheur"),
        .height = 8,
        .weight = 215,
        .description = gHawluchaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEDENNE] =
    {
        .categoryName = _("Antenne"),
        .height = 2,
        .weight = 22,
        .description = gDedennePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CARBINK] =
    {
        .categoryName = _("Joyau"),
        .height = 3,
        .weight = 57,
        .description = gCarbinkPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOOMY] =
    {
        .categoryName = _("Mollusque"),
        .height = 3,
        .weight = 28,
        .description = gGoomyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLIGGOO] =
    {
        .categoryName = _("Mollusque"),
        .height = 8,
        .weight = 175,
        .description = gSliggooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOODRA] =
    {
        .categoryName = _("Dragon"),
        .height = 20,
        .weight = 1505,
        .description = gGoodraPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KLEFKI] =
    {
        .categoryName = _("Trousseau"),
        .height = 2,
        .weight = 30,
        .description = gKlefkiPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHANTUMP] =
    {
        .categoryName = _("Souche"),
        .height = 4,
        .weight = 70,
        .description = gPhantumpPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TREVENANT] =
    {
        .categoryName = _("Vieillarbre"),
        .height = 15,
        .weight = 710,
        .description = gTrevenantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUMPKABOO] =
    {
        .categoryName = _("Citrouille"),
        .height = 4,
        .weight = 50,
        .description = gPumpkabooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOURGEIST] =
    {
        .categoryName = _("Citrouille"),
        .height = 9,
        .weight = 125,
        .description = gGourgeistPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BERGMITE] =
    {
        .categoryName = _("Glaçon"),
        .height = 10,
        .weight = 995,
        .description = gBergmitePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AVALUGG] =
    {
        .categoryName = _("Iceberg"),
        .height = 20,
        .weight = 5050,
        .description = gAvaluggPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOIBAT] =
    {
        .categoryName = _("Ondes"),
        .height = 5,
        .weight = 80,
        .description = gNoibatPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOIVERN] =
    {
        .categoryName = _("Ondes"),
        .height = 15,
        .weight = 850,
        .description = gNoivernPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XERNEAS] =
    {
        .categoryName = _("Existence"),
        .height = 30,
        .weight = 2150,
        .description = gXerneasPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YVELTAL] =
    {
        .categoryName = _(""),
        .height = 58,
        .weight = 2030,
        .description = gYveltalPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZYGARDE] =
    {
        .categoryName = _("Équilibre"),
        .height = 50,
        .weight = 3050,
        .description = gZygardePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DIANCIE] =
    {
        .categoryName = _("Joyau"),
        .height = 7,
        .weight = 88,
        .description = gDianciePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOOPA] =
    {
        .categoryName = _("Chenapan"),
        .height = 5,
        .weight = 90,
        .description = gHoopaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VOLCANION] =
    {
        .categoryName = _("Vapeur"),
        .height = 17,
        .weight = 1950,
        .description = gVolcanionPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif

#if P_GEN_7_POKEMON == TRUE
    [NATIONAL_DEX_ROWLET] =
    {
        .categoryName = _(""),
        .height = 3,
        .weight = 15,
        .description = gRowletPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARTRIX] =
    {
        .categoryName = _("Plum'acérée"),
        .height = 7,
        .weight = 160,
        .description = gDartrixPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DECIDUEYE] =
    {
        .categoryName = _("Plumeflèche"),
        .height = 16,
        .weight = 366,
        .description = gDecidueyePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LITTEN] =
    {
        .categoryName = _("Chat Feu"),
        .height = 4,
        .weight = 43,
        .description = gLittenPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TORRACAT] =
    {
        .categoryName = _("Chat Feu"),
        .height = 7,
        .weight = 250,
        .description = gTorracatPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_INCINEROAR] =
    {
        .categoryName = _("VilCatcheur"),
        .height = 18,
        .weight = 830,
        .description = gIncineroarPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POPPLIO] =
    {
        .categoryName = _("Otarie"),
        .height = 4,
        .weight = 75,
        .description = gPopplioPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRIONNE] =
    {
        .categoryName = _("Starlette"),
        .height = 6,
        .weight = 175,
        .description = gBrionnePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PRIMARINA] =
    {
        .categoryName = _("Soliste"),
        .height = 18,
        .weight = 440,
        .description = gPrimarinaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIKIPEK] =
    {
        .categoryName = _("Pivert"),
        .height = 3,
        .weight = 12,
        .description = gPikipekPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRUMBEAK] =
    {
        .categoryName = _("Bec Clairon"),
        .height = 6,
        .weight = 148,
        .description = gTrumbeakPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOUCANNON] =
    {
        .categoryName = _("Canon"),
        .height = 11,
        .weight = 260,
        .description = gToucannonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YUNGOOS] =
    {
        .categoryName = _("Patrouille"),
        .height = 4,
        .weight = 60,
        .description = gYungoosPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GUMSHOOS] =
    {
        .categoryName = _("Filature"),
        .height = 7,
        .weight = 142,
        .description = gGumshoosPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRUBBIN] =
    {
        .categoryName = _("Larve"),
        .height = 4,
        .weight = 44,
        .description = gGrubbinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARJABUG] =
    {
        .categoryName = _("Batterie"),
        .height = 5,
        .weight = 105,
        .description = gCharjabugPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIKAVOLT] =
    {
        .categoryName = _("Scarabée"),
        .height = 15,
        .weight = 450,
        .description = gVikavoltPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRABRAWLER] =
    {
        .categoryName = _("Boxeur"),
        .height = 6,
        .weight = 70,
        .description = gCrabrawlerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRABOMINABLE] =
    {
        .categoryName = _("Crabe Velu"),
        .height = 17,
        .weight = 1800,
        .description = gCrabominablePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ORICORIO] =
    {
        .categoryName = _("Danse"),
        .height = 6,
        .weight = 34,
        .description = gOricorioPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CUTIEFLY] =
    {
        .categoryName = _("Bombyle"),
        .height = 1,
        .weight = 2,
        .description = gCutieflyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RIBOMBEE] =
    {
        .categoryName = _("Bombyle"),
        .height = 2,
        .weight = 5,
        .description = gRibombeePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROCKRUFF] =
    {
        .categoryName = _("Chiot"),
        .height = 5,
        .weight = 92,
        .description = gRockruffPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LYCANROC] =
    {
        .categoryName = _("Loup"),
        .height = 8,
        .weight = 250,
        .description = gLycanrocPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WISHIWASHI] =
    {
        .categoryName = _("Minipoisson"),
        .height = 2,
        .weight = 3,
        .description = gWishiwashiPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAREANIE] =
    {
        .categoryName = _("Cruel"),
        .height = 4,
        .weight = 80,
        .description = gMareaniePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOXAPEX] =
    {
        .categoryName = _("Cruel"),
        .height = 7,
        .weight = 145,
        .description = gToxapexPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUDBRAY] =
    {
        .categoryName = _("Âne"),
        .height = 10,
        .weight = 1100,
        .description = gMudbrayPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUDSDALE] =
    {
        .categoryName = _("ChevalTrait"),
        .height = 25,
        .weight = 9200,
        .description = gMudsdalePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEWPIDER] =
    {
        .categoryName = _("Aquabulle"),
        .height = 3,
        .weight = 40,
        .description = gDewpiderPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARAQUANID] =
    {
        .categoryName = _("Aquabulle"),
        .height = 18,
        .weight = 820,
        .description = gAraquanidPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FOMANTIS] =
    {
        .categoryName = _("Fauch'Herbe"),
        .height = 3,
        .weight = 15,
        .description = gFomantisPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LURANTIS] =
    {
        .categoryName = _("Fauch'Fleur"),
        .height = 9,
        .weight = 185,
        .description = gLurantisPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MORELULL] =
    {
        .categoryName = _("Illuminate"),
        .height = 2,
        .weight = 15,
        .description = gMorelullPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHIINOTIC] =
    {
        .categoryName = _("Illuminate"),
        .height = 10,
        .weight = 115,
        .description = gShiinoticPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALANDIT] =
    {
        .categoryName = _("Toxilézard"),
        .height = 6,
        .weight = 48,
        .description = gSalanditPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALAZZLE] =
    {
        .categoryName = _("Toxilézard"),
        .height = 12,
        .weight = 222,
        .description = gSalazzlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STUFFUL] =
    {
        .categoryName = _("Gigoteur"),
        .height = 5,
        .weight = 68,
        .description = gStuffulPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEWEAR] =
    {
        .categoryName = _("Biscoteaux"),
        .height = 21,
        .weight = 1350,
        .description = gBewearPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOUNSWEET] =
    {
        .categoryName = _("Fruit"),
        .height = 3,
        .weight = 32,
        .description = gBounsweetPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STEENEE] =
    {
        .categoryName = _("Fruit"),
        .height = 7,
        .weight = 82,
        .description = gSteeneePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TSAREENA] =
    {
        .categoryName = _("Fruit"),
        .height = 12,
        .weight = 214,
        .description = gTsareenaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMFEY] =
    {
        .categoryName = _("Tressefleur"),
        .height = 1,
        .weight = 3,
        .description = gComfeyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ORANGURU] =
    {
        .categoryName = _("Grand Sage"),
        .height = 15,
        .weight = 760,
        .description = gOranguruPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PASSIMIAN] =
    {
        .categoryName = _("Coopération"),
        .height = 20,
        .weight = 828,
        .description = gPassimianPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WIMPOD] =
    {
        .categoryName = _("Cavaleur"),
        .height = 5,
        .weight = 120,
        .description = gWimpodPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLISOPOD] =
    {
        .categoryName = _("Blindé"),
        .height = 20,
        .weight = 1080,
        .description = gGolisopodPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDYGAST] =
    {
        .categoryName = _("Pâtéd'Sable"),
        .height = 5,
        .weight = 700,
        .description = gSandygastPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PALOSSAND] =
    {
        .categoryName = _(""),
        .height = 13,
        .weight = 2500,
        .description = gPalossandPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PYUKUMUKU] =
    {
        .categoryName = _("Holothurie"),
        .height = 3,
        .weight = 12,
        .description = gPyukumukuPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYPE_NULL] =
    {
        .categoryName = _("Multigénome"),
        .height = 19,
        .weight = 1205,
        .description = gTypeNullPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SILVALLY] =
    {
        .categoryName = _("Multigénome"),
        .height = 23,
        .weight = 1005,
        .description = gSilvallyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINIOR] =
    {
        .categoryName = _("Météore"),
        .height = 3,
        .weight = 400,
        .description = gMiniorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOMALA] =
    {
        .categoryName = _("Rêveur"),
        .height = 4,
        .weight = 199,
        .description = gKomalaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TURTONATOR] =
    {
        .categoryName = _("Tortue Boum"),
        .height = 20,
        .weight = 2120,
        .description = gTurtonatorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGEDEMARU] =
    {
        .categoryName = _("Roulenboule"),
        .height = 3,
        .weight = 33,
        .description = gTogedemaruPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIMIKYU] =
    {
        .categoryName = _("Fantômasque"),
        .height = 2,
        .weight = 7,
        .description = gMimikyuPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRUXISH] =
    {
        .categoryName = _("Grincedent"),
        .height = 9,
        .weight = 190,
        .description = gBruxishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAMPA] =
    {
        .categoryName = _("Nonchalant"),
        .height = 30,
        .weight = 1850,
        .description = gDrampaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DHELMISE] =
    {
        .categoryName = _("Varech"),
        .height = 39,
        .weight = 2100,
        .description = gDhelmisePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JANGMO_O] =
    {
        .categoryName = _("Écailles"),
        .height = 6,
        .weight = 297,
        .description = gJangmooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAKAMO_O] =
    {
        .categoryName = _("Écailles"),
        .height = 12,
        .weight = 470,
        .description = gHakamooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOMMO_O] =
    {
        .categoryName = _("Écailles"),
        .height = 16,
        .weight = 782,
        .description = gKommooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAPU_KOKO] =
    {
        .categoryName = _("Tutélaire"),
        .height = 18,
        .weight = 205,
        .description = gTapuKokoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAPU_LELE] =
    {
        .categoryName = _("Tutélaire"),
        .height = 12,
        .weight = 186,
        .description = gTapuLelePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAPU_BULU] =
    {
        .categoryName = _("Tutélaire"),
        .height = 19,
        .weight = 455,
        .description = gTapuBuluPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAPU_FINI] =
    {
        .categoryName = _("Tutélaire"),
        .height = 13,
        .weight = 212,
        .description = gTapuFiniPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COSMOG] =
    {
        .categoryName = _("Nébuleuse"),
        .height = 2,
        .weight = 1,
        .description = gCosmogPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COSMOEM] =
    {
        .categoryName = _("ProtoÉtoile"),
        .height = 1,
        .weight = 9999,
        .description = gCosmoemPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOLGALEO] =
    {
        .categoryName = _("HaloSolaire"),
        .height = 34,
        .weight = 2300,
        .description = gSolgaleoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUNALA] =
    {
        .categoryName = _("HaloLunaire"),
        .height = 40,
        .weight = 1200,
        .description = gLunalaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIHILEGO] =
    {
        .categoryName = _("Parasite"),
        .height = 12,
        .weight = 555,
        .description = gNihilegoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUZZWOLE] =
    {
        .categoryName = _("Enflé"),
        .height = 24,
        .weight = 3336,
        .description = gBuzzwolePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHEROMOSA] =
    {
        .categoryName = _("Gracile"),
        .height = 18,
        .weight = 250,
        .description = gPheromosaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XURKITREE] =
    {
        .categoryName = _("Luminaire"),
        .height = 38,
        .weight = 1000,
        .description = gXurkitreePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CELESTEELA] =
    {
        .categoryName = _("Décollage"),
        .height = 92,
        .weight = 9999,
        .description = gCelesteelaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KARTANA] =
    {
        .categoryName = _("Battô"),
        .height = 3,
        .weight = 1,
        .description = gKartanaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GUZZLORD] =
    {
        .categoryName = _("Bizarrovore"),
        .height = 55,
        .weight = 8880,
        .description = gGuzzlordPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NECROZMA] =
    {
        .categoryName = _("Prisme"),
        .height = 24,
        .weight = 2300,
        .description = gNecrozmaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGEARNA] =
    {
        .categoryName = _("Artificiel"),
        .height = 10,
        .weight = 805,
        .description = gMagearnaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARSHADOW] =
    {
        .categoryName = _("Gloomdwellr"),
        .height = 7,
        .weight = 222,
        .description = gMarshadowPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POIPOLE] =
    {
        .categoryName = _("Vénépic"),
        .height = 6,
        .weight = 18,
        .description = gPoipolePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NAGANADEL] =
    {
        .categoryName = _("Vénépic"),
        .height = 36,
        .weight = 1500,
        .description = gNaganadelPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STAKATAKA] =
    {
        .categoryName = _("Muraille"),
        .height = 55,
        .weight = 8200,
        .description = gStakatakaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLACEPHALON] =
    {
        .categoryName = _("Artificier"),
        .height = 18,
        .weight = 130,
        .description = gBlacephalonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZERAORA] =
    {
        .categoryName = _("Vif Éclair"),
        .height = 15,
        .weight = 445,
        .description = gZeraoraPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MELTAN] =
    {
        .categoryName = _("Écrou"),
        .height = 2,
        .weight = 80,
        .description = gMeltanPokedexText,
        .pokemonScale = 640,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MELMETAL] =
    {
        .categoryName = _("Écrou"),
        .height = 25,
        .weight = 800,
        .description = gMelmetalPokedexText,
        .pokemonScale = 255,
        .pokemonOffset = 1,
        .trainerScale = 387,
        .trainerOffset = 2,
    },
#endif

#if P_GEN_8_POKEMON == TRUE
    [NATIONAL_DEX_GROOKEY] =
    {
        .categoryName = _("Chimpanzé"),
        .height = 3,
        .weight = 50,
        .description = gGrookeyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THWACKEY] =
    {
        .categoryName = _("Percussions"),
        .height = 7,
        .weight = 140,
        .description = gThwackeyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RILLABOOM] =
    {
        .categoryName = _("Batteur"),
        .height = 21,
        .weight = 900,
        .description = gRillaboomPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCORBUNNY] =
    {
        .categoryName = _("Lapin"),
        .height = 3,
        .weight = 45,
        .description = gScorbunnyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RABOOT] =
    {
        .categoryName = _("Lapin"),
        .height = 6,
        .weight = 90,
        .description = gRabootPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CINDERACE] =
    {
        .categoryName = _("Buteur"),
        .height = 14,
        .weight = 330,
        .description = gCinderacePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOBBLE] =
    {
        .categoryName = _("Lézard'Eau"),
        .height = 3,
        .weight = 40,
        .description = gSobblePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRIZZILE] =
    {
        .categoryName = _("Lézard'Eau"),
        .height = 7,
        .weight = 115,
        .description = gDrizzilePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_INTELEON] =
    {
        .categoryName = _("AgentSecret"),
        .height = 19,
        .weight = 452,
        .description = gInteleonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKWOVET] =
    {
        .categoryName = _("Joufflu"),
        .height = 3,
        .weight = 25,
        .description = gSkwovetPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GREEDENT] =
    {
        .categoryName = _("Goulu"),
        .height = 6,
        .weight = 60,
        .description = gGreedentPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROOKIDEE] =
    {
        .categoryName = _("Minoiseau"),
        .height = 2,
        .weight = 18,
        .description = gRookideePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORVISQUIRE] =
    {
        .categoryName = _("Corbeau"),
        .height = 8,
        .weight = 160,
        .description = gCorvisquirePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORVIKNIGHT] =
    {
        .categoryName = _("Corbeau"),
        .height = 22,
        .weight = 750,
        .description = gCorviknightPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLIPBUG] =
    {
        .categoryName = _("Larve"),
        .height = 4,
        .weight = 80,
        .description = gBlipbugPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOTTLER] =
    {
        .categoryName = _("Radôme"),
        .height = 4,
        .weight = 195,
        .description = gDottlerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ORBEETLE] =
    {
        .categoryName = _("Sept Points"),
        .height = 4,
        .weight = 408,
        .description = gOrbeetlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NICKIT] =
    {
        .categoryName = _("Renard"),
        .height = 6,
        .weight = 89,
        .description = gNickitPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THIEVUL] =
    {
        .categoryName = _("Renard"),
        .height = 12,
        .weight = 199,
        .description = gThievulPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOSSIFLEUR] =
    {
        .categoryName = _("Chef-Fleur"),
        .height = 4,
        .weight = 22,
        .description = gGossifleurPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELDEGOSS] =
    {
        .categoryName = _("Chef-Coton"),
        .height = 5,
        .weight = 25,
        .description = gEldegossPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOOLOO] =
    {
        .categoryName = _("Mouton"),
        .height = 6,
        .weight = 60,
        .description = gWoolooPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUBWOOL] =
    {
        .categoryName = _("Mouton"),
        .height = 13,
        .weight = 430,
        .description = gDubwoolPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHEWTLE] =
    {
        .categoryName = _("Mordillage"),
        .height = 3,
        .weight = 85,
        .description = gChewtlePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DREDNAW] =
    {
        .categoryName = _("Morsure"),
        .height = 10,
        .weight = 1155,
        .description = gDrednawPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YAMPER] =
    {
        .categoryName = _("Chiot"),
        .height = 3,
        .weight = 135,
        .description = gYamperPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOLTUND] =
    {
        .categoryName = _("Chien"),
        .height = 10,
        .weight = 340,
        .description = gBoltundPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROLYCOLY] =
    {
        .categoryName = _("Charbon"),
        .height = 3,
        .weight = 120,
        .description = gRolycolyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CARKOL] =
    {
        .categoryName = _("Charbon"),
        .height = 11,
        .weight = 780,
        .description = gCarkolPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COALOSSAL] =
    {
        .categoryName = _("Charbon"),
        .height = 28,
        .weight = 3105,
        .description = gCoalossalPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_APPLIN] =
    {
        .categoryName = _("Nid Pomme"),
        .height = 2,
        .weight = 5,
        .description = gApplinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAPPLE] =
    {
        .categoryName = _("Ailes Pomme"),
        .height = 3,
        .weight = 10,
        .description = gFlapplePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_APPLETUN] =
    {
        .categoryName = _("Jus Pomme"),
        .height = 4,
        .weight = 130,
        .description = gAppletunPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SILICOBRA] =
    {
        .categoryName = _("Serpensable"),
        .height = 22,
        .weight = 76,
        .description = gSilicobraPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDACONDA] =
    {
        .categoryName = _("Serpensable"),
        .height = 38,
        .weight = 655,
        .description = gSandacondaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRAMORANT] =
    {
        .categoryName = _("Avaltouron"),
        .height = 8,
        .weight = 180,
        .description = gCramorantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARROKUDA] =
    {
        .categoryName = _("Fonceur"),
        .height = 5,
        .weight = 10,
        .description = gArrokudaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BARRASKEWDA] =
    {
        .categoryName = _(""),
        .height = 13,
        .weight = 300,
        .description = gBarraskewdaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOXEL] =
    {
        .categoryName = _("Poupon"),
        .height = 4,
        .weight = 110,
        .description = gToxelPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOXTRICITY] =
    {
        .categoryName = _("Punk"),
        .height = 16,
        .weight = 400,
        .description = gToxtricityPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIZZLIPEDE] =
    {
        .categoryName = _("Calorifère"),
        .height = 7,
        .weight = 10,
        .description = gSizzlipedePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CENTISKORCH] =
    {
        .categoryName = _("Calorifère"),
        .height = 30,
        .weight = 1200,
        .description = gCentiskorchPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLOBBOPUS] =
    {
        .categoryName = _("Caprice"),
        .height = 6,
        .weight = 40,
        .description = gClobbopusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRAPPLOCT] =
    {
        .categoryName = _("Jujitsu"),
        .height = 16,
        .weight = 390,
        .description = gGrapploctPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SINISTEA] =
    {
        .categoryName = _("Thé Noir"),
        .height = 1,
        .weight = 2,
        .description = gSinisteaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLTEAGEIST] =
    {
        .categoryName = _("Thé Noir"),
        .height = 2,
        .weight = 4,
        .description = gPolteageistPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HATENNA] =
    {
        .categoryName = _("Calme"),
        .height = 4,
        .weight = 34,
        .description = gHatennaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HATTREM] =
    {
        .categoryName = _("Serein"),
        .height = 6,
        .weight = 48,
        .description = gHattremPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HATTERENE] =
    {
        .categoryName = _("Silencieux"),
        .height = 21,
        .weight = 51,
        .description = gHatterenePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IMPIDIMP] =
    {
        .categoryName = _("Malin"),
        .height = 4,
        .weight = 55,
        .description = gImpidimpPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MORGREM] =
    {
        .categoryName = _("Scélérat"),
        .height = 8,
        .weight = 125,
        .description = gMorgremPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRIMMSNARL] =
    {
        .categoryName = _("Gonflette"),
        .height = 15,
        .weight = 610,
        .description = gGrimmsnarlPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OBSTAGOON] =
    {
        .categoryName = _("Barrage"),
        .height = 16,
        .weight = 460,
        .description = gObstagoonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PERRSERKER] =
    {
        .categoryName = _("Viking"),
        .height = 8,
        .weight = 280,
        .description = gPerrserkerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CURSOLA] =
    {
        .categoryName = _("Corail"),
        .height = 10,
        .weight = 4,
        .description = gCursolaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIRFETCHD] =
    {
        .categoryName = _("Canard Fou"),
        .height = 8,
        .weight = 1170,
        .description = gSirfetchdPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MR_RIME] =
    {
        .categoryName = _("Comédien"),
        .height = 15,
        .weight = 582,
        .description = gMrRimePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RUNERIGUS] =
    {
        .categoryName = _("Rancune"),
        .height = 16,
        .weight = 666,
        .description = gRunerigusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MILCERY] =
    {
        .categoryName = _("Crème"),
        .height = 2,
        .weight = 3,
        .description = gMilceryPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALCREMIE] =
    {
        .categoryName = _("Crème"),
        .height = 3,
        .weight = 5,
        .description = gAlcremiePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FALINKS] =
    {
        .categoryName = _("Escadron"),
        .height = 30,
        .weight = 620,
        .description = gFalinksPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINCURCHIN] =
    {
        .categoryName = _("Oursin"),
        .height = 3,
        .weight = 10,
        .description = gPincurchinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNOM] =
    {
        .categoryName = _("Ver"),
        .height = 3,
        .weight = 38,
        .description = gSnomPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROSMOTH] =
    {
        .categoryName = _("Mite Givre"),
        .height = 13,
        .weight = 420,
        .description = gFrosmothPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STONJOURNER] =
    {
        .categoryName = _("Mégalithe"),
        .height = 25,
        .weight = 5200,
        .description = gStonjournerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EISCUE] =
    {
        .categoryName = _("Pingouin"),
        .height = 14,
        .weight = 890,
        .description = gEiscuePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_INDEEDEE] =
    {
        .categoryName = _("Émotion"),
        .height = 9,
        .weight = 280,
        .description = gIndeedeePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MORPEKO] =
    {
        .categoryName = _("Volt Face"),
        .height = 3,
        .weight = 30,
        .description = gMorpekoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CUFANT] =
    {
        .categoryName = _("Pachycuivre"),
        .height = 12,
        .weight = 1000,
        .description = gCufantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COPPERAJAH] =
    {
        .categoryName = _("Pachycuivre"),
        .height = 30,
        .weight = 6500,
        .description = gCopperajahPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRACOZOLT] =
    {
        .categoryName = _("Fossile"),
        .height = 18,
        .weight = 1900,
        .description = gDracozoltPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCTOZOLT] =
    {
        .categoryName = _("Fossile"),
        .height = 23,
        .weight = 1500,
        .description = gArctozoltPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRACOVISH] =
    {
        .categoryName = _("Fossile"),
        .height = 23,
        .weight = 2150,
        .description = gDracovishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCTOVISH] =
    {
        .categoryName = _("Fossile"),
        .height = 20,
        .weight = 1750,
        .description = gArctovishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DURALUDON] =
    {
        .categoryName = _("Alliage"),
        .height = 18,
        .weight = 400,
        .description = gDuraludonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DREEPY] =
    {
        .categoryName = _("Âme Errante"),
        .height = 5,
        .weight = 20,
        .description = gDreepyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAKLOAK] =
    {
        .categoryName = _("Baby-sitter"),
        .height = 14,
        .weight = 110,
        .description = gDrakloakPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAGAPULT] =
    {
        .categoryName = _("Furtif"),
        .height = 30,
        .weight = 500,
        .description = gDragapultPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZACIAN] =
    {
        .categoryName = _("Valeureux"),
        .height = 28,
        .weight = 1100,
        .description = gZacianPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZAMAZENTA] =
    {
        .categoryName = _("Valeureux"),
        .height = 29,
        .weight = 2100,
        .description = gZamazentaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ETERNATUS] =
    {
        .categoryName = _("Giga"),
        .height = 200,
        .weight = 9500,
        .description = gEternatusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KUBFU] =
    {
        .categoryName = _("Kung-fu"),
        .height = 6,
        .weight = 120,
        .description = gKubfuPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_URSHIFU] =
    {
        .categoryName = _("Kung-fu"),
        .height = 19,
        .weight = 1050,
        .description = gUrshifuPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZARUDE] =
    {
        .categoryName = _("VilainSinge"),
        .height = 18,
        .weight = 700,
        .description = gZarudePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REGIELEKI] =
    {
        .categoryName = _("Électron"),
        .height = 12,
        .weight = 1450,
        .description = gRegielekiPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REGIDRAGO] =
    {
        .categoryName = _("BouleDragon"),
        .height = 21,
        .weight = 2000,
        .description = gRegidragoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLASTRIER] =
    {
        .categoryName = _("ChevalRétif"),
        .height = 22,
        .weight = 8000,
        .description = gGlastrierPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPECTRIER] =
    {
        .categoryName = _("Cheval Vif"),
        .height = 20,
        .weight = 445,
        .description = gSpectrierPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CALYREX] =
    {
        .categoryName = _("Roi"),
        .height = 11,
        .weight = 77,
        .description = gCalyrexPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WYRDEER] =
    {
        .categoryName = _("Maxi Corne"),
        .height = 18,
        .weight = 951,
        .description = gWyrdeerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KLEAVOR] =
    {
        .categoryName = _("Hache"),
        .height = 18,
        .weight = 890,
        .description = gKleavorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_URSALUNA] =
    {
        .categoryName = _("Tourbe"),
        .height = 24,
        .weight = 2900,
        .description = gUrsalunaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BASCULEGION] =
    {
        .categoryName = _("Poissigrand"),
        .height = 30,
        .weight = 1100,
        .description = gBasculegionPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNEASLER] =
    {
        .categoryName = _("Grimpeur"),
        .height = 13,
        .weight = 430,
        .description = gSneaslerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OVERQWIL] =
    {
        .categoryName = _("Épineux"),
        .height = 25,
        .weight = 605,
        .description = gOverqwilPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ENAMORUS] =
    {
        .categoryName = _("Hainamour"),
        .height = 16,
        .weight = 480,
        .description = gEnamorusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif
};
