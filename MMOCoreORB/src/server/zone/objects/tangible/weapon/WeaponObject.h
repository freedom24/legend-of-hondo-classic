/*
 *	server/zone/objects/tangible/weapon/WeaponObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef WEAPONOBJECT_H_
#define WEAPONOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace powerup {

class PowerupObject;

} // namespace powerup
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::powerup;

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "server/zone/objects/scene/SceneObjectType.h"

#include "server/zone/templates/tangible/SharedWeaponObjectTemplate.h"

#include "server/zone/objects/tangible/Container.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/Vector.h"

#include "system/lang/String.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace weapon {

class WeaponObject : public TangibleObject {
public:
	static const int NONE = 0;

	static const int LIGHT = 1;

	static const int MEDIUM = 2;

	static const int HEAVY = 3;

	static const int KINETIC = 1;

	static const int ENERGY = 2;

	static const int BLAST = 4;

	static const int STUN = 8;

	static const int LIGHTSABER = 16;

	static const int HEAT = 32;

	static const int COLD = 64;

	static const int ACID = 128;

	static const int ELECTRICITY = 256;

	static const int FORCE = 512;

	static const int MELEEATTACK = 0;

	static const int RANGEDATTACK = 1;

	static const int FORCEATTACK = 2;

	static const int TRAPATTACK = 3;

	static const int GRENADEATTACK = 4;

	static const int HEAVYACIDBEAMATTACK = 14;

	static const int HEAVYLIGHTNINGBEAMATTACK = 15;

	static const int HEAVYPARTICLEBEAMATTACK = 17;

	static const int HEAVYROCKETLAUNCHERATTACK = 18;

	static const int HEAVYLAUNCHERATTACK = 19;

	WeaponObject();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void sendContainerTo(CreatureObject* player);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	void createChildObjects();

	bool isCertifiedFor(CreatureObject* object);

	Vector<String>* getDamageModifiers();

	Vector<String>* getSpeedModifiers();

	Vector<String>* getCreatureAccuracyModifiers();

	Vector<String>* getCreatureAimModifiers();

	Vector<String>* getDefenderDefenseModifiers();

	Vector<String>* getDefenderSecondaryDefenseModifiers();

	Vector<String>* getDefenderToughnessModifiers();

	void setCertified(bool cert);

	int getAttackType();

	void setAttackType(int a);

	bool isCertified();

	int getPointBlankAccuracy(bool withPup = true);

	void setPointBlankAccuracy(int value);

	int getPointBlankRange(bool withPup = true);

	int getIdealRange(bool withPup = true);

	void setIdealRange(int value);

	int getMaxRange(bool withPup = true);

	void setMaxRange(int value);

	int getIdealAccuracy(bool withPup = true);

	void setIdealAccuracy(int value);

	int getArmorPiercing();

	int getMaxRangeAccuracy(bool withPup = true);

	void setMaxRangeAccuracy(int value);

	float getAttackSpeed(bool withPup = true);

	void setAttackSpeed(float value);

	float getMaxDamage(bool withPup = true);

	void setMaxDamage(float value);

	float getMinDamage(bool withPup = true);

	void setMinDamage(float value);

	float getWoundsRatio(bool withPup = true);

	void setWoundsRatio(float value);

	float getDamageRadius(bool withPup = true);

	void setDamageRadius(float value);

	int getHealthAttackCost(bool withPup = true);

	void setHealthAttackCost(int value);

	int getActionAttackCost(bool withPup = true);

	void setActionAttackCost(int value);

	int getMindAttackCost(bool withPup = true);

	void setMindAttackCost(int value);

	int getForceCost();

	void setForceCost(int value);

	int getBladeColor();

	void setBladeColor(int value);

	int getDamageType();

	String getXpType();

	int getNumberOfDots();

	int getDotType(int index);

	int getDotAttribute(int index);

	int getDotStrength(int index);

	int getDotDuration(int index);

	int getDotPotency(int index);

	int getDotUses(int index);

	void addDotType(int t);

	void addDotAttribute(int a);

	void addDotStrength(int s);

	void addDotDuration(int du);

	void addDotPotency(int po);

	void addDotUses(int u);

	void setDotUses(int u, int index);

	String getWeaponType();

	bool isUnarmedWeapon();

	bool isMeleeWeapon();

	bool isRangedWeapon();

	bool isRifleWeapon();

	bool isThrownWeapon();

	bool isHeavyWeapon();

	bool isSpecialHeavyWeapon();

	bool isLightningRifle();

	bool isFlameThrower();

	bool isHeavyAcidRifle();

	bool isCarbineWeapon();

	bool isPistolWeapon();

	bool isOneHandMeleeWeapon();

	bool isPolearmWeaponObject();

	bool isTwoHandMeleeWeapon();

	bool isMineWeapon();

	bool isJediWeapon();

	bool isJediOneHandedWeapon();

	bool isJediTwoHandedWeapon();

	bool isJediPolearmWeapon();

	bool isWeaponObject();

	bool hasPowerup();

	void applyPowerup(CreatureObject* player, PowerupObject* pup);

	PowerupObject* removePowerup();

	void decreasePowerupUses(CreatureObject* player);

	String repairAttempt(int repairChance);

	void decay(CreatureObject* user, float damage);

	void setDamageSlice(float value);

	void setSpeedSlice(float value);

	void applySkillModsTo(CreatureObject* creature, bool doCheck = true);

	void removeSkillModsFrom(CreatureObject* creature);

	void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient = true);

	VectorMap<String, int>* getWearableSkillMods();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	WeaponObject(DummyConstructorParameter* param);

	virtual ~WeaponObject();

	friend class WeaponObjectHelper;
};

} // namespace weapon
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::weapon;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace weapon {

class WeaponObjectImplementation : public TangibleObjectImplementation {
protected:
	int attackType;

	String weaponEffect;

	int weaponEffectIndex;

	bool certified;

	int armorPiercing;

	int pointBlankAccuracy;

	int pointBlankRange;

	int idealRange;

	int idealAccuracy;

	int maxRange;

	int maxRangeAccuracy;

	int damageType;

	float attackSpeed;

	float minDamage;

	float maxDamage;

	float damageRadius;

	float woundsRatio;

	int healthAttackCost;

	int actionAttackCost;

	int mindAttackCost;

	int forceCost;

	int bladeColor;

	ManagedReference<PowerupObject* > powerupObject;

	float damageSlice;

	float speedSlice;

	Vector<int> dotType;

	Vector<int> dotAttribute;

	Vector<int> dotStrength;

	Vector<int> dotDuration;

	Vector<int> dotPotency;

	Vector<int> dotUses;

	Reference<SharedWeaponObjectTemplate* > weaponTemplate;

	VectorMap<String, int> wearableSkillMods;

public:
	static const int NONE = 0;

	static const int LIGHT = 1;

	static const int MEDIUM = 2;

	static const int HEAVY = 3;

	static const int KINETIC = 1;

	static const int ENERGY = 2;

	static const int BLAST = 4;

	static const int STUN = 8;

	static const int LIGHTSABER = 16;

	static const int HEAT = 32;

	static const int COLD = 64;

	static const int ACID = 128;

	static const int ELECTRICITY = 256;

	static const int FORCE = 512;

	static const int MELEEATTACK = 0;

	static const int RANGEDATTACK = 1;

	static const int FORCEATTACK = 2;

	static const int TRAPATTACK = 3;

	static const int GRENADEATTACK = 4;

	static const int HEAVYACIDBEAMATTACK = 14;

	static const int HEAVYLIGHTNINGBEAMATTACK = 15;

	static const int HEAVYPARTICLEBEAMATTACK = 17;

	static const int HEAVYROCKETLAUNCHERATTACK = 18;

	static const int HEAVYLAUNCHERATTACK = 19;

	WeaponObjectImplementation();

	WeaponObjectImplementation(DummyConstructorParameter* param);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void sendContainerTo(CreatureObject* player);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	void createChildObjects();

	bool isCertifiedFor(CreatureObject* object);

	Vector<String>* getDamageModifiers();

	Vector<String>* getSpeedModifiers();

	Vector<String>* getCreatureAccuracyModifiers();

	Vector<String>* getCreatureAimModifiers();

	Vector<String>* getDefenderDefenseModifiers();

	Vector<String>* getDefenderSecondaryDefenseModifiers();

	Vector<String>* getDefenderToughnessModifiers();

	void setCertified(bool cert);

	int getAttackType();

	void setAttackType(int a);

	bool isCertified();

	int getPointBlankAccuracy(bool withPup = true);

	void setPointBlankAccuracy(int value);

	int getPointBlankRange(bool withPup = true);

	int getIdealRange(bool withPup = true);

	void setIdealRange(int value);

	int getMaxRange(bool withPup = true);

	void setMaxRange(int value);

	int getIdealAccuracy(bool withPup = true);

	void setIdealAccuracy(int value);

	int getArmorPiercing();

	int getMaxRangeAccuracy(bool withPup = true);

	void setMaxRangeAccuracy(int value);

	float getAttackSpeed(bool withPup = true);

	void setAttackSpeed(float value);

	float getMaxDamage(bool withPup = true);

	void setMaxDamage(float value);

	float getMinDamage(bool withPup = true);

	void setMinDamage(float value);

	float getWoundsRatio(bool withPup = true);

	void setWoundsRatio(float value);

	float getDamageRadius(bool withPup = true);

	void setDamageRadius(float value);

	int getHealthAttackCost(bool withPup = true);

	void setHealthAttackCost(int value);

	int getActionAttackCost(bool withPup = true);

	void setActionAttackCost(int value);

	int getMindAttackCost(bool withPup = true);

	void setMindAttackCost(int value);

	int getForceCost();

	void setForceCost(int value);

	int getBladeColor();

	void setBladeColor(int value);

	int getDamageType();

	String getXpType();

	int getNumberOfDots();

	int getDotType(int index);

	int getDotAttribute(int index);

	int getDotStrength(int index);

	int getDotDuration(int index);

	int getDotPotency(int index);

	int getDotUses(int index);

	void addDotType(int t);

	void addDotAttribute(int a);

	void addDotStrength(int s);

	void addDotDuration(int du);

	void addDotPotency(int po);

	void addDotUses(int u);

	void setDotUses(int u, int index);

	String getWeaponType();

	bool isUnarmedWeapon();

	bool isMeleeWeapon();

	bool isRangedWeapon();

	bool isRifleWeapon();

	bool isThrownWeapon();

	bool isHeavyWeapon();

	bool isSpecialHeavyWeapon();

	bool isLightningRifle();

	bool isFlameThrower();

	bool isHeavyAcidRifle();

	bool isCarbineWeapon();

	bool isPistolWeapon();

	bool isOneHandMeleeWeapon();

	bool isPolearmWeaponObject();

	bool isTwoHandMeleeWeapon();

	bool isMineWeapon();

	bool isJediWeapon();

	bool isJediOneHandedWeapon();

	bool isJediTwoHandedWeapon();

	bool isJediPolearmWeapon();

	bool isWeaponObject();

	bool hasPowerup();

	void applyPowerup(CreatureObject* player, PowerupObject* pup);

	PowerupObject* removePowerup();

	void decreasePowerupUses(CreatureObject* player);

	String repairAttempt(int repairChance);

	void decay(CreatureObject* user, float damage);

	void setDamageSlice(float value);

	void setSpeedSlice(float value);

	virtual void applySkillModsTo(CreatureObject* creature, bool doCheck = true);

	virtual void removeSkillModsFrom(CreatureObject* creature);

	virtual void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient = true);

	VectorMap<String, int>* getWearableSkillMods();

	WeakReference<WeaponObject*> _this;

	operator const WeaponObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~WeaponObjectImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class WeaponObject;
};

class WeaponObjectAdapter : public TangibleObjectAdapter {
public:
	WeaponObjectAdapter(WeaponObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void sendContainerTo(CreatureObject* player);

	void createChildObjects();

	bool isCertifiedFor(CreatureObject* object);

	void setCertified(bool cert);

	int getAttackType();

	void setAttackType(int a);

	bool isCertified();

	int getPointBlankAccuracy(bool withPup);

	void setPointBlankAccuracy(int value);

	int getPointBlankRange(bool withPup);

	int getIdealRange(bool withPup);

	void setIdealRange(int value);

	int getMaxRange(bool withPup);

	void setMaxRange(int value);

	int getIdealAccuracy(bool withPup);

	void setIdealAccuracy(int value);

	int getArmorPiercing();

	int getMaxRangeAccuracy(bool withPup);

	void setMaxRangeAccuracy(int value);

	float getAttackSpeed(bool withPup);

	void setAttackSpeed(float value);

	float getMaxDamage(bool withPup);

	void setMaxDamage(float value);

	float getMinDamage(bool withPup);

	void setMinDamage(float value);

	float getWoundsRatio(bool withPup);

	void setWoundsRatio(float value);

	float getDamageRadius(bool withPup);

	void setDamageRadius(float value);

	int getHealthAttackCost(bool withPup);

	void setHealthAttackCost(int value);

	int getActionAttackCost(bool withPup);

	void setActionAttackCost(int value);

	int getMindAttackCost(bool withPup);

	void setMindAttackCost(int value);

	int getForceCost();

	void setForceCost(int value);

	int getBladeColor();

	void setBladeColor(int value);

	int getDamageType();

	String getXpType();

	int getNumberOfDots();

	int getDotType(int index);

	int getDotAttribute(int index);

	int getDotStrength(int index);

	int getDotDuration(int index);

	int getDotPotency(int index);

	int getDotUses(int index);

	void addDotType(int t);

	void addDotAttribute(int a);

	void addDotStrength(int s);

	void addDotDuration(int du);

	void addDotPotency(int po);

	void addDotUses(int u);

	void setDotUses(int u, int index);

	String getWeaponType();

	bool isUnarmedWeapon();

	bool isMeleeWeapon();

	bool isRangedWeapon();

	bool isRifleWeapon();

	bool isThrownWeapon();

	bool isHeavyWeapon();

	bool isSpecialHeavyWeapon();

	bool isLightningRifle();

	bool isFlameThrower();

	bool isHeavyAcidRifle();

	bool isCarbineWeapon();

	bool isPistolWeapon();

	bool isOneHandMeleeWeapon();

	bool isPolearmWeaponObject();

	bool isTwoHandMeleeWeapon();

	bool isMineWeapon();

	bool isJediWeapon();

	bool isJediOneHandedWeapon();

	bool isJediTwoHandedWeapon();

	bool isJediPolearmWeapon();

	bool isWeaponObject();

	bool hasPowerup();

	void applyPowerup(CreatureObject* player, PowerupObject* pup);

	PowerupObject* removePowerup();

	void decreasePowerupUses(CreatureObject* player);

	String repairAttempt(int repairChance);

	void decay(CreatureObject* user, float damage);

	void setDamageSlice(float value);

	void setSpeedSlice(float value);

	void applySkillModsTo(CreatureObject* creature, bool doCheck);

	void removeSkillModsFrom(CreatureObject* creature);

	void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient);

};

class WeaponObjectHelper : public DistributedObjectClassHelper, public Singleton<WeaponObjectHelper> {
	static WeaponObjectHelper* staticInitializer;

public:
	WeaponObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<WeaponObjectHelper>;
};

} // namespace weapon
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::weapon;

#endif /*WEAPONOBJECT_H_*/
