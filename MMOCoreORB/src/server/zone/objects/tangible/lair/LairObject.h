/*
 *	server/zone/objects/tangible/lair/LairObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef LAIROBJECT_H_
#define LAIROBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class TangibleObject;

#include "../TangibleObject.h"

class LairObject : public TangibleObject {
public:
	LairObject(unsigned int objcrc, unsigned long long oid);

	void setCreatureCRC(unsigned int crc);

	void setSpawnSize(int size);

	void setBabiesPerMillion(int babies);

	void spawnCreatures(bool lockCreatureManager = true);

	String& getTemplateDetailName();

	String& getTemplateDetail();

	int getLevel();

	void setLevel(int lev);

protected:
	LairObject(DummyConstructorParameter* param);

	virtual ~LairObject();

	String _return_getTemplateDetail;
	String _return_getTemplateDetailName;

	friend class LairObjectHelper;
};

class LairObjectImplementation;

class LairObjectAdapter : public TangibleObjectAdapter {
public:
	LairObjectAdapter(LairObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void setCreatureCRC(unsigned int crc);

	void setSpawnSize(int size);

	void setBabiesPerMillion(int babies);

	void spawnCreatures(bool lockCreatureManager);

	String& getTemplateDetailName();

	String& getTemplateDetail();

	int getLevel();

	void setLevel(int lev);

};

class LairObjectHelper : public DistributedObjectClassHelper, public Singleton<LairObjectHelper> {
	static LairObjectHelper* staticInitializer;

public:
	LairObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<LairObjectHelper>;
};

#include "../TangibleObjectImplementation.h"

class LairObjectServant : public TangibleObjectImplementation {
public:
	LairObject* _this;

public:
	LairObjectServant(unsigned long long oid);
	virtual ~LairObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*LAIROBJECT_H_*/
