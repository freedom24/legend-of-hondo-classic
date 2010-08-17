/*
 *	server/zone/managers/player/PlayerManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "PlayerManager.h"

#include "server/zone/managers/objectcontroller/ObjectController.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/packets/MessageCallback.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/tangible/wearables/ArmorObject.h"

#include "server/zone/objects/scene/Observable.h"


// Imported class dependencies

#include "server/zone/objects/scene/ObserverEventMap.h"

#include "server/zone/managers/player/PlayerManager.h"

#include "server/zone/managers/mission/MissionManager.h"

#include "server/zone/managers/resource/ResourceManager.h"

#include "server/zone/objects/scene/variables/CustomizationVariables.h"

#include "server/zone/managers/crafting/CraftingManager.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/managers/objectcontroller/command/CommandConfigManager.h"

#include "engine/core/ObjectUpdateToDatabaseTask.h"

#include "server/zone/managers/objectcontroller/command/CommandList.h"

#include "server/zone/objects/scene/variables/DeltaVector.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/chat/ChatManager.h"

#include "server/zone/managers/minigames/FishingManager.h"

#include "server/zone/managers/bazaar/BazaarManager.h"

#include "system/util/Vector.h"

#include "server/zone/managers/radial/RadialManager.h"

#include "engine/core/TaskManager.h"

#include "system/thread/atomic/AtomicInteger.h"

#include "engine/service/proto/BasePacketHandler.h"

/*
 *	PlayerManagerStub
 */

PlayerManager::PlayerManager(ZoneServer* zoneServer, ZoneProcessServerImplementation* impl) : Observer(DummyConstructorParameter::instance()) {
	ManagedObject::_setImplementation(new PlayerManagerImplementation(zoneServer, impl));
	ManagedObject::_getImplementation()->_setStub(this);
}

PlayerManager::PlayerManager(DummyConstructorParameter* param) : Observer(param) {
}

PlayerManager::~PlayerManager() {
}


void PlayerManager::loadNameMap() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->loadNameMap();
}

bool PlayerManager::createPlayer(MessageCallback* callback) {
	if (isNull()) {
		throw ObjectNotLocalException(this);

	} else
		return ((PlayerManagerImplementation*) _getImplementation())->createPlayer(callback);
}

bool PlayerManager::checkPlayerName(MessageCallback* callback) {
	if (isNull()) {
		throw ObjectNotLocalException(this);

	} else
		return ((PlayerManagerImplementation*) _getImplementation())->checkPlayerName(callback);
}

int PlayerManager::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlayerManagerImplementation*) _getImplementation())->notifyObserverEvent(eventType, observable, arg1, arg2);
}

int PlayerManager::notifyDestruction(TangibleObject* destructor, TangibleObject* destructedObject, int condition) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(destructor);
		method.addObjectParameter(destructedObject);
		method.addSignedIntParameter(condition);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlayerManagerImplementation*) _getImplementation())->notifyDestruction(destructor, destructedObject, condition);
}

int PlayerManager::notifyDefendersOfIncapacitation(TangibleObject* destructor, TangibleObject* destructedObject) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(destructor);
		method.addObjectParameter(destructedObject);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlayerManagerImplementation*) _getImplementation())->notifyDefendersOfIncapacitation(destructor, destructedObject);
}

void PlayerManager::killPlayer(TangibleObject* attacker, PlayerCreature* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(attacker);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->killPlayer(attacker, player);
}

byte PlayerManager::calculateIncapacitationTimer(PlayerCreature* player, int condition) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);
		method.addSignedIntParameter(condition);

		return method.executeWithByteReturn();
	} else
		return ((PlayerManagerImplementation*) _getImplementation())->calculateIncapacitationTimer(player, condition);
}

bool PlayerManager::checkEncumbrancies(PlayerCreature* player, ArmorObject* armor) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);
		method.addObjectParameter(armor);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerManagerImplementation*) _getImplementation())->checkEncumbrancies(player, armor);
}

void PlayerManager::applyEncumbrancies(PlayerCreature* player, ArmorObject* armor) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(player);
		method.addObjectParameter(armor);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->applyEncumbrancies(player, armor);
}

void PlayerManager::removeEncumbrancies(PlayerCreature* player, ArmorObject* armor) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(player);
		method.addObjectParameter(armor);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->removeEncumbrancies(player, armor);
}

void PlayerManager::awardBadge(PlayerCreature* player, unsigned int badge) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addUnsignedIntParameter(badge);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->awardBadge(player, badge);
}

void PlayerManager::setExperienceMultiplier(float globalMultiplier) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addFloatParameter(globalMultiplier);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->setExperienceMultiplier(globalMultiplier);
}

void PlayerManager::awardExperience(PlayerCreature* player, const String& xpType, int amount, bool sendSystemMessage, float localMultiplier) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(player);
		method.addAsciiParameter(xpType);
		method.addSignedIntParameter(amount);
		method.addBooleanParameter(sendSystemMessage);
		method.addFloatParameter(localMultiplier);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->awardExperience(player, xpType, amount, sendSystemMessage, localMultiplier);
}

void PlayerManager::handleAbortTradeMessage(PlayerCreature* player, bool doLock) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(player);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->handleAbortTradeMessage(player, doLock);
}

void PlayerManager::handleAddItemToTradeWindow(PlayerCreature* player, unsigned long long itemID) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(itemID);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->handleAddItemToTradeWindow(player, itemID);
}

void PlayerManager::handleGiveMoneyMessage(PlayerCreature* player, unsigned int value) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(player);
		method.addUnsignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->handleGiveMoneyMessage(player, value);
}

void PlayerManager::handleAcceptTransactionMessage(PlayerCreature* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->handleAcceptTransactionMessage(player);
}

void PlayerManager::handleUnAcceptTransactionMessage(PlayerCreature* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->handleUnAcceptTransactionMessage(player);
}

void PlayerManager::handleVerifyTradeMessage(PlayerCreature* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->handleVerifyTradeMessage(player);
}

bool PlayerManager::checkTradeItems(PlayerCreature* player, PlayerCreature* receiver) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addObjectParameter(player);
		method.addObjectParameter(receiver);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerManagerImplementation*) _getImplementation())->checkTradeItems(player, receiver);
}

void PlayerManager::sendBattleFatigueMessage(PlayerCreature* player, PlayerCreature* target) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addObjectParameter(player);
		method.addObjectParameter(target);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->sendBattleFatigueMessage(player, target);
}

int PlayerManager::getMedicalFacilityRating(CreatureObject* creature) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addObjectParameter(creature);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlayerManagerImplementation*) _getImplementation())->getMedicalFacilityRating(creature);
}

int PlayerManager::healEnhance(CreatureObject* enhancer, CreatureObject* patient, byte attribute, int buffvalue, float duration) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addObjectParameter(enhancer);
		method.addObjectParameter(patient);
		method.addByteParameter(attribute);
		method.addSignedIntParameter(buffvalue);
		method.addFloatParameter(duration);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlayerManagerImplementation*) _getImplementation())->healEnhance(enhancer, patient, attribute, buffvalue, duration);
}

void PlayerManager::disseminateExperience(TangibleObject* destructedObject, DamageMap* damageMap) {
	if (isNull()) {
		throw ObjectNotLocalException(this);

	} else
		((PlayerManagerImplementation*) _getImplementation())->disseminateExperience(destructedObject, damageMap);
}

void PlayerManager::sendMessageOfTheDay(PlayerCreature* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->sendMessageOfTheDay(player);
}

void PlayerManager::sendActivateCloneRequest(PlayerCreature* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->sendActivateCloneRequest(player);
}

void PlayerManager::sendPlayerToCloner(PlayerCreature* player, unsigned long long clonerID) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(clonerID);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->sendPlayerToCloner(player, clonerID);
}

bool PlayerManager::checkExistentNameInDatabase(const String& firstName) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addAsciiParameter(firstName);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerManagerImplementation*) _getImplementation())->checkExistentNameInDatabase(firstName);
}

TangibleObject* PlayerManager::createHairObject(const String& hairObjectFile, const String& hairCustomization) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addAsciiParameter(hairObjectFile);
		method.addAsciiParameter(hairCustomization);

		return (TangibleObject*) method.executeWithObjectReturn();
	} else
		return ((PlayerManagerImplementation*) _getImplementation())->createHairObject(hairObjectFile, hairCustomization);
}

bool PlayerManager::createAllPlayerObjects(PlayerCreature* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerManagerImplementation*) _getImplementation())->createAllPlayerObjects(player);
}

void PlayerManager::createDefaultPlayerItems(PlayerCreature* player, const String& profession, const String& templateFile) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addObjectParameter(player);
		method.addAsciiParameter(profession);
		method.addAsciiParameter(templateFile);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->createDefaultPlayerItems(player, profession, templateFile);
}

void PlayerManager::createTutorialBuilding(PlayerCreature* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->createTutorialBuilding(player);
}

void PlayerManager::createSkippedTutorialBuilding(PlayerCreature* player) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _getImplementation())->createSkippedTutorialBuilding(player);
}

bool PlayerManager::existsName(const String& name) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);
		method.addAsciiParameter(name);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerManagerImplementation*) _getImplementation())->existsName(name);
}

unsigned long long PlayerManager::getObjectID(const String& name) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);
		method.addAsciiParameter(name);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((PlayerManagerImplementation*) _getImplementation())->getObjectID(name);
}

PlayerCreature* PlayerManager::getPlayer(const String& name) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);
		method.addAsciiParameter(name);

		return (PlayerCreature*) method.executeWithObjectReturn();
	} else
		return ((PlayerManagerImplementation*) _getImplementation())->getPlayer(name);
}

/*
 *	PlayerManagerImplementation
 */

PlayerManagerImplementation::PlayerManagerImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}


PlayerManagerImplementation::~PlayerManagerImplementation() {
	PlayerManagerImplementation::finalize();
}


void PlayerManagerImplementation::_initializeImplementation() {
	_setClassHelper(PlayerManagerHelper::instance());

	_serializationHelperMethod();
}

void PlayerManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (PlayerManager*) stub;
	ObserverImplementation::_setStub(stub);
}

DistributedObjectStub* PlayerManagerImplementation::_getStub() {
	return _this;
}

PlayerManagerImplementation::operator const PlayerManager*() {
	return _this;
}

TransactionalObject* PlayerManagerImplementation::clone() {
	return (TransactionalObject*) new PlayerManagerImplementation(*this);
}


void PlayerManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PlayerManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PlayerManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PlayerManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PlayerManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PlayerManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PlayerManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PlayerManagerImplementation::_serializationHelperMethod() {
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("PlayerManager");

	addSerializableVariable("server", &server);
	addSerializableVariable("globalExpMultiplier", &globalExpMultiplier);
}

/*
 *	PlayerManagerAdapter
 */

PlayerManagerAdapter::PlayerManagerAdapter(PlayerManagerImplementation* obj) : ObserverAdapter(obj) {
}

Packet* PlayerManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		loadNameMap();
		break;
	case 7:
		finalize();
		break;
	case 8:
		resp->insertSignedInt(notifyObserverEvent(inv->getUnsignedIntParameter(), (Observable*) inv->getObjectParameter(), (ManagedObject*) inv->getObjectParameter(), inv->getSignedLongParameter()));
		break;
	case 9:
		resp->insertSignedInt(notifyDestruction((TangibleObject*) inv->getObjectParameter(), (TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 10:
		resp->insertSignedInt(notifyDefendersOfIncapacitation((TangibleObject*) inv->getObjectParameter(), (TangibleObject*) inv->getObjectParameter()));
		break;
	case 11:
		killPlayer((TangibleObject*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 12:
		resp->insertByte(calculateIncapacitationTimer((PlayerCreature*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 13:
		resp->insertBoolean(checkEncumbrancies((PlayerCreature*) inv->getObjectParameter(), (ArmorObject*) inv->getObjectParameter()));
		break;
	case 14:
		applyEncumbrancies((PlayerCreature*) inv->getObjectParameter(), (ArmorObject*) inv->getObjectParameter());
		break;
	case 15:
		removeEncumbrancies((PlayerCreature*) inv->getObjectParameter(), (ArmorObject*) inv->getObjectParameter());
		break;
	case 16:
		awardBadge((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedIntParameter());
		break;
	case 17:
		setExperienceMultiplier(inv->getFloatParameter());
		break;
	case 18:
		awardExperience((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_awardExperience__PlayerCreature_String_int_bool_float_), inv->getSignedIntParameter(), inv->getBooleanParameter(), inv->getFloatParameter());
		break;
	case 19:
		handleAbortTradeMessage((PlayerCreature*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 20:
		handleAddItemToTradeWindow((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedLongParameter());
		break;
	case 21:
		handleGiveMoneyMessage((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedIntParameter());
		break;
	case 22:
		handleAcceptTransactionMessage((PlayerCreature*) inv->getObjectParameter());
		break;
	case 23:
		handleUnAcceptTransactionMessage((PlayerCreature*) inv->getObjectParameter());
		break;
	case 24:
		handleVerifyTradeMessage((PlayerCreature*) inv->getObjectParameter());
		break;
	case 25:
		resp->insertBoolean(checkTradeItems((PlayerCreature*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter()));
		break;
	case 26:
		sendBattleFatigueMessage((PlayerCreature*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 27:
		resp->insertSignedInt(getMedicalFacilityRating((CreatureObject*) inv->getObjectParameter()));
		break;
	case 28:
		resp->insertSignedInt(healEnhance((CreatureObject*) inv->getObjectParameter(), (CreatureObject*) inv->getObjectParameter(), inv->getByteParameter(), inv->getSignedIntParameter(), inv->getFloatParameter()));
		break;
	case 29:
		sendMessageOfTheDay((PlayerCreature*) inv->getObjectParameter());
		break;
	case 30:
		sendActivateCloneRequest((PlayerCreature*) inv->getObjectParameter());
		break;
	case 31:
		sendPlayerToCloner((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedLongParameter());
		break;
	case 32:
		resp->insertBoolean(checkExistentNameInDatabase(inv->getAsciiParameter(_param0_checkExistentNameInDatabase__String_)));
		break;
	case 33:
		resp->insertLong(createHairObject(inv->getAsciiParameter(_param0_createHairObject__String_String_), inv->getAsciiParameter(_param1_createHairObject__String_String_))->_getObjectID());
		break;
	case 34:
		resp->insertBoolean(createAllPlayerObjects((PlayerCreature*) inv->getObjectParameter()));
		break;
	case 35:
		createDefaultPlayerItems((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_createDefaultPlayerItems__PlayerCreature_String_String_), inv->getAsciiParameter(_param2_createDefaultPlayerItems__PlayerCreature_String_String_));
		break;
	case 36:
		createTutorialBuilding((PlayerCreature*) inv->getObjectParameter());
		break;
	case 37:
		createSkippedTutorialBuilding((PlayerCreature*) inv->getObjectParameter());
		break;
	case 38:
		resp->insertBoolean(existsName(inv->getAsciiParameter(_param0_existsName__String_)));
		break;
	case 39:
		resp->insertLong(getObjectID(inv->getAsciiParameter(_param0_getObjectID__String_)));
		break;
	case 40:
		resp->insertLong(getPlayer(inv->getAsciiParameter(_param0_getPlayer__String_))->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PlayerManagerAdapter::loadNameMap() {
	((PlayerManagerImplementation*) impl)->loadNameMap();
}

void PlayerManagerAdapter::finalize() {
	((PlayerManagerImplementation*) impl)->finalize();
}

int PlayerManagerAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return ((PlayerManagerImplementation*) impl)->notifyObserverEvent(eventType, observable, arg1, arg2);
}

int PlayerManagerAdapter::notifyDestruction(TangibleObject* destructor, TangibleObject* destructedObject, int condition) {
	return ((PlayerManagerImplementation*) impl)->notifyDestruction(destructor, destructedObject, condition);
}

int PlayerManagerAdapter::notifyDefendersOfIncapacitation(TangibleObject* destructor, TangibleObject* destructedObject) {
	return ((PlayerManagerImplementation*) impl)->notifyDefendersOfIncapacitation(destructor, destructedObject);
}

void PlayerManagerAdapter::killPlayer(TangibleObject* attacker, PlayerCreature* player) {
	((PlayerManagerImplementation*) impl)->killPlayer(attacker, player);
}

byte PlayerManagerAdapter::calculateIncapacitationTimer(PlayerCreature* player, int condition) {
	return ((PlayerManagerImplementation*) impl)->calculateIncapacitationTimer(player, condition);
}

bool PlayerManagerAdapter::checkEncumbrancies(PlayerCreature* player, ArmorObject* armor) {
	return ((PlayerManagerImplementation*) impl)->checkEncumbrancies(player, armor);
}

void PlayerManagerAdapter::applyEncumbrancies(PlayerCreature* player, ArmorObject* armor) {
	((PlayerManagerImplementation*) impl)->applyEncumbrancies(player, armor);
}

void PlayerManagerAdapter::removeEncumbrancies(PlayerCreature* player, ArmorObject* armor) {
	((PlayerManagerImplementation*) impl)->removeEncumbrancies(player, armor);
}

void PlayerManagerAdapter::awardBadge(PlayerCreature* player, unsigned int badge) {
	((PlayerManagerImplementation*) impl)->awardBadge(player, badge);
}

void PlayerManagerAdapter::setExperienceMultiplier(float globalMultiplier) {
	((PlayerManagerImplementation*) impl)->setExperienceMultiplier(globalMultiplier);
}

void PlayerManagerAdapter::awardExperience(PlayerCreature* player, const String& xpType, int amount, bool sendSystemMessage, float localMultiplier) {
	((PlayerManagerImplementation*) impl)->awardExperience(player, xpType, amount, sendSystemMessage, localMultiplier);
}

void PlayerManagerAdapter::handleAbortTradeMessage(PlayerCreature* player, bool doLock) {
	((PlayerManagerImplementation*) impl)->handleAbortTradeMessage(player, doLock);
}

void PlayerManagerAdapter::handleAddItemToTradeWindow(PlayerCreature* player, unsigned long long itemID) {
	((PlayerManagerImplementation*) impl)->handleAddItemToTradeWindow(player, itemID);
}

void PlayerManagerAdapter::handleGiveMoneyMessage(PlayerCreature* player, unsigned int value) {
	((PlayerManagerImplementation*) impl)->handleGiveMoneyMessage(player, value);
}

void PlayerManagerAdapter::handleAcceptTransactionMessage(PlayerCreature* player) {
	((PlayerManagerImplementation*) impl)->handleAcceptTransactionMessage(player);
}

void PlayerManagerAdapter::handleUnAcceptTransactionMessage(PlayerCreature* player) {
	((PlayerManagerImplementation*) impl)->handleUnAcceptTransactionMessage(player);
}

void PlayerManagerAdapter::handleVerifyTradeMessage(PlayerCreature* player) {
	((PlayerManagerImplementation*) impl)->handleVerifyTradeMessage(player);
}

bool PlayerManagerAdapter::checkTradeItems(PlayerCreature* player, PlayerCreature* receiver) {
	return ((PlayerManagerImplementation*) impl)->checkTradeItems(player, receiver);
}

void PlayerManagerAdapter::sendBattleFatigueMessage(PlayerCreature* player, PlayerCreature* target) {
	((PlayerManagerImplementation*) impl)->sendBattleFatigueMessage(player, target);
}

int PlayerManagerAdapter::getMedicalFacilityRating(CreatureObject* creature) {
	return ((PlayerManagerImplementation*) impl)->getMedicalFacilityRating(creature);
}

int PlayerManagerAdapter::healEnhance(CreatureObject* enhancer, CreatureObject* patient, byte attribute, int buffvalue, float duration) {
	return ((PlayerManagerImplementation*) impl)->healEnhance(enhancer, patient, attribute, buffvalue, duration);
}

void PlayerManagerAdapter::sendMessageOfTheDay(PlayerCreature* player) {
	((PlayerManagerImplementation*) impl)->sendMessageOfTheDay(player);
}

void PlayerManagerAdapter::sendActivateCloneRequest(PlayerCreature* player) {
	((PlayerManagerImplementation*) impl)->sendActivateCloneRequest(player);
}

void PlayerManagerAdapter::sendPlayerToCloner(PlayerCreature* player, unsigned long long clonerID) {
	((PlayerManagerImplementation*) impl)->sendPlayerToCloner(player, clonerID);
}

bool PlayerManagerAdapter::checkExistentNameInDatabase(const String& firstName) {
	return ((PlayerManagerImplementation*) impl)->checkExistentNameInDatabase(firstName);
}

TangibleObject* PlayerManagerAdapter::createHairObject(const String& hairObjectFile, const String& hairCustomization) {
	return ((PlayerManagerImplementation*) impl)->createHairObject(hairObjectFile, hairCustomization);
}

bool PlayerManagerAdapter::createAllPlayerObjects(PlayerCreature* player) {
	return ((PlayerManagerImplementation*) impl)->createAllPlayerObjects(player);
}

void PlayerManagerAdapter::createDefaultPlayerItems(PlayerCreature* player, const String& profession, const String& templateFile) {
	((PlayerManagerImplementation*) impl)->createDefaultPlayerItems(player, profession, templateFile);
}

void PlayerManagerAdapter::createTutorialBuilding(PlayerCreature* player) {
	((PlayerManagerImplementation*) impl)->createTutorialBuilding(player);
}

void PlayerManagerAdapter::createSkippedTutorialBuilding(PlayerCreature* player) {
	((PlayerManagerImplementation*) impl)->createSkippedTutorialBuilding(player);
}

bool PlayerManagerAdapter::existsName(const String& name) {
	return ((PlayerManagerImplementation*) impl)->existsName(name);
}

unsigned long long PlayerManagerAdapter::getObjectID(const String& name) {
	return ((PlayerManagerImplementation*) impl)->getObjectID(name);
}

PlayerCreature* PlayerManagerAdapter::getPlayer(const String& name) {
	return ((PlayerManagerImplementation*) impl)->getPlayer(name);
}

/*
 *	PlayerManagerHelper
 */

PlayerManagerHelper* PlayerManagerHelper::staticInitializer = PlayerManagerHelper::instance();

PlayerManagerHelper::PlayerManagerHelper() {
	className = "PlayerManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PlayerManagerHelper::finalizeHelper() {
	PlayerManagerHelper::finalize();
}

DistributedObject* PlayerManagerHelper::instantiateObject() {
	return new PlayerManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* PlayerManagerHelper::instantiateServant() {
	return new PlayerManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlayerManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlayerManagerAdapter((PlayerManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

