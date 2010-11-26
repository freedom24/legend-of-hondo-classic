/*
 *	server/zone/objects/cell/CellObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "CellObject.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	CellObjectStub
 */

CellObject::CellObject() : SceneObject(DummyConstructorParameter::instance()) {
	CellObjectImplementation* _implementation = new CellObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

CellObject::CellObject(DummyConstructorParameter* param) : SceneObject(param) {
}

CellObject::~CellObject() {
}


void CellObject::loadTemplateData(SharedObjectTemplate* templateData) {
	CellObjectImplementation* _implementation = (CellObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void CellObject::notifyLoadFromDatabase() {
	CellObjectImplementation* _implementation = (CellObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyLoadFromDatabase();
}

void CellObject::sendContainerObjectsTo(SceneObject* player) {
	CellObjectImplementation* _implementation = (CellObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendContainerObjectsTo(player);
}

int CellObject::canAddObject(SceneObject* object, int containmentType, String& errorDescription) {
	CellObjectImplementation* _implementation = (CellObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(object);
		method.addSignedIntParameter(containmentType);
		method.addAsciiParameter(errorDescription);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->canAddObject(object, containmentType, errorDescription);
}

bool CellObject::addObject(SceneObject* object, int containmentType, bool notifyClient) {
	CellObjectImplementation* _implementation = (CellObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(object);
		method.addSignedIntParameter(containmentType);
		method.addBooleanParameter(notifyClient);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->addObject(object, containmentType, notifyClient);
}

bool CellObject::removeObject(SceneObject* object, bool notifyClient) {
	CellObjectImplementation* _implementation = (CellObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(object);
		method.addBooleanParameter(notifyClient);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->removeObject(object, notifyClient);
}

void CellObject::initializeTransientMembers() {
	CellObjectImplementation* _implementation = (CellObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void CellObject::sendBaselinesTo(SceneObject* player) {
	CellObjectImplementation* _implementation = (CellObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBaselinesTo(player);
}

int CellObject::getCurrentNumerOfPlayerItems() {
	CellObjectImplementation* _implementation = (CellObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getCurrentNumerOfPlayerItems();
}

int CellObject::getCellNumber() {
	CellObjectImplementation* _implementation = (CellObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getCellNumber();
}

void CellObject::setCellNumber(int number) {
	CellObjectImplementation* _implementation = (CellObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addSignedIntParameter(number);

		method.executeWithVoidReturn();
	} else
		_implementation->setCellNumber(number);
}

bool CellObject::isCellObject() {
	CellObjectImplementation* _implementation = (CellObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCellObject();
}

DistributedObjectServant* CellObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void CellObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	CellObjectImplementation
 */

CellObjectImplementation::CellObjectImplementation(DummyConstructorParameter* param) : SceneObjectImplementation(param) {
	_initializeImplementation();
}


CellObjectImplementation::~CellObjectImplementation() {
}


void CellObjectImplementation::finalize() {
}

void CellObjectImplementation::_initializeImplementation() {
	_setClassHelper(CellObjectHelper::instance());

	_serializationHelperMethod();
}

void CellObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CellObject*) stub;
	SceneObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CellObjectImplementation::_getStub() {
	return _this;
}

CellObjectImplementation::operator const CellObject*() {
	return _this;
}

void CellObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CellObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CellObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CellObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CellObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CellObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CellObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CellObjectImplementation::_serializationHelperMethod() {
	SceneObjectImplementation::_serializationHelperMethod();

	_setClassName("CellObject");

	addSerializableVariable("cellNumber", &cellNumber);
	addSerializableVariable("currentNumberOfItems", &currentNumberOfItems);
}

CellObjectImplementation::CellObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/cell/CellObject.idl(59):  		Logger.setLoggingName("CellObject");
	Logger::setLoggingName("CellObject");
	// server/zone/objects/cell/CellObject.idl(61):  		cellNumber = 0;
	cellNumber = 0;
	// server/zone/objects/cell/CellObject.idl(63):  		currentNumberOfItems = 0;
	currentNumberOfItems = 0;
}

int CellObjectImplementation::getCellNumber() {
	// server/zone/objects/cell/CellObject.idl(135):  		return cellNumber;
	return cellNumber;
}

void CellObjectImplementation::setCellNumber(int number) {
	// server/zone/objects/cell/CellObject.idl(139):  		cellNumber = number;
	cellNumber = number;
}

bool CellObjectImplementation::isCellObject() {
	// server/zone/objects/cell/CellObject.idl(143):  		return true;
	return true;
}

/*
 *	CellObjectAdapter
 */

CellObjectAdapter::CellObjectAdapter(CellObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* CellObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		notifyLoadFromDatabase();
		break;
	case 7:
		sendContainerObjectsTo((SceneObject*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertSignedInt(canAddObject((SceneObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getAsciiParameter(_param2_canAddObject__SceneObject_int_String_)));
		break;
	case 9:
		resp->insertBoolean(addObject((SceneObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter()));
		break;
	case 10:
		resp->insertBoolean(removeObject((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter()));
		break;
	case 11:
		initializeTransientMembers();
		break;
	case 12:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 13:
		resp->insertSignedInt(getCurrentNumerOfPlayerItems());
		break;
	case 14:
		resp->insertSignedInt(getCellNumber());
		break;
	case 15:
		setCellNumber(inv->getSignedIntParameter());
		break;
	case 16:
		resp->insertBoolean(isCellObject());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CellObjectAdapter::notifyLoadFromDatabase() {
	((CellObjectImplementation*) impl)->notifyLoadFromDatabase();
}

void CellObjectAdapter::sendContainerObjectsTo(SceneObject* player) {
	((CellObjectImplementation*) impl)->sendContainerObjectsTo(player);
}

int CellObjectAdapter::canAddObject(SceneObject* object, int containmentType, String& errorDescription) {
	return ((CellObjectImplementation*) impl)->canAddObject(object, containmentType, errorDescription);
}

bool CellObjectAdapter::addObject(SceneObject* object, int containmentType, bool notifyClient) {
	return ((CellObjectImplementation*) impl)->addObject(object, containmentType, notifyClient);
}

bool CellObjectAdapter::removeObject(SceneObject* object, bool notifyClient) {
	return ((CellObjectImplementation*) impl)->removeObject(object, notifyClient);
}

void CellObjectAdapter::initializeTransientMembers() {
	((CellObjectImplementation*) impl)->initializeTransientMembers();
}

void CellObjectAdapter::sendBaselinesTo(SceneObject* player) {
	((CellObjectImplementation*) impl)->sendBaselinesTo(player);
}

int CellObjectAdapter::getCurrentNumerOfPlayerItems() {
	return ((CellObjectImplementation*) impl)->getCurrentNumerOfPlayerItems();
}

int CellObjectAdapter::getCellNumber() {
	return ((CellObjectImplementation*) impl)->getCellNumber();
}

void CellObjectAdapter::setCellNumber(int number) {
	((CellObjectImplementation*) impl)->setCellNumber(number);
}

bool CellObjectAdapter::isCellObject() {
	return ((CellObjectImplementation*) impl)->isCellObject();
}

/*
 *	CellObjectHelper
 */

CellObjectHelper* CellObjectHelper::staticInitializer = CellObjectHelper::instance();

CellObjectHelper::CellObjectHelper() {
	className = "CellObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CellObjectHelper::finalizeHelper() {
	CellObjectHelper::finalize();
}

DistributedObject* CellObjectHelper::instantiateObject() {
	return new CellObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* CellObjectHelper::instantiateServant() {
	return new CellObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CellObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CellObjectAdapter((CellObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

