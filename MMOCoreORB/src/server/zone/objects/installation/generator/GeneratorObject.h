/*
 *	server/zone/objects/installation/generator/GeneratorObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef GENERATOROBJECT_H_
#define GENERATOROBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#include "server/zone/objects/installation/InstallationObject.h"

namespace server {
namespace zone {
namespace objects {
namespace installation {

class GeneratorObject : public InstallationObject {
public:
	GeneratorObject();

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void synchronizedUIListen(SceneObject* player, int value);

	void synchronizedUIStopListen(SceneObject* player, int value);

	bool isGeneratorObject();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	GeneratorObject(DummyConstructorParameter* param);

	virtual ~GeneratorObject();

	friend class GeneratorObjectHelper;
};

} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation;

namespace server {
namespace zone {
namespace objects {
namespace installation {

class GeneratorObjectImplementation : public InstallationObjectImplementation {

public:
	GeneratorObjectImplementation();

	GeneratorObjectImplementation(DummyConstructorParameter* param);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void synchronizedUIListen(SceneObject* player, int value);

	void synchronizedUIStopListen(SceneObject* player, int value);

	bool isGeneratorObject();

	WeakReference<GeneratorObject*> _this;

	operator const GeneratorObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~GeneratorObjectImplementation();

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

	friend class GeneratorObject;
};

class GeneratorObjectAdapter : public InstallationObjectAdapter {
public:
	GeneratorObjectAdapter(GeneratorObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void synchronizedUIListen(SceneObject* player, int value);

	void synchronizedUIStopListen(SceneObject* player, int value);

	bool isGeneratorObject();

};

class GeneratorObjectHelper : public DistributedObjectClassHelper, public Singleton<GeneratorObjectHelper> {
	static GeneratorObjectHelper* staticInitializer;

public:
	GeneratorObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<GeneratorObjectHelper>;
};

} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation;

#endif /*GENERATOROBJECT_H_*/
