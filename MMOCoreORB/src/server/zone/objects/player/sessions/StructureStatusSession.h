/*
 *	server/zone/objects/player/sessions/StructureStatusSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef STRUCTURESTATUSSESSION_H_
#define STRUCTURESTATUSSESSION_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "engine/util/Facade.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class StructureStatusSession : public Facade {
public:
	StructureStatusSession(StructureObject* structure);

	int initializeSession();

	int updateStatus();

	int cancelSession();

	int clearSession();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	StructureStatusSession(DummyConstructorParameter* param);

	virtual ~StructureStatusSession();

	friend class StructureStatusSessionHelper;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class StructureStatusSessionImplementation : public FacadeImplementation {
protected:
	ManagedWeakReference<StructureObject* > structureObject;

public:
	StructureStatusSessionImplementation(StructureObject* structure);

	StructureStatusSessionImplementation(DummyConstructorParameter* param);

	int initializeSession();

	int updateStatus();

	int cancelSession();

	int clearSession();

	WeakReference<StructureStatusSession*> _this;

	operator const StructureStatusSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~StructureStatusSessionImplementation();

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

	friend class StructureStatusSession;
};

class StructureStatusSessionAdapter : public FacadeAdapter {
public:
	StructureStatusSessionAdapter(StructureStatusSession* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int initializeSession();

	int updateStatus();

	int cancelSession();

	int clearSession();

};

class StructureStatusSessionHelper : public DistributedObjectClassHelper, public Singleton<StructureStatusSessionHelper> {
	static StructureStatusSessionHelper* staticInitializer;

public:
	StructureStatusSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<StructureStatusSessionHelper>;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

#endif /*STRUCTURESTATUSSESSION_H_*/
