/*
 *	server/zone/managers/item/ItemManager.cpp generated by engine3 IDL compiler 0.55
 */

#include "ItemManager.h"

#include "ItemManagerImplementation.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/Zone.h"

#include "../../objects/tangible/TangibleObject.h"

#include "../../objects/tangible/weapons/Weapon.h"

#include "../../objects/tangible/wearables/Armor.h"

#include "../../objects/tangible/deed/DeedObject.h"

#include "../../objects/creature/bluefrog/BlueFrogVector.h"

#include "../../objects/player/Player.h"

/*
 *	ItemManagerStub
 */

ItemManager::ItemManager(ZoneServer* server, ZoneProcessServerImplementation* pServer) {
	_impl = new ItemManagerImplementation(server, pServer);
	_impl->_setStub(this);
}

ItemManager::ItemManager(DummyConstructorParameter* param) {
	_impl = NULL;
}

ItemManager::~ItemManager() {
}

void ItemManager::loadStaticWorldObjects() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ItemManagerImplementation*) _impl)->loadStaticWorldObjects();
}

TangibleObject* ItemManager::getPlayerItem(Player* player, long long objectid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addSignedLongParameter(objectid);

		return (TangibleObject*) method.executeWithObjectReturn();
	} else
		return ((ItemManagerImplementation*) _impl)->getPlayerItem(player, objectid);
}

void ItemManager::loadPlayerItems(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ItemManagerImplementation*) _impl)->loadPlayerItems(player);
}

void ItemManager::loadDefaultPlayerItems(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ItemManagerImplementation*) _impl)->loadDefaultPlayerItems(player);
}

void ItemManager::loadPlayerDatapadItems(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ItemManagerImplementation*) _impl)->loadPlayerDatapadItems(player);
}

void ItemManager::unloadPlayerItems(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ItemManagerImplementation*) _impl)->unloadPlayerItems(player);
}

void ItemManager::createPlayerItem(Player* player, TangibleObject* item) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		((ItemManagerImplementation*) _impl)->createPlayerItem(player, item);
}

TangibleObject* ItemManager::clonePlayerObjectTemplate(unsigned long long objectid, TangibleObject* templ) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addUnsignedLongParameter(objectid);
		method.addObjectParameter(templ);

		return (TangibleObject*) method.executeWithObjectReturn();
	} else
		return ((ItemManagerImplementation*) _impl)->clonePlayerObjectTemplate(objectid, templ);
}

TangibleObject* ItemManager::initializeTangibleForCrafting(int objecttype, unsigned long long objectid, unsigned long long objectcrc, String& objectn, String& objecttemp, bool equipped) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addSignedIntParameter(objecttype);
		method.addUnsignedLongParameter(objectid);
		method.addUnsignedLongParameter(objectcrc);
		method.addAsciiParameter(objectn);
		method.addAsciiParameter(objecttemp);
		method.addBooleanParameter(equipped);

		return (TangibleObject*) method.executeWithObjectReturn();
	} else
		return ((ItemManagerImplementation*) _impl)->initializeTangibleForCrafting(objecttype, objectid, objectcrc, objectn, objecttemp, equipped);
}

void ItemManager::savePlayerItem(Player* player, TangibleObject* item) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		((ItemManagerImplementation*) _impl)->savePlayerItem(player, item);
}

void ItemManager::deletePlayerItem(Player* player, TangibleObject* item, bool notify) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(player);
		method.addObjectParameter(item);
		method.addBooleanParameter(notify);

		method.executeWithVoidReturn();
	} else
		((ItemManagerImplementation*) _impl)->deletePlayerItem(player, item, notify);
}

void ItemManager::transferContainerItem(Player* player, TangibleObject* item, unsigned long long destinationID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(player);
		method.addObjectParameter(item);
		method.addUnsignedLongParameter(destinationID);

		method.executeWithVoidReturn();
	} else
		((ItemManagerImplementation*) _impl)->transferContainerItem(player, item, destinationID);
}

void ItemManager::loadStructurePlayerItems(Player* player, unsigned long long cellID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(cellID);

		method.executeWithVoidReturn();
	} else
		((ItemManagerImplementation*) _impl)->loadStructurePlayerItems(player, cellID);
}

void ItemManager::showDbStats(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ItemManagerImplementation*) _impl)->showDbStats(player);
}

void ItemManager::showDbDeleted(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ItemManagerImplementation*) _impl)->showDbDeleted(player);
}

void ItemManager::purgeDbDeleted(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ItemManagerImplementation*) _impl)->purgeDbDeleted(player);
}

unsigned long long ItemManager::getNextStaticObjectID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((ItemManagerImplementation*) _impl)->getNextStaticObjectID();
}

BlueFrogVector* ItemManager::getBFItemList() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return (BlueFrogVector*) method.executeWithObjectReturn();
	} else
		return ((ItemManagerImplementation*) _impl)->getBFItemList();
}

BlueFrogVector* ItemManager::getBFProfList(String& group) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addAsciiParameter(group);

		return (BlueFrogVector*) method.executeWithObjectReturn();
	} else
		return ((ItemManagerImplementation*) _impl)->getBFProfList(group);
}

String& ItemManager::getBFProf(String& key) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addAsciiParameter(key);

		method.executeWithAsciiReturn(_return_getBFProf);
		return _return_getBFProf;
	} else
		return ((ItemManagerImplementation*) _impl)->getBFProf(key);
}

void ItemManager::giveBFItemSet(Player* player, String& set) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addObjectParameter(player);
		method.addAsciiParameter(set);

		method.executeWithVoidReturn();
	} else
		((ItemManagerImplementation*) _impl)->giveBFItemSet(player, set);
}

/*
 *	ItemManagerAdapter
 */

ItemManagerAdapter::ItemManagerAdapter(ItemManagerImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* ItemManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		loadStaticWorldObjects();
		break;
	case 7:
		resp->insertLong(getPlayerItem((Player*) inv->getObjectParameter(), inv->getSignedLongParameter())->_getObjectID());
		break;
	case 8:
		loadPlayerItems((Player*) inv->getObjectParameter());
		break;
	case 9:
		loadDefaultPlayerItems((Player*) inv->getObjectParameter());
		break;
	case 10:
		loadPlayerDatapadItems((Player*) inv->getObjectParameter());
		break;
	case 11:
		unloadPlayerItems((Player*) inv->getObjectParameter());
		break;
	case 12:
		createPlayerItem((Player*) inv->getObjectParameter(), (TangibleObject*) inv->getObjectParameter());
		break;
	case 13:
		resp->insertLong(clonePlayerObjectTemplate(inv->getUnsignedLongParameter(), (TangibleObject*) inv->getObjectParameter())->_getObjectID());
		break;
	case 14:
		resp->insertLong(initializeTangibleForCrafting(inv->getSignedIntParameter(), inv->getUnsignedLongParameter(), inv->getUnsignedLongParameter(), inv->getAsciiParameter(_param3_initializeTangibleForCrafting__int_long_long_String_String_bool_), inv->getAsciiParameter(_param4_initializeTangibleForCrafting__int_long_long_String_String_bool_), inv->getBooleanParameter())->_getObjectID());
		break;
	case 15:
		savePlayerItem((Player*) inv->getObjectParameter(), (TangibleObject*) inv->getObjectParameter());
		break;
	case 16:
		deletePlayerItem((Player*) inv->getObjectParameter(), (TangibleObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 17:
		transferContainerItem((Player*) inv->getObjectParameter(), (TangibleObject*) inv->getObjectParameter(), inv->getUnsignedLongParameter());
		break;
	case 18:
		loadStructurePlayerItems((Player*) inv->getObjectParameter(), inv->getUnsignedLongParameter());
		break;
	case 19:
		showDbStats((Player*) inv->getObjectParameter());
		break;
	case 20:
		showDbDeleted((Player*) inv->getObjectParameter());
		break;
	case 21:
		purgeDbDeleted((Player*) inv->getObjectParameter());
		break;
	case 22:
		resp->insertLong(getNextStaticObjectID());
		break;
	case 23:
		resp->insertLong(getBFItemList()->_getObjectID());
		break;
	case 24:
		resp->insertLong(getBFProfList(inv->getAsciiParameter(_param0_getBFProfList__String_))->_getObjectID());
		break;
	case 25:
		resp->insertAscii(getBFProf(inv->getAsciiParameter(_param0_getBFProf__String_)));
		break;
	case 26:
		giveBFItemSet((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_giveBFItemSet__Player_String_));
		break;
	default:
		return NULL;
	}

	return resp;
}

void ItemManagerAdapter::loadStaticWorldObjects() {
	return ((ItemManagerImplementation*) impl)->loadStaticWorldObjects();
}

TangibleObject* ItemManagerAdapter::getPlayerItem(Player* player, long long objectid) {
	return ((ItemManagerImplementation*) impl)->getPlayerItem(player, objectid);
}

void ItemManagerAdapter::loadPlayerItems(Player* player) {
	return ((ItemManagerImplementation*) impl)->loadPlayerItems(player);
}

void ItemManagerAdapter::loadDefaultPlayerItems(Player* player) {
	return ((ItemManagerImplementation*) impl)->loadDefaultPlayerItems(player);
}

void ItemManagerAdapter::loadPlayerDatapadItems(Player* player) {
	return ((ItemManagerImplementation*) impl)->loadPlayerDatapadItems(player);
}

void ItemManagerAdapter::unloadPlayerItems(Player* player) {
	return ((ItemManagerImplementation*) impl)->unloadPlayerItems(player);
}

void ItemManagerAdapter::createPlayerItem(Player* player, TangibleObject* item) {
	return ((ItemManagerImplementation*) impl)->createPlayerItem(player, item);
}

TangibleObject* ItemManagerAdapter::clonePlayerObjectTemplate(unsigned long long objectid, TangibleObject* templ) {
	return ((ItemManagerImplementation*) impl)->clonePlayerObjectTemplate(objectid, templ);
}

TangibleObject* ItemManagerAdapter::initializeTangibleForCrafting(int objecttype, unsigned long long objectid, unsigned long long objectcrc, String& objectn, String& objecttemp, bool equipped) {
	return ((ItemManagerImplementation*) impl)->initializeTangibleForCrafting(objecttype, objectid, objectcrc, objectn, objecttemp, equipped);
}

void ItemManagerAdapter::savePlayerItem(Player* player, TangibleObject* item) {
	return ((ItemManagerImplementation*) impl)->savePlayerItem(player, item);
}

void ItemManagerAdapter::deletePlayerItem(Player* player, TangibleObject* item, bool notify) {
	return ((ItemManagerImplementation*) impl)->deletePlayerItem(player, item, notify);
}

void ItemManagerAdapter::transferContainerItem(Player* player, TangibleObject* item, unsigned long long destinationID) {
	return ((ItemManagerImplementation*) impl)->transferContainerItem(player, item, destinationID);
}

void ItemManagerAdapter::loadStructurePlayerItems(Player* player, unsigned long long cellID) {
	return ((ItemManagerImplementation*) impl)->loadStructurePlayerItems(player, cellID);
}

void ItemManagerAdapter::showDbStats(Player* player) {
	return ((ItemManagerImplementation*) impl)->showDbStats(player);
}

void ItemManagerAdapter::showDbDeleted(Player* player) {
	return ((ItemManagerImplementation*) impl)->showDbDeleted(player);
}

void ItemManagerAdapter::purgeDbDeleted(Player* player) {
	return ((ItemManagerImplementation*) impl)->purgeDbDeleted(player);
}

unsigned long long ItemManagerAdapter::getNextStaticObjectID() {
	return ((ItemManagerImplementation*) impl)->getNextStaticObjectID();
}

BlueFrogVector* ItemManagerAdapter::getBFItemList() {
	return ((ItemManagerImplementation*) impl)->getBFItemList();
}

BlueFrogVector* ItemManagerAdapter::getBFProfList(String& group) {
	return ((ItemManagerImplementation*) impl)->getBFProfList(group);
}

String& ItemManagerAdapter::getBFProf(String& key) {
	return ((ItemManagerImplementation*) impl)->getBFProf(key);
}

void ItemManagerAdapter::giveBFItemSet(Player* player, String& set) {
	return ((ItemManagerImplementation*) impl)->giveBFItemSet(player, set);
}

/*
 *	ItemManagerHelper
 */

ItemManagerHelper* ItemManagerHelper::staticInitializer = ItemManagerHelper::instance();

ItemManagerHelper::ItemManagerHelper() {
	className = "ItemManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ItemManagerHelper::finalizeHelper() {
	ItemManagerHelper::finalize();
}

DistributedObject* ItemManagerHelper::instantiateObject() {
	return new ItemManager(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ItemManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ItemManagerAdapter((ItemManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ItemManagerServant
 */

ItemManagerServant::ItemManagerServant() {
	_classHelper = ItemManagerHelper::instance();
}

ItemManagerServant::~ItemManagerServant() {
}

void ItemManagerServant::_setStub(DistributedObjectStub* stub) {
	_this = (ItemManager*) stub;
}

DistributedObjectStub* ItemManagerServant::_getStub() {
	return _this;
}

