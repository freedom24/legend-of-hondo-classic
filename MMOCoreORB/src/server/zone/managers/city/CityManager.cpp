/*
 *	server/zone/managers/city/CityManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "CityManager.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/building/city/CityHallObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/scene/variables/ParameterizedStringId.h"

/*
 *	CityManagerStub
 */

CityManager::CityManager(Zone* zne) : ManagedService(DummyConstructorParameter::instance()) {
	CityManagerImplementation* _implementation = new CityManagerImplementation(zne);
	_impl = _implementation;
	_impl->_setStub(this);
}

CityManager::CityManager(DummyConstructorParameter* param) : ManagedService(param) {
}

CityManager::~CityManager() {
}


void CityManager::loadLuaConfig() {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->loadLuaConfig();
}

void CityManager::createNewCity(CityHallObject* city, PlayerCreature* player, const String& name) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(city);
		method.addObjectParameter(player);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		_implementation->createNewCity(city, player, name);
}

void CityManager::changeCityName(CityHallObject* city, PlayerCreature* player, const String& name) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(city);
		method.addObjectParameter(player);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		_implementation->changeCityName(city, player, name);
}

bool CityManager::validateCityName(const String& name) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(name);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->validateCityName(name);
}

void CityManager::sendMailToMayor(CityHallObject* city, const String& sendername, const UnicodeString& subject, ParameterizedStringId& body) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->sendMailToMayor(city, sendername, subject, body);
}

void CityManager::sendMailToAllCitizens(CityHallObject* city, const String& sendername, const UnicodeString& subject, ParameterizedStringId& body) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->sendMailToAllCitizens(city, sendername, subject, body);
}

void CityManager::handleCityAdvancement(CityHallObject* city) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(city);

		method.executeWithVoidReturn();
	} else
		_implementation->handleCityAdvancement(city);
}

void CityManager::expandCity(CityHallObject* city) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(city);

		method.executeWithVoidReturn();
	} else
		_implementation->expandCity(city);
}

void CityManager::contractCity(CityHallObject* city) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(city);

		method.executeWithVoidReturn();
	} else
		_implementation->contractCity(city);
}

void CityManager::destroyCity(CityHallObject* city) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(city);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyCity(city);
}

void CityManager::declareCitizenship(CityHallObject* city, PlayerCreature* player, bool sendMail) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(city);
		method.addObjectParameter(player);
		method.addBooleanParameter(sendMail);

		method.executeWithVoidReturn();
	} else
		_implementation->declareCitizenship(city, player, sendMail);
}

void CityManager::revokeCitizenship(CityHallObject* city, PlayerCreature* player, bool sendMail) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(city);
		method.addObjectParameter(player);
		method.addBooleanParameter(sendMail);

		method.executeWithVoidReturn();
	} else
		_implementation->revokeCitizenship(city, player, sendMail);
}

void CityManager::addMilitiaMember(CityHallObject* city, PlayerCreature* player, const String& citizenName) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(city);
		method.addObjectParameter(player);
		method.addAsciiParameter(citizenName);

		method.executeWithVoidReturn();
	} else
		_implementation->addMilitiaMember(city, player, citizenName);
}

void CityManager::removeMilitiaMember(CityHallObject* city, PlayerCreature* player, unsigned long long playerID) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(city);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(playerID);

		method.executeWithVoidReturn();
	} else
		_implementation->removeMilitiaMember(city, player, playerID);
}

bool CityManager::checkCitiesCappedAtRank(byte rank) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addByteParameter(rank);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->checkCitiesCappedAtRank(rank);
}

byte CityManager::getCitiesAllowed(byte rank) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addByteParameter(rank);

		return method.executeWithByteReturn();
	} else
		return _implementation->getCitiesAllowed(rank);
}

void CityManager::addCity(CityHallObject* city) {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(city);

		method.executeWithVoidReturn();
	} else
		_implementation->addCity(city);
}

int CityManager::getTotalCities() {
	CityManagerImplementation* _implementation = (CityManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getTotalCities();
}

DistributedObjectServant* CityManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void CityManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	CityManagerImplementation
 */

CityManagerImplementation::CityManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


CityManagerImplementation::~CityManagerImplementation() {
}


void CityManagerImplementation::finalize() {
}

void CityManagerImplementation::_initializeImplementation() {
	_setClassHelper(CityManagerHelper::instance());

	_serializationHelperMethod();
}

void CityManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CityManager*) stub;
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* CityManagerImplementation::_getStub() {
	return _this;
}

CityManagerImplementation::operator const CityManager*() {
	return _this;
}

void CityManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CityManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CityManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CityManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CityManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CityManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CityManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CityManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("CityManager");

	addSerializableVariable("zone", &zone);
	addSerializableVariable("cities", &cities);
	addSerializableVariable("cityUpdateInterval", &cityUpdateInterval);
	addSerializableVariable("newCityGracePeriod", &newCityGracePeriod);
}

CityManagerImplementation::CityManagerImplementation(Zone* zne) {
	_initializeImplementation();
	// server/zone/managers/city/CityManager.idl(84):  		Logger.setLoggingName("CityManager");
	Logger::setLoggingName("CityManager");
	// server/zone/managers/city/CityManager.idl(85):  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/managers/city/CityManager.idl(86):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/city/CityManager.idl(88):  		zone = zne;
	zone = zne;
	// server/zone/managers/city/CityManager.idl(90):  		cities.setNullValue(null);
	(&cities)->setNullValue(NULL);
	// server/zone/managers/city/CityManager.idl(91):  		cities.setInsertPlan(3);
	(&cities)->setInsertPlan(3);
}

byte CityManagerImplementation::getCitiesAllowed(byte rank) {
	// server/zone/managers/city/CityManager.idl(197):  		return citiesAllowedPerRank.get(rank);
	return (&citiesAllowedPerRank)->get(rank);
}

void CityManagerImplementation::addCity(CityHallObject* city) {
	Locker _locker(_this);
	// server/zone/managers/city/CityManager.idl(205):  		cities.put(city.getObjectID(), city);
	(&cities)->put(city->getObjectID(), city);
}

int CityManagerImplementation::getTotalCities() {
	Locker _locker(_this);
	// server/zone/managers/city/CityManager.idl(209):  		return cities.size();
	return (&cities)->size();
}

/*
 *	CityManagerAdapter
 */

CityManagerAdapter::CityManagerAdapter(CityManagerImplementation* obj) : ManagedServiceAdapter(obj) {
}

Packet* CityManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		loadLuaConfig();
		break;
	case 7:
		createNewCity((CityHallObject*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param2_createNewCity__CityHallObject_PlayerCreature_String_));
		break;
	case 8:
		changeCityName((CityHallObject*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param2_changeCityName__CityHallObject_PlayerCreature_String_));
		break;
	case 9:
		resp->insertBoolean(validateCityName(inv->getAsciiParameter(_param0_validateCityName__String_)));
		break;
	case 10:
		handleCityAdvancement((CityHallObject*) inv->getObjectParameter());
		break;
	case 11:
		expandCity((CityHallObject*) inv->getObjectParameter());
		break;
	case 12:
		contractCity((CityHallObject*) inv->getObjectParameter());
		break;
	case 13:
		destroyCity((CityHallObject*) inv->getObjectParameter());
		break;
	case 14:
		declareCitizenship((CityHallObject*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 15:
		revokeCitizenship((CityHallObject*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 16:
		addMilitiaMember((CityHallObject*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param2_addMilitiaMember__CityHallObject_PlayerCreature_String_));
		break;
	case 17:
		removeMilitiaMember((CityHallObject*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedLongParameter());
		break;
	case 18:
		resp->insertBoolean(checkCitiesCappedAtRank(inv->getByteParameter()));
		break;
	case 19:
		resp->insertByte(getCitiesAllowed(inv->getByteParameter()));
		break;
	case 20:
		addCity((CityHallObject*) inv->getObjectParameter());
		break;
	case 21:
		resp->insertSignedInt(getTotalCities());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CityManagerAdapter::loadLuaConfig() {
	((CityManagerImplementation*) impl)->loadLuaConfig();
}

void CityManagerAdapter::createNewCity(CityHallObject* city, PlayerCreature* player, const String& name) {
	((CityManagerImplementation*) impl)->createNewCity(city, player, name);
}

void CityManagerAdapter::changeCityName(CityHallObject* city, PlayerCreature* player, const String& name) {
	((CityManagerImplementation*) impl)->changeCityName(city, player, name);
}

bool CityManagerAdapter::validateCityName(const String& name) {
	return ((CityManagerImplementation*) impl)->validateCityName(name);
}

void CityManagerAdapter::handleCityAdvancement(CityHallObject* city) {
	((CityManagerImplementation*) impl)->handleCityAdvancement(city);
}

void CityManagerAdapter::expandCity(CityHallObject* city) {
	((CityManagerImplementation*) impl)->expandCity(city);
}

void CityManagerAdapter::contractCity(CityHallObject* city) {
	((CityManagerImplementation*) impl)->contractCity(city);
}

void CityManagerAdapter::destroyCity(CityHallObject* city) {
	((CityManagerImplementation*) impl)->destroyCity(city);
}

void CityManagerAdapter::declareCitizenship(CityHallObject* city, PlayerCreature* player, bool sendMail) {
	((CityManagerImplementation*) impl)->declareCitizenship(city, player, sendMail);
}

void CityManagerAdapter::revokeCitizenship(CityHallObject* city, PlayerCreature* player, bool sendMail) {
	((CityManagerImplementation*) impl)->revokeCitizenship(city, player, sendMail);
}

void CityManagerAdapter::addMilitiaMember(CityHallObject* city, PlayerCreature* player, const String& citizenName) {
	((CityManagerImplementation*) impl)->addMilitiaMember(city, player, citizenName);
}

void CityManagerAdapter::removeMilitiaMember(CityHallObject* city, PlayerCreature* player, unsigned long long playerID) {
	((CityManagerImplementation*) impl)->removeMilitiaMember(city, player, playerID);
}

bool CityManagerAdapter::checkCitiesCappedAtRank(byte rank) {
	return ((CityManagerImplementation*) impl)->checkCitiesCappedAtRank(rank);
}

byte CityManagerAdapter::getCitiesAllowed(byte rank) {
	return ((CityManagerImplementation*) impl)->getCitiesAllowed(rank);
}

void CityManagerAdapter::addCity(CityHallObject* city) {
	((CityManagerImplementation*) impl)->addCity(city);
}

int CityManagerAdapter::getTotalCities() {
	return ((CityManagerImplementation*) impl)->getTotalCities();
}

/*
 *	CityManagerHelper
 */

CityManagerHelper* CityManagerHelper::staticInitializer = CityManagerHelper::instance();

CityManagerHelper::CityManagerHelper() {
	className = "CityManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CityManagerHelper::finalizeHelper() {
	CityManagerHelper::finalize();
}

DistributedObject* CityManagerHelper::instantiateObject() {
	return new CityManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* CityManagerHelper::instantiateServant() {
	return new CityManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CityManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CityManagerAdapter((CityManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

