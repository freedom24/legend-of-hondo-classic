/*
 *	server/zone/objects/tangible/pharmaceutical/StatePack.h generated by engine3 IDL compiler 0.60
 */

#ifndef STATEPACK_H_
#define STATEPACK_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

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

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

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
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

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

#include "server/zone/templates/tangible/StatePackTemplate.h"

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "server/zone/objects/creature/CreatureState.h"

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class StatePack : public PharmaceuticalObject {
public:
	StatePack();

	void updateCraftingValues(ManufactureSchematic* schematic);

	void loadTemplateData(SharedObjectTemplate* templateData);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	unsigned long long getState();

	bool isStatePack();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	StatePack(DummyConstructorParameter* param);

	virtual ~StatePack();

	friend class StatePackHelper;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class StatePackImplementation : public PharmaceuticalObjectImplementation {
protected:
	unsigned long long state;

public:
	StatePackImplementation();

	StatePackImplementation(DummyConstructorParameter* param);

	void updateCraftingValues(ManufactureSchematic* schematic);

	void loadTemplateData(SharedObjectTemplate* templateData);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	unsigned long long getState();

	bool isStatePack();

	StatePack* _this;

	operator const StatePack*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~StatePackImplementation();

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

	friend class StatePack;
};

class StatePackAdapter : public PharmaceuticalObjectAdapter {
public:
	StatePackAdapter(StatePackImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	unsigned long long getState();

	bool isStatePack();

};

class StatePackHelper : public DistributedObjectClassHelper, public Singleton<StatePackHelper> {
	static StatePackHelper* staticInitializer;

public:
	StatePackHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<StatePackHelper>;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

#endif /*STATEPACK_H_*/
