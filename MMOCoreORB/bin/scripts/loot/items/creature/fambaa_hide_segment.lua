--Automatically generated by SWGEmu Spawn Tool v0.12 loot editor.
-- Legend of Hondo Customization
-- Made this a lower end version of the revamped Rancor Padded Segment

fambaa_hide_segment = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "",
	directObjectTemplate = "object/tangible/component/armor/armor_segment_padded_fambaa.iff",
	craftingValues = {
		{"armor_special_type",0,0,0},
		{"armor_effectiveness",3,8,10},
		{"armor_integrity",200,800,0},
		{"acideffectiveness",1,7,10},
		{"blasteffectiveness",1,7,10},
		{"coldeffectiveness",1,7,10},
		{"heateffectiveness",1,7,10},
		{"armor_health_encumbrance",16,8,0},
		{"armor_action_encumbrance",16,8,0},
		{"armor_mind_encumbrance",16,8,0},
		{"useCount",1,10,0},
	},
	customizationStringNames = {},
	customizationValues = {},	junkDealerTypeNeeded = JUNKGENERIC,	junkMinValue = 7,	junkMaxValue = 60,
}

addLootItemTemplate("fambaa_hide_segment", fambaa_hide_segment)