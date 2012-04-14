/*
 *	server/zone/objects/waypoint/WaypointObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "WaypointObject.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	WaypointObjectStub
 */

enum {RPC_SETCELLID__INT_,RPC_SETPLANETCRC__INT_,RPC_GETPLANETCRC__,RPC_SETCOLOR__BYTE_,RPC_SETACTIVE__BYTE_,RPC_SETUNKNOWN__LONG_,RPC_SETSPECIALTYPEID__INT_,RPC_GETSPECIALTYPEID__,RPC_TOGGLESTATUS__,RPC_ISACTIVE__,RPC_GETCOLOR__,RPC_GETDETAILEDDESCRIPTION__,RPC_SETDETAILEDDESCRIPTION__STRING_};

WaypointObject::WaypointObject() : IntangibleObject(DummyConstructorParameter::instance()) {
	WaypointObjectImplementation* _implementation = new WaypointObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("WaypointObject");
}

WaypointObject::WaypointObject(DummyConstructorParameter* param) : IntangibleObject(param) {
	_setClassName("WaypointObject");
}

WaypointObject::~WaypointObject() {
}



void WaypointObject::loadTemplateData(SharedObjectTemplate* templateData) {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void WaypointObject::insertToMessage(BaseMessage* msg) {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->insertToMessage(msg);
}

void WaypointObject::setCellID(unsigned int id) {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETCELLID__INT_);
		method.addUnsignedIntParameter(id);

		method.executeWithVoidReturn();
	} else
		_implementation->setCellID(id);
}

void WaypointObject::setPlanetCRC(unsigned int crc) {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETPLANETCRC__INT_);
		method.addUnsignedIntParameter(crc);

		method.executeWithVoidReturn();
	} else
		_implementation->setPlanetCRC(crc);
}

unsigned int WaypointObject::getPlanetCRC() {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPLANETCRC__);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getPlanetCRC();
}

void WaypointObject::setColor(byte newColor) {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETCOLOR__BYTE_);
		method.addByteParameter(newColor);

		method.executeWithVoidReturn();
	} else
		_implementation->setColor(newColor);
}

void WaypointObject::setActive(byte newStatus) {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETACTIVE__BYTE_);
		method.addByteParameter(newStatus);

		method.executeWithVoidReturn();
	} else
		_implementation->setActive(newStatus);
}

void WaypointObject::setUnknown(unsigned long long id) {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETUNKNOWN__LONG_);
		method.addUnsignedLongParameter(id);

		method.executeWithVoidReturn();
	} else
		_implementation->setUnknown(id);
}

void WaypointObject::setSpecialTypeID(int id) {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSPECIALTYPEID__INT_);
		method.addSignedIntParameter(id);

		method.executeWithVoidReturn();
	} else
		_implementation->setSpecialTypeID(id);
}

int WaypointObject::getSpecialTypeID() {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSPECIALTYPEID__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getSpecialTypeID();
}

void WaypointObject::toggleStatus() {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_TOGGLESTATUS__);

		method.executeWithVoidReturn();
	} else
		_implementation->toggleStatus();
}

bool WaypointObject::isActive() {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISACTIVE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isActive();
}

byte WaypointObject::getColor() {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCOLOR__);

		return method.executeWithByteReturn();
	} else
		return _implementation->getColor();
}

String WaypointObject::getDetailedDescription() {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDETAILEDDESCRIPTION__);

		method.executeWithAsciiReturn(_return_getDetailedDescription);
		return _return_getDetailedDescription;
	} else
		return _implementation->getDetailedDescription();
}

void WaypointObject::setDetailedDescription(const String& desc) {
	WaypointObjectImplementation* _implementation = static_cast<WaypointObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETDETAILEDDESCRIPTION__STRING_);
		method.addAsciiParameter(desc);

		method.executeWithVoidReturn();
	} else
		_implementation->setDetailedDescription(desc);
}

DistributedObjectServant* WaypointObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void WaypointObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	WaypointObjectImplementation
 */

WaypointObjectImplementation::WaypointObjectImplementation(DummyConstructorParameter* param) : IntangibleObjectImplementation(param) {
	_initializeImplementation();
}


WaypointObjectImplementation::~WaypointObjectImplementation() {
}


void WaypointObjectImplementation::finalize() {
}

void WaypointObjectImplementation::_initializeImplementation() {
	_setClassHelper(WaypointObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void WaypointObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<WaypointObject*>(stub);
	IntangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* WaypointObjectImplementation::_getStub() {
	return _this;
}

WaypointObjectImplementation::operator const WaypointObject*() {
	return _this;
}

void WaypointObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void WaypointObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void WaypointObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void WaypointObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void WaypointObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void WaypointObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void WaypointObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void WaypointObjectImplementation::_serializationHelperMethod() {
	IntangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("WaypointObject");

}

void WaypointObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(WaypointObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool WaypointObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (IntangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "WaypointObject.cellID") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&cellID, stream);
		return true;
	}

	if (_name == "WaypointObject.unknown") {
		TypeInfo<unsigned long long >::parseFromBinaryStream(&unknown, stream);
		return true;
	}

	if (_name == "WaypointObject.planetCRC") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&planetCRC, stream);
		return true;
	}

	if (_name == "WaypointObject.detailedDescription") {
		TypeInfo<String >::parseFromBinaryStream(&detailedDescription, stream);
		return true;
	}

	if (_name == "WaypointObject.color") {
		TypeInfo<byte >::parseFromBinaryStream(&color, stream);
		return true;
	}

	if (_name == "WaypointObject.active") {
		TypeInfo<byte >::parseFromBinaryStream(&active, stream);
		return true;
	}

	if (_name == "WaypointObject.specialTypeID") {
		TypeInfo<int >::parseFromBinaryStream(&specialTypeID, stream);
		return true;
	}


	return false;
}

void WaypointObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = WaypointObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int WaypointObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = IntangibleObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "WaypointObject.cellID";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&cellID, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "WaypointObject.unknown";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&unknown, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "WaypointObject.planetCRC";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&planetCRC, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "WaypointObject.detailedDescription";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&detailedDescription, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "WaypointObject.color";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<byte >::toBinaryStream(&color, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "WaypointObject.active";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<byte >::toBinaryStream(&active, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "WaypointObject.specialTypeID";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&specialTypeID, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 7;
}

WaypointObjectImplementation::WaypointObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/waypoint/WaypointObject.idl():  		Logger.setLoggingName("WaypointObject");
	Logger::setLoggingName("WaypointObject");
}

void WaypointObjectImplementation::setCellID(unsigned int id) {
	// server/zone/objects/waypoint/WaypointObject.idl():  		cellID = id;
	cellID = id;
}

void WaypointObjectImplementation::setPlanetCRC(unsigned int crc) {
	// server/zone/objects/waypoint/WaypointObject.idl():  		planetCRC = crc;
	planetCRC = crc;
}

unsigned int WaypointObjectImplementation::getPlanetCRC() {
	// server/zone/objects/waypoint/WaypointObject.idl():  		return planetCRC;
	return planetCRC;
}

void WaypointObjectImplementation::setColor(byte newColor) {
	// server/zone/objects/waypoint/WaypointObject.idl():  		color = newColor;
	color = newColor;
}

void WaypointObjectImplementation::setActive(byte newStatus) {
	// server/zone/objects/waypoint/WaypointObject.idl():  		active = newStatus;
	active = newStatus;
}

void WaypointObjectImplementation::setUnknown(unsigned long long id) {
	// server/zone/objects/waypoint/WaypointObject.idl():  		unknown = id;
	unknown = id;
}

void WaypointObjectImplementation::setSpecialTypeID(int id) {
	// server/zone/objects/waypoint/WaypointObject.idl():  		specialTypeID = id;
	specialTypeID = id;
}

int WaypointObjectImplementation::getSpecialTypeID() {
	// server/zone/objects/waypoint/WaypointObject.idl():  		return specialTypeID;
	return specialTypeID;
}

void WaypointObjectImplementation::toggleStatus() {
	// server/zone/objects/waypoint/WaypointObject.idl():  		active = !active;
	active = !active;
}

bool WaypointObjectImplementation::isActive() {
	// server/zone/objects/waypoint/WaypointObject.idl():  		return active;
	return active;
}

byte WaypointObjectImplementation::getColor() {
	// server/zone/objects/waypoint/WaypointObject.idl():  		return color;
	return color;
}

void WaypointObjectImplementation::setDetailedDescription(const String& desc) {
	// server/zone/objects/waypoint/WaypointObject.idl():  		detailedDescription = desc;
	detailedDescription = desc;
}

/*
 *	WaypointObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


WaypointObjectAdapter::WaypointObjectAdapter(WaypointObject* obj) : IntangibleObjectAdapter(obj) {
}

void WaypointObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_SETCELLID__INT_:
		setCellID(inv->getUnsignedIntParameter());
		break;
	case RPC_SETPLANETCRC__INT_:
		setPlanetCRC(inv->getUnsignedIntParameter());
		break;
	case RPC_GETPLANETCRC__:
		resp->insertInt(getPlanetCRC());
		break;
	case RPC_SETCOLOR__BYTE_:
		setColor(inv->getByteParameter());
		break;
	case RPC_SETACTIVE__BYTE_:
		setActive(inv->getByteParameter());
		break;
	case RPC_SETUNKNOWN__LONG_:
		setUnknown(inv->getUnsignedLongParameter());
		break;
	case RPC_SETSPECIALTYPEID__INT_:
		setSpecialTypeID(inv->getSignedIntParameter());
		break;
	case RPC_GETSPECIALTYPEID__:
		resp->insertSignedInt(getSpecialTypeID());
		break;
	case RPC_TOGGLESTATUS__:
		toggleStatus();
		break;
	case RPC_ISACTIVE__:
		resp->insertBoolean(isActive());
		break;
	case RPC_GETCOLOR__:
		resp->insertByte(getColor());
		break;
	case RPC_GETDETAILEDDESCRIPTION__:
		resp->insertAscii(getDetailedDescription());
		break;
	case RPC_SETDETAILEDDESCRIPTION__STRING_:
		setDetailedDescription(inv->getAsciiParameter(_param0_setDetailedDescription__String_));
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void WaypointObjectAdapter::setCellID(unsigned int id) {
	(static_cast<WaypointObject*>(stub))->setCellID(id);
}

void WaypointObjectAdapter::setPlanetCRC(unsigned int crc) {
	(static_cast<WaypointObject*>(stub))->setPlanetCRC(crc);
}

unsigned int WaypointObjectAdapter::getPlanetCRC() {
	return (static_cast<WaypointObject*>(stub))->getPlanetCRC();
}

void WaypointObjectAdapter::setColor(byte newColor) {
	(static_cast<WaypointObject*>(stub))->setColor(newColor);
}

void WaypointObjectAdapter::setActive(byte newStatus) {
	(static_cast<WaypointObject*>(stub))->setActive(newStatus);
}

void WaypointObjectAdapter::setUnknown(unsigned long long id) {
	(static_cast<WaypointObject*>(stub))->setUnknown(id);
}

void WaypointObjectAdapter::setSpecialTypeID(int id) {
	(static_cast<WaypointObject*>(stub))->setSpecialTypeID(id);
}

int WaypointObjectAdapter::getSpecialTypeID() {
	return (static_cast<WaypointObject*>(stub))->getSpecialTypeID();
}

void WaypointObjectAdapter::toggleStatus() {
	(static_cast<WaypointObject*>(stub))->toggleStatus();
}

bool WaypointObjectAdapter::isActive() {
	return (static_cast<WaypointObject*>(stub))->isActive();
}

byte WaypointObjectAdapter::getColor() {
	return (static_cast<WaypointObject*>(stub))->getColor();
}

String WaypointObjectAdapter::getDetailedDescription() {
	return (static_cast<WaypointObject*>(stub))->getDetailedDescription();
}

void WaypointObjectAdapter::setDetailedDescription(const String& desc) {
	(static_cast<WaypointObject*>(stub))->setDetailedDescription(desc);
}

/*
 *	WaypointObjectHelper
 */

WaypointObjectHelper* WaypointObjectHelper::staticInitializer = WaypointObjectHelper::instance();

WaypointObjectHelper::WaypointObjectHelper() {
	className = "WaypointObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void WaypointObjectHelper::finalizeHelper() {
	WaypointObjectHelper::finalize();
}

DistributedObject* WaypointObjectHelper::instantiateObject() {
	return new WaypointObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* WaypointObjectHelper::instantiateServant() {
	return new WaypointObjectImplementation();
}

DistributedObjectAdapter* WaypointObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WaypointObjectAdapter(static_cast<WaypointObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

