/*
 *	server/zone/objects/installation/factory/FactoryObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "FactoryObject.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

#include "server/zone/objects/factorycrate/FactoryCrate.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/area/ActiveArea.h"

#include "server/zone/objects/installation/factory/FactoryHopperObserver.h"

/*
 *	FactoryObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__,RPC_NOTIFYLOADFROMDATABASE__,RPC_ISFACTORY__,RPC_CREATECHILDOBJECTS__,RPC_SENDINSERTMANUSUI__CREATUREOBJECT_,RPC_SENDINGREDIENTSNEEDEDSUI__CREATUREOBJECT_,RPC_SENDINGREDIENTHOPPER__CREATUREOBJECT_,RPC_SENDOUTPUTHOPPER__CREATUREOBJECT_,RPC_OPENHOPPER__OBSERVABLE_MANAGEDOBJECT_,RPC_CLOSEHOPPER__OBSERVABLE_MANAGEDOBJECT_,RPC_HANDLEINSERTFACTORYSCHEM__CREATUREOBJECT_MANUFACTURESCHEMATIC_,RPC_HANDLEREMOVEFACTORYSCHEM__CREATUREOBJECT_,RPC_HANDLEOPERATETOGGLE__CREATUREOBJECT_,RPC_CREATENEWOBJECT__,RPC_GETREDEEDMESSAGE__};

FactoryObject::FactoryObject() : InstallationObject(DummyConstructorParameter::instance()) {
	FactoryObjectImplementation* _implementation = new FactoryObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("FactoryObject");
}

FactoryObject::FactoryObject(DummyConstructorParameter* param) : InstallationObject(param) {
	_setClassName("FactoryObject");
}

FactoryObject::~FactoryObject() {
}



void FactoryObject::loadTemplateData(SharedObjectTemplate* templateData) {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void FactoryObject::initializeTransientMembers() {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void FactoryObject::notifyLoadFromDatabase() {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYLOADFROMDATABASE__);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyLoadFromDatabase();
}

void FactoryObject::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

bool FactoryObject::isFactory() {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISFACTORY__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isFactory();
}

void FactoryObject::createChildObjects() {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATECHILDOBJECTS__);

		method.executeWithVoidReturn();
	} else
		_implementation->createChildObjects();
}

void FactoryObject::sendInsertManuSui(CreatureObject* player) {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDINSERTMANUSUI__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendInsertManuSui(player);
}

void FactoryObject::sendIngredientsNeededSui(CreatureObject* player) {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDINGREDIENTSNEEDEDSUI__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendIngredientsNeededSui(player);
}

void FactoryObject::sendIngredientHopper(CreatureObject* player) {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDINGREDIENTHOPPER__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendIngredientHopper(player);
}

void FactoryObject::sendOutputHopper(CreatureObject* player) {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDOUTPUTHOPPER__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendOutputHopper(player);
}

void FactoryObject::openHopper(Observable* observable, ManagedObject* arg1) {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_OPENHOPPER__OBSERVABLE_MANAGEDOBJECT_);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);

		method.executeWithVoidReturn();
	} else
		_implementation->openHopper(observable, arg1);
}

void FactoryObject::closeHopper(Observable* observable, ManagedObject* arg1) {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLOSEHOPPER__OBSERVABLE_MANAGEDOBJECT_);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);

		method.executeWithVoidReturn();
	} else
		_implementation->closeHopper(observable, arg1);
}

void FactoryObject::handleInsertFactorySchem(CreatureObject* player, ManufactureSchematic* schematic) {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEINSERTFACTORYSCHEM__CREATUREOBJECT_MANUFACTURESCHEMATIC_);
		method.addObjectParameter(player);
		method.addObjectParameter(schematic);

		method.executeWithVoidReturn();
	} else
		_implementation->handleInsertFactorySchem(player, schematic);
}

void FactoryObject::handleRemoveFactorySchem(CreatureObject* player) {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEREMOVEFACTORYSCHEM__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->handleRemoveFactorySchem(player);
}

void FactoryObject::handleOperateToggle(CreatureObject* player) {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOPERATETOGGLE__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->handleOperateToggle(player);
}

void FactoryObject::createNewObject() {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATENEWOBJECT__);

		method.executeWithVoidReturn();
	} else
		_implementation->createNewObject();
}

String FactoryObject::getRedeedMessage() {
	FactoryObjectImplementation* _implementation = static_cast<FactoryObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETREDEEDMESSAGE__);

		String _return_getRedeedMessage;
		method.executeWithAsciiReturn(_return_getRedeedMessage);
		return _return_getRedeedMessage;
	} else
		return _implementation->getRedeedMessage();
}

DistributedObjectServant* FactoryObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* FactoryObject::_getImplementationForRead() {
	return _impl;
}

void FactoryObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	FactoryObjectImplementation
 */

FactoryObjectImplementation::FactoryObjectImplementation(DummyConstructorParameter* param) : InstallationObjectImplementation(param) {
	_initializeImplementation();
}


FactoryObjectImplementation::~FactoryObjectImplementation() {
}


void FactoryObjectImplementation::finalize() {
}

void FactoryObjectImplementation::_initializeImplementation() {
	_setClassHelper(FactoryObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void FactoryObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<FactoryObject*>(stub);
	InstallationObjectImplementation::_setStub(stub);
}

DistributedObjectStub* FactoryObjectImplementation::_getStub() {
	return _this.get();
}

FactoryObjectImplementation::operator const FactoryObject*() {
	return _this.get();
}

void FactoryObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void FactoryObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void FactoryObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void FactoryObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void FactoryObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void FactoryObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void FactoryObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void FactoryObjectImplementation::_serializationHelperMethod() {
	InstallationObjectImplementation::_serializationHelperMethod();

	_setClassName("FactoryObject");

}

void FactoryObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(FactoryObjectImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool FactoryObjectImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (InstallationObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x85f4338c: //FactoryObject.craftingTabsSupported
		TypeInfo<Vector<int> >::parseFromBinaryStream(&craftingTabsSupported, stream);
		return true;

	case 0x44fedb2a: //FactoryObject.timer
		TypeInfo<int >::parseFromBinaryStream(&timer, stream);
		return true;

	case 0xe2948e2a: //FactoryObject.currentUserName
		TypeInfo<String >::parseFromBinaryStream(&currentUserName, stream);
		return true;

	case 0xe8d7c362: //FactoryObject.currentRunCount
		TypeInfo<int >::parseFromBinaryStream(&currentRunCount, stream);
		return true;

	}

	return false;
}

void FactoryObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = FactoryObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int FactoryObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = InstallationObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x85f4338c; //FactoryObject.craftingTabsSupported
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<int> >::toBinaryStream(&craftingTabsSupported, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x44fedb2a; //FactoryObject.timer
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&timer, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xe2948e2a; //FactoryObject.currentUserName
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&currentUserName, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xe8d7c362; //FactoryObject.currentRunCount
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&currentRunCount, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 4;
}

FactoryObjectImplementation::FactoryObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/installation/factory/FactoryObject.idl():  		Logger.setLoggingName("FactoryObject");
	Logger::setLoggingName("FactoryObject");
	// server/zone/objects/installation/factory/FactoryObject.idl():  		hopperObserver = null;
	hopperObserver = NULL;
}

void FactoryObjectImplementation::notifyLoadFromDatabase() {
	// server/zone/objects/installation/factory/FactoryObject.idl():  		super.notifyLoadFromDatabase();
	InstallationObjectImplementation::notifyLoadFromDatabase();
	// server/zone/objects/installation/factory/FactoryObject.idl():  	}
	if (InstallationObjectImplementation::operating){
	// server/zone/objects/installation/factory/FactoryObject.idl():  			startFactory();
	startFactory();
}
}

bool FactoryObjectImplementation::isFactory() {
	// server/zone/objects/installation/factory/FactoryObject.idl():  		return true;
	return true;
}

/*
 *	FactoryObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


FactoryObjectAdapter::FactoryObjectAdapter(FactoryObject* obj) : InstallationObjectAdapter(obj) {
}

void FactoryObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_NOTIFYLOADFROMDATABASE__:
		{
			notifyLoadFromDatabase();
		}
		break;
	case RPC_ISFACTORY__:
		{
			resp->insertBoolean(isFactory());
		}
		break;
	case RPC_CREATECHILDOBJECTS__:
		{
			createChildObjects();
		}
		break;
	case RPC_SENDINSERTMANUSUI__CREATUREOBJECT_:
		{
			sendInsertManuSui(static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_SENDINGREDIENTSNEEDEDSUI__CREATUREOBJECT_:
		{
			sendIngredientsNeededSui(static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_SENDINGREDIENTHOPPER__CREATUREOBJECT_:
		{
			sendIngredientHopper(static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_SENDOUTPUTHOPPER__CREATUREOBJECT_:
		{
			sendOutputHopper(static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_OPENHOPPER__OBSERVABLE_MANAGEDOBJECT_:
		{
			openHopper(static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_CLOSEHOPPER__OBSERVABLE_MANAGEDOBJECT_:
		{
			closeHopper(static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_HANDLEINSERTFACTORYSCHEM__CREATUREOBJECT_MANUFACTURESCHEMATIC_:
		{
			handleInsertFactorySchem(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<ManufactureSchematic*>(inv->getObjectParameter()));
		}
		break;
	case RPC_HANDLEREMOVEFACTORYSCHEM__CREATUREOBJECT_:
		{
			handleRemoveFactorySchem(static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_HANDLEOPERATETOGGLE__CREATUREOBJECT_:
		{
			handleOperateToggle(static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_CREATENEWOBJECT__:
		{
			createNewObject();
		}
		break;
	case RPC_GETREDEEDMESSAGE__:
		{
			resp->insertAscii(getRedeedMessage());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void FactoryObjectAdapter::initializeTransientMembers() {
	(static_cast<FactoryObject*>(stub))->initializeTransientMembers();
}

void FactoryObjectAdapter::notifyLoadFromDatabase() {
	(static_cast<FactoryObject*>(stub))->notifyLoadFromDatabase();
}

bool FactoryObjectAdapter::isFactory() {
	return (static_cast<FactoryObject*>(stub))->isFactory();
}

void FactoryObjectAdapter::createChildObjects() {
	(static_cast<FactoryObject*>(stub))->createChildObjects();
}

void FactoryObjectAdapter::sendInsertManuSui(CreatureObject* player) {
	(static_cast<FactoryObject*>(stub))->sendInsertManuSui(player);
}

void FactoryObjectAdapter::sendIngredientsNeededSui(CreatureObject* player) {
	(static_cast<FactoryObject*>(stub))->sendIngredientsNeededSui(player);
}

void FactoryObjectAdapter::sendIngredientHopper(CreatureObject* player) {
	(static_cast<FactoryObject*>(stub))->sendIngredientHopper(player);
}

void FactoryObjectAdapter::sendOutputHopper(CreatureObject* player) {
	(static_cast<FactoryObject*>(stub))->sendOutputHopper(player);
}

void FactoryObjectAdapter::openHopper(Observable* observable, ManagedObject* arg1) {
	(static_cast<FactoryObject*>(stub))->openHopper(observable, arg1);
}

void FactoryObjectAdapter::closeHopper(Observable* observable, ManagedObject* arg1) {
	(static_cast<FactoryObject*>(stub))->closeHopper(observable, arg1);
}

void FactoryObjectAdapter::handleInsertFactorySchem(CreatureObject* player, ManufactureSchematic* schematic) {
	(static_cast<FactoryObject*>(stub))->handleInsertFactorySchem(player, schematic);
}

void FactoryObjectAdapter::handleRemoveFactorySchem(CreatureObject* player) {
	(static_cast<FactoryObject*>(stub))->handleRemoveFactorySchem(player);
}

void FactoryObjectAdapter::handleOperateToggle(CreatureObject* player) {
	(static_cast<FactoryObject*>(stub))->handleOperateToggle(player);
}

void FactoryObjectAdapter::createNewObject() {
	(static_cast<FactoryObject*>(stub))->createNewObject();
}

String FactoryObjectAdapter::getRedeedMessage() {
	return (static_cast<FactoryObject*>(stub))->getRedeedMessage();
}

/*
 *	FactoryObjectHelper
 */

FactoryObjectHelper* FactoryObjectHelper::staticInitializer = FactoryObjectHelper::instance();

FactoryObjectHelper::FactoryObjectHelper() {
	className = "FactoryObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void FactoryObjectHelper::finalizeHelper() {
	FactoryObjectHelper::finalize();
}

DistributedObject* FactoryObjectHelper::instantiateObject() {
	return new FactoryObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* FactoryObjectHelper::instantiateServant() {
	return new FactoryObjectImplementation();
}

DistributedObjectAdapter* FactoryObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FactoryObjectAdapter(static_cast<FactoryObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

