/*
 *	server/zone/objects/tangible/weapon/PistolWeaponObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef PISTOLWEAPONOBJECT_H_
#define PISTOLWEAPONOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/tangible/weapon/RangedWeaponObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace weapon {

class PistolWeaponObject : public RangedWeaponObject {
public:
	PistolWeaponObject();

	void initializePrivateData();

	void initializeTransientMembers();

	bool isPistolWeapon();

protected:
	PistolWeaponObject(DummyConstructorParameter* param);

	virtual ~PistolWeaponObject();

	friend class PistolWeaponObjectHelper;
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

class PistolWeaponObjectImplementation : public RangedWeaponObjectImplementation {

public:
	PistolWeaponObjectImplementation();

	PistolWeaponObjectImplementation(DummyConstructorParameter* param);

	void initializePrivateData();

	void initializeTransientMembers();

	bool isPistolWeapon();

	PistolWeaponObject* _this;

	operator const PistolWeaponObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~PistolWeaponObjectImplementation();

	TransactionalObject* clone();

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

	friend class PistolWeaponObject;
	friend class TransactionalObjectHandle<PistolWeaponObjectImplementation*>;
};

class PistolWeaponObjectAdapter : public RangedWeaponObjectAdapter {
public:
	PistolWeaponObjectAdapter(PistolWeaponObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializePrivateData();

	void initializeTransientMembers();

	bool isPistolWeapon();

};

class PistolWeaponObjectHelper : public DistributedObjectClassHelper, public Singleton<PistolWeaponObjectHelper> {
	static PistolWeaponObjectHelper* staticInitializer;

public:
	PistolWeaponObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PistolWeaponObjectHelper>;
};

} // namespace weapon
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::weapon;

#endif /*PISTOLWEAPONOBJECT_H_*/
