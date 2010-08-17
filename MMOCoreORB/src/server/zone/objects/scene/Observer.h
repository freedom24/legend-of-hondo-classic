/*
 *	server/zone/objects/scene/Observer.h generated by engine3 IDL compiler 0.60
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class Observable;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

#include "engine/core/ManagedObject.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class Observer : public ManagedObject {
public:
	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	unsigned long long getObjectID();

	int compareTo(Observer* obj);

protected:
	Observer(DummyConstructorParameter* param);

	virtual ~Observer();

	friend class ObserverHelper;
};

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class ObserverImplementation : public ManagedObjectImplementation {

public:
	ObserverImplementation();
	ObserverImplementation(DummyConstructorParameter* param);

	virtual int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	virtual unsigned long long getObjectID();

	int compareTo(Observer* obj);

	Observer* _this;

	operator const Observer*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~ObserverImplementation();

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

	friend class Observer;
	friend class TransactionalObjectHandle<ObserverImplementation*>;
};

class ObserverAdapter : public ManagedObjectAdapter {
public:
	ObserverAdapter(ObserverImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	unsigned long long getObjectID();

	int compareTo(Observer* obj);

};

class ObserverHelper : public DistributedObjectClassHelper, public Singleton<ObserverHelper> {
	static ObserverHelper* staticInitializer;

public:
	ObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ObserverHelper>;
};

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

#endif /*OBSERVER_H_*/
