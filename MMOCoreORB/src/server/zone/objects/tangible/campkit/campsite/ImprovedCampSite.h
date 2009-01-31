/*
 *	server/zone/objects/tangible/campkit/campsite/ImprovedCampSite.h generated by engine3 IDL compiler 0.55
 */

#ifndef IMPROVEDCAMPSITE_H_
#define IMPROVEDCAMPSITE_H_

#include "engine/orb/DistributedObjectBroker.h"

class CampSite;

class CampKit;

class Player;

#include "../campsite/CampSite.h"

class ImprovedCampSite : public CampSite {
public:
	ImprovedCampSite(Player* player, unsigned long long oid, CampKit* campKit);

	void spawnCampItems();

protected:
	ImprovedCampSite(DummyConstructorParameter* param);

	virtual ~ImprovedCampSite();

	friend class ImprovedCampSiteHelper;
};

class ImprovedCampSiteImplementation;

class ImprovedCampSiteAdapter : public CampSiteAdapter {
public:
	ImprovedCampSiteAdapter(ImprovedCampSiteImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void spawnCampItems();

};

class ImprovedCampSiteHelper : public DistributedObjectClassHelper, public Singleton<ImprovedCampSiteHelper> {
	static ImprovedCampSiteHelper* staticInitializer;

public:
	ImprovedCampSiteHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<ImprovedCampSiteHelper>;
};

#include "../campsite/CampSiteImplementation.h"

class ImprovedCampSiteServant : public CampSiteImplementation {
public:
	ImprovedCampSite* _this;

public:
	ImprovedCampSiteServant(Player* player, unsigned long long oid, CampKit* campKit);
	virtual ~ImprovedCampSiteServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*IMPROVEDCAMPSITE_H_*/
