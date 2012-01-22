/*
 * CreatureTemplate.h
 *
 *  Created on: Oct 9, 2010
 *      Author: dannuic
 */

#ifndef CREATURETEMPLATE_H_
#define CREATURETEMPLATE_H_

#include "engine/engine.h"
#include "server/zone/objects/creature/variables/CreatureAttackMap.h"
#include "server/zone/objects/creature/CreatureFlag.h"
#include "server/zone/managers/loot/lootgroup/LootGroupCollection.h"

namespace server {
namespace zone {
namespace templates {
namespace mobile {

class CreatureTemplate : public Object {
protected:
	String templateName;
	String customName;

	unsigned int armor;

	float kinetic;
	float energy;
	float electricity;
	float stun;
	float blast;
	float heat;
	float cold;
	float acid;
	float lightSaber;

	float tamingChance;
	unsigned int ferocity;

	String meatType;
	String boneType;
	String hideType;

	int milk;
	int hideAmount;
	int boneAmount;
	int meatAmount;

	String objectName;
	String socialGroup;
	String faction;
	String pvpFaction;

	int level;

	float chanceHit;
	int damageMin;
	int damageMax;
	int range;

	int baseXp;
	int baseHAM;
	int baseHAMmax;

	unsigned int pvpBitmask;
	unsigned int creatureBitmask;
	unsigned int diet;

	unsigned int lootChance;

	Vector<String> templates;

	LootGroupCollection lootgroups;

	Vector<String> weapons;

	CreatureAttackMap* attacks;
	uint32 conversationTemplate;
	uint32 optionsBitmask;

public:
	CreatureTemplate() {
		conversationTemplate = 0;
		kinetic = 0;
		energy = 0;
		electricity = 0;
		stun = 0;
		blast = 0;
		heat = 0;
		cold = 0;
		acid = 0;
		lightSaber = 0;

		meatType = "";
		boneType = "";
		hideType = "";
		objectName = "";
		socialGroup = "";
		faction = "";
		level = 0;
		chanceHit = 0.f;
		damageMin = 0;
		damageMax = 0;
		range = 0;
		baseXp = 0;
		baseHAM = 0;
		baseHAMmax = 0;
		armor = 0;
		meatType = "";
		meatAmount = 0;
		hideType = "";
		hideAmount = 0;
		boneType = "";
		boneAmount = 0;
		milk = 0.f;
		tamingChance = 0.f;
		ferocity = 0;
		pvpBitmask = 0;
		creatureBitmask = 0;
		diet = 0;
		optionsBitmask = 0;
		lootChance = 0;

		templates.removeAll();

		lootgroups.removeAll();

		weapons.removeAll();

		attacks = new CreatureAttackMap();
	}

	virtual ~CreatureTemplate() {
		templates.removeAll();

		weapons.removeAll();

		delete attacks;
		attacks = NULL;
	}

	void readObject(LuaObject* templateData) {
		conversationTemplate = String(templateData->getStringField("conversationTemplate").trim()).hashCode();
		meatType = templateData->getStringField("meatType").trim();
		boneType = templateData->getStringField("boneType").trim();
		hideType = templateData->getStringField("hideType").trim();
		objectName = templateData->getStringField("objectName").trim();
		customName = templateData->getStringField("customName").trim();
		socialGroup = templateData->getStringField("socialGroup").trim();
		faction = templateData->getStringField("faction").trim().toLowerCase();
		pvpFaction = templateData->getStringField("pvpFaction").trim().toLowerCase();
		level = templateData->getIntField("level");
		chanceHit = templateData->getFloatField("chanceHit");
		damageMin = templateData->getIntField("damageMin");
		damageMax = templateData->getIntField("damageMax");
		//range = templateData->getIntField("range");
		baseXp = templateData->getIntField("baseXp");
		baseHAM = templateData->getIntField("baseHAM");
		baseHAMmax = templateData->getIntField("baseHAMmax");
		armor = templateData->getIntField("armor");
		meatType = templateData->getStringField("meatType").trim();
		meatAmount = templateData->getIntField("meatAmount");
		hideType = templateData->getStringField("hideType").trim();
		hideAmount = templateData->getIntField("hideAmount");
		boneType = templateData->getStringField("boneType").trim();
		boneAmount = templateData->getIntField("boneAmount");
		milk = templateData->getIntField("milk");
		tamingChance = templateData->getFloatField("tamingChance");
		ferocity = templateData->getIntField("ferocity");
		pvpBitmask = templateData->getIntField("pvpBitmask");
		creatureBitmask = templateData->getIntField("creatureBitmask");
		diet = templateData->getIntField("diet");
		optionsBitmask = templateData->getIntField("optionsBitmask");
		lootChance = templateData->getIntField("lootChance");

		LuaObject res = templateData->getObjectField("resists");
		if (res.getTableSize() == 9) {
			kinetic = res.getFloatAt(1);
			energy = res.getFloatAt(2);
			blast = res.getFloatAt(3);
			heat = res.getFloatAt(4);
			cold = res.getFloatAt(5);
			electricity = res.getFloatAt(6);
			acid = res.getFloatAt(7);
			stun = res.getFloatAt(8);
			lightSaber = res.getFloatAt(9);
		}

		res.pop();

		LuaObject temps = templateData->getObjectField("templates");
		if (temps.isValidTable()) {
			for (int i = 1; i <= temps.getTableSize(); ++i) {
				templates.add(temps.getStringAt(i).trim());
			}
		}

		temps.pop();

		LuaObject loots = templateData->getObjectField("lootgroups");
		if (loots.isValidTable()) {
			lua_State* L = loots.getLuaState();
			for (int i = 1; i <= loots.getTableSize(); ++i) {
				lua_rawgeti(L, -1, i);
				LuaObject lootEntry(L);

				String lootGroup = lootEntry.getStringField("group");
				int chance = lootEntry.getIntField("chance");

				//We need to adjust the drop chance of each group to account for the overall drop chance of the creature.
				//Based on the following logic.
				//Group 1 = 70%
				//Group 2 = 30%
				//LootChance = 70% - We add a 30% no loot chance group
				//LootChance * Group1 / 100 = 49%
				//LootChance * Group2 / 100 = 21%
				//Group1 + Group2 + (100 - LootChance) = 100
				if (lootChance != 10000000.f)
					chance = round(((double) lootChance) * ((double) chance) / 10000000.f);

				LootGroupEntry entry(lootGroup.trim(), chance);
				lootgroups.put(entry);
				lootEntry.pop();
			}
		}

		loots.pop();

		LuaObject weps = templateData->getObjectField("weapons");
		if (weps.isValidTable()) {
			for (int i = 1; i <= weps.getTableSize(); ++i) {
				weapons.add(weps.getStringAt(i).trim());
			}
		}

		weps.pop();

		LuaObject attackList = templateData->getObjectField("attacks");
		if (attackList.isValidTable()) {
			int size = attackList.getTableSize();
			lua_State* L = attackList.getLuaState();
			for (int i = 1; i <= size; ++i) {
				lua_rawgeti(L, -1, i);
				LuaObject atk(L);

				if (atk.isValidTable()) {
					int atkSize = atk.getTableSize();
					if (atkSize == 2) {
						String com = atk.getStringAt(1).trim();
						String arg = atk.getStringAt(2).trim();

						attacks->addAttack(com, arg);
					}
				}

				atk.pop();
			}
		}

		attackList.pop();
	}

	inline float getKinetic() {
		return kinetic;
	}

	inline float getEnergy() {
		return energy;
	}

	inline float getElectricity() {
		return electricity;
	}

	inline float getStun() {
		return stun;
	}

	inline float getBlast() {
		return blast;
	}

	inline float getHeat() {
		return heat;
	}

	inline float getCold() {
		return cold;
	}

	inline float getAcid() {
		return acid;
	}

	inline float getLightSaber() {
		return lightSaber;
	}

	inline int getLootChance() {
		return lootChance;
	}

	inline bool isStalker() {
		return creatureBitmask & CreatureFlag::STALKER;
	}

	inline bool isBaby() {
		return creatureBitmask & CreatureFlag::BABY;
	}

	inline bool isKiller() {
		return creatureBitmask & CreatureFlag::KILLER;
	}

	inline bool isPack() {
		return creatureBitmask & CreatureFlag::PACK;
	}

	inline bool isHerd() {
		return creatureBitmask & CreatureFlag::HERD;
	}

	inline float getTame() {
		return tamingChance;
	}

	inline String& getMeatType() {
		return meatType;
	}

	inline String& getBoneType() {
		return boneType;
	}

	inline String& getHideType() {
		return hideType;
	}

	inline String& getCustomName() {
		return customName;
	}

	inline float getMilk() {
		return milk;
	}

	inline float getHideMax() {
		return hideAmount;
	}

	inline float getBoneMax() {
		return boneAmount;
	}

	inline float getMeatMax() {
		return meatAmount;
	}

	inline unsigned int getFerocity() {
		return ferocity;
	}

	inline unsigned int getArmor() {
		return armor;
	}

	inline String getObjectName() {
		return objectName;
	}

	inline String getSocialGroup() {
		return socialGroup;
	}

	inline uint32 getConversationTemplate() {
		return conversationTemplate;
	}

	inline uint32 getOptionsBitmask() {
		return optionsBitmask;
	}

	inline String getFaction() {
		return faction;
	}

	inline int getLevel() {
		return level;
	}

	inline float getChanceHit() {
		return chanceHit;
	}

	inline int getDamageMin() {
		return damageMin;
	}

	inline int getDamageMax() {
		return damageMax;
	}

	inline int getRange() {
		return range;
	}

	inline int getBaseXp() {
		return baseXp;
	}

	inline int getBaseHAM() {
		return baseHAM;
	}

	inline int getBaseHAMmax() {
		return baseHAMmax;
	}

	inline uint32 getPvpBitmask() {
		return pvpBitmask;
	}

	inline uint32 getCreatureBitmask() {
		return creatureBitmask;
	}

	inline uint32 getDiet() {
		return diet;
	}

	inline Vector<String>& getTemplates() {
		return templates;
	}

	inline LootGroupCollection* getLootGroups() {
		return &lootgroups;
	}

	inline Vector<String>& getWeapons() {
		return weapons;
	}

	inline CreatureAttackMap* getAttacks() {
		return attacks;
	}

	inline String getPvpFaction() {
		return pvpFaction;
	}

	void setTemplateName(const String& t) {
		templateName = t;
	}

	inline String getTemplateName() {
		return templateName;
	}
};

}
}
}
}

using namespace server::zone::templates::mobile;

#endif /* CREATURETEMPLATE_H_ */
