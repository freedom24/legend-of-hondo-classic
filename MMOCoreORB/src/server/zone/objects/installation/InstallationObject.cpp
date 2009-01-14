/*
 *	server/zone/objects/installation/InstallationObject.cpp generated by engine3 IDL compiler 0.55
 */

#include "InstallationObject.h"

#include "InstallationObjectImplementation.h"

#include "../tangible/TangibleObject.h"

#include "../creature/CreatureObject.h"

#include "../scene/SceneObject.h"

#include "../player/Player.h"

#include "../tangible/deed/DeedObject.h"

#include "../../Zone.h"

/*
 *	InstallationObjectStub
 */

InstallationObject::InstallationObject(unsigned long long oid) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new InstallationObjectImplementation(oid);
	_impl->_setStub(this);
}

InstallationObject::InstallationObject(unsigned long long oid, DeedObject* deed) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new InstallationObjectImplementation(oid, deed);
	_impl->_setStub(this);
}

InstallationObject::InstallationObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

InstallationObject::~InstallationObject() {
}

void InstallationObject::sendTo(Player* player, bool doClose) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->sendTo(player, doClose);
}

void InstallationObject::handleStructureRedeed(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->handleStructureRedeed(player);
}

void InstallationObject::handleStructureRedeedConfirm(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->handleStructureRedeedConfirm(player);
}

void InstallationObject::handleMakeDeed(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->handleMakeDeed(player);
}

void InstallationObject::handleStructureStatus(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->handleStructureStatus(player);
}

void InstallationObject::handleStructureManageMaintenance(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->handleStructureManageMaintenance(player);
}

void InstallationObject::handleStructureAddEnergy(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->handleStructureAddEnergy(player);
}

String& InstallationObject::getOwner() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithAsciiReturn(_return_getOwner);
		return _return_getOwner;
	} else
		return ((InstallationObjectImplementation*) _impl)->getOwner();
}

void InstallationObject::setOwner(const String& owner) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addAsciiParameter(owner);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->setOwner(owner);
}

unsigned long long InstallationObject::getOwnerID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getOwnerID();
}

void InstallationObject::setOwnerID(unsigned long long owner) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addUnsignedLongParameter(owner);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->setOwnerID(owner);
}

unsigned int InstallationObject::getDeedCRC() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getDeedCRC();
}

int InstallationObject::getDestroyCode() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithSignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getDestroyCode();
}

int InstallationObject::getLotSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithSignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getLotSize();
}

void InstallationObject::setLotSize(int size) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addSignedIntParameter(size);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->setLotSize(size);
}

unsigned int InstallationObject::getNewDefenderUpdateCounter(unsigned int cnt) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addUnsignedIntParameter(cnt);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getNewDefenderUpdateCounter(cnt);
}

void InstallationObject::updateMaintenance() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->updateMaintenance();
}

void InstallationObject::addMaintenance(float maint) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addFloatParameter(maint);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->addMaintenance(maint);
}

float InstallationObject::getSurplusMaintenance() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithFloatReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getSurplusMaintenance();
}

float InstallationObject::getMaintenanceRate() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithFloatReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getMaintenanceRate();
}

void InstallationObject::setMaintenanceRate(float rate) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addFloatParameter(rate);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->setMaintenanceRate(rate);
}

void InstallationObject::addPower(float pow) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addFloatParameter(pow);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->addPower(pow);
}

float InstallationObject::getSurplusPower() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithFloatReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getSurplusPower();
}

float InstallationObject::getPowerRate() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithFloatReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getPowerRate();
}

void InstallationObject::setPowerRate(float rate) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addFloatParameter(rate);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->setPowerRate(rate);
}

void InstallationObject::updateOperators() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->updateOperators();
}

int InstallationObject::getOperatorListSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithSignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getOperatorListSize();
}

SceneObject* InstallationObject::getOperator(int idx) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addSignedIntParameter(idx);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getOperator(idx);
}

void InstallationObject::addOperator(SceneObject* op) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addObjectParameter(op);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->addOperator(op);
}

void InstallationObject::removeOperator(SceneObject* op) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addObjectParameter(op);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->removeOperator(op);
}

void InstallationObject::activateSync() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->activateSync();
}

bool InstallationObject::isOperating() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithBooleanReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->isOperating();
}

void InstallationObject::setOperating(bool state) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);
		method.addBooleanParameter(state);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->setOperating(state);
}

float InstallationObject::getExtractionRate() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		return method.executeWithFloatReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getExtractionRate();
}

float InstallationObject::getActualRate() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);

		return method.executeWithFloatReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getActualRate();
}

unsigned long long InstallationObject::getActiveResourceID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getActiveResourceID();
}

float InstallationObject::getHopperSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);

		return method.executeWithFloatReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getHopperSize();
}

float InstallationObject::getHopperSizeMax() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);

		return method.executeWithFloatReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getHopperSizeMax();
}

void InstallationObject::updateHopper() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->updateHopper();
}

void InstallationObject::setHopperUpdateCounter(int counter) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);
		method.addSignedIntParameter(counter);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->setHopperUpdateCounter(counter);
}

int InstallationObject::getNewHopperUpdateCounter(int counter) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);
		method.addSignedIntParameter(counter);

		return method.executeWithSignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getNewHopperUpdateCounter(counter);
}

int InstallationObject::getHopperUpdateCounter() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);

		return method.executeWithSignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getHopperUpdateCounter();
}

int InstallationObject::getHopperItemCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 48);

		return method.executeWithSignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getHopperItemCount();
}

unsigned long long InstallationObject::getHopperItemID(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 49);
		method.addSignedIntParameter(index);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getHopperItemID(index);
}

float InstallationObject::getHopperItemQuantity(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 50);
		method.addSignedIntParameter(index);

		return method.executeWithFloatReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getHopperItemQuantity(index);
}

float InstallationObject::getHopperItemQuantity(unsigned long long rid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 51);
		method.addUnsignedLongParameter(rid);

		return method.executeWithFloatReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getHopperItemQuantity(rid);
}

float InstallationObject::removeHopperItem(unsigned long long rid, int quantity) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 52);
		method.addUnsignedLongParameter(rid);
		method.addSignedIntParameter(quantity);

		return method.executeWithFloatReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->removeHopperItem(rid, quantity);
}

/*
 *	InstallationObjectAdapter
 */

InstallationObjectAdapter::InstallationObjectAdapter(InstallationObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* InstallationObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendTo((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 7:
		handleStructureRedeed((Player*) inv->getObjectParameter());
		break;
	case 8:
		handleStructureRedeedConfirm((Player*) inv->getObjectParameter());
		break;
	case 9:
		handleMakeDeed((Player*) inv->getObjectParameter());
		break;
	case 10:
		handleStructureStatus((Player*) inv->getObjectParameter());
		break;
	case 11:
		handleStructureManageMaintenance((Player*) inv->getObjectParameter());
		break;
	case 12:
		handleStructureAddEnergy((Player*) inv->getObjectParameter());
		break;
	case 13:
		resp->insertAscii(getOwner());
		break;
	case 14:
		setOwner(inv->getAsciiParameter(_param0_setOwner__String_));
		break;
	case 15:
		resp->insertLong(getOwnerID());
		break;
	case 16:
		setOwnerID(inv->getUnsignedLongParameter());
		break;
	case 17:
		resp->insertInt(getDeedCRC());
		break;
	case 18:
		resp->insertSignedInt(getDestroyCode());
		break;
	case 19:
		resp->insertSignedInt(getLotSize());
		break;
	case 20:
		setLotSize(inv->getSignedIntParameter());
		break;
	case 21:
		resp->insertInt(getNewDefenderUpdateCounter(inv->getUnsignedIntParameter()));
		break;
	case 22:
		updateMaintenance();
		break;
	case 23:
		addMaintenance(inv->getFloatParameter());
		break;
	case 24:
		resp->insertFloat(getSurplusMaintenance());
		break;
	case 25:
		resp->insertFloat(getMaintenanceRate());
		break;
	case 26:
		setMaintenanceRate(inv->getFloatParameter());
		break;
	case 27:
		addPower(inv->getFloatParameter());
		break;
	case 28:
		resp->insertFloat(getSurplusPower());
		break;
	case 29:
		resp->insertFloat(getPowerRate());
		break;
	case 30:
		setPowerRate(inv->getFloatParameter());
		break;
	case 31:
		updateOperators();
		break;
	case 32:
		resp->insertSignedInt(getOperatorListSize());
		break;
	case 33:
		resp->insertLong(getOperator(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 34:
		addOperator((SceneObject*) inv->getObjectParameter());
		break;
	case 35:
		removeOperator((SceneObject*) inv->getObjectParameter());
		break;
	case 36:
		activateSync();
		break;
	case 37:
		resp->insertBoolean(isOperating());
		break;
	case 38:
		setOperating(inv->getBooleanParameter());
		break;
	case 39:
		resp->insertFloat(getExtractionRate());
		break;
	case 40:
		resp->insertFloat(getActualRate());
		break;
	case 41:
		resp->insertLong(getActiveResourceID());
		break;
	case 42:
		resp->insertFloat(getHopperSize());
		break;
	case 43:
		resp->insertFloat(getHopperSizeMax());
		break;
	case 44:
		updateHopper();
		break;
	case 45:
		setHopperUpdateCounter(inv->getSignedIntParameter());
		break;
	case 46:
		resp->insertSignedInt(getNewHopperUpdateCounter(inv->getSignedIntParameter()));
		break;
	case 47:
		resp->insertSignedInt(getHopperUpdateCounter());
		break;
	case 48:
		resp->insertSignedInt(getHopperItemCount());
		break;
	case 49:
		resp->insertLong(getHopperItemID(inv->getSignedIntParameter()));
		break;
	case 50:
		resp->insertFloat(getHopperItemQuantity(inv->getSignedIntParameter()));
		break;
	case 51:
		resp->insertFloat(getHopperItemQuantity(inv->getUnsignedLongParameter()));
		break;
	case 52:
		resp->insertFloat(removeHopperItem(inv->getUnsignedLongParameter(), inv->getSignedIntParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void InstallationObjectAdapter::sendTo(Player* player, bool doClose) {
	return ((InstallationObjectImplementation*) impl)->sendTo(player, doClose);
}

void InstallationObjectAdapter::handleStructureRedeed(Player* player) {
	return ((InstallationObjectImplementation*) impl)->handleStructureRedeed(player);
}

void InstallationObjectAdapter::handleStructureRedeedConfirm(Player* player) {
	return ((InstallationObjectImplementation*) impl)->handleStructureRedeedConfirm(player);
}

void InstallationObjectAdapter::handleMakeDeed(Player* player) {
	return ((InstallationObjectImplementation*) impl)->handleMakeDeed(player);
}

void InstallationObjectAdapter::handleStructureStatus(Player* player) {
	return ((InstallationObjectImplementation*) impl)->handleStructureStatus(player);
}

void InstallationObjectAdapter::handleStructureManageMaintenance(Player* player) {
	return ((InstallationObjectImplementation*) impl)->handleStructureManageMaintenance(player);
}

void InstallationObjectAdapter::handleStructureAddEnergy(Player* player) {
	return ((InstallationObjectImplementation*) impl)->handleStructureAddEnergy(player);
}

String& InstallationObjectAdapter::getOwner() {
	return ((InstallationObjectImplementation*) impl)->getOwner();
}

void InstallationObjectAdapter::setOwner(const String& owner) {
	return ((InstallationObjectImplementation*) impl)->setOwner(owner);
}

unsigned long long InstallationObjectAdapter::getOwnerID() {
	return ((InstallationObjectImplementation*) impl)->getOwnerID();
}

void InstallationObjectAdapter::setOwnerID(unsigned long long owner) {
	return ((InstallationObjectImplementation*) impl)->setOwnerID(owner);
}

unsigned int InstallationObjectAdapter::getDeedCRC() {
	return ((InstallationObjectImplementation*) impl)->getDeedCRC();
}

int InstallationObjectAdapter::getDestroyCode() {
	return ((InstallationObjectImplementation*) impl)->getDestroyCode();
}

int InstallationObjectAdapter::getLotSize() {
	return ((InstallationObjectImplementation*) impl)->getLotSize();
}

void InstallationObjectAdapter::setLotSize(int size) {
	return ((InstallationObjectImplementation*) impl)->setLotSize(size);
}

unsigned int InstallationObjectAdapter::getNewDefenderUpdateCounter(unsigned int cnt) {
	return ((InstallationObjectImplementation*) impl)->getNewDefenderUpdateCounter(cnt);
}

void InstallationObjectAdapter::updateMaintenance() {
	return ((InstallationObjectImplementation*) impl)->updateMaintenance();
}

void InstallationObjectAdapter::addMaintenance(float maint) {
	return ((InstallationObjectImplementation*) impl)->addMaintenance(maint);
}

float InstallationObjectAdapter::getSurplusMaintenance() {
	return ((InstallationObjectImplementation*) impl)->getSurplusMaintenance();
}

float InstallationObjectAdapter::getMaintenanceRate() {
	return ((InstallationObjectImplementation*) impl)->getMaintenanceRate();
}

void InstallationObjectAdapter::setMaintenanceRate(float rate) {
	return ((InstallationObjectImplementation*) impl)->setMaintenanceRate(rate);
}

void InstallationObjectAdapter::addPower(float pow) {
	return ((InstallationObjectImplementation*) impl)->addPower(pow);
}

float InstallationObjectAdapter::getSurplusPower() {
	return ((InstallationObjectImplementation*) impl)->getSurplusPower();
}

float InstallationObjectAdapter::getPowerRate() {
	return ((InstallationObjectImplementation*) impl)->getPowerRate();
}

void InstallationObjectAdapter::setPowerRate(float rate) {
	return ((InstallationObjectImplementation*) impl)->setPowerRate(rate);
}

void InstallationObjectAdapter::updateOperators() {
	return ((InstallationObjectImplementation*) impl)->updateOperators();
}

int InstallationObjectAdapter::getOperatorListSize() {
	return ((InstallationObjectImplementation*) impl)->getOperatorListSize();
}

SceneObject* InstallationObjectAdapter::getOperator(int idx) {
	return ((InstallationObjectImplementation*) impl)->getOperator(idx);
}

void InstallationObjectAdapter::addOperator(SceneObject* op) {
	return ((InstallationObjectImplementation*) impl)->addOperator(op);
}

void InstallationObjectAdapter::removeOperator(SceneObject* op) {
	return ((InstallationObjectImplementation*) impl)->removeOperator(op);
}

void InstallationObjectAdapter::activateSync() {
	return ((InstallationObjectImplementation*) impl)->activateSync();
}

bool InstallationObjectAdapter::isOperating() {
	return ((InstallationObjectImplementation*) impl)->isOperating();
}

void InstallationObjectAdapter::setOperating(bool state) {
	return ((InstallationObjectImplementation*) impl)->setOperating(state);
}

float InstallationObjectAdapter::getExtractionRate() {
	return ((InstallationObjectImplementation*) impl)->getExtractionRate();
}

float InstallationObjectAdapter::getActualRate() {
	return ((InstallationObjectImplementation*) impl)->getActualRate();
}

unsigned long long InstallationObjectAdapter::getActiveResourceID() {
	return ((InstallationObjectImplementation*) impl)->getActiveResourceID();
}

float InstallationObjectAdapter::getHopperSize() {
	return ((InstallationObjectImplementation*) impl)->getHopperSize();
}

float InstallationObjectAdapter::getHopperSizeMax() {
	return ((InstallationObjectImplementation*) impl)->getHopperSizeMax();
}

void InstallationObjectAdapter::updateHopper() {
	return ((InstallationObjectImplementation*) impl)->updateHopper();
}

void InstallationObjectAdapter::setHopperUpdateCounter(int counter) {
	return ((InstallationObjectImplementation*) impl)->setHopperUpdateCounter(counter);
}

int InstallationObjectAdapter::getNewHopperUpdateCounter(int counter) {
	return ((InstallationObjectImplementation*) impl)->getNewHopperUpdateCounter(counter);
}

int InstallationObjectAdapter::getHopperUpdateCounter() {
	return ((InstallationObjectImplementation*) impl)->getHopperUpdateCounter();
}

int InstallationObjectAdapter::getHopperItemCount() {
	return ((InstallationObjectImplementation*) impl)->getHopperItemCount();
}

unsigned long long InstallationObjectAdapter::getHopperItemID(int index) {
	return ((InstallationObjectImplementation*) impl)->getHopperItemID(index);
}

float InstallationObjectAdapter::getHopperItemQuantity(int index) {
	return ((InstallationObjectImplementation*) impl)->getHopperItemQuantity(index);
}

float InstallationObjectAdapter::getHopperItemQuantity(unsigned long long rid) {
	return ((InstallationObjectImplementation*) impl)->getHopperItemQuantity(rid);
}

float InstallationObjectAdapter::removeHopperItem(unsigned long long rid, int quantity) {
	return ((InstallationObjectImplementation*) impl)->removeHopperItem(rid, quantity);
}

/*
 *	InstallationObjectHelper
 */

InstallationObjectHelper* InstallationObjectHelper::staticInitializer = InstallationObjectHelper::instance();

InstallationObjectHelper::InstallationObjectHelper() {
	className = "InstallationObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void InstallationObjectHelper::finalizeHelper() {
	InstallationObjectHelper::finalize();
}

DistributedObject* InstallationObjectHelper::instantiateObject() {
	return new InstallationObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* InstallationObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new InstallationObjectAdapter((InstallationObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	InstallationObjectServant
 */

InstallationObjectServant::InstallationObjectServant(unsigned long long oid, int type) : TangibleObjectImplementation(oid, type) {
	_classHelper = InstallationObjectHelper::instance();
}

InstallationObjectServant::~InstallationObjectServant() {
}

void InstallationObjectServant::_setStub(DistributedObjectStub* stub) {
	_this = (InstallationObject*) stub;
	TangibleObjectServant::_setStub(stub);
}

DistributedObjectStub* InstallationObjectServant::_getStub() {
	return _this;
}

