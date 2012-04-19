/*
 *	server/zone/objects/tangible/wearables/WearableObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "WearableObject.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	WearableObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_APPLYATTACHMENT__CREATUREOBJECT_ATTACHMENT_,RPC_SETATTACHMENTMODS__CREATUREOBJECT_BOOL_,RPC_ISWEARABLEOBJECT__,RPC_ISEQUIPPED__,RPC_GETMAXSOCKETS__,RPC_SOCKETSUSED__,RPC_SOCKETSLEFT__,RPC_SETMAXSOCKETS__INT_,RPC_REPAIRATTEMPT__INT_,};

WearableObject::WearableObject() : TangibleObject(DummyConstructorParameter::instance()) {
	WearableObjectImplementation* _implementation = new WearableObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("WearableObject");
}

WearableObject::WearableObject(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("WearableObject");
}

WearableObject::~WearableObject() {
}



void WearableObject::initializeTransientMembers() {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void WearableObject::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void WearableObject::updateCraftingValues(CraftingValues* values, bool initialUpdate) {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(values, initialUpdate);
}

void WearableObject::applyAttachment(CreatureObject* player, Attachment* attachment) {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_APPLYATTACHMENT__CREATUREOBJECT_ATTACHMENT_);
		method.addObjectParameter(player);
		method.addObjectParameter(attachment);

		method.executeWithVoidReturn();
	} else
		_implementation->applyAttachment(player, attachment);
}

void WearableObject::setAttachmentMods(CreatureObject* player, bool remove) {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETATTACHMENTMODS__CREATUREOBJECT_BOOL_);
		method.addObjectParameter(player);
		method.addBooleanParameter(remove);

		method.executeWithVoidReturn();
	} else
		_implementation->setAttachmentMods(player, remove);
}

bool WearableObject::isWearableObject() {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISWEARABLEOBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isWearableObject();
}

bool WearableObject::isEquipped() {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISEQUIPPED__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isEquipped();
}

int WearableObject::getMaxSockets() {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMAXSOCKETS__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getMaxSockets();
}

int WearableObject::socketsUsed() {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SOCKETSUSED__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->socketsUsed();
}

int WearableObject::socketsLeft() {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SOCKETSLEFT__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->socketsLeft();
}

void WearableObject::setMaxSockets(int sockets) {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMAXSOCKETS__INT_);
		method.addSignedIntParameter(sockets);

		method.executeWithVoidReturn();
	} else
		_implementation->setMaxSockets(sockets);
}

String WearableObject::repairAttempt(int repairChance) {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REPAIRATTEMPT__INT_);
		method.addSignedIntParameter(repairChance);

		method.executeWithAsciiReturn(_return_repairAttempt);
		return _return_repairAttempt;
	} else
		return _implementation->repairAttempt(repairChance);
}

WearableSkillModMap* WearableObject::getWearableSkillModMap() {
	WearableObjectImplementation* _implementation = static_cast<WearableObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getWearableSkillModMap();
}

DistributedObjectServant* WearableObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void WearableObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	WearableObjectImplementation
 */

WearableObjectImplementation::WearableObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


WearableObjectImplementation::~WearableObjectImplementation() {
}


void WearableObjectImplementation::finalize() {
}

void WearableObjectImplementation::_initializeImplementation() {
	_setClassHelper(WearableObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void WearableObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<WearableObject*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* WearableObjectImplementation::_getStub() {
	return _this;
}

WearableObjectImplementation::operator const WearableObject*() {
	return _this;
}

void WearableObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void WearableObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void WearableObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void WearableObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void WearableObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void WearableObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void WearableObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void WearableObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("WearableObject");

}

void WearableObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(WearableObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool WearableObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "WearableObject.socketCount") {
		TypeInfo<int >::parseFromBinaryStream(&socketCount, stream);
		return true;
	}

	if (_name == "WearableObject.socketsGenerated") {
		TypeInfo<bool >::parseFromBinaryStream(&socketsGenerated, stream);
		return true;
	}

	if (_name == "WearableObject.wearableSkillModMap") {
		TypeInfo<WearableSkillModMap >::parseFromBinaryStream(&wearableSkillModMap, stream);
		return true;
	}


	return false;
}

void WearableObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = WearableObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int WearableObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "WearableObject.socketCount";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&socketCount, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "WearableObject.socketsGenerated";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&socketsGenerated, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "WearableObject.wearableSkillModMap";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<WearableSkillModMap >::toBinaryStream(&wearableSkillModMap, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 3;
}

WearableObjectImplementation::WearableObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		socketCount = 0;
	socketCount = 0;
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		socketsGenerated = false;
	socketsGenerated = false;
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		Logger.setLoggingName("WearableObject");
	Logger::setLoggingName("WearableObject");
}

bool WearableObjectImplementation::isWearableObject() {
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		return true;
	return true;
}

int WearableObjectImplementation::getMaxSockets() {
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		return socketCount;
	return socketCount;
}

int WearableObjectImplementation::socketsUsed() {
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		return wearableSkillModMap.getUsedSocketCount();
	return (&wearableSkillModMap)->getUsedSocketCount();
}

int WearableObjectImplementation::socketsLeft() {
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		return socketCount - socketsUsed();
	return socketCount - socketsUsed();
}

void WearableObjectImplementation::setMaxSockets(int sockets) {
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		socketCount = sockets;
	socketCount = sockets;
}

WearableSkillModMap* WearableObjectImplementation::getWearableSkillModMap() {
	// server/zone/objects/tangible/wearables/WearableObject.idl():  		return wearableSkillModMap;
	return (&wearableSkillModMap);
}

/*
 *	WearableObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


WearableObjectAdapter::WearableObjectAdapter(WearableObject* obj) : TangibleObjectAdapter(obj) {
}

void WearableObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_APPLYATTACHMENT__CREATUREOBJECT_ATTACHMENT_:
		applyAttachment(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<Attachment*>(inv->getObjectParameter()));
		break;
	case RPC_SETATTACHMENTMODS__CREATUREOBJECT_BOOL_:
		setAttachmentMods(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getBooleanParameter());
		break;
	case RPC_ISWEARABLEOBJECT__:
		resp->insertBoolean(isWearableObject());
		break;
	case RPC_ISEQUIPPED__:
		resp->insertBoolean(isEquipped());
		break;
	case RPC_GETMAXSOCKETS__:
		resp->insertSignedInt(getMaxSockets());
		break;
	case RPC_SOCKETSUSED__:
		resp->insertSignedInt(socketsUsed());
		break;
	case RPC_SOCKETSLEFT__:
		resp->insertSignedInt(socketsLeft());
		break;
	case RPC_SETMAXSOCKETS__INT_:
		setMaxSockets(inv->getSignedIntParameter());
		break;
	case RPC_REPAIRATTEMPT__INT_:
		resp->insertAscii(repairAttempt(inv->getSignedIntParameter()));
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void WearableObjectAdapter::initializeTransientMembers() {
	(static_cast<WearableObject*>(stub))->initializeTransientMembers();
}

void WearableObjectAdapter::applyAttachment(CreatureObject* player, Attachment* attachment) {
	(static_cast<WearableObject*>(stub))->applyAttachment(player, attachment);
}

void WearableObjectAdapter::setAttachmentMods(CreatureObject* player, bool remove) {
	(static_cast<WearableObject*>(stub))->setAttachmentMods(player, remove);
}

bool WearableObjectAdapter::isWearableObject() {
	return (static_cast<WearableObject*>(stub))->isWearableObject();
}

bool WearableObjectAdapter::isEquipped() {
	return (static_cast<WearableObject*>(stub))->isEquipped();
}

int WearableObjectAdapter::getMaxSockets() {
	return (static_cast<WearableObject*>(stub))->getMaxSockets();
}

int WearableObjectAdapter::socketsUsed() {
	return (static_cast<WearableObject*>(stub))->socketsUsed();
}

int WearableObjectAdapter::socketsLeft() {
	return (static_cast<WearableObject*>(stub))->socketsLeft();
}

void WearableObjectAdapter::setMaxSockets(int sockets) {
	(static_cast<WearableObject*>(stub))->setMaxSockets(sockets);
}

String WearableObjectAdapter::repairAttempt(int repairChance) {
	return (static_cast<WearableObject*>(stub))->repairAttempt(repairChance);
}

/*
 *	WearableObjectHelper
 */

WearableObjectHelper* WearableObjectHelper::staticInitializer = WearableObjectHelper::instance();

WearableObjectHelper::WearableObjectHelper() {
	className = "WearableObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void WearableObjectHelper::finalizeHelper() {
	WearableObjectHelper::finalize();
}

DistributedObject* WearableObjectHelper::instantiateObject() {
	return new WearableObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* WearableObjectHelper::instantiateServant() {
	return new WearableObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* WearableObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WearableObjectAdapter(static_cast<WearableObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

