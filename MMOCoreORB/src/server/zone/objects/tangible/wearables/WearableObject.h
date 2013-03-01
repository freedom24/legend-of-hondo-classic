/*
 *	server/zone/objects/tangible/wearables/WearableObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef WEARABLEOBJECT_H_
#define WEARABLEOBJECT_H_

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

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "server/zone/objects/tangible/attachment/Attachment.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace wearables {

class WearableObject : public TangibleObject {
public:
	static const int MAXSOCKETS = 4;

	WearableObject();

	void initializeTransientMembers();

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void updateCraftingValues(CraftingValues* values, bool initialUpdate);

	void applyAttachment(CreatureObject* player, Attachment* attachment);

	void applySkillModsTo(CreatureObject* creature, bool doCheck = true);

	void removeSkillModsFrom(CreatureObject* creature);

	bool isWearableObject();

	bool isEquipped();

	int getMaxSockets();

	int socketsUsed();

	int socketsLeft();

	String repairAttempt(int repairChance);

	VectorMap<String, int>* getWearableSkillMods();

	void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient = true);

	void setMaxSockets(int maxSockets);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	WearableObject(DummyConstructorParameter* param);

	virtual ~WearableObject();

	friend class WearableObjectHelper;
};

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace wearables {

class WearableObjectImplementation : public TangibleObjectImplementation {
protected:
	int socketCount;

	bool socketsGenerated;

	bool objectCreatedPreUsedSocketCountFix;

	int usedSocketCount;

	int modsNotInSockets;

public:
	static const int MAXSOCKETS = 4;

protected:
	VectorMap<String, int> wearableSkillMods;

public:
	WearableObjectImplementation();

	WearableObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void updateCraftingValues(CraftingValues* values, bool initialUpdate);

	void applyAttachment(CreatureObject* player, Attachment* attachment);

	virtual void applySkillModsTo(CreatureObject* creature, bool doCheck = true);

	virtual void removeSkillModsFrom(CreatureObject* creature);

	bool isWearableObject();

	bool isEquipped();

	int getMaxSockets();

	int socketsUsed();

	int socketsLeft();

private:
	void generateSockets(CraftingValues* craftingValues);

public:
	String repairAttempt(int repairChance);

	VectorMap<String, int>* getWearableSkillMods();

	virtual void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient = true);

	void setMaxSockets(int maxSockets);

	WeakReference<WearableObject*> _this;

	operator const WearableObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~WearableObjectImplementation();

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

	friend class WearableObject;
};

class WearableObjectAdapter : public TangibleObjectAdapter {
public:
	WearableObjectAdapter(WearableObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void applyAttachment(CreatureObject* player, Attachment* attachment);

	void applySkillModsTo(CreatureObject* creature, bool doCheck);

	void removeSkillModsFrom(CreatureObject* creature);

	bool isWearableObject();

	bool isEquipped();

	int getMaxSockets();

	int socketsUsed();

	int socketsLeft();

	String repairAttempt(int repairChance);

	void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient);

	void setMaxSockets(int maxSockets);

};

class WearableObjectHelper : public DistributedObjectClassHelper, public Singleton<WearableObjectHelper> {
	static WearableObjectHelper* staticInitializer;

public:
	WearableObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<WearableObjectHelper>;
};

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

#endif /*WEARABLEOBJECT_H_*/
