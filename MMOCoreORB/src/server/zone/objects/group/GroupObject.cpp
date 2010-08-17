/*
 *	server/zone/objects/group/GroupObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "GroupObject.h"

#include "server/chat/room/ChatRoom.h"

#include "server/zone/Zone.h"


// Imported class dependencies

#include "server/zone/objects/area/ActiveArea.h"

#include "server/zone/managers/object/ObjectMap.h"

#include "engine/util/Quaternion.h"

#include "server/zone/objects/scene/ObserverEventMap.h"

#include "system/util/SortedVector.h"

#include "server/zone/managers/creature/CreatureManager.h"

#include "system/lang/Time.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "engine/core/ObjectUpdateToDatabaseTask.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/managers/planet/HeightMap.h"

#include "server/zone/managers/planet/PlanetManager.h"

#include "server/zone/objects/scene/variables/StringId.h"

#include "system/util/VectorMap.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/chat/room/ChatRoom.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "system/util/Vector.h"

#include "server/zone/managers/planet/MapLocationTable.h"

#include "server/zone/objects/scene/variables/PendingTasksMap.h"

/*
 *	GroupObjectStub
 */

GroupObject::GroupObject() : SceneObject(DummyConstructorParameter::instance()) {
	ManagedObject::_setImplementation(new GroupObjectImplementation());
	ManagedObject::_getImplementation()->_setStub(this);
}

GroupObject::GroupObject(DummyConstructorParameter* param) : SceneObject(param) {
}

GroupObject::~GroupObject() {
}


void GroupObject::sendBaselinesTo(SceneObject* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _getImplementation())->sendBaselinesTo(player);
}

void GroupObject::broadcastMessage(BaseMessage* msg) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(msg);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _getImplementation())->broadcastMessage(msg);
}

void GroupObject::addMember(SceneObject* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _getImplementation())->addMember(player);
}

void GroupObject::removeMember(SceneObject* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _getImplementation())->removeMember(player);
}

void GroupObject::disband() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _getImplementation())->disband();
}

void GroupObject::makeLeader(SceneObject* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _getImplementation())->makeLeader(player);
}

bool GroupObject::hasMember(SceneObject* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else
		return ((GroupObjectImplementation*) _getImplementation())->hasMember(player);
}

void GroupObject::startChatRoom() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _getImplementation())->startChatRoom();
}

void GroupObject::destroyChatRoom() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _getImplementation())->destroyChatRoom();
}

int GroupObject::getGroupLevel() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithSignedIntReturn();
	} else
		return ((GroupObjectImplementation*) _getImplementation())->getGroupLevel();
}

ChatRoom* GroupObject::getGroupChannel() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return (ChatRoom*) method.executeWithObjectReturn();
	} else
		return ((GroupObjectImplementation*) _getImplementation())->getGroupChannel();
}

int GroupObject::getGroupSize() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithSignedIntReturn();
	} else
		return ((GroupObjectImplementation*) _getImplementation())->getGroupSize();
}

SceneObject* GroupObject::getGroupMember(int index) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addSignedIntParameter(index);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((GroupObjectImplementation*) _getImplementation())->getGroupMember(index);
}

void GroupObject::initializeLeader(SceneObject* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _getImplementation())->initializeLeader(player);
}

SceneObject* GroupObject::getLeader() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((GroupObjectImplementation*) _getImplementation())->getLeader();
}

GroupList* GroupObject::getGroupList() {
	if (isNull()) {
		throw ObjectNotLocalException(this);

	} else
		return ((GroupObjectImplementation*) _getImplementation())->getGroupList();
}

/*
 *	GroupObjectImplementation
 */

GroupObjectImplementation::GroupObjectImplementation(DummyConstructorParameter* param) : SceneObjectImplementation(param) {
	_initializeImplementation();
}


GroupObjectImplementation::~GroupObjectImplementation() {
}


void GroupObjectImplementation::finalize() {
}

void GroupObjectImplementation::_initializeImplementation() {
	_setClassHelper(GroupObjectHelper::instance());

	_serializationHelperMethod();
}

void GroupObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (GroupObject*) stub;
	SceneObjectImplementation::_setStub(stub);
}

DistributedObjectStub* GroupObjectImplementation::_getStub() {
	return _this;
}

GroupObjectImplementation::operator const GroupObject*() {
	return _this;
}

TransactionalObject* GroupObjectImplementation::clone() {
	return (TransactionalObject*) new GroupObjectImplementation(*this);
}


void GroupObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void GroupObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void GroupObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void GroupObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void GroupObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void GroupObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void GroupObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void GroupObjectImplementation::_serializationHelperMethod() {
	SceneObjectImplementation::_serializationHelperMethod();

	_setClassName("GroupObject");

	addSerializableVariable("groupMembers", &groupMembers);
	addSerializableVariable("chatRoom", &chatRoom);
	addSerializableVariable("groupLevel", &groupLevel);
}

GroupObjectImplementation::GroupObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/group/GroupObject.idl(65):  		groupLevel = 0;
	groupLevel = 0;
	// server/zone/objects/group/GroupObject.idl(67):  		Logger.setLoggingName("GroupObject");
	Logger::setLoggingName("GroupObject");
	// server/zone/objects/group/GroupObject.idl(69):  		chatRoom = null;
	chatRoom = NULL;
}

int GroupObjectImplementation::getGroupLevel() {
	// server/zone/objects/group/GroupObject.idl(98):  		return groupLevel;
	return groupLevel;
}

ChatRoom* GroupObjectImplementation::getGroupChannel() {
	// server/zone/objects/group/GroupObject.idl(102):  		return chatRoom;
	return chatRoom;
}

int GroupObjectImplementation::getGroupSize() {
	// server/zone/objects/group/GroupObject.idl(106):  		return groupMembers.size();
	return (&groupMembers)->size();
}

SceneObject* GroupObjectImplementation::getGroupMember(int index) {
	// server/zone/objects/group/GroupObject.idl(110):  		return groupMembers.get(index);
	return (&groupMembers)->get(index);
}

void GroupObjectImplementation::initializeLeader(SceneObject* player) {
	// server/zone/objects/group/GroupObject.idl(114):  		groupMembers.add(player);
	(&groupMembers)->add(player);
}

SceneObject* GroupObjectImplementation::getLeader() {
	// server/zone/objects/group/GroupObject.idl(118):  		return groupMembers.get(0);
	return (&groupMembers)->get(0);
}

GroupList* GroupObjectImplementation::getGroupList() {
	// server/zone/objects/group/GroupObject.idl(123):  		return groupMembers;
	return (&groupMembers);
}

/*
 *	GroupObjectAdapter
 */

GroupObjectAdapter::GroupObjectAdapter(GroupObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* GroupObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 7:
		broadcastMessage((BaseMessage*) inv->getObjectParameter());
		break;
	case 8:
		addMember((SceneObject*) inv->getObjectParameter());
		break;
	case 9:
		removeMember((SceneObject*) inv->getObjectParameter());
		break;
	case 10:
		disband();
		break;
	case 11:
		makeLeader((SceneObject*) inv->getObjectParameter());
		break;
	case 12:
		resp->insertBoolean(hasMember((SceneObject*) inv->getObjectParameter()));
		break;
	case 13:
		startChatRoom();
		break;
	case 14:
		destroyChatRoom();
		break;
	case 15:
		resp->insertSignedInt(getGroupLevel());
		break;
	case 16:
		resp->insertLong(getGroupChannel()->_getObjectID());
		break;
	case 17:
		resp->insertSignedInt(getGroupSize());
		break;
	case 18:
		resp->insertLong(getGroupMember(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 19:
		initializeLeader((SceneObject*) inv->getObjectParameter());
		break;
	case 20:
		resp->insertLong(getLeader()->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void GroupObjectAdapter::sendBaselinesTo(SceneObject* player) {
	((GroupObjectImplementation*) impl)->sendBaselinesTo(player);
}

void GroupObjectAdapter::broadcastMessage(BaseMessage* msg) {
	((GroupObjectImplementation*) impl)->broadcastMessage(msg);
}

void GroupObjectAdapter::addMember(SceneObject* player) {
	((GroupObjectImplementation*) impl)->addMember(player);
}

void GroupObjectAdapter::removeMember(SceneObject* player) {
	((GroupObjectImplementation*) impl)->removeMember(player);
}

void GroupObjectAdapter::disband() {
	((GroupObjectImplementation*) impl)->disband();
}

void GroupObjectAdapter::makeLeader(SceneObject* player) {
	((GroupObjectImplementation*) impl)->makeLeader(player);
}

bool GroupObjectAdapter::hasMember(SceneObject* player) {
	return ((GroupObjectImplementation*) impl)->hasMember(player);
}

void GroupObjectAdapter::startChatRoom() {
	((GroupObjectImplementation*) impl)->startChatRoom();
}

void GroupObjectAdapter::destroyChatRoom() {
	((GroupObjectImplementation*) impl)->destroyChatRoom();
}

int GroupObjectAdapter::getGroupLevel() {
	return ((GroupObjectImplementation*) impl)->getGroupLevel();
}

ChatRoom* GroupObjectAdapter::getGroupChannel() {
	return ((GroupObjectImplementation*) impl)->getGroupChannel();
}

int GroupObjectAdapter::getGroupSize() {
	return ((GroupObjectImplementation*) impl)->getGroupSize();
}

SceneObject* GroupObjectAdapter::getGroupMember(int index) {
	return ((GroupObjectImplementation*) impl)->getGroupMember(index);
}

void GroupObjectAdapter::initializeLeader(SceneObject* player) {
	((GroupObjectImplementation*) impl)->initializeLeader(player);
}

SceneObject* GroupObjectAdapter::getLeader() {
	return ((GroupObjectImplementation*) impl)->getLeader();
}

/*
 *	GroupObjectHelper
 */

GroupObjectHelper* GroupObjectHelper::staticInitializer = GroupObjectHelper::instance();

GroupObjectHelper::GroupObjectHelper() {
	className = "GroupObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void GroupObjectHelper::finalizeHelper() {
	GroupObjectHelper::finalize();
}

DistributedObject* GroupObjectHelper::instantiateObject() {
	return new GroupObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* GroupObjectHelper::instantiateServant() {
	return new GroupObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* GroupObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new GroupObjectAdapter((GroupObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

