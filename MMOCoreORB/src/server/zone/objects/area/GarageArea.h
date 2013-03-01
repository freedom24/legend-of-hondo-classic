/*
 *	server/zone/objects/area/GarageArea.h generated by engine3 IDL compiler 0.60
 */

#ifndef GARAGEAREA_H_
#define GARAGEAREA_H_

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

#include "server/zone/objects/area/ActiveArea.h"

namespace server {
namespace zone {
namespace objects {
namespace area {

class GarageArea : public ActiveArea {
public:
	GarageArea();

	void notifyEnter(SceneObject* player);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	GarageArea(DummyConstructorParameter* param);

	virtual ~GarageArea();

	friend class GarageAreaHelper;
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

class GarageAreaImplementation : public ActiveAreaImplementation {

public:
	GarageAreaImplementation();

	GarageAreaImplementation(DummyConstructorParameter* param);

	void notifyEnter(SceneObject* player);

	WeakReference<GarageArea*> _this;

	operator const GarageArea*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~GarageAreaImplementation();

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

	friend class GarageArea;
};

class GarageAreaAdapter : public ActiveAreaAdapter {
public:
	GarageAreaAdapter(GarageArea* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void notifyEnter(SceneObject* player);

};

class GarageAreaHelper : public DistributedObjectClassHelper, public Singleton<GarageAreaHelper> {
	static GarageAreaHelper* staticInitializer;

public:
	GarageAreaHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<GarageAreaHelper>;
};

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#endif /*GARAGEAREA_H_*/
