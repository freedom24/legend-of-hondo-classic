coa3_tactical_imperial = Creature:new {
	objectName = "@mob/creature_names:coa3_tactical_imperial",
	randomNameType = NAME_GENERIC_TAG,
	socialGroup = "imperial",
	faction = "imperial",
	level = 25,
	chanceHit = 0.36,
	damageMin = 240,
	damageMax = 250,
	baseXp = 2443,
	baseHAM = 7200,
	baseHAMmax = 8800,
	armor = 0,
	resists = {0,0,0,0,0,0,0,0,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = NONE,
	creatureBitmask = NONE,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_imperial_officer_m_3.iff"},
	lootGroups = {},
	weapons = {"imperial_weapons_heavy"},
	conversationTemplate = "",
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(coa3_tactical_imperial, "coa3_tactical_imperial")