/*
 *	server/zone/objects/player/sui/SuiBox.cpp generated by engine3 IDL compiler 0.60
 */

#include "SuiBox.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	SuiBoxStub
 */

SuiBox::SuiBox(PlayerCreature* play, unsigned int windowtype, unsigned int boxtype) : ManagedObject(DummyConstructorParameter::instance()) {
	SuiBoxImplementation* _implementation = new SuiBoxImplementation(play, windowtype, boxtype);
	_impl = _implementation;
	_impl->_setStub(this);
}

SuiBox::SuiBox(DummyConstructorParameter* param) : ManagedObject(param) {
}

SuiBox::~SuiBox() {
}


void SuiBox::initialize() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initialize();
}

void SuiBox::initializeTransientMembers() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void SuiBox::generateHeader(SuiCreatePageMessage* message) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(message);

		method.executeWithVoidReturn();
	} else
		_implementation->generateHeader(message);
}

void SuiBox::generateBody(SuiCreatePageMessage* message) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(message);

		method.executeWithVoidReturn();
	} else
		_implementation->generateBody(message);
}

void SuiBox::generateFooter(SuiCreatePageMessage* message, int type) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(message);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		_implementation->generateFooter(message, type);
}

BaseMessage* SuiBox::generateMessage() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return (BaseMessage*) method.executeWithObjectReturn();
	} else
		return _implementation->generateMessage();
}

BaseMessage* SuiBox::generateCloseMessage() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return (BaseMessage*) method.executeWithObjectReturn();
	} else
		return _implementation->generateCloseMessage();
}

void SuiBox::addSetting(const String& optType, const String& variable, const String& setting, const String& value) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addAsciiParameter(optType);
		method.addAsciiParameter(variable);
		method.addAsciiParameter(setting);
		method.addAsciiParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->addSetting(optType, variable, setting, value);
}

void SuiBox::addHeader(const String& variable, const String& type) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addAsciiParameter(variable);
		method.addAsciiParameter(type);

		method.executeWithVoidReturn();
	} else
		_implementation->addHeader(variable, type);
}

void SuiBox::clearOptions() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		method.executeWithVoidReturn();
	} else
		_implementation->clearOptions();
}

int SuiBox::compareTo(SuiBox* obj) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(obj);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->compareTo(obj);
}

bool SuiBox::hasGeneratedMessage() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasGeneratedMessage();
}

void SuiBox::setPromptTitle(const String& name) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		_implementation->setPromptTitle(name);
}

void SuiBox::setPromptText(const String& name) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		_implementation->setPromptText(name);
}

String SuiBox::getPromptTitle() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		method.executeWithAsciiReturn(_return_getPromptTitle);
		return _return_getPromptTitle;
	} else
		return _implementation->getPromptTitle();
}

void SuiBox::setHandlerText(const String& text) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addAsciiParameter(text);

		method.executeWithVoidReturn();
	} else
		_implementation->setHandlerText(text);
}

void SuiBox::setWindowType(unsigned int type) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addUnsignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		_implementation->setWindowType(type);
}

void SuiBox::setBoxType(int type) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		_implementation->setBoxType(type);
}

bool SuiBox::isInputBox() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isInputBox();
}

bool SuiBox::isListBox() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isListBox();
}

bool SuiBox::isMessageBox() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isMessageBox();
}

bool SuiBox::isTransferBox() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isTransferBox();
}

bool SuiBox::isBankTransferBox() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBankTransferBox();
}

bool SuiBox::isSlicingBox() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isSlicingBox();
}

bool SuiBox::isCharacterBuilderBox() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCharacterBuilderBox();
}

bool SuiBox::isColorPicker() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isColorPicker();
}

void SuiBox::setCancelButton(bool value, const String& cancelText) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addBooleanParameter(value);
		method.addAsciiParameter(cancelText);

		method.executeWithVoidReturn();
	} else
		_implementation->setCancelButton(value, cancelText);
}

void SuiBox::setOtherButton(bool value, const String& backText) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addBooleanParameter(value);
		method.addAsciiParameter(backText);

		method.executeWithVoidReturn();
	} else
		_implementation->setOtherButton(value, backText);
}

void SuiBox::setOkButton(bool value, const String& okText) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addBooleanParameter(value);
		method.addAsciiParameter(okText);

		method.executeWithVoidReturn();
	} else
		_implementation->setOkButton(value, okText);
}

void SuiBox::setForceCloseDistance(float dist) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addFloatParameter(dist);

		method.executeWithVoidReturn();
	} else
		_implementation->setForceCloseDistance(dist);
}

void SuiBox::setForceCloseDisabled() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		method.executeWithVoidReturn();
	} else
		_implementation->setForceCloseDisabled();
}

PlayerCreature* SuiBox::getPlayer() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return (PlayerCreature*) method.executeWithObjectReturn();
	} else
		return _implementation->getPlayer();
}

unsigned int SuiBox::getBoxID() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getBoxID();
}

int SuiBox::getWindowType() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getWindowType();
}

SceneObject* SuiBox::getUsingObject() {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getUsingObject();
}

void SuiBox::setUsingObject(SceneObject* object) {
	SuiBoxImplementation* _implementation = (SuiBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->setUsingObject(object);
}

DistributedObjectServant* SuiBox::_getImplementation() {

	_updated = true;
	return _impl;
}

void SuiBox::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	SuiBoxImplementation
 */

SuiBoxImplementation::SuiBoxImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


SuiBoxImplementation::~SuiBoxImplementation() {
	SuiBoxImplementation::finalize();
}


void SuiBoxImplementation::_initializeImplementation() {
	_setClassHelper(SuiBoxHelper::instance());

	_serializationHelperMethod();
}

void SuiBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (SuiBox*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* SuiBoxImplementation::_getStub() {
	return _this;
}

SuiBoxImplementation::operator const SuiBox*() {
	return _this;
}

void SuiBoxImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SuiBoxImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SuiBoxImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SuiBoxImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SuiBoxImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SuiBoxImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SuiBoxImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SuiBoxImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("SuiBox");

	addSerializableVariable("player", &player);
	addSerializableVariable("boxID", &boxID);
	addSerializableVariable("usingObject", &usingObject);
	addSerializableVariable("handlerStr", &handlerStr);
	addSerializableVariable("cancelButtonText", &cancelButtonText);
	addSerializableVariable("cancelButton", &cancelButton);
	addSerializableVariable("okButtonText", &okButtonText);
	addSerializableVariable("okButton", &okButton);
	addSerializableVariable("otherButtonText", &otherButtonText);
	addSerializableVariable("otherButton", &otherButton);
	addSerializableVariable("promptTitle", &promptTitle);
	addSerializableVariable("promptText", &promptText);
	addSerializableVariable("boxType", &boxType);
	addSerializableVariable("windowType", &windowType);
	addSerializableVariable("forceCloseDistance", &forceCloseDistance);
	addSerializableVariable("headerSets", &headerSets);
	addSerializableVariable("optionSets", &optionSets);
	addSerializableVariable("hdrOptCount", &hdrOptCount);
	addSerializableVariable("hasGenerated", &hasGenerated);
}

SuiBoxImplementation::SuiBoxImplementation(PlayerCreature* play, unsigned int windowtype, unsigned int boxtype) {
	_initializeImplementation();
	// server/zone/objects/player/sui/SuiBox.idl(107):  		player = play;
	player = play;
	// server/zone/objects/player/sui/SuiBox.idl(109):  		forceCloseDistance = 32;
	forceCloseDistance = 32;
	// server/zone/objects/player/sui/SuiBox.idl(111):  		boxType = boxtype;
	boxType = boxtype;
	// server/zone/objects/player/sui/SuiBox.idl(113):  		windowType = windowtype;
	windowType = windowtype;
	// server/zone/objects/player/sui/SuiBox.idl(115):  		initialize();
	initialize();
}

void SuiBoxImplementation::initialize() {
	// server/zone/objects/player/sui/SuiBox.idl(119):  		Logger.setLoggingName("SuiBox");
	Logger::setLoggingName("SuiBox");
	// server/zone/objects/player/sui/SuiBox.idl(121):  		boxID = player.getNewSuiBoxID(windowType);
	boxID = player->getNewSuiBoxID(windowType);
	// server/zone/objects/player/sui/SuiBox.idl(123):  		handlerStr = "msgSelected";
	handlerStr = "msgSelected";
	// server/zone/objects/player/sui/SuiBox.idl(125):  		cancelButtonText = "@cancel";
	cancelButtonText = "@cancel";
	// server/zone/objects/player/sui/SuiBox.idl(126):  		cancelButton = false;
	cancelButton = false;
	// server/zone/objects/player/sui/SuiBox.idl(128):  		otherButtonText = "@back";
	otherButtonText = "@back";
	// server/zone/objects/player/sui/SuiBox.idl(129):  		otherButton = false;
	otherButton = false;
	// server/zone/objects/player/sui/SuiBox.idl(131):  		okButtonText = "@ok";
	okButtonText = "@ok";
	// server/zone/objects/player/sui/SuiBox.idl(132):  		okButton = true;
	okButton = true;
	// server/zone/objects/player/sui/SuiBox.idl(134):  		hdrOptCount = 0;
	hdrOptCount = 0;
	// server/zone/objects/player/sui/SuiBox.idl(135):  		hasGenerated = false;
	hasGenerated = false;
}

void SuiBoxImplementation::finalize() {
}

void SuiBoxImplementation::initializeTransientMembers() {
	// server/zone/objects/player/sui/SuiBox.idl(143):  		super.initializeTransientMembers();
	ManagedObjectImplementation::initializeTransientMembers();
}

BaseMessage* SuiBoxImplementation::generateMessage() {
	// server/zone/objects/player/sui/SuiBox.idl(176):  		return null;
	return NULL;
}

void SuiBoxImplementation::clearOptions() {
	// server/zone/objects/player/sui/SuiBox.idl(208):  		headerSets.removeAll();
	(&headerSets)->removeAll();
	// server/zone/objects/player/sui/SuiBox.idl(209):  		hdrOptCount = 0;
	hdrOptCount = 0;
	// server/zone/objects/player/sui/SuiBox.idl(210):  		optionSets.removeAll();
	(&optionSets)->removeAll();
}

int SuiBoxImplementation::compareTo(SuiBox* obj) {
	// server/zone/objects/player/sui/SuiBox.idl(214):  		unsigned int id = obj.getBoxID();
	unsigned int id = obj->getBoxID();
	// server/zone/objects/player/sui/SuiBox.idl(216):  
	if (boxID < id)	// server/zone/objects/player/sui/SuiBox.idl(217):  			return 1;
	return 1;

	else 	// server/zone/objects/player/sui/SuiBox.idl(218):  
	if (boxID > id)	// server/zone/objects/player/sui/SuiBox.idl(219):  			return -1;
	return -1;

	else 	// server/zone/objects/player/sui/SuiBox.idl(221):  			return 0;
	return 0;
}

bool SuiBoxImplementation::hasGeneratedMessage() {
	// server/zone/objects/player/sui/SuiBox.idl(225):  		return hasGenerated;
	return hasGenerated;
}

void SuiBoxImplementation::setPromptTitle(const String& name) {
	// server/zone/objects/player/sui/SuiBox.idl(229):  		promptTitle = name;
	promptTitle = name;
}

void SuiBoxImplementation::setPromptText(const String& name) {
	// server/zone/objects/player/sui/SuiBox.idl(233):  		promptText = name;
	promptText = name;
}

String SuiBoxImplementation::getPromptTitle() {
	// server/zone/objects/player/sui/SuiBox.idl(237):  		return promptTitle;
	return promptTitle;
}

void SuiBoxImplementation::setHandlerText(const String& text) {
	// server/zone/objects/player/sui/SuiBox.idl(241):  		handlerStr = text;
	handlerStr = text;
}

void SuiBoxImplementation::setWindowType(unsigned int type) {
	// server/zone/objects/player/sui/SuiBox.idl(245):  		windowType = type;
	windowType = type;
}

void SuiBoxImplementation::setBoxType(int type) {
	// server/zone/objects/player/sui/SuiBox.idl(249):  		boxType = type;
	boxType = type;
}

bool SuiBoxImplementation::isInputBox() {
	// server/zone/objects/player/sui/SuiBox.idl(253):  		return false;
	return false;
}

bool SuiBoxImplementation::isListBox() {
	// server/zone/objects/player/sui/SuiBox.idl(257):  		return false;
	return false;
}

bool SuiBoxImplementation::isMessageBox() {
	// server/zone/objects/player/sui/SuiBox.idl(261):  		return false;
	return false;
}

bool SuiBoxImplementation::isTransferBox() {
	// server/zone/objects/player/sui/SuiBox.idl(265):  		return false;
	return false;
}

bool SuiBoxImplementation::isBankTransferBox() {
	// server/zone/objects/player/sui/SuiBox.idl(269):  		return false;
	return false;
}

bool SuiBoxImplementation::isSlicingBox() {
	// server/zone/objects/player/sui/SuiBox.idl(273):  		return false;
	return false;
}

bool SuiBoxImplementation::isCharacterBuilderBox() {
	// server/zone/objects/player/sui/SuiBox.idl(277):  		return false;
	return false;
}

bool SuiBoxImplementation::isColorPicker() {
	// server/zone/objects/player/sui/SuiBox.idl(281):  		return false;
	return false;
}

PlayerCreature* SuiBoxImplementation::getPlayer() {
	// server/zone/objects/player/sui/SuiBox.idl(295):  		return player;
	return player;
}

unsigned int SuiBoxImplementation::getBoxID() {
	// server/zone/objects/player/sui/SuiBox.idl(299):  		return boxID;
	return boxID;
}

int SuiBoxImplementation::getWindowType() {
	// server/zone/objects/player/sui/SuiBox.idl(303):  		return windowType;
	return windowType;
}

SceneObject* SuiBoxImplementation::getUsingObject() {
	// server/zone/objects/player/sui/SuiBox.idl(307):  		return usingObject;
	return usingObject;
}

void SuiBoxImplementation::setUsingObject(SceneObject* object) {
	// server/zone/objects/player/sui/SuiBox.idl(311):  		usingObject = object;
	usingObject = object;
}

/*
 *	SuiBoxAdapter
 */

SuiBoxAdapter::SuiBoxAdapter(SuiBoxImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* SuiBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initialize();
		break;
	case 7:
		finalize();
		break;
	case 8:
		initializeTransientMembers();
		break;
	case 9:
		generateHeader((SuiCreatePageMessage*) inv->getObjectParameter());
		break;
	case 10:
		generateBody((SuiCreatePageMessage*) inv->getObjectParameter());
		break;
	case 11:
		generateFooter((SuiCreatePageMessage*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 12:
		resp->insertLong(generateMessage()->_getObjectID());
		break;
	case 13:
		resp->insertLong(generateCloseMessage()->_getObjectID());
		break;
	case 14:
		addSetting(inv->getAsciiParameter(_param0_addSetting__String_String_String_String_), inv->getAsciiParameter(_param1_addSetting__String_String_String_String_), inv->getAsciiParameter(_param2_addSetting__String_String_String_String_), inv->getAsciiParameter(_param3_addSetting__String_String_String_String_));
		break;
	case 15:
		addHeader(inv->getAsciiParameter(_param0_addHeader__String_String_), inv->getAsciiParameter(_param1_addHeader__String_String_));
		break;
	case 16:
		clearOptions();
		break;
	case 17:
		resp->insertSignedInt(compareTo((SuiBox*) inv->getObjectParameter()));
		break;
	case 18:
		resp->insertBoolean(hasGeneratedMessage());
		break;
	case 19:
		setPromptTitle(inv->getAsciiParameter(_param0_setPromptTitle__String_));
		break;
	case 20:
		setPromptText(inv->getAsciiParameter(_param0_setPromptText__String_));
		break;
	case 21:
		resp->insertAscii(getPromptTitle());
		break;
	case 22:
		setHandlerText(inv->getAsciiParameter(_param0_setHandlerText__String_));
		break;
	case 23:
		setWindowType(inv->getUnsignedIntParameter());
		break;
	case 24:
		setBoxType(inv->getSignedIntParameter());
		break;
	case 25:
		resp->insertBoolean(isInputBox());
		break;
	case 26:
		resp->insertBoolean(isListBox());
		break;
	case 27:
		resp->insertBoolean(isMessageBox());
		break;
	case 28:
		resp->insertBoolean(isTransferBox());
		break;
	case 29:
		resp->insertBoolean(isBankTransferBox());
		break;
	case 30:
		resp->insertBoolean(isSlicingBox());
		break;
	case 31:
		resp->insertBoolean(isCharacterBuilderBox());
		break;
	case 32:
		resp->insertBoolean(isColorPicker());
		break;
	case 33:
		setCancelButton(inv->getBooleanParameter(), inv->getAsciiParameter(_param1_setCancelButton__bool_String_));
		break;
	case 34:
		setOtherButton(inv->getBooleanParameter(), inv->getAsciiParameter(_param1_setOtherButton__bool_String_));
		break;
	case 35:
		setOkButton(inv->getBooleanParameter(), inv->getAsciiParameter(_param1_setOkButton__bool_String_));
		break;
	case 36:
		setForceCloseDistance(inv->getFloatParameter());
		break;
	case 37:
		setForceCloseDisabled();
		break;
	case 38:
		resp->insertLong(getPlayer()->_getObjectID());
		break;
	case 39:
		resp->insertInt(getBoxID());
		break;
	case 40:
		resp->insertSignedInt(getWindowType());
		break;
	case 41:
		resp->insertLong(getUsingObject()->_getObjectID());
		break;
	case 42:
		setUsingObject((SceneObject*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void SuiBoxAdapter::initialize() {
	((SuiBoxImplementation*) impl)->initialize();
}

void SuiBoxAdapter::finalize() {
	((SuiBoxImplementation*) impl)->finalize();
}

void SuiBoxAdapter::initializeTransientMembers() {
	((SuiBoxImplementation*) impl)->initializeTransientMembers();
}

void SuiBoxAdapter::generateHeader(SuiCreatePageMessage* message) {
	((SuiBoxImplementation*) impl)->generateHeader(message);
}

void SuiBoxAdapter::generateBody(SuiCreatePageMessage* message) {
	((SuiBoxImplementation*) impl)->generateBody(message);
}

void SuiBoxAdapter::generateFooter(SuiCreatePageMessage* message, int type) {
	((SuiBoxImplementation*) impl)->generateFooter(message, type);
}

BaseMessage* SuiBoxAdapter::generateMessage() {
	return ((SuiBoxImplementation*) impl)->generateMessage();
}

BaseMessage* SuiBoxAdapter::generateCloseMessage() {
	return ((SuiBoxImplementation*) impl)->generateCloseMessage();
}

void SuiBoxAdapter::addSetting(const String& optType, const String& variable, const String& setting, const String& value) {
	((SuiBoxImplementation*) impl)->addSetting(optType, variable, setting, value);
}

void SuiBoxAdapter::addHeader(const String& variable, const String& type) {
	((SuiBoxImplementation*) impl)->addHeader(variable, type);
}

void SuiBoxAdapter::clearOptions() {
	((SuiBoxImplementation*) impl)->clearOptions();
}

int SuiBoxAdapter::compareTo(SuiBox* obj) {
	return ((SuiBoxImplementation*) impl)->compareTo(obj);
}

bool SuiBoxAdapter::hasGeneratedMessage() {
	return ((SuiBoxImplementation*) impl)->hasGeneratedMessage();
}

void SuiBoxAdapter::setPromptTitle(const String& name) {
	((SuiBoxImplementation*) impl)->setPromptTitle(name);
}

void SuiBoxAdapter::setPromptText(const String& name) {
	((SuiBoxImplementation*) impl)->setPromptText(name);
}

String SuiBoxAdapter::getPromptTitle() {
	return ((SuiBoxImplementation*) impl)->getPromptTitle();
}

void SuiBoxAdapter::setHandlerText(const String& text) {
	((SuiBoxImplementation*) impl)->setHandlerText(text);
}

void SuiBoxAdapter::setWindowType(unsigned int type) {
	((SuiBoxImplementation*) impl)->setWindowType(type);
}

void SuiBoxAdapter::setBoxType(int type) {
	((SuiBoxImplementation*) impl)->setBoxType(type);
}

bool SuiBoxAdapter::isInputBox() {
	return ((SuiBoxImplementation*) impl)->isInputBox();
}

bool SuiBoxAdapter::isListBox() {
	return ((SuiBoxImplementation*) impl)->isListBox();
}

bool SuiBoxAdapter::isMessageBox() {
	return ((SuiBoxImplementation*) impl)->isMessageBox();
}

bool SuiBoxAdapter::isTransferBox() {
	return ((SuiBoxImplementation*) impl)->isTransferBox();
}

bool SuiBoxAdapter::isBankTransferBox() {
	return ((SuiBoxImplementation*) impl)->isBankTransferBox();
}

bool SuiBoxAdapter::isSlicingBox() {
	return ((SuiBoxImplementation*) impl)->isSlicingBox();
}

bool SuiBoxAdapter::isCharacterBuilderBox() {
	return ((SuiBoxImplementation*) impl)->isCharacterBuilderBox();
}

bool SuiBoxAdapter::isColorPicker() {
	return ((SuiBoxImplementation*) impl)->isColorPicker();
}

void SuiBoxAdapter::setCancelButton(bool value, const String& cancelText) {
	((SuiBoxImplementation*) impl)->setCancelButton(value, cancelText);
}

void SuiBoxAdapter::setOtherButton(bool value, const String& backText) {
	((SuiBoxImplementation*) impl)->setOtherButton(value, backText);
}

void SuiBoxAdapter::setOkButton(bool value, const String& okText) {
	((SuiBoxImplementation*) impl)->setOkButton(value, okText);
}

void SuiBoxAdapter::setForceCloseDistance(float dist) {
	((SuiBoxImplementation*) impl)->setForceCloseDistance(dist);
}

void SuiBoxAdapter::setForceCloseDisabled() {
	((SuiBoxImplementation*) impl)->setForceCloseDisabled();
}

PlayerCreature* SuiBoxAdapter::getPlayer() {
	return ((SuiBoxImplementation*) impl)->getPlayer();
}

unsigned int SuiBoxAdapter::getBoxID() {
	return ((SuiBoxImplementation*) impl)->getBoxID();
}

int SuiBoxAdapter::getWindowType() {
	return ((SuiBoxImplementation*) impl)->getWindowType();
}

SceneObject* SuiBoxAdapter::getUsingObject() {
	return ((SuiBoxImplementation*) impl)->getUsingObject();
}

void SuiBoxAdapter::setUsingObject(SceneObject* object) {
	((SuiBoxImplementation*) impl)->setUsingObject(object);
}

/*
 *	SuiBoxHelper
 */

SuiBoxHelper* SuiBoxHelper::staticInitializer = SuiBoxHelper::instance();

SuiBoxHelper::SuiBoxHelper() {
	className = "SuiBox";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void SuiBoxHelper::finalizeHelper() {
	SuiBoxHelper::finalize();
}

DistributedObject* SuiBoxHelper::instantiateObject() {
	return new SuiBox(DummyConstructorParameter::instance());
}

DistributedObjectServant* SuiBoxHelper::instantiateServant() {
	return new SuiBoxImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SuiBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiBoxAdapter((SuiBoxImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

