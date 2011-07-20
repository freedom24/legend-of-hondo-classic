/*
 *	server/zone/objects/tangible/deed/vehicle/VehicleDeed.cpp generated by engine3 IDL compiler 0.60
 */

#include "VehicleDeed.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	VehicleDeedStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_UPDATECRAFTINGVALUES__MANUFACTURESCHEMATIC_,RPC_ISVEHICLEDEEDOBJECT__};

VehicleDeed::VehicleDeed() : Deed(DummyConstructorParameter::instance()) {
	VehicleDeedImplementation* _implementation = new VehicleDeedImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

VehicleDeed::VehicleDeed(DummyConstructorParameter* param) : Deed(param) {
}

VehicleDeed::~VehicleDeed() {
}


void VehicleDeed::initializeTransientMembers() {
	VehicleDeedImplementation* _implementation = (VehicleDeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void VehicleDeed::loadTemplateData(SharedObjectTemplate* templateData) {
	VehicleDeedImplementation* _implementation = (VehicleDeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void VehicleDeed::fillAttributeList(AttributeListMessage* alm, CreatureObject* object) {
	VehicleDeedImplementation* _implementation = (VehicleDeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(alm, object);
}

void VehicleDeed::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	VehicleDeedImplementation* _implementation = (VehicleDeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int VehicleDeed::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	VehicleDeedImplementation* _implementation = (VehicleDeedImplementation*) _getImplementation();
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

void VehicleDeed::updateCraftingValues(ManufactureSchematic* schematic) {
	VehicleDeedImplementation* _implementation = (VehicleDeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATECRAFTINGVALUES__MANUFACTURESCHEMATIC_);
		method.addObjectParameter(schematic);

		method.executeWithVoidReturn();
	} else
		_implementation->updateCraftingValues(schematic);
}

bool VehicleDeed::isVehicleDeedObject() {
	VehicleDeedImplementation* _implementation = (VehicleDeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISVEHICLEDEEDOBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isVehicleDeedObject();
}

DistributedObjectServant* VehicleDeed::_getImplementation() {

	_updated = true;
	return _impl;
}

void VehicleDeed::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	VehicleDeedImplementation
 */

VehicleDeedImplementation::VehicleDeedImplementation(DummyConstructorParameter* param) : DeedImplementation(param) {
	_initializeImplementation();
}


VehicleDeedImplementation::~VehicleDeedImplementation() {
}


void VehicleDeedImplementation::finalize() {
}

void VehicleDeedImplementation::_initializeImplementation() {
	_setClassHelper(VehicleDeedHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void VehicleDeedImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (VehicleDeed*) stub;
	DeedImplementation::_setStub(stub);
}

DistributedObjectStub* VehicleDeedImplementation::_getStub() {
	return _this;
}

VehicleDeedImplementation::operator const VehicleDeed*() {
	return _this;
}

void VehicleDeedImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void VehicleDeedImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void VehicleDeedImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void VehicleDeedImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void VehicleDeedImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void VehicleDeedImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void VehicleDeedImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void VehicleDeedImplementation::_serializationHelperMethod() {
	DeedImplementation::_serializationHelperMethod();

	_setClassName("VehicleDeed");

}

void VehicleDeedImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(VehicleDeedImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool VehicleDeedImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (DeedImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "hitPoints") {
		TypeInfo<int >::parseFromBinaryStream(&hitPoints, stream);
		return true;
	}

	if (_name == "controlDeviceObjectTemplate") {
		TypeInfo<String >::parseFromBinaryStream(&controlDeviceObjectTemplate, stream);
		return true;
	}


	return false;
}

void VehicleDeedImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = VehicleDeedImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int VehicleDeedImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "hitPoints";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&hitPoints, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "controlDeviceObjectTemplate";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&controlDeviceObjectTemplate, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 2 + DeedImplementation::writeObjectMembers(stream);
}

VehicleDeedImplementation::VehicleDeedImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/deed/vehicle/VehicleDeed.idl():  		Logger.setLoggingName("VehicleDeed");
	Logger::setLoggingName("VehicleDeed");
	// server/zone/objects/tangible/deed/vehicle/VehicleDeed.idl():  		hitPoints = 8000;
	hitPoints = 8000;
}

bool VehicleDeedImplementation::isVehicleDeedObject() {
	// server/zone/objects/tangible/deed/vehicle/VehicleDeed.idl():  		return true;
	return true;
}

/*
 *	VehicleDeedAdapter
 */

VehicleDeedAdapter::VehicleDeedAdapter(VehicleDeedImplementation* obj) : DeedAdapter(obj) {
}

Packet* VehicleDeedAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect((CreatureObject*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case RPC_UPDATECRAFTINGVALUES__MANUFACTURESCHEMATIC_:
		updateCraftingValues((ManufactureSchematic*) inv->getObjectParameter());
		break;
	case RPC_ISVEHICLEDEEDOBJECT__:
		resp->insertBoolean(isVehicleDeedObject());
		break;
	default:
		return NULL;
	}

	return resp;
}

void VehicleDeedAdapter::initializeTransientMembers() {
	((VehicleDeedImplementation*) impl)->initializeTransientMembers();
}

int VehicleDeedAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return ((VehicleDeedImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void VehicleDeedAdapter::updateCraftingValues(ManufactureSchematic* schematic) {
	((VehicleDeedImplementation*) impl)->updateCraftingValues(schematic);
}

bool VehicleDeedAdapter::isVehicleDeedObject() {
	return ((VehicleDeedImplementation*) impl)->isVehicleDeedObject();
}

/*
 *	VehicleDeedHelper
 */

VehicleDeedHelper* VehicleDeedHelper::staticInitializer = VehicleDeedHelper::instance();

VehicleDeedHelper::VehicleDeedHelper() {
	className = "VehicleDeed";

	Core::getObjectBroker()->registerClass(className, this);
}

void VehicleDeedHelper::finalizeHelper() {
	VehicleDeedHelper::finalize();
}

DistributedObject* VehicleDeedHelper::instantiateObject() {
	return new VehicleDeed(DummyConstructorParameter::instance());
}

DistributedObjectServant* VehicleDeedHelper::instantiateServant() {
	return new VehicleDeedImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* VehicleDeedHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new VehicleDeedAdapter((VehicleDeedImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

