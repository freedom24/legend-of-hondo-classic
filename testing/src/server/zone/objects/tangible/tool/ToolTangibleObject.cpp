/*
 *	server/zone/objects/tangible/tool/ToolTangibleObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "ToolTangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

/*
 *	ToolTangibleObjectStub
 */

ToolTangibleObject::ToolTangibleObject() : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new ToolTangibleObjectImplementation();
	_impl->_setStub(this);
}

ToolTangibleObject::ToolTangibleObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

ToolTangibleObject::~ToolTangibleObject() {
}


TransactionalObject* ToolTangibleObject::clone() {
	ToolTangibleObject* objectCopy = new ToolTangibleObject(DummyConstructorParameter::instance());
	objectCopy->_impl = new ToolTangibleObjectImplementation(DummyConstructorParameter::instance());
	*((ToolTangibleObjectImplementation*) objectCopy->_impl) = *((ToolTangibleObjectImplementation*) _impl);
	objectCopy->_impl->_setStub(objectCopy);
	return (TransactionalObject*) objectCopy;
}


void ToolTangibleObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ToolTangibleObjectImplementation*) _impl)->initializeTransientMembers();
}

/*
 *	ToolTangibleObjectImplementation
 */

ToolTangibleObjectImplementation::ToolTangibleObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}

ToolTangibleObjectImplementation::~ToolTangibleObjectImplementation() {
}


void ToolTangibleObjectImplementation::finalize() {
}

void ToolTangibleObjectImplementation::_initializeImplementation() {
	_setClassHelper(ToolTangibleObjectHelper::instance());

	_serializationHelperMethod();
}

void ToolTangibleObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ToolTangibleObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ToolTangibleObjectImplementation::_getStub() {
	return _this;
}

ToolTangibleObjectImplementation::operator const ToolTangibleObject*() {
	return _this;
}

void ToolTangibleObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ToolTangibleObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ToolTangibleObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ToolTangibleObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ToolTangibleObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ToolTangibleObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ToolTangibleObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ToolTangibleObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("ToolTangibleObject");

}

ToolTangibleObjectImplementation::ToolTangibleObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/ToolTangibleObject.idl(54):  		Logger.setLoggingName("ToolTangibleObject");
	Logger::setLoggingName("ToolTangibleObject");
}

void ToolTangibleObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/tool/ToolTangibleObject.idl(58):  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/tool/ToolTangibleObject.idl(60):  		Logger.setLoggingName("ToolTangibleObject");
	Logger::setLoggingName("ToolTangibleObject");
}

/*
 *	ToolTangibleObjectAdapter
 */

ToolTangibleObjectAdapter::ToolTangibleObjectAdapter(ToolTangibleObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* ToolTangibleObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	default:
		return NULL;
	}

	return resp;
}

void ToolTangibleObjectAdapter::initializeTransientMembers() {
	((ToolTangibleObjectImplementation*) impl)->initializeTransientMembers();
}

/*
 *	ToolTangibleObjectHelper
 */

ToolTangibleObjectHelper* ToolTangibleObjectHelper::staticInitializer = ToolTangibleObjectHelper::instance();

ToolTangibleObjectHelper::ToolTangibleObjectHelper() {
	className = "ToolTangibleObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ToolTangibleObjectHelper::finalizeHelper() {
	ToolTangibleObjectHelper::finalize();
}

DistributedObject* ToolTangibleObjectHelper::instantiateObject() {
	return new ToolTangibleObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* ToolTangibleObjectHelper::instantiateServant() {
	return new ToolTangibleObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ToolTangibleObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ToolTangibleObjectAdapter((ToolTangibleObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

