/*
 *	server/zone/objects/tangible/powerup/PowerupObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "PowerupObject.h"

#include "server/zone/Zone.h"

/*
 *	PowerupObjectStub
 */

enum {RPC_ISRANGED__ = 6,RPC_ISMELEE__,RPC_ISTHROWN__,RPC_ISMINE__,RPC_DECREASEUSES__,RPC_GETUSES__,RPC_GETPOWERUPSTAT__STRING_,};

PowerupObject::PowerupObject() : TangibleObject(DummyConstructorParameter::instance()) {
	PowerupObjectImplementation* _implementation = new PowerupObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("PowerupObject");
}

PowerupObject::PowerupObject(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("PowerupObject");
}

PowerupObject::~PowerupObject() {
}



bool PowerupObject::isRanged() {
	PowerupObjectImplementation* _implementation = static_cast<PowerupObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISRANGED__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isRanged();
}

bool PowerupObject::isMelee() {
	PowerupObjectImplementation* _implementation = static_cast<PowerupObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISMELEE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isMelee();
}

bool PowerupObject::isThrown() {
	PowerupObjectImplementation* _implementation = static_cast<PowerupObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISTHROWN__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isThrown();
}

bool PowerupObject::isMine() {
	PowerupObjectImplementation* _implementation = static_cast<PowerupObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISMINE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isMine();
}

void PowerupObject::decreaseUses() {
	PowerupObjectImplementation* _implementation = static_cast<PowerupObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DECREASEUSES__);

		method.executeWithVoidReturn();
	} else
		_implementation->decreaseUses();
}

int PowerupObject::getUses() {
	PowerupObjectImplementation* _implementation = static_cast<PowerupObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETUSES__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getUses();
}

float PowerupObject::getPowerupStat(const String& stat) {
	PowerupObjectImplementation* _implementation = static_cast<PowerupObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPOWERUPSTAT__STRING_);
		method.addAsciiParameter(stat);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getPowerupStat(stat);
}

void PowerupObject::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	PowerupObjectImplementation* _implementation = static_cast<PowerupObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void PowerupObject::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	PowerupObjectImplementation* _implementation = static_cast<PowerupObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(values, firstUpdate);
}

void PowerupObject::fillWeaponAttributeList(AttributeListMessage* alm, WeaponObject* weapon) {
	PowerupObjectImplementation* _implementation = static_cast<PowerupObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillWeaponAttributeList(alm, weapon);
}

DistributedObjectServant* PowerupObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void PowerupObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PowerupObjectImplementation
 */

PowerupObjectImplementation::PowerupObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


PowerupObjectImplementation::~PowerupObjectImplementation() {
}


void PowerupObjectImplementation::finalize() {
}

void PowerupObjectImplementation::_initializeImplementation() {
	_setClassHelper(PowerupObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PowerupObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PowerupObject*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* PowerupObjectImplementation::_getStub() {
	return _this;
}

PowerupObjectImplementation::operator const PowerupObject*() {
	return _this;
}

void PowerupObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PowerupObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PowerupObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PowerupObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PowerupObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PowerupObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PowerupObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PowerupObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("PowerupObject");

}

void PowerupObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(PowerupObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PowerupObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "PowerupObject.modifiers") {
		TypeInfo<PowerupStatVector >::parseFromBinaryStream(&modifiers, stream);
		return true;
	}

	if (_name == "PowerupObject.uses") {
		TypeInfo<int >::parseFromBinaryStream(&uses, stream);
		return true;
	}

	if (_name == "PowerupObject.type") {
		TypeInfo<String >::parseFromBinaryStream(&type, stream);
		return true;
	}


	return false;
}

void PowerupObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PowerupObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PowerupObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "PowerupObject.modifiers";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<PowerupStatVector >::toBinaryStream(&modifiers, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PowerupObject.uses";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&uses, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PowerupObject.type";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&type, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 3;
}

PowerupObjectImplementation::PowerupObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/powerup/PowerupObject.idl():  		uses = 0;
	uses = 0;
	// server/zone/objects/tangible/powerup/PowerupObject.idl():  		Logger.setLoggingName("PowerupObject");
	Logger::setLoggingName("PowerupObject");
}

bool PowerupObjectImplementation::isRanged() {
	// server/zone/objects/tangible/powerup/PowerupObject.idl():  		return type == "ranged";
	return type == "ranged";
}

bool PowerupObjectImplementation::isMelee() {
	// server/zone/objects/tangible/powerup/PowerupObject.idl():  		return type == "melee";
	return type == "melee";
}

bool PowerupObjectImplementation::isThrown() {
	// server/zone/objects/tangible/powerup/PowerupObject.idl():  		return type == "thrown";
	return type == "thrown";
}

bool PowerupObjectImplementation::isMine() {
	// server/zone/objects/tangible/powerup/PowerupObject.idl():  		return type == "mine";
	return type == "mine";
}

void PowerupObjectImplementation::decreaseUses() {
	// server/zone/objects/tangible/powerup/PowerupObject.idl():  		uses = uses - 1;
	uses = uses - 1;
}

int PowerupObjectImplementation::getUses() {
	// server/zone/objects/tangible/powerup/PowerupObject.idl():  		return uses;
	return uses;
}

/*
 *	PowerupObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


PowerupObjectAdapter::PowerupObjectAdapter(PowerupObject* obj) : TangibleObjectAdapter(obj) {
}

void PowerupObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_ISRANGED__:
		resp->insertBoolean(isRanged());
		break;
	case RPC_ISMELEE__:
		resp->insertBoolean(isMelee());
		break;
	case RPC_ISTHROWN__:
		resp->insertBoolean(isThrown());
		break;
	case RPC_ISMINE__:
		resp->insertBoolean(isMine());
		break;
	case RPC_DECREASEUSES__:
		decreaseUses();
		break;
	case RPC_GETUSES__:
		resp->insertSignedInt(getUses());
		break;
	case RPC_GETPOWERUPSTAT__STRING_:
		resp->insertFloat(getPowerupStat(inv->getAsciiParameter(_param0_getPowerupStat__String_)));
		break;
	default:
		throw Exception("Method does not exists");
	}
}

bool PowerupObjectAdapter::isRanged() {
	return (static_cast<PowerupObject*>(stub))->isRanged();
}

bool PowerupObjectAdapter::isMelee() {
	return (static_cast<PowerupObject*>(stub))->isMelee();
}

bool PowerupObjectAdapter::isThrown() {
	return (static_cast<PowerupObject*>(stub))->isThrown();
}

bool PowerupObjectAdapter::isMine() {
	return (static_cast<PowerupObject*>(stub))->isMine();
}

void PowerupObjectAdapter::decreaseUses() {
	(static_cast<PowerupObject*>(stub))->decreaseUses();
}

int PowerupObjectAdapter::getUses() {
	return (static_cast<PowerupObject*>(stub))->getUses();
}

float PowerupObjectAdapter::getPowerupStat(const String& stat) {
	return (static_cast<PowerupObject*>(stub))->getPowerupStat(stat);
}

/*
 *	PowerupObjectHelper
 */

PowerupObjectHelper* PowerupObjectHelper::staticInitializer = PowerupObjectHelper::instance();

PowerupObjectHelper::PowerupObjectHelper() {
	className = "PowerupObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void PowerupObjectHelper::finalizeHelper() {
	PowerupObjectHelper::finalize();
}

DistributedObject* PowerupObjectHelper::instantiateObject() {
	return new PowerupObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* PowerupObjectHelper::instantiateServant() {
	return new PowerupObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PowerupObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PowerupObjectAdapter(static_cast<PowerupObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

