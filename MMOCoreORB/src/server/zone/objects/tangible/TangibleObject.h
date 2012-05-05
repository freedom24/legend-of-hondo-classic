/*
 *	server/zone/objects/tangible/TangibleObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef TANGIBLEOBJECT_H_
#define TANGIBLEOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

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
namespace objects {
namespace manufactureschematic {

class ManufactureSchematic;

} // namespace manufactureschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::manufactureschematic;

namespace server {
namespace zone {
namespace objects {
namespace factorycrate {

class FactoryCrate;

} // namespace factorycrate
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::factorycrate;

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
namespace threat {

class ThreatMap;

} // namespace threat
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::threat;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace weapon {

class WeaponObject;

} // namespace weapon
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::weapon;

#include "server/zone/objects/tangible/variables/SkillModMap.h"

#include "server/zone/objects/creature/CreatureFlag.h"

#include "server/zone/objects/tangible/OptionBitmask.h"

#include "server/zone/objects/scene/SceneObjectType.h"

#include "server/zone/objects/scene/variables/CustomizationVariables.h"

#include "server/zone/objects/scene/variables/DeltaVector.h"

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/Vector.h"

#include "system/util/SortedVector.h"

#include "engine/log/Logger.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject : public SceneObject {
public:
	TangibleObject();

	void initializeMembers();

	void addTemplateSkillMods(TangibleObject* targetObject);

	void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient = true);

	void removeSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient = true);

	void removeTemplateSkillMods(TangibleObject* tangibleObject);

	VectorMap<String, int>* getTemplateSkillMods();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void setCustomObjectName(const UnicodeString& name, bool notifyClient);

	void sendBaselinesTo(SceneObject* player);

	void synchronizedUIListen(SceneObject* player, int value);

	void synchronizedUIStopListen(SceneObject* player, int value);

	void setDefender(SceneObject* defender);

	void addDefender(SceneObject* defender);

	void removeDefender(SceneObject* defender);

	void removeDefenders();

	void setCombatState();

	void setUseCount(unsigned int newUseCount, bool notifyClient = true);

	void setCountdownTimer(unsigned int newCount, bool notifyClient = true);

	void decreaseUseCount();

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void clearCombatState(bool clearDefenders = true);

	bool hasDefender(SceneObject* defender);

	bool isAttackableBy(CreatureObject* object);

	bool isAggressiveTo(CreatureObject* object);

	bool isHealableBy(CreatureObject* object);

	void sendPvpStatusTo(CreatureObject* player);

	int inflictDamage(TangibleObject* attacker, int damageType, float damage, bool destroy, bool notifyClient = true);

	int healDamage(TangibleObject* healer, int damageType, float damageToHeal, bool notifyClient = true);

	void setConditionDamage(float condDamage, bool notifyClient = true);

	void setCustomizationVariable(byte type, short value, bool notifyClient = true);

	void setCustomizationVariable(const String& type, short value, bool notifyClient = true);

	void setOptionsBitmask(unsigned int bitmask, bool notifyClient = true);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	int notifyObjectDestructionObservers(TangibleObject* attacker, int condition);

	void dropFromDefenderLists(TangibleObject* destructor);

	byte getUnknownByte();

	bool isKiller();

	bool isTicketCollector();

	bool isTicketObject();

	CustomizationVariables* getCustomizationVariables();

	int getUseCount();

	int getDisplayedUseCount();

	int getMaxCondition();

	void setMaxCondition(int maxCond, bool notifyClient = true);

	int getConditionDamage();

	int getVolume();

	void setComplexity(float value);

	float getComplexity();

	unsigned int getOptionsBitmask();

	int getLevel();

	unsigned int getPvpStatusBitmask();

	bool isTangibleObject();

	void getCustomizationString(String& variables);

	DeltaVector<ManagedReference<SceneObject* > >* getDefenderList();

	SceneObject* getMainDefender();

	bool isDestroyed();

	void setFaction(unsigned int crc);

	unsigned int getFaction();

	bool isRebel();

	bool isImperial();

	bool isNeutral();

	bool isSliceable();

	bool isSliced();

	void setSliceable(bool val);

	void setSliced(bool slice);

	bool isPharmaceuticalObject();

	void setCustomizationString(const String& vars);

	void setPvpStatusBitmask(int bitmask, bool notifyClient = true);

	void setCraftersName(String& name);

	String getCraftersName();

	void setSerialNumber(const String& serial);

	void setLevel(int lev);

	String getSerialNumber();

	ThreatMap* getThreatMap();

	void setInitialCraftingValues(ManufactureSchematic* manufactureSchematic, int assemblySuccess);

	bool applyComponentStats(ManufactureSchematic* manufactureSchematic);

	FactoryCrate* createFactoryCrate(bool insertSelf = false);

	bool canRepair(CreatureObject* player);

	void repair(CreatureObject* player);

	String repairAttempt(int repairChance);

	bool isBroken();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	TangibleObject(DummyConstructorParameter* param);

	virtual ~TangibleObject();

	String _return_getCraftersName;
	String _return_getSerialNumber;
	String _return_repairAttempt;

	friend class TangibleObjectHelper;
};

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObjectImplementation : public SceneObjectImplementation {
protected:
	bool targetable;

	float complexity;

	int volume;

	unsigned int faction;

	CustomizationVariables customizationVariables;

	float conditionDamage;

	int maxCondition;

	int useCount;

	short level;

	unsigned int optionsBitmask;

	unsigned int pvpStatusBitmask;

	byte unknownByte;

	String craftersName;

	String objectSerial;

	Reference<ThreatMap* > threatMap;

	DeltaVector<ManagedReference<SceneObject* > > defenderList;

	bool sliceable;

	bool sliced;

public:
	TangibleObjectImplementation();

	TangibleObjectImplementation(DummyConstructorParameter* param);

	void initializeMembers();

	virtual void addTemplateSkillMods(TangibleObject* targetObject);

	virtual void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient = true);

	virtual void removeSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient = true);

	virtual void removeTemplateSkillMods(TangibleObject* tangibleObject);

	VectorMap<String, int>* getTemplateSkillMods();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void setCustomObjectName(const UnicodeString& name, bool notifyClient);

	virtual void sendBaselinesTo(SceneObject* player);

	virtual void synchronizedUIListen(SceneObject* player, int value);

	virtual void synchronizedUIStopListen(SceneObject* player, int value);

	virtual void setDefender(SceneObject* defender);

	virtual void addDefender(SceneObject* defender);

	virtual void removeDefender(SceneObject* defender);

	virtual void removeDefenders();

	virtual void setCombatState();

	virtual void setUseCount(unsigned int newUseCount, bool notifyClient = true);

	void setCountdownTimer(unsigned int newCount, bool notifyClient = true);

	void decreaseUseCount();

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	virtual void clearCombatState(bool clearDefenders = true);

	bool hasDefender(SceneObject* defender);

	virtual bool isAttackableBy(CreatureObject* object);

	virtual bool isAggressiveTo(CreatureObject* object);

	virtual bool isHealableBy(CreatureObject* object);

	virtual void sendPvpStatusTo(CreatureObject* player);

	virtual int inflictDamage(TangibleObject* attacker, int damageType, float damage, bool destroy, bool notifyClient = true);

	virtual int healDamage(TangibleObject* healer, int damageType, float damageToHeal, bool notifyClient = true);

	void setConditionDamage(float condDamage, bool notifyClient = true);

	void setCustomizationVariable(byte type, short value, bool notifyClient = true);

	void setCustomizationVariable(const String& type, short value, bool notifyClient = true);

	void setOptionsBitmask(unsigned int bitmask, bool notifyClient = true);

	virtual void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	virtual int notifyObjectDestructionObservers(TangibleObject* attacker, int condition);

	void dropFromDefenderLists(TangibleObject* destructor);

	byte getUnknownByte();

	virtual bool isKiller();

	virtual bool isTicketCollector();

	virtual bool isTicketObject();

	CustomizationVariables* getCustomizationVariables();

	virtual int getUseCount();

	virtual int getDisplayedUseCount();

	int getMaxCondition();

	void setMaxCondition(int maxCond, bool notifyClient = true);

	int getConditionDamage();

	int getVolume();

	void setComplexity(float value);

	float getComplexity();

	unsigned int getOptionsBitmask();

	int getLevel();

	unsigned int getPvpStatusBitmask();

	bool isTangibleObject();

	void getCustomizationString(String& variables);

	DeltaVector<ManagedReference<SceneObject* > >* getDefenderList();

	SceneObject* getMainDefender();

	bool isDestroyed();

	void setFaction(unsigned int crc);

	unsigned int getFaction();

	bool isRebel();

	bool isImperial();

	bool isNeutral();

	bool isSliceable();

	bool isSliced();

	void setSliceable(bool val);

	void setSliced(bool slice);

	virtual bool isPharmaceuticalObject();

	void setCustomizationString(const String& vars);

	void setPvpStatusBitmask(int bitmask, bool notifyClient = true);

	void setCraftersName(String& name);

	virtual String getCraftersName();

	void setSerialNumber(const String& serial);

	void setLevel(int lev);

	virtual String getSerialNumber();

	ThreatMap* getThreatMap();

	void setInitialCraftingValues(ManufactureSchematic* manufactureSchematic, int assemblySuccess);

	bool applyComponentStats(ManufactureSchematic* manufactureSchematic);

	FactoryCrate* createFactoryCrate(bool insertSelf = false);

	bool canRepair(CreatureObject* player);

	void repair(CreatureObject* player);

	virtual String repairAttempt(int repairChance);

	bool isBroken();

protected:
	float getConditionReduction(float value);

public:
	WeakReference<TangibleObject*> _this;

	operator const TangibleObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~TangibleObjectImplementation();

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
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class TangibleObject;
};

class TangibleObjectAdapter : public SceneObjectAdapter {
public:
	TangibleObjectAdapter(TangibleObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeMembers();

	void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient);

	void removeSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient);

	void initializeTransientMembers();

	void setCustomObjectName(const UnicodeString& name, bool notifyClient);

	void sendBaselinesTo(SceneObject* player);

	void synchronizedUIListen(SceneObject* player, int value);

	void synchronizedUIStopListen(SceneObject* player, int value);

	void setDefender(SceneObject* defender);

	void addDefender(SceneObject* defender);

	void removeDefender(SceneObject* defender);

	void removeDefenders();

	void setCombatState();

	void setUseCount(unsigned int newUseCount, bool notifyClient);

	void setCountdownTimer(unsigned int newCount, bool notifyClient);

	void decreaseUseCount();

	void clearCombatState(bool clearDefenders);

	bool hasDefender(SceneObject* defender);

	bool isAttackableBy(CreatureObject* object);

	bool isAggressiveTo(CreatureObject* object);

	bool isHealableBy(CreatureObject* object);

	void sendPvpStatusTo(CreatureObject* player);

	int inflictDamage(TangibleObject* attacker, int damageType, float damage, bool destroy, bool notifyClient);

	int healDamage(TangibleObject* healer, int damageType, float damageToHeal, bool notifyClient);

	void setConditionDamage(float condDamage, bool notifyClient);

	void setCustomizationVariable(byte type, short value, bool notifyClient);

	void setCustomizationVariable(const String& type, short value, bool notifyClient);

	void setOptionsBitmask(unsigned int bitmask, bool notifyClient);

	int notifyObjectDestructionObservers(TangibleObject* attacker, int condition);

	void dropFromDefenderLists(TangibleObject* destructor);

	byte getUnknownByte();

	bool isKiller();

	bool isTicketCollector();

	bool isTicketObject();

	int getUseCount();

	int getDisplayedUseCount();

	int getMaxCondition();

	void setMaxCondition(int maxCond, bool notifyClient);

	int getConditionDamage();

	int getVolume();

	void setComplexity(float value);

	float getComplexity();

	unsigned int getOptionsBitmask();

	int getLevel();

	unsigned int getPvpStatusBitmask();

	bool isTangibleObject();

	void getCustomizationString(String& variables);

	SceneObject* getMainDefender();

	bool isDestroyed();

	void setFaction(unsigned int crc);

	unsigned int getFaction();

	bool isRebel();

	bool isImperial();

	bool isNeutral();

	bool isSliceable();

	bool isSliced();

	void setSliceable(bool val);

	void setSliced(bool slice);

	bool isPharmaceuticalObject();

	void setCustomizationString(const String& vars);

	void setPvpStatusBitmask(int bitmask, bool notifyClient);

	void setCraftersName(String& name);

	String getCraftersName();

	void setSerialNumber(const String& serial);

	void setLevel(int lev);

	String getSerialNumber();

	void setInitialCraftingValues(ManufactureSchematic* manufactureSchematic, int assemblySuccess);

	bool applyComponentStats(ManufactureSchematic* manufactureSchematic);

	FactoryCrate* createFactoryCrate(bool insertSelf);

	bool canRepair(CreatureObject* player);

	void repair(CreatureObject* player);

	String repairAttempt(int repairChance);

	bool isBroken();

protected:
	String _param1_addSkillMod__int_String_int_bool_;
	String _param1_removeSkillMod__int_String_int_bool_;
	UnicodeString _param0_setCustomObjectName__UnicodeString_bool_;
	String _param0_setCustomizationVariable__String_short_bool_;
	String _param0_getCustomizationString__String_;
	String _param0_setCustomizationString__String_;
	String _param0_setCraftersName__String_;
	String _param0_setSerialNumber__String_;
};

class TangibleObjectHelper : public DistributedObjectClassHelper, public Singleton<TangibleObjectHelper> {
	static TangibleObjectHelper* staticInitializer;

public:
	TangibleObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<TangibleObjectHelper>;
};

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

#endif /*TANGIBLEOBJECT_H_*/
