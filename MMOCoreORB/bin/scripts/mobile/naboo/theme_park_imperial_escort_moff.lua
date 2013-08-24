theme_park_imperial_escort_moff = Creature:new {
	objectName = "",
	customName = "escort",
	socialGroup = "imperial",
	pvpFaction = "imperial",
	faction = "imperial",
	level = 4,
	chanceHit = 0.24,
	damageMin = 40,
	damageMax = 45,
	baseXp = 62,
	baseHAM = 113,
	baseHAMmax = 138,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
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
	optionsBitmask = 264,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_imperial_moff_m.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "theme_park_imperial_mission_target_convotemplate",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(theme_park_imperial_escort_moff, "theme_park_imperial_escort_moff")
