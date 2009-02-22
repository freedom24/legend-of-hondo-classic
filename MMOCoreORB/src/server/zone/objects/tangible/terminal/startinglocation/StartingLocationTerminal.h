/*
 *	server/zone/objects/tangible/terminal/startinglocation/StartingLocationTerminal.h generated by engine3 IDL compiler 0.55
 */

#ifndef STARTINGLOCATIONTERMINAL_H_
#define STARTINGLOCATIONTERMINAL_H_

#include "engine/orb/DistributedObjectBroker.h"

class Player;

class Terminal;

#include "../Terminal.h"

class StartingLocationTerminal : public Terminal {
public:
	StartingLocationTerminal(unsigned long long objid, float x, float z, float y);

	int useObject(Player* player);

protected:
	StartingLocationTerminal(DummyConstructorParameter* param);

	virtual ~StartingLocationTerminal();

	friend class StartingLocationTerminalHelper;
};

class StartingLocationTerminalImplementation;

class StartingLocationTerminalAdapter : public TerminalAdapter {
public:
	StartingLocationTerminalAdapter(StartingLocationTerminalImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int useObject(Player* player);

};

class StartingLocationTerminalHelper : public DistributedObjectClassHelper, public Singleton<StartingLocationTerminalHelper> {
	static StartingLocationTerminalHelper* staticInitializer;

public:
	StartingLocationTerminalHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<StartingLocationTerminalHelper>;
};

#include "../TerminalImplementation.h"

class StartingLocationTerminalServant : public TerminalImplementation {
public:
	StartingLocationTerminal* _this;

public:
	StartingLocationTerminalServant(unsigned int objCRC, unsigned long long objid, const UnicodeString& n, const String& tempn, float x, float z, float y, unsigned char terminaltype);
	virtual ~StartingLocationTerminalServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*STARTINGLOCATIONTERMINAL_H_*/
