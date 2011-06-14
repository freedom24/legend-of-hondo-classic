/*
 *	server/zone/objects/building/city/CityHallObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef CITYHALLOBJECT_H_
#define CITYHALLOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace city {

class CityManager;

} // namespace city
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::city;

namespace server {
namespace zone {
namespace objects {
namespace region {

class Region;

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace city {

class CityTerminal;

} // namespace city
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::city;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace city {

class CityVoteTerminal;

} // namespace city
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::city;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#include "server/zone/objects/building/BuildingObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/SortedVector.h"

#include "system/util/VectorMap.h"

#include "system/lang/Time.h"

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace city {

class CityHallObject : public BuildingObject {
public:
	CityHallObject();

	void insertToZone(Zone* zone);

	void removeFromZone();

	void notifyLoadFromDatabase();

	void spawnCityHallObjects();

	void despawnCityHallObjects();

	bool checkRequisitesForPlacement(PlayerCreature* player);

	void setCityName(const String& name);

	String getCityName();

	byte getCityRank();

	void sendCityNamePromptTo(PlayerCreature* player, bool newCity = false);

	void sendStatusTo(PlayerCreature* player);

	void sendCitizenshipReportTo(PlayerCreature* player);

	void sendStructureReportTo(PlayerCreature* player);

	void sendTreasuryReportTo(PlayerCreature* player);

	void sendCityAdvancementTo(PlayerCreature* player);

	void sendMaintenanceReportTo(PlayerCreature* player);

	void sendChangeCityNameTo(PlayerCreature* player);

	void sendEnableZoningTo(PlayerCreature* player);

	void sendManageMilitiaTo(PlayerCreature* player);

	void sendAddMilitiaMemberTo(PlayerCreature* player);

	void sendAdjustTaxesTo(PlayerCreature* player);

	void sendTreasuryDepositTo(PlayerCreature* player);

	void sendTreasuryWithdrawalTo(PlayerCreature* player);

	void sendCitySpecializationSelectionTo(PlayerCreature* player);

	void toggleCityRegistration(PlayerCreature* player);

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	int notifyStructurePlaced(CreatureObject* creature);

	bool isCityHallBuilding();

	void addZoningRights(unsigned long long playerID, unsigned int seconds = 86400);

	void removeZoningRights(unsigned long long playerID);

	bool hasZoningRights(unsigned long long playerID);

	unsigned long long getMayorObjectID();

	void setMayorObjectID(unsigned long long oid);

	bool isMayor(unsigned long long playerID);

	bool isBanned(unsigned long long playerID);

	void addBannedPlayer(unsigned long long playerID);

	void removeBannedPlayer(unsigned long long playerID);

	CityTerminal* getCityTerminal();

	CityVoteTerminal* getCityVoteTerminal();

	Region* getCityRegion();

	void setCityRegion(Region* region);

	int getCivicStructureCap();

	bool isZoningEnabled();

	void toggleZoningEnabled(PlayerCreature* player);

	void setZoningEnabled(bool enabled);

	bool isCityUpdatePast();

	void rescheduleCityUpdate(unsigned int minutes);

	int getCitizenCount();

	void addCitizen(unsigned long long playerID);

	void removeCitizen(unsigned long long playerID);

	bool isCitizen(unsigned long long playerID);

	void addMilitiaMember(unsigned long long playerID);

	void removeMilitiaMember(unsigned long long playerID);

	bool isMilitiaMember(unsigned long long playerID);

	unsigned long long getCitizenObjectID(int idx);

	void setCityRank(byte rank);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CityHallObject(DummyConstructorParameter* param);

	virtual ~CityHallObject();

	String _return_getCityName;

	friend class CityHallObjectHelper;
};

} // namespace city
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::city;

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace city {

class CityHallObjectImplementation : public BuildingObjectImplementation {
protected:
	SortedVector<unsigned long long> declaredCitizens;

	SortedVector<unsigned long long> militiaMembers;

	SortedVector<unsigned long long> bannedPlayers;

	SortedVector<unsigned long long> cityStructures;

	VectorMap<unsigned long long, unsigned int> playerZoningRights;

	bool zoningEnabled;

	ManagedReference<Region* > cityRegion;

	String cityName;

	byte cityRank;

	byte citySpecialization;

	float incomeTax;

	float propertyTax;

	float salesTax;

	Time nextCityUpdate;

	unsigned long long mayorObjectID;

	ManagedReference<CityTerminal* > cityTerminal;

	ManagedReference<CityVoteTerminal* > cityVoteTerminal;

public:
	CityHallObjectImplementation();

	CityHallObjectImplementation(DummyConstructorParameter* param);

	void insertToZone(Zone* zone);

	void removeFromZone();

	void notifyLoadFromDatabase();

	void spawnCityHallObjects();

	void despawnCityHallObjects();

	bool checkRequisitesForPlacement(PlayerCreature* player);

	void setCityName(const String& name);

	String getCityName();

	byte getCityRank();

	void sendCityNamePromptTo(PlayerCreature* player, bool newCity = false);

	void sendStatusTo(PlayerCreature* player);

	void sendCitizenshipReportTo(PlayerCreature* player);

	void sendStructureReportTo(PlayerCreature* player);

	void sendTreasuryReportTo(PlayerCreature* player);

	void sendCityAdvancementTo(PlayerCreature* player);

	void sendMaintenanceReportTo(PlayerCreature* player);

	void sendChangeCityNameTo(PlayerCreature* player);

	void sendEnableZoningTo(PlayerCreature* player);

	void sendManageMilitiaTo(PlayerCreature* player);

	void sendAddMilitiaMemberTo(PlayerCreature* player);

	void sendAdjustTaxesTo(PlayerCreature* player);

	void sendTreasuryDepositTo(PlayerCreature* player);

	void sendTreasuryWithdrawalTo(PlayerCreature* player);

	void sendCitySpecializationSelectionTo(PlayerCreature* player);

	void toggleCityRegistration(PlayerCreature* player);

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	int notifyStructurePlaced(CreatureObject* creature);

	bool isCityHallBuilding();

	void addZoningRights(unsigned long long playerID, unsigned int seconds = 86400);

	void removeZoningRights(unsigned long long playerID);

	bool hasZoningRights(unsigned long long playerID);

	unsigned long long getMayorObjectID();

	void setMayorObjectID(unsigned long long oid);

	bool isMayor(unsigned long long playerID);

	bool isBanned(unsigned long long playerID);

	void addBannedPlayer(unsigned long long playerID);

	void removeBannedPlayer(unsigned long long playerID);

	CityTerminal* getCityTerminal();

	CityVoteTerminal* getCityVoteTerminal();

	Region* getCityRegion();

	void setCityRegion(Region* region);

	int getCivicStructureCap();

	bool isZoningEnabled();

	void toggleZoningEnabled(PlayerCreature* player);

	void setZoningEnabled(bool enabled);

	bool isCityUpdatePast();

	void rescheduleCityUpdate(unsigned int minutes);

	int getCitizenCount();

	void addCitizen(unsigned long long playerID);

	void removeCitizen(unsigned long long playerID);

	bool isCitizen(unsigned long long playerID);

	void addMilitiaMember(unsigned long long playerID);

	void removeMilitiaMember(unsigned long long playerID);

	bool isMilitiaMember(unsigned long long playerID);

	unsigned long long getCitizenObjectID(int idx);

	void setCityRank(byte rank);

	CityHallObject* _this;

	operator const CityHallObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CityHallObjectImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class CityHallObject;
};

class CityHallObjectAdapter : public BuildingObjectAdapter {
public:
	CityHallObjectAdapter(CityHallObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void insertToZone(Zone* zone);

	void removeFromZone();

	void notifyLoadFromDatabase();

	void spawnCityHallObjects();

	void despawnCityHallObjects();

	bool checkRequisitesForPlacement(PlayerCreature* player);

	void setCityName(const String& name);

	String getCityName();

	byte getCityRank();

	void sendCityNamePromptTo(PlayerCreature* player, bool newCity);

	void sendStatusTo(PlayerCreature* player);

	void sendCitizenshipReportTo(PlayerCreature* player);

	void sendStructureReportTo(PlayerCreature* player);

	void sendTreasuryReportTo(PlayerCreature* player);

	void sendCityAdvancementTo(PlayerCreature* player);

	void sendMaintenanceReportTo(PlayerCreature* player);

	void sendChangeCityNameTo(PlayerCreature* player);

	void sendEnableZoningTo(PlayerCreature* player);

	void sendManageMilitiaTo(PlayerCreature* player);

	void sendAddMilitiaMemberTo(PlayerCreature* player);

	void sendAdjustTaxesTo(PlayerCreature* player);

	void sendTreasuryDepositTo(PlayerCreature* player);

	void sendTreasuryWithdrawalTo(PlayerCreature* player);

	void sendCitySpecializationSelectionTo(PlayerCreature* player);

	void toggleCityRegistration(PlayerCreature* player);

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	int notifyStructurePlaced(CreatureObject* creature);

	bool isCityHallBuilding();

	void addZoningRights(unsigned long long playerID, unsigned int seconds);

	void removeZoningRights(unsigned long long playerID);

	bool hasZoningRights(unsigned long long playerID);

	unsigned long long getMayorObjectID();

	void setMayorObjectID(unsigned long long oid);

	bool isMayor(unsigned long long playerID);

	bool isBanned(unsigned long long playerID);

	void addBannedPlayer(unsigned long long playerID);

	void removeBannedPlayer(unsigned long long playerID);

	CityTerminal* getCityTerminal();

	CityVoteTerminal* getCityVoteTerminal();

	Region* getCityRegion();

	void setCityRegion(Region* region);

	int getCivicStructureCap();

	bool isZoningEnabled();

	void toggleZoningEnabled(PlayerCreature* player);

	void setZoningEnabled(bool enabled);

	bool isCityUpdatePast();

	void rescheduleCityUpdate(unsigned int minutes);

	int getCitizenCount();

	void addCitizen(unsigned long long playerID);

	void removeCitizen(unsigned long long playerID);

	bool isCitizen(unsigned long long playerID);

	void addMilitiaMember(unsigned long long playerID);

	void removeMilitiaMember(unsigned long long playerID);

	bool isMilitiaMember(unsigned long long playerID);

	unsigned long long getCitizenObjectID(int idx);

	void setCityRank(byte rank);

protected:
	String _param0_setCityName__String_;
};

class CityHallObjectHelper : public DistributedObjectClassHelper, public Singleton<CityHallObjectHelper> {
	static CityHallObjectHelper* staticInitializer;

public:
	CityHallObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CityHallObjectHelper>;
};

} // namespace city
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::city;

#endif /*CITYHALLOBJECT_H_*/
