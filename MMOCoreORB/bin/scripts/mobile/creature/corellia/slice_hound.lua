slice_hound = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "@mob/creature_names:bio_engineered_slice_hound",
	socialGroup = "Slice Hound",
	pvpFaction = "",
	faction = "",
	level = 9,
	chanceHit = 0.270000,
	damageMin = 120,
	damageMax = 130,
	range = 0,
	baseXp = 292,
	baseHAM = 450,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "meat_carnivore",
	meatAmount = 65,
	hideType = "hide_bristley",
	hideAmount = 35,
	boneType = "bone_mammal",
	boneAmount = 30,
	milk = 0,
	tamingChance = 0.250000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + HERD,
	diet = CARNIVORE,

	templates = {},
	weapons = {},
	attacks = {
		{"intimidationattack","intimidationChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(slice_hound, "slice_hound")
