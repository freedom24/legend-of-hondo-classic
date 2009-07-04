/*
 *	server/zone/objects/tangible/component/ShipComponent.h generated by engine3 IDL compiler 0.55
 */

#ifndef SHIPCOMPONENT_H_
#define SHIPCOMPONENT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/service/Message.h"

class Player;

class TangibleObject;

#include "../TangibleObject.h"

class ShipComponent : public TangibleObject {
public:
	ShipComponent(Player* player, unsigned int tempCRC, const UnicodeString& n, const String& tempn);

	void erase();

	int useObject(Player* player);

	unsigned int getComponentCrc();

	void setComponentCrc(unsigned int tcc);

	float getCurArmor();

	void setCurArmor(float tca);

	float getMaxArmor();

	void setMaxArmor(float tma);

	float getCurHitpoints();

	void setCurHitpoints(float tch);

	float getMaxHitpoints();

	void setMaxHitpoints(float tmh);

	float getEnergyDrain();

	void setEnergyDrain(float ted);

	float getMass();

	void setMass(float tm);

	void setCompType(int tct);

	bool getCompType();

protected:
	ShipComponent(DummyConstructorParameter* param);

	virtual ~ShipComponent();

	friend class ShipComponentHelper;
};

class ShipComponentImplementation;

class ShipComponentAdapter : public TangibleObjectAdapter {
public:
	ShipComponentAdapter(ShipComponentImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void erase();

	int useObject(Player* player);

	unsigned int getComponentCrc();

	void setComponentCrc(unsigned int tcc);

	float getCurArmor();

	void setCurArmor(float tca);

	float getMaxArmor();

	void setMaxArmor(float tma);

	float getCurHitpoints();

	void setCurHitpoints(float tch);

	float getMaxHitpoints();

	void setMaxHitpoints(float tmh);

	float getEnergyDrain();

	void setEnergyDrain(float ted);

	float getMass();

	void setMass(float tm);

	void setCompType(int tct);

	bool getCompType();

};

class ShipComponentHelper : public DistributedObjectClassHelper, public Singleton<ShipComponentHelper> {
	static ShipComponentHelper* staticInitializer;

public:
	ShipComponentHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<ShipComponentHelper>;
};

#include "../TangibleObjectImplementation.h"

class ShipComponentServant : public TangibleObjectImplementation {
public:
	ShipComponent* _this;

public:
	ShipComponentServant(unsigned long long oid, int tp);
	virtual ~ShipComponentServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*SHIPCOMPONENT_H_*/
