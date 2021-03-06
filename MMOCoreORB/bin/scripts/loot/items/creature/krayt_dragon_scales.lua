--Automatically generated by SWGEmu Spawn Tool v0.12 loot editor.
-- Legend of Hondo Customization
-- Increased the lowend of Kin/Eng from 2 to 8.
-- Increased the highend of Kin/Eng from 8 to 12.
-- Increased the drop count min to 3 from 1.
-- Increased the drop count max to 10 from 12.

krayt_dragon_scales = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "",
	directObjectTemplate = "object/tangible/component/armor/armor_segment_enhancement_krayt.iff",
	craftingValues = {
		{"armor_special_type",0,0,0},
		{"acideffectiveness",2,8,10},
		{"heateffectiveness",2,8,10},
		{"energyeffectiveness",8,12,10},
		{"kineticeffectiveness",8,12,10},
		{"coldeffectiveness",2,8,10},
		{"blasteffectiveness",2,8,10},
		{"useCount",3,12,0},
	},
	customizationStringNames = {},
	customizationValues = {},	junkDealerTypeNeeded = JUNKGENERIC,	junkMinValue = 7,	junkMaxValue = 60,
}

addLootItemTemplate("krayt_dragon_scales", krayt_dragon_scales)
