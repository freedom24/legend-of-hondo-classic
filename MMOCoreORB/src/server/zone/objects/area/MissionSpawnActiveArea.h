/*
 *	server/zone/objects/area/MissionSpawnActiveArea.h generated by engine3 IDL compiler 0.60
 */

#ifndef MISSIONSPAWNACTIVEAREA_H_
#define MISSIONSPAWNACTIVEAREA_H_

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
namespace objects {
namespace mission {

class DestroyMissionObjective;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#include "server/zone/objects/area/ActiveArea.h"

namespace server {
namespace zone {
namespace objects {
namespace area {

class MissionSpawnActiveArea : public ActiveArea {
public:
	MissionSpawnActiveArea();

	void notifyEnter(SceneObject* player);

	void setMissionObjective(DestroyMissionObjective* mission);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	MissionSpawnActiveArea(DummyConstructorParameter* param);

	virtual ~MissionSpawnActiveArea();

	friend class MissionSpawnActiveAreaHelper;
};

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace objects {
namespace area {

class MissionSpawnActiveAreaImplementation : public ActiveAreaImplementation {
protected:
	ManagedWeakReference<DestroyMissionObjective* > destroyMissionObjective;

public:
	MissionSpawnActiveAreaImplementation();

	MissionSpawnActiveAreaImplementation(DummyConstructorParameter* param);

	void notifyEnter(SceneObject* player);

	void setMissionObjective(DestroyMissionObjective* mission);

	WeakReference<MissionSpawnActiveArea*> _this;

	operator const MissionSpawnActiveArea*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~MissionSpawnActiveAreaImplementation();

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

	friend class MissionSpawnActiveArea;
};

class MissionSpawnActiveAreaAdapter : public ActiveAreaAdapter {
public:
	MissionSpawnActiveAreaAdapter(MissionSpawnActiveAreaImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void notifyEnter(SceneObject* player);

	void setMissionObjective(DestroyMissionObjective* mission);

};

class MissionSpawnActiveAreaHelper : public DistributedObjectClassHelper, public Singleton<MissionSpawnActiveAreaHelper> {
	static MissionSpawnActiveAreaHelper* staticInitializer;

public:
	MissionSpawnActiveAreaHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<MissionSpawnActiveAreaHelper>;
};

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#endif /*MISSIONSPAWNACTIVEAREA_H_*/
