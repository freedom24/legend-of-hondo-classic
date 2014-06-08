JUNKNOTSELLABLE = 0
JUNKGENERIC = 1
JUNKCLOTHESANDJEWELLERY = 2
JUNKWEAPONS = 4
JUNKARMOUR = 8
JUNKTUSKEN = 16
JUNKJEDI = 32
JUNKJAWA = 64
JUNKGUNGAN = 128

JUNKCONVGENERIC = 1
JUNKCONVARMS = 2
JUNKCONVFINARY = 3
JUNKCONVDENDERRORI = 4
JUNKCONVDENDERTHEED = 5
JUNKCONVLILABORVO = 6
JUNKCONVMALIKVISTAL = 7
JUNKCONVNADOWATTOS = 8
JUNKCONVNATHANTAIKE = 9
JUNKCONVOLLOBOJABBAS = 10
JUNKCONVQUICHDANTOOINE = 11
JUNKCONVREGGINYM = 12
JUNKCONVSHEANILAKE = 13
JUNKCONVSNEGVALARIAN = 14
JUNKCONVJAWAGENERIC = 15
JUNKCONVJAWAFINARY = 16
JUNKCONVJAWAARMS = 17
JUNKCONVJAWATUSKEN = 18

-- Generated by SWGEmu Spawn Tool v0.12
-- {"regionName", xCenter, yCenter, radius, tier, spawnConstant, "spawnGroup1", [...]}
-- Tier is a bit mask with the following possible values where each hexadecimal position is one possible configuration.
-- That means that it is not possible to have both a spawn area and a no spawn area in the same region, but
-- a spawn area that is also a no build zone is possible.


UNDEFINEDAREA       = 0x0000
SPAWNAREA           = 0x0001
NOSPAWNAREA         = 0x0002
WORLDSPAWNAREA      = 0x0010
NOBUILDZONEAREA     = 0x0100

naboo_regions = {
	{"beach_town",0,0,{1,0},UNDEFINEDAREA,1},
	{"beachtown_easy_newbie",-5585,-35,{1,1040},SPAWNAREA,1,"naboo_starter_creatures"},
	{"beachtown_medium_newbie",-5585,-35,{3,960,1920},SPAWNAREA,1,"naboo_medium_creatures"},
        {"bounty_hunter_camp",5029,4156,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"campfire_and_bones",3939,2701,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"campfire_and_ruins",-1771,2387,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"central_jungle_swamp",0,0,{1,0},UNDEFINEDAREA,1},
	{"central_mountain_circle",0,0,{1,0},UNDEFINEDAREA,1},
	{"central_mountain_range",0,0,{1,0},UNDEFINEDAREA,1},
        {"dead_tree",-675,5203,{1,10},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"debris",-1691,5427,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"debris_2",-2957,1699,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"debris_3",-2403,563,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"deeja_easy_newbie",5060,-1470,{1,1360},SPAWNAREA,1,"naboo_starter_creatures"},
	{"deeja_medium_newbie",5060,-1470,{3,1240,2200},SPAWNAREA,1,"naboo_medium_creatures"},
	{"deeja_peak",0,0,{1,0},UNDEFINEDAREA,1},
	{"eastern_forest",0,0,{1,0},UNDEFINEDAREA,1},
	{"eastern_jungle_swamp",0,0,{1,0},UNDEFINEDAREA,1},
	{"eastern_mountains",0,0,{1,0},UNDEFINEDAREA,1},
	{"easy_gnort_ne",0,0,{1,0},UNDEFINEDAREA,1},
	{"emperors_retreat",2400,-3900,{1,500},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"fence_and_debris",-7575,5043,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"fishing_dock",-6314,-5087,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"forest_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_forest_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_jungle_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_jungle_2",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_mountains",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_mountains_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_mountains_11",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_mountains_12",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_mountains_13",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_mountains_14",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_mountains_15",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_mountains_16",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_mountains_17",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_mountains_2",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_mountains_3",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_mountains_4",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_mountains_5",0,0,{1,0},UNDEFINEDAREA,1},
	{"gallo_mountains_6",0,0,{1,0},UNDEFINEDAREA,1},
        {"gardens",1260,4291,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"gate_and_columns",-259,-60,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"gazebo",1012,-3460,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"great_grass_plains_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"great_grass_plains_2",0,0,{1,0},UNDEFINEDAREA,1},
	{"great_grass_plains_3",0,0,{1,0},UNDEFINEDAREA,1},
	{"great_grass_plains_4",0,0,{1,0},UNDEFINEDAREA,1},
	{"great_grass_plains_5",0,0,{1,0},UNDEFINEDAREA,1},
        {"graveyard",-3603,3119,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"gungan_fountain",5556,5531,{1,50},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"gungan_head",1940,6611,{1,50},NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"gungan_head_with_walls",-5046,6178,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"gungan_monument",-7547,2251,{1,50},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"gungan_ruins",3428,5075,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"gungan_sacred_place",-2013,-5453,{1,160},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"gungan_temple",-264,2826,{1,50},NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"hard_capper_spineflap_sw",0,0,{1,0},UNDEFINEDAREA,1},
	{"hard_gungan_se",0,0,{1,0},UNDEFINEDAREA,1},
	{"hard_mauler_nw",0,0,{1,0},UNDEFINEDAREA,1},
	{"hard_peko_peko_nw",-1856,6112,{1,2500},SPAWNAREA,1,"peko_albatross"},
	{"hard_veermok_ne",0,0,{1,0},UNDEFINEDAREA,1},
	{"imperial_vs_gungan_poi",4760,3875,{1,125},NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"jungle_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"jungle_2",0,0,{1,0},UNDEFINEDAREA,1},
	{"kaadara_easy_newbie",5150,6680,{1,1360},SPAWNAREA,1,"naboo_starter_creatures"},
	{"kaadara_medium_newbie",5150,6680,{3,1240,2200},SPAWNAREA,1,"naboo_medium_creatures"},
	{"kadaara",0,0,{1,0},UNDEFINEDAREA,1},
	{"keren",0,0,{1,0},UNDEFINEDAREA,1},
	{"keren_easy_newbie",1685,2620,{1,1360},SPAWNAREA,1,"naboo_starter_creatures"},
	{"keren_medium_newbie",1685,2620,{3,1240,2200},SPAWNAREA,1,"naboo_medium_creatures"},
	{"lainorm_swamp_2",0,0,{1,0},UNDEFINEDAREA,1},
	{"lake_retreat",-5555,-34,{1,400},NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"lake_retreat_gazebo",-5637,174,{1,40},NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"lasay_swamp",0,0,{1,0},UNDEFINEDAREA,1},
	{"lianorm_swamp_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"lianorm_swamps",0,0,{1,0},UNDEFINEDAREA,1},
	{"mauler_stronghold",2910,1118,{1,200},NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"medium_ikopi_ne",0,0,{1,0},UNDEFINEDAREA,1},
	{"medium_mountain_ikopi_ne",0,0,{1,0},UNDEFINEDAREA,1},
	{"medium_mountain_ikopi_se",0,0,{1,0},UNDEFINEDAREA,1},
	{"medium_mountain_krevol_se",0,0,{1,0},UNDEFINEDAREA,1},
	{"medium_swamp_cat_se",0,0,{1,0},UNDEFINEDAREA,1},
	{"medium_tusk_cat_ne",0,0,{1,0},UNDEFINEDAREA,1},
	{"medium_tusk_cat_nw",0,0,{1,0},UNDEFINEDAREA,1},
	{"moenia",0,0,{1,0},UNDEFINEDAREA,1},
	{"moenia_easy_newbie",4800,-4820,{1,1360},SPAWNAREA,1,"naboo_starter_creatures"},
	{"moenia_medium_newbie",4800,-4820,{3,1240,2200},SPAWNAREA,1,"naboo_medium_creatures"},
        {"narglatch_cave",5861,-4650,{1,150},NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"north_eastern_jungle_swamp",0,0,{1,0},UNDEFINEDAREA,1},
	{"northern_plains",0,0,{1,0},UNDEFINEDAREA,1},
	{"paitnnu_wetlands",0,0,{1,0},UNDEFINEDAREA,1},
	{"plains_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"rainforest_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"rainforest_2",0,0,{1,0},UNDEFINEDAREA,1},
	{"rainforest_3",0,0,{1,0},UNDEFINEDAREA,1},
        {"rebel_outpost",-1499,-1732,{1,100},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"rebel_outpost_2",978,-1332,{1,100},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"ruined_wall",-3603,-876,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"ruins",-2547,6787,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"ruins_2",-1799,-500,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"ruins_3",-7319,-4143,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"ruins_4",2148,5427,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"ruins_5}",1228,5515,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"shield_generator",-1339,6531,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"small_garden",-6459,1747,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"small_graveyard",-2174,6357,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"southeast_swamp",0,0,{1,0},UNDEFINEDAREA,1},
	{"southwest_mountain_circle",0,0,{1,0},UNDEFINEDAREA,1},
	{"southwest_swamp",0,0,{1,0},UNDEFINEDAREA,1},
        {"statues",-1635,-4036,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"statues_and_droideka",-2331,5075,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"statues_and_torches",-1147,347,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"swamp_1",0,0,{1,0},UNDEFINEDAREA,1},
	{"swamp_2",0,0,{1,0},UNDEFINEDAREA,1},
	{"swamp_3",0,0,{1,0},UNDEFINEDAREA,1},
	{"swamp_town",0,0,{1,0},UNDEFINEDAREA,1},
	{"theed",-5036,4124,{1,500},NOSPAWNAREA + NOBUILDZONEAREA,0},
	{"theed_easy_newbie_1",-5485,4380,{1,1750},SPAWNAREA,1,"naboo_starter_creatures"},
	{"theed_easy_newbie_2",-4940,4030,{1,1750},SPAWNAREA,1,"naboo_starter_creatures"},
	{"theed_medium_newbie",-5212,4205,{3,1600,2800},SPAWNAREA,1,"naboo_medium_creatures"},
        {"tower",-1568,6003,{1,50},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"weapon_development_facility",-6510,-3280,{1,200},NOSPAWNAREA + NOBUILDZONEAREA,1},
        {"wreckage",6314,4248,{1,30},NOSPAWNAREA + NOBUILDZONEAREA,1},
	{"western_forest",0,0,{1,0},UNDEFINEDAREA,1},
	{"world_spawner",0,0,{1,-1},SPAWNAREA + WORLDSPAWNAREA,1,"naboo_world_creatures"},
}

naboo_static_spawns = {
	{"agriculturalist",60,-5827.81,6,4173.98,180.005,0, "conversation", ""},
	{"bodyguard",300,11.7898,1.75,-1.89849,180.002,1305892, "conversation", ""},
	{"bodyguard",300,-5258.93,6,4187.17,180.005,0, "conversation", ""},
	{"bodyguard",300,-29.8622,7.9418,10.8957,180.008,1692104, "conversation", ""},
	{"bodyguard",300,-37.5788,7.9418,22.3791,0,1692104, "conversation", ""},
	{"brawler",60,19.6394,0.764492,42.4583,354.768,5475485, "conversation", ""},
	{"businessman",60,15.5641,1.28309,-2.37071,135.005,1677395, "conversation", ""},
	{"businessman",60,-4.2087,0.999986,2.15452,179.993,1677394, "conversation", ""},
	{"coa2_imperial_coordinator",0,-5431.8,6,4168.58,145.531,0, "npc_imperial", ""},
	{"commoner",60,-17.0001,2.25,17.4832,270.003,1305888, "conversation", ""},
	{"commoner",60,-19.0001,2.25,17.4832,90.0053,1305888, "conversation", ""},
	{"commoner",60,-24,1.6,-4,77.8869,1697383, "calm", "An Event Promoter"},
	{"commoner",60,-5778.43,6,4397.54,180.005,0, "conversation", ""},
	{"commoner_technician",60,-22.5486,1.61223,33.2294,354.768,5475485, "conversation", ""},
	{"entertainer",60,19.6394,0.664388,43.5491,180.018,5475485, "conversation", ""},
	{"etheli_drenel",60,12.4716,2.31216,25.6024,180.001,5475485, "conversation", ""},
	{"event_perk_vendor",0,-24,1.6,-4,240.351,1677400, "calm", "Pex (a storyteller vendor)"},
	{"explorer",60,3.05224,2.12878,72.5469,180.005,5475487, "conversation", ""},
	{"fringer",300,3.05224,2.12878,71.4469,0,5475487, "conversation", ""},
	{"gambler",60,4.2931,1,-7.62435,360.011,1677394, "conversation", ""},
	{"gambler",60,-11.7266,1.6,-16.4722,0,1677399, "conversation", ""},
	{"gungan_guard",300,12.4716,2.41226,24.5116,5.24304,5475485, "conversation", ""},
	{"gungan_hermit",300,-22.6115,1.6,-10.3739,179.996,1677400, "conversation", ""},
	{"gungan_outcast",300,-5827.81,6,4172.98,0,0, "conversation", ""},
	{"junk_dealer",0,-5222.4,6,4217.4,-137,0, "", "",JUNKGENERIC,JUNKCONVGENERIC},
	{"junk_dealer",0,5143.9,-192,6818,47,0, "", "",JUNKGENERIC,JUNKCONVGENERIC},
	{"junk_sheani",0,-5496,4.2,-71,112,0, "", "Sheani Lake",JUNKCLOTHESANDJEWELLERY+JUNKARMOUR,JUNKCONVSHEANILAKE},
	{"junk_dealer",0,1371.6,13,2705.3,177,0, "", "",JUNKGENERIC,JUNKCONVGENERIC},
	{"junk_lila",0,4809.5,4.2,-4663,112,0, "", "Lila Rawlkiss",JUNKWEAPONS,JUNKCONVLILABORVO},
	{"junk_dealer",0,-5885.3,6,4214.7,83,0, "", "",JUNKGENERIC,JUNKCONVGENERIC},
	{"medic",60,-11.5446,2.12878,75.9709,0,5475487, "conversation", ""},
	{"mercenary",60,-6.34119,0.6,-9.37965,360.011,5475480, "conversation", ""},
	{"miner",60,-5886.59,6,4369.23,180.005,0, "conversation", ""},
	{"naboo_holy_man",300,-22.6115,1.6,-11.4739,0,1677400, "conversation", ""},
	{"naboo_nomad",300,16.6641,1.28309,-3.47071,360.011,1677395, "conversation", ""},
	{"noble",60,-16.4118,1.02908,39.5837,179.999,5475485, "conversation", ""},
	{"noble",60,2432.4,292,-3887.3,-125,0, "npc_use_terminal_high", ""},
	{"official",300,-5886.59,6,4368.23,0,0, "conversation", ""},
	{"philosopher",300,-11.7266,1.6,-15.4722,180.001,1677399, "conversation", ""},
	{"rsf_palace_guard",300,18.5394,0.664266,43.5491,134.79,5475485, "conversation", ""},
	{"rsf_palace_guard",300,-6.34119,0.6,-8.27965,180.012,5475480, "conversation", ""},
	{"rsf_pilot",300,-16.4118,1.12919,38.4929,5.24439,5475485, "conversation", ""},
	{"rsf_pilot",300,-22.5486,1.52122,34.221,180.016,5475485, "conversation", ""},
	{"rsf_security_guard",300,6.3,1.2,-3.9,-89,1305892, "conversation", ""},
	{"rsf_security_officer",300,5.4,1.2,-3.9,87,1305892, "conversation", ""},
	{"scoundrel",300,-4.2087,0.999986,1.15452,0,1677394, "conversation", ""},
	{"stormtrooper_groupleader",400,-5969.83,6,4246.76,173.432,0, "", "VK-481"},
	{"trainer_shipwright",0,4727,4.3,-4649,0,0, "", "a shipwright trainer"},
	{"trainer_shipwright",0,1352,13,2768,141,0, "", "a shipwright trainer"},
	{"trainer_shipwright",0,0.2,0.7,-71.4,-177,1692101, "", "a shipwright trainer"},
	{"trainer_shipwright",0,5.1,0.6,66.6,119,1741539, "", "a shipwright trainer"},
	{"vendor",60,-11.5446,2.12878,76.8966,179.996,5475487, "conversation", ""},
	{"ysnide_omewror",60,4.2931,1.00001,-6.52435,180.012,1677394, "conversation", ""},
}

naboo_badges = {
	{"badge_amidalas_sandy_beach",-5828,-93,10,77},
	{"badge_deeja_falls_top",5161,-1627,10,76},
	{"badge_gungan_sacred_place",-2000,-5429,10,19},
	{"badge_theed_falls_bottom",-4614,4261,10,75},
}
