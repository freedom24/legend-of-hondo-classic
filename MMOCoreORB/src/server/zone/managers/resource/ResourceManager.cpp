/*
 *	server/zone/managers/resource/ResourceManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "ResourceManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/resource/ResourceContainer.h"

#include "server/zone/objects/player/sui/listbox/SuiListBox.h"

/*
 *	ResourceManagerStub
 */

enum {RPC_STOP__ = 6,RPC_INITIALIZE__,RPC_SHIFTRESOURCES__,RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_,RPC_SENDRESOURCELISTFORSURVEY__CREATUREOBJECT_INT_STRING_,RPC_SENDSURVEY__CREATUREOBJECT_STRING_,RPC_SENDSAMPLE__CREATUREOBJECT_STRING_STRING_,RPC_HARVESTRESOURCE__CREATUREOBJECT_STRING_INT_,RPC_HARVESTRESOURCETOPLAYER__CREATUREOBJECT_RESOURCESPAWN_INT_,RPC_GETAVAILABLEPOWERFROMPLAYER__CREATUREOBJECT_,RPC_REMOVEPOWERFROMPLAYER__CREATUREOBJECT_INT_,RPC_CREATERESOURCESPAWN__CREATUREOBJECT_STRING_,RPC_GIVEPLAYERRESOURCE__CREATUREOBJECT_STRING_INT_,RPC_GETCURRENTSPAWN__STRING_STRING_,RPC_GETRESOURCESPAWN__STRING_,RPC_ADDNODETOLISTBOX__SUILISTBOX_STRING_,RPC_ADDPARENTNODETOLISTBOX__SUILISTBOX_STRING_,RPC_LISTRESOURCESFORPLANETONSCREEN__CREATUREOBJECT_STRING_};

ResourceManager::ResourceManager(ZoneServer* server, ZoneProcessServer* impl, ObjectManager* objectMan) : Observer(DummyConstructorParameter::instance()) {
	ResourceManagerImplementation* _implementation = new ResourceManagerImplementation(server, impl, objectMan);
	_impl = _implementation;
	_impl->_setStub(this);
}

ResourceManager::ResourceManager(DummyConstructorParameter* param) : Observer(param) {
}

ResourceManager::~ResourceManager() {
}



void ResourceManager::stop() {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STOP__);

		method.executeWithVoidReturn();
	} else
		_implementation->stop();
}

void ResourceManager::initialize() {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else
		_implementation->initialize();
}

void ResourceManager::shiftResources() {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SHIFTRESOURCES__);

		method.executeWithVoidReturn();
	} else
		_implementation->shiftResources();
}

int ResourceManager::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(eventType, observable, arg1, arg2);
}

void ResourceManager::sendResourceListForSurvey(CreatureObject* playerCreature, const int toolType, const String& surveyType) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDRESOURCELISTFORSURVEY__CREATUREOBJECT_INT_STRING_);
		method.addObjectParameter(playerCreature);
		method.addSignedIntParameter(toolType);
		method.addAsciiParameter(surveyType);

		method.executeWithVoidReturn();
	} else
		_implementation->sendResourceListForSurvey(playerCreature, toolType, surveyType);
}

void ResourceManager::sendSurvey(CreatureObject* playerCreature, const String& resname) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDSURVEY__CREATUREOBJECT_STRING_);
		method.addObjectParameter(playerCreature);
		method.addAsciiParameter(resname);

		method.executeWithVoidReturn();
	} else
		_implementation->sendSurvey(playerCreature, resname);
}

void ResourceManager::sendSample(CreatureObject* playerCreature, const String& resname, const String& sampleAnimation) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDSAMPLE__CREATUREOBJECT_STRING_STRING_);
		method.addObjectParameter(playerCreature);
		method.addAsciiParameter(resname);
		method.addAsciiParameter(sampleAnimation);

		method.executeWithVoidReturn();
	} else
		_implementation->sendSample(playerCreature, resname, sampleAnimation);
}

ResourceContainer* ResourceManager::harvestResource(CreatureObject* player, const String& type, const int quantity) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HARVESTRESOURCE__CREATUREOBJECT_STRING_INT_);
		method.addObjectParameter(player);
		method.addAsciiParameter(type);
		method.addSignedIntParameter(quantity);

		return static_cast<ResourceContainer*>(method.executeWithObjectReturn());
	} else
		return _implementation->harvestResource(player, type, quantity);
}

void ResourceManager::harvestResourceToPlayer(CreatureObject* player, ResourceSpawn* resourceSpawn, const int quantity) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HARVESTRESOURCETOPLAYER__CREATUREOBJECT_RESOURCESPAWN_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(resourceSpawn);
		method.addSignedIntParameter(quantity);

		method.executeWithVoidReturn();
	} else
		_implementation->harvestResourceToPlayer(player, resourceSpawn, quantity);
}

unsigned int ResourceManager::getAvailablePowerFromPlayer(CreatureObject* player) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETAVAILABLEPOWERFROMPLAYER__CREATUREOBJECT_);
		method.addObjectParameter(player);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getAvailablePowerFromPlayer(player);
}

void ResourceManager::removePowerFromPlayer(CreatureObject* player, unsigned int power) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEPOWERFROMPLAYER__CREATUREOBJECT_INT_);
		method.addObjectParameter(player);
		method.addUnsignedIntParameter(power);

		method.executeWithVoidReturn();
	} else
		_implementation->removePowerFromPlayer(player, power);
}

void ResourceManager::getResourceListByType(Vector<ManagedReference<ResourceSpawn* > >& list, int type, const String& zoneName) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->getResourceListByType(list, type, zoneName);
}

void ResourceManager::createResourceSpawn(CreatureObject* playerCreature, const String& restype) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATERESOURCESPAWN__CREATUREOBJECT_STRING_);
		method.addObjectParameter(playerCreature);
		method.addAsciiParameter(restype);

		method.executeWithVoidReturn();
	} else
		_implementation->createResourceSpawn(playerCreature, restype);
}

void ResourceManager::givePlayerResource(CreatureObject* playerCreature, const String& restype, const int quantity) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GIVEPLAYERRESOURCE__CREATUREOBJECT_STRING_INT_);
		method.addObjectParameter(playerCreature);
		method.addAsciiParameter(restype);
		method.addSignedIntParameter(quantity);

		method.executeWithVoidReturn();
	} else
		_implementation->givePlayerResource(playerCreature, restype, quantity);
}

ResourceSpawn* ResourceManager::getCurrentSpawn(const String& restype, const String& zoneName) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCURRENTSPAWN__STRING_STRING_);
		method.addAsciiParameter(restype);
		method.addAsciiParameter(zoneName);

		return static_cast<ResourceSpawn*>(method.executeWithObjectReturn());
	} else
		return _implementation->getCurrentSpawn(restype, zoneName);
}

ResourceSpawn* ResourceManager::getResourceSpawn(const String& spawnName) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETRESOURCESPAWN__STRING_);
		method.addAsciiParameter(spawnName);

		return static_cast<ResourceSpawn*>(method.executeWithObjectReturn());
	} else
		return _implementation->getResourceSpawn(spawnName);
}

void ResourceManager::addNodeToListBox(SuiListBox* sui, const String& nodeName) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDNODETOLISTBOX__SUILISTBOX_STRING_);
		method.addObjectParameter(sui);
		method.addAsciiParameter(nodeName);

		method.executeWithVoidReturn();
	} else
		_implementation->addNodeToListBox(sui, nodeName);
}

String ResourceManager::addParentNodeToListBox(SuiListBox* sui, const String& currentNode) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDPARENTNODETOLISTBOX__SUILISTBOX_STRING_);
		method.addObjectParameter(sui);
		method.addAsciiParameter(currentNode);

		method.executeWithAsciiReturn(_return_addParentNodeToListBox);
		return _return_addParentNodeToListBox;
	} else
		return _implementation->addParentNodeToListBox(sui, currentNode);
}

void ResourceManager::listResourcesForPlanetOnScreen(CreatureObject* creature, const String& planet) {
	ResourceManagerImplementation* _implementation = static_cast<ResourceManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LISTRESOURCESFORPLANETONSCREEN__CREATUREOBJECT_STRING_);
		method.addObjectParameter(creature);
		method.addAsciiParameter(planet);

		method.executeWithVoidReturn();
	} else
		_implementation->listResourcesForPlanetOnScreen(creature, planet);
}

DistributedObjectServant* ResourceManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void ResourceManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ResourceManagerImplementation
 */

ResourceManagerImplementation::ResourceManagerImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}


ResourceManagerImplementation::~ResourceManagerImplementation() {
}


void ResourceManagerImplementation::finalize() {
}

void ResourceManagerImplementation::_initializeImplementation() {
	_setClassHelper(ResourceManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ResourceManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ResourceManager*>(stub);
	ObserverImplementation::_setStub(stub);
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
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("ResourceManager");

}

void ResourceManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ResourceManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ResourceManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ObserverImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "zoneServer") {
		TypeInfo<ManagedWeakReference<ZoneServer* > >::parseFromBinaryStream(&zoneServer, stream);
		return true;
	}


	return false;
}

void ResourceManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ResourceManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ResourceManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "zoneServer";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<ZoneServer* > >::toBinaryStream(&zoneServer, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + ObserverImplementation::writeObjectMembers(stream);
}

ResourceManagerImplementation::ResourceManagerImplementation(ZoneServer* server, ZoneProcessServer* impl, ObjectManager* objectMan) {
	_initializeImplementation();
	// server/zone/managers/resource/ResourceManager.idl():  		Logger.setLoggingName("ResourceManager");
	Logger::setLoggingName("ResourceManager");
	// server/zone/managers/resource/ResourceManager.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/managers/resource/ResourceManager.idl():  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/resource/ResourceManager.idl():  		zoneServer = server;
	zoneServer = server;
	// server/zone/managers/resource/ResourceManager.idl():  		processor = impl;
	processor = impl;
	// server/zone/managers/resource/ResourceManager.idl():  		objectManager = objectMan;
	objectManager = objectMan;
}

/*
 *	ResourceManagerAdapter
 */

ResourceManagerAdapter::ResourceManagerAdapter(ResourceManager* obj) : ObserverAdapter(obj) {
}

Packet* ResourceManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_STOP__:
		stop();
		break;
	case RPC_INITIALIZE__:
		initialize();
		break;
	case RPC_SHIFTRESOURCES__:
		shiftResources();
		break;
	case RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		resp->insertSignedInt(notifyObserverEvent(inv->getUnsignedIntParameter(), static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()), inv->getSignedLongParameter()));
		break;
	case RPC_SENDRESOURCELISTFORSURVEY__CREATUREOBJECT_INT_STRING_:
		sendResourceListForSurvey(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getAsciiParameter(_param2_sendResourceListForSurvey__CreatureObject_int_String_));
		break;
	case RPC_SENDSURVEY__CREATUREOBJECT_STRING_:
		sendSurvey(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getAsciiParameter(_param1_sendSurvey__CreatureObject_String_));
		break;
	case RPC_SENDSAMPLE__CREATUREOBJECT_STRING_STRING_:
		sendSample(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getAsciiParameter(_param1_sendSample__CreatureObject_String_String_), inv->getAsciiParameter(_param2_sendSample__CreatureObject_String_String_));
		break;
	case RPC_HARVESTRESOURCE__CREATUREOBJECT_STRING_INT_:
		resp->insertLong(harvestResource(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getAsciiParameter(_param1_harvestResource__CreatureObject_String_int_), inv->getSignedIntParameter())->_getObjectID());
		break;
	case RPC_HARVESTRESOURCETOPLAYER__CREATUREOBJECT_RESOURCESPAWN_INT_:
		harvestResourceToPlayer(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<ResourceSpawn*>(inv->getObjectParameter()), inv->getSignedIntParameter());
		break;
	case RPC_GETAVAILABLEPOWERFROMPLAYER__CREATUREOBJECT_:
		resp->insertInt(getAvailablePowerFromPlayer(static_cast<CreatureObject*>(inv->getObjectParameter())));
		break;
	case RPC_REMOVEPOWERFROMPLAYER__CREATUREOBJECT_INT_:
		removePowerFromPlayer(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getUnsignedIntParameter());
		break;
	case RPC_CREATERESOURCESPAWN__CREATUREOBJECT_STRING_:
		createResourceSpawn(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getAsciiParameter(_param1_createResourceSpawn__CreatureObject_String_));
		break;
	case RPC_GIVEPLAYERRESOURCE__CREATUREOBJECT_STRING_INT_:
		givePlayerResource(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getAsciiParameter(_param1_givePlayerResource__CreatureObject_String_int_), inv->getSignedIntParameter());
		break;
	case RPC_GETCURRENTSPAWN__STRING_STRING_:
		resp->insertLong(getCurrentSpawn(inv->getAsciiParameter(_param0_getCurrentSpawn__String_String_), inv->getAsciiParameter(_param1_getCurrentSpawn__String_String_))->_getObjectID());
		break;
	case RPC_GETRESOURCESPAWN__STRING_:
		resp->insertLong(getResourceSpawn(inv->getAsciiParameter(_param0_getResourceSpawn__String_))->_getObjectID());
		break;
	case RPC_ADDNODETOLISTBOX__SUILISTBOX_STRING_:
		addNodeToListBox(static_cast<SuiListBox*>(inv->getObjectParameter()), inv->getAsciiParameter(_param1_addNodeToListBox__SuiListBox_String_));
		break;
	case RPC_ADDPARENTNODETOLISTBOX__SUILISTBOX_STRING_:
		resp->insertAscii(addParentNodeToListBox(static_cast<SuiListBox*>(inv->getObjectParameter()), inv->getAsciiParameter(_param1_addParentNodeToListBox__SuiListBox_String_)));
		break;
	case RPC_LISTRESOURCESFORPLANETONSCREEN__CREATUREOBJECT_STRING_:
		listResourcesForPlanetOnScreen(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getAsciiParameter(_param1_listResourcesForPlanetOnScreen__CreatureObject_String_));
		break;
	default:
		return NULL;
	}

	return resp;
}

void ResourceManagerAdapter::stop() {
	(static_cast<ResourceManager*>(stub))->stop();
}

void ResourceManagerAdapter::initialize() {
	(static_cast<ResourceManager*>(stub))->initialize();
}

void ResourceManagerAdapter::shiftResources() {
	(static_cast<ResourceManager*>(stub))->shiftResources();
}

int ResourceManagerAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<ResourceManager*>(stub))->notifyObserverEvent(eventType, observable, arg1, arg2);
}

void ResourceManagerAdapter::sendResourceListForSurvey(CreatureObject* playerCreature, const int toolType, const String& surveyType) {
	(static_cast<ResourceManager*>(stub))->sendResourceListForSurvey(playerCreature, toolType, surveyType);
}

void ResourceManagerAdapter::sendSurvey(CreatureObject* playerCreature, const String& resname) {
	(static_cast<ResourceManager*>(stub))->sendSurvey(playerCreature, resname);
}

void ResourceManagerAdapter::sendSample(CreatureObject* playerCreature, const String& resname, const String& sampleAnimation) {
	(static_cast<ResourceManager*>(stub))->sendSample(playerCreature, resname, sampleAnimation);
}

ResourceContainer* ResourceManagerAdapter::harvestResource(CreatureObject* player, const String& type, const int quantity) {
	return (static_cast<ResourceManager*>(stub))->harvestResource(player, type, quantity);
}

void ResourceManagerAdapter::harvestResourceToPlayer(CreatureObject* player, ResourceSpawn* resourceSpawn, const int quantity) {
	(static_cast<ResourceManager*>(stub))->harvestResourceToPlayer(player, resourceSpawn, quantity);
}

unsigned int ResourceManagerAdapter::getAvailablePowerFromPlayer(CreatureObject* player) {
	return (static_cast<ResourceManager*>(stub))->getAvailablePowerFromPlayer(player);
}

void ResourceManagerAdapter::removePowerFromPlayer(CreatureObject* player, unsigned int power) {
	(static_cast<ResourceManager*>(stub))->removePowerFromPlayer(player, power);
}

void ResourceManagerAdapter::createResourceSpawn(CreatureObject* playerCreature, const String& restype) {
	(static_cast<ResourceManager*>(stub))->createResourceSpawn(playerCreature, restype);
}

void ResourceManagerAdapter::givePlayerResource(CreatureObject* playerCreature, const String& restype, const int quantity) {
	(static_cast<ResourceManager*>(stub))->givePlayerResource(playerCreature, restype, quantity);
}

ResourceSpawn* ResourceManagerAdapter::getCurrentSpawn(const String& restype, const String& zoneName) {
	return (static_cast<ResourceManager*>(stub))->getCurrentSpawn(restype, zoneName);
}

ResourceSpawn* ResourceManagerAdapter::getResourceSpawn(const String& spawnName) {
	return (static_cast<ResourceManager*>(stub))->getResourceSpawn(spawnName);
}

void ResourceManagerAdapter::addNodeToListBox(SuiListBox* sui, const String& nodeName) {
	(static_cast<ResourceManager*>(stub))->addNodeToListBox(sui, nodeName);
}

String ResourceManagerAdapter::addParentNodeToListBox(SuiListBox* sui, const String& currentNode) {
	return (static_cast<ResourceManager*>(stub))->addParentNodeToListBox(sui, currentNode);
}

void ResourceManagerAdapter::listResourcesForPlanetOnScreen(CreatureObject* creature, const String& planet) {
	(static_cast<ResourceManager*>(stub))->listResourcesForPlanetOnScreen(creature, planet);
}

/*
 *	ResourceManagerHelper
 */

ResourceManagerHelper* ResourceManagerHelper::staticInitializer = ResourceManagerHelper::instance();

ResourceManagerHelper::ResourceManagerHelper() {
	className = "ResourceManager";

	Core::getObjectBroker()->registerClass(className, this);
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
	DistributedObjectAdapter* adapter = new ResourceManagerAdapter(static_cast<ResourceManager*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

