--Automatically generated by SWGEmu Spawn Tool v0.12 loot editor.
-- Legend of Hondo Customization
-- Increased min and max Effectiveness.
-- Increased min and max Integrity.

kliknik_chitin_armor_segment = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "",
	directObjectTemplate = "object/tangible/component/armor/armor_segment_chitin_kliknick.iff",
	craftingValues = {
		{"armor_special_type",0,0,0},
		{"armor_effectiveness",7,15,10},
		{"armor_integrity",1500,2500,0},
		{"armor_health_encumbrance",-6,-14,0},
		{"armor_action_encumbrance",-6,-14,0},
		{"armor_mind_encumbrance",-6,-14,0},
		{"useCount",1,10,0},
	},
	customizationStringNames = {},
	customizationValues = {},	junkDealerTypeNeeded = JUNKGENERIC,	junkMinValue = 7,	junkMaxValue = 60,
}

addLootItemTemplate("kliknik_chitin_armor_segment", kliknik_chitin_armor_segment)