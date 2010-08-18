/*
 *	server/zone/objects/building/tutorial/TutorialBuildingObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef TUTORIALBUILDINGOBJECT_H_
#define TUTORIALBUILDINGOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace objects {
namespace building {
namespace tutorial {
namespace events {

class UnloadBuildingTask;

} // namespace events
} // namespace tutorial
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::tutorial::events;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace cell {

class CellObject;

} // namespace cell
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::cell;

#include "server/zone/objects/building/BuildingObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace tutorial {

class TutorialBuildingObject : public BuildingObject {
public:
	TutorialBuildingObject();

	void removeFromZone();

	void initializeTransientMembers();

	void onEnter(PlayerCreature* player);

	void onExit(PlayerCreature* player);

	void clearUnloadEvent();

protected:
	TutorialBuildingObject(DummyConstructorParameter* param);

	virtual ~TutorialBuildingObject();

	friend class TutorialBuildingObjectHelper;
};

} // namespace tutorial
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::tutorial;

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace tutorial {

class TutorialBuildingObjectImplementation : public BuildingObjectImplementation {
protected:
	UnloadBuildingTask* unloadTask;

public:
	TutorialBuildingObjectImplementation();

	TutorialBuildingObjectImplementation(DummyConstructorParameter* param);

	void removeFromZone();

	void initializeTransientMembers();

	void onEnter(PlayerCreature* player);

	void onExit(PlayerCreature* player);

	void clearUnloadEvent();

protected:
	void dequeueUnloadEvent();

	void enqueueUnloadEvent();

public:
	TutorialBuildingObject* _this;

	operator const TutorialBuildingObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~TutorialBuildingObjectImplementation();

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

	friend class TutorialBuildingObject;
};

class TutorialBuildingObjectAdapter : public BuildingObjectAdapter {
public:
	TutorialBuildingObjectAdapter(TutorialBuildingObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void removeFromZone();

	void initializeTransientMembers();

	void onEnter(PlayerCreature* player);

	void onExit(PlayerCreature* player);

	void clearUnloadEvent();

};

class TutorialBuildingObjectHelper : public DistributedObjectClassHelper, public Singleton<TutorialBuildingObjectHelper> {
	static TutorialBuildingObjectHelper* staticInitializer;

public:
	TutorialBuildingObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<TutorialBuildingObjectHelper>;
};

} // namespace tutorial
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::tutorial;

#endif /*TUTORIALBUILDINGOBJECT_H_*/
