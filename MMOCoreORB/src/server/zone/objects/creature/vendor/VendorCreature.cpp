/*
 *	server/zone/objects/creature/vendor/VendorCreature.cpp generated by engine3 IDL compiler 0.60
 */

#include "VendorCreature.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

/*
 *	VendorCreatureStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_,RPC_SETOWNERID__LONG_,RPC_ISVENDOR__,RPC_ISVENDORCREATURE__};

VendorCreature::VendorCreature() : CreatureObject(DummyConstructorParameter::instance()) {
	VendorCreatureImplementation* _implementation = new VendorCreatureImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

VendorCreature::VendorCreature(DummyConstructorParameter* param) : CreatureObject(param) {
}

VendorCreature::~VendorCreature() {
}


void VendorCreature::loadTemplateData(SharedObjectTemplate* templateData) {
	VendorCreatureImplementation* _implementation = (VendorCreatureImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void VendorCreature::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	VendorCreatureImplementation* _implementation = (VendorCreatureImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int VendorCreature::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	VendorCreatureImplementation* _implementation = (VendorCreatureImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void VendorCreature::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	VendorCreatureImplementation* _implementation = (VendorCreatureImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

Vendor* VendorCreature::getVendor() {
	VendorCreatureImplementation* _implementation = (VendorCreatureImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getVendor();
}

void VendorCreature::setOwnerID(unsigned long long ownerID) {
	VendorCreatureImplementation* _implementation = (VendorCreatureImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETOWNERID__LONG_);
		method.addUnsignedLongParameter(ownerID);

		method.executeWithVoidReturn();
	} else
		_implementation->setOwnerID(ownerID);
}

bool VendorCreature::isVendor() {
	VendorCreatureImplementation* _implementation = (VendorCreatureImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISVENDOR__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isVendor();
}

bool VendorCreature::isVendorCreature() {
	VendorCreatureImplementation* _implementation = (VendorCreatureImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISVENDORCREATURE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isVendorCreature();
}

DistributedObjectServant* VendorCreature::_getImplementation() {

	_updated = true;
	return _impl;
}

void VendorCreature::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	VendorCreatureImplementation
 */

VendorCreatureImplementation::VendorCreatureImplementation(DummyConstructorParameter* param) : CreatureObjectImplementation(param) {
	_initializeImplementation();
}


VendorCreatureImplementation::~VendorCreatureImplementation() {
}


void VendorCreatureImplementation::finalize() {
}

void VendorCreatureImplementation::_initializeImplementation() {
	_setClassHelper(VendorCreatureHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void VendorCreatureImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (VendorCreature*) stub;
	CreatureObjectImplementation::_setStub(stub);
}

DistributedObjectStub* VendorCreatureImplementation::_getStub() {
	return _this;
}

VendorCreatureImplementation::operator const VendorCreature*() {
	return _this;
}

void VendorCreatureImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void VendorCreatureImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void VendorCreatureImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void VendorCreatureImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void VendorCreatureImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void VendorCreatureImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void VendorCreatureImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void VendorCreatureImplementation::_serializationHelperMethod() {
	CreatureObjectImplementation::_serializationHelperMethod();

	_setClassName("VendorCreature");

}

void VendorCreatureImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(VendorCreatureImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool VendorCreatureImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (CreatureObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "vendor") {
		TypeInfo<Vendor >::parseFromBinaryStream(&vendor, stream);
		return true;
	}


	return false;
}

void VendorCreatureImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = VendorCreatureImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int VendorCreatureImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "vendor";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Vendor >::toBinaryStream(&vendor, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + CreatureObjectImplementation::writeObjectMembers(stream);
}

VendorCreatureImplementation::VendorCreatureImplementation() {
	_initializeImplementation();
	// server/zone/objects/creature/vendor/VendorCreature.idl():  		Logger.setLoggingName("VendorCreature");
	Logger::setLoggingName("VendorCreature");
}

Vendor* VendorCreatureImplementation::getVendor() {
	// server/zone/objects/creature/vendor/VendorCreature.idl():  		return vendor;
	return (&vendor);
}

void VendorCreatureImplementation::setOwnerID(unsigned long long ownerID) {
	// server/zone/objects/creature/vendor/VendorCreature.idl():  		vendor.setOwnerID(ownerID);
	(&vendor)->setOwnerID(ownerID);
}

bool VendorCreatureImplementation::isVendor() {
	// server/zone/objects/creature/vendor/VendorCreature.idl():  		return true;
	return true;
}

bool VendorCreatureImplementation::isVendorCreature() {
	// server/zone/objects/creature/vendor/VendorCreature.idl():  		return true;
	return true;
}

/*
 *	VendorCreatureAdapter
 */

VendorCreatureAdapter::VendorCreatureAdapter(VendorCreatureImplementation* obj) : CreatureObjectAdapter(obj) {
}

Packet* VendorCreatureAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case RPC_SETOWNERID__LONG_:
		setOwnerID(inv->getUnsignedLongParameter());
		break;
	case RPC_ISVENDOR__:
		resp->insertBoolean(isVendor());
		break;
	case RPC_ISVENDORCREATURE__:
		resp->insertBoolean(isVendorCreature());
		break;
	default:
		return NULL;
	}

	return resp;
}

int VendorCreatureAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((VendorCreatureImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void VendorCreatureAdapter::setOwnerID(unsigned long long ownerID) {
	((VendorCreatureImplementation*) impl)->setOwnerID(ownerID);
}

bool VendorCreatureAdapter::isVendor() {
	return ((VendorCreatureImplementation*) impl)->isVendor();
}

bool VendorCreatureAdapter::isVendorCreature() {
	return ((VendorCreatureImplementation*) impl)->isVendorCreature();
}

/*
 *	VendorCreatureHelper
 */

VendorCreatureHelper* VendorCreatureHelper::staticInitializer = VendorCreatureHelper::instance();

VendorCreatureHelper::VendorCreatureHelper() {
	className = "VendorCreature";

	Core::getObjectBroker()->registerClass(className, this);
}

void VendorCreatureHelper::finalizeHelper() {
	VendorCreatureHelper::finalize();
}

DistributedObject* VendorCreatureHelper::instantiateObject() {
	return new VendorCreature(DummyConstructorParameter::instance());
}

DistributedObjectServant* VendorCreatureHelper::instantiateServant() {
	return new VendorCreatureImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* VendorCreatureHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new VendorCreatureAdapter((VendorCreatureImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

