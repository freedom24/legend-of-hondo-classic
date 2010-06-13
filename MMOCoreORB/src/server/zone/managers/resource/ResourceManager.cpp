/*
 *	server/zone/managers/resource/ResourceManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "ResourceManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	ResourceManagerStub
 */

ResourceManager::ResourceManager(ZoneServer* server, ZoneProcessServerImplementation* impl, ObjectManager* objectMan) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new ResourceManagerImplementation(server, impl, objectMan);
	_impl->_setStub(this);
}

ResourceManager::ResourceManager(DummyConstructorParameter* param) : ManagedObject(param) {
}

ResourceManager::~ResourceManager() {
}


void ResourceManager::stop() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->stop();
}

void ResourceManager::initialize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->initialize();
}

void ResourceManager::shiftResources() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->shiftResources();
}

int ResourceManager::notifyPostureChange(CreatureObject* object, int newPosture) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(object);
		method.addSignedIntParameter(newPosture);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceManagerImplementation*) _impl)->notifyPostureChange(object, newPosture);
}

void ResourceManager::sendResourceListForSurvey(PlayerCreature* playerCreature, const int toolType, const String& surveyType) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(playerCreature);
		method.addSignedIntParameter(toolType);
		method.addAsciiParameter(surveyType);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->sendResourceListForSurvey(playerCreature, toolType, surveyType);
}

void ResourceManager::sendSurvey(PlayerCreature* playerCreature, const String& resname) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(playerCreature);
		method.addAsciiParameter(resname);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->sendSurvey(playerCreature, resname);
}

void ResourceManager::sendSample(PlayerCreature* playerCreature, const String& resname, const String& sampleAnimation) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(playerCreature);
		method.addAsciiParameter(resname);
		method.addAsciiParameter(sampleAnimation);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->sendSample(playerCreature, resname, sampleAnimation);
}

void ResourceManager::getResourceListByType(Vector<ManagedReference<ResourceSpawn* > >& list, int type, int zoneid) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ResourceManagerImplementation*) _impl)->getResourceListByType(list, type, zoneid);
}

void ResourceManager::createResourceSpawn(PlayerCreature* playerCreature, const String& restype) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(playerCreature);
		method.addAsciiParameter(restype);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->createResourceSpawn(playerCreature, restype);
}

/*
 *	ResourceManagerImplementation
 */

ResourceManagerImplementation::ResourceManagerImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}

ResourceManagerImplementation::~ResourceManagerImplementation() {
}


void ResourceManagerImplementation::finalize() {
}

void ResourceManagerImplementation::_initializeImplementation() {
	_setClassHelper(ResourceManagerHelper::instance());

	_serializationHelperMethod();
}

void ResourceManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ResourceManager*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ResourceManagerImplementation::_getStub() {
	return _this;
}

ResourceManagerImplementation::operator const ResourceManager*() {
	return _this;
}

void ResourceManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ResourceManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ResourceManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ResourceManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ResourceManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ResourceManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ResourceManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ResourceManagerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("ResourceManager");

	addSerializableVariable("zoneServer", &zoneServer);
}

ResourceManagerImplementation::ResourceManagerImplementation(ZoneServer* server, ZoneProcessServerImplementation* impl, ObjectManager* objectMan) {
	_initializeImplementation();
	// server/zone/managers/resource/ResourceManager.idl(76):  		Logger.setLoggingName("ResourceManager");
	Logger::setLoggingName("ResourceManager");
	// server/zone/managers/resource/ResourceManager.idl(78):  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/managers/resource/ResourceManager.idl(79):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/resource/ResourceManager.idl(81):  		zoneServer = server;
	zoneServer = server;
	// server/zone/managers/resource/ResourceManager.idl(82):  		processor = impl;
	processor = impl;
	// server/zone/managers/resource/ResourceManager.idl(83):  		objectManager = objectMan;
	objectManager = objectMan;
}

/*
 *	ResourceManagerAdapter
 */

ResourceManagerAdapter::ResourceManagerAdapter(ResourceManagerImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* ResourceManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		stop();
		break;
	case 7:
		initialize();
		break;
	case 8:
		shiftResources();
		break;
	case 9:
		resp->insertSignedInt(notifyPostureChange((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 10:
		sendResourceListForSurvey((PlayerCreature*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getAsciiParameter(_param2_sendResourceListForSurvey__PlayerCreature_int_String_));
		break;
	case 11:
		sendSurvey((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendSurvey__PlayerCreature_String_));
		break;
	case 12:
		sendSample((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendSample__PlayerCreature_String_String_), inv->getAsciiParameter(_param2_sendSample__PlayerCreature_String_String_));
		break;
	case 13:
		createResourceSpawn((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_createResourceSpawn__PlayerCreature_String_));
		break;
	default:
		return NULL;
	}

	return resp;
}

void ResourceManagerAdapter::stop() {
	((ResourceManagerImplementation*) impl)->stop();
}

void ResourceManagerAdapter::initialize() {
	((ResourceManagerImplementation*) impl)->initialize();
}

void ResourceManagerAdapter::shiftResources() {
	((ResourceManagerImplementation*) impl)->shiftResources();
}

int ResourceManagerAdapter::notifyPostureChange(CreatureObject* object, int newPosture) {
	return ((ResourceManagerImplementation*) impl)->notifyPostureChange(object, newPosture);
}

void ResourceManagerAdapter::sendResourceListForSurvey(PlayerCreature* playerCreature, const int toolType, const String& surveyType) {
	((ResourceManagerImplementation*) impl)->sendResourceListForSurvey(playerCreature, toolType, surveyType);
}

void ResourceManagerAdapter::sendSurvey(PlayerCreature* playerCreature, const String& resname) {
	((ResourceManagerImplementation*) impl)->sendSurvey(playerCreature, resname);
}

void ResourceManagerAdapter::sendSample(PlayerCreature* playerCreature, const String& resname, const String& sampleAnimation) {
	((ResourceManagerImplementation*) impl)->sendSample(playerCreature, resname, sampleAnimation);
}

void ResourceManagerAdapter::createResourceSpawn(PlayerCreature* playerCreature, const String& restype) {
	((ResourceManagerImplementation*) impl)->createResourceSpawn(playerCreature, restype);
}

/*
 *	ResourceManagerHelper
 */

ResourceManagerHelper* ResourceManagerHelper::staticInitializer = ResourceManagerHelper::instance();

ResourceManagerHelper::ResourceManagerHelper() {
	className = "ResourceManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ResourceManagerHelper::finalizeHelper() {
	ResourceManagerHelper::finalize();
}

DistributedObject* ResourceManagerHelper::instantiateObject() {
	return new ResourceManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* ResourceManagerHelper::instantiateServant() {
	return new ResourceManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ResourceManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ResourceManagerAdapter((ResourceManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

