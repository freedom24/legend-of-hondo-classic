/*
 *	server/zone/objects/tangible/wearables/RobeObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef ROBEOBJECT_H_
#define ROBEOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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

#include "server/zone/templates/tangible/RobeObjectTemplate.h"

#include "server/zone/objects/tangible/wearables/WearableObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace wearables {

class RobeObject : public WearableObject {
public:
	RobeObject();

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	String getSkillRequired();

	bool isRobeObject();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	RobeObject(DummyConstructorParameter* param);

	virtual ~RobeObject();

	String _return_getSkillRequired;

	friend class RobeObjectHelper;
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

class RobeObjectImplementation : public WearableObjectImplementation {
protected:
	String skillRequired;

public:
	RobeObjectImplementation();

	RobeObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	String getSkillRequired();

	bool isRobeObject();

	WeakReference<RobeObject*> _this;

	operator const RobeObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~RobeObjectImplementation();

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

	friend class RobeObject;
};

class RobeObjectAdapter : public WearableObjectAdapter {
public:
	RobeObjectAdapter(RobeObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	String getSkillRequired();

	bool isRobeObject();

};

class RobeObjectHelper : public DistributedObjectClassHelper, public Singleton<RobeObjectHelper> {
	static RobeObjectHelper* staticInitializer;

public:
	RobeObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<RobeObjectHelper>;
};

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

#endif /*ROBEOBJECT_H_*/
