/*
 *	server/zone/objects/tangible/terminal/vendor/bazaar/BazaarTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "BazaarTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/area/ActiveArea.h"

/*
 *	BazaarTerminalStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_ISBAZAARTERMINAL__};

BazaarTerminal::BazaarTerminal() : VendorTerminal(DummyConstructorParameter::instance()) {
	BazaarTerminalImplementation* _implementation = new BazaarTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("BazaarTerminal");
}

BazaarTerminal::BazaarTerminal(DummyConstructorParameter* param) : VendorTerminal(param) {
	_setClassName("BazaarTerminal");
}

BazaarTerminal::~BazaarTerminal() {
}



void BazaarTerminal::loadTemplateData(SharedObjectTemplate* templateData) {
	BazaarTerminalImplementation* _implementation = static_cast<BazaarTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

int BazaarTerminal::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	BazaarTerminalImplementation* _implementation = static_cast<BazaarTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

bool BazaarTerminal::isBazaarTerminal() {
	BazaarTerminalImplementation* _implementation = static_cast<BazaarTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISBAZAARTERMINAL__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBazaarTerminal();
}

DistributedObjectServant* BazaarTerminal::_getImplementation() {

	_updated = true;
	return _impl;
}

void BazaarTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	BazaarTerminalImplementation
 */

BazaarTerminalImplementation::BazaarTerminalImplementation(DummyConstructorParameter* param) : VendorTerminalImplementation(param) {
	_initializeImplementation();
}


BazaarTerminalImplementation::~BazaarTerminalImplementation() {
}


void BazaarTerminalImplementation::finalize() {
}

void BazaarTerminalImplementation::_initializeImplementation() {
	_setClassHelper(BazaarTerminalHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void BazaarTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<BazaarTerminal*>(stub);
	VendorTerminalImplementation::_setStub(stub);
}

DistributedObjectStub* BazaarTerminalImplementation::_getStub() {
	return _this;
}

BazaarTerminalImplementation::operator const BazaarTerminal*() {
	return _this;
}

void BazaarTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BazaarTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BazaarTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BazaarTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BazaarTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BazaarTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BazaarTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BazaarTerminalImplementation::_serializationHelperMethod() {
	VendorTerminalImplementation::_serializationHelperMethod();

	_setClassName("BazaarTerminal");

}

void BazaarTerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(BazaarTerminalImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool BazaarTerminalImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (VendorTerminalImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void BazaarTerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = BazaarTerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int BazaarTerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = VendorTerminalImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

BazaarTerminalImplementation::BazaarTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/vendor/bazaar/BazaarTerminal.idl():  		Logger.setLoggingName("BazaarTerminal");
	Logger::setLoggingName("BazaarTerminal");
}

int BazaarTerminalImplementation::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	// server/zone/objects/tangible/terminal/vendor/bazaar/BazaarTerminal.idl():  		return 0;
	return 0;
}

bool BazaarTerminalImplementation::isBazaarTerminal() {
	// server/zone/objects/tangible/terminal/vendor/bazaar/BazaarTerminal.idl():  		return true;
	return true;
}

/*
 *	BazaarTerminalAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


BazaarTerminalAdapter::BazaarTerminalAdapter(BazaarTerminal* obj) : VendorTerminalAdapter(obj) {
}

void BazaarTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		break;
	case RPC_ISBAZAARTERMINAL__:
		resp->insertBoolean(isBazaarTerminal());
		break;
	default:
		throw Exception("Method does not exists");
	}
}

int BazaarTerminalAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<BazaarTerminal*>(stub))->handleObjectMenuSelect(player, selectedID);
}

bool BazaarTerminalAdapter::isBazaarTerminal() {
	return (static_cast<BazaarTerminal*>(stub))->isBazaarTerminal();
}

/*
 *	BazaarTerminalHelper
 */

BazaarTerminalHelper* BazaarTerminalHelper::staticInitializer = BazaarTerminalHelper::instance();

BazaarTerminalHelper::BazaarTerminalHelper() {
	className = "BazaarTerminal";

	Core::getObjectBroker()->registerClass(className, this);
}

void BazaarTerminalHelper::finalizeHelper() {
	BazaarTerminalHelper::finalize();
}

DistributedObject* BazaarTerminalHelper::instantiateObject() {
	return new BazaarTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* BazaarTerminalHelper::instantiateServant() {
	return new BazaarTerminalImplementation();
}

DistributedObjectAdapter* BazaarTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BazaarTerminalAdapter(static_cast<BazaarTerminal*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

