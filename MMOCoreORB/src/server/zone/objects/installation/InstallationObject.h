/*
 *	server/zone/objects/installation/InstallationObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef INSTALLATIONOBJECT_H_
#define INSTALLATIONOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

namespace server {
namespace zone {
namespace objects {
namespace installation {

class SyncrhonizedUiListenInstallationTask;

} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation;

namespace server {
namespace zone {
namespace objects {
namespace resource {

class ResourceSpawn;

} // namespace resource
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::resource;

namespace server {
namespace zone {
namespace objects {
namespace resource {

class ResourceContainer;

} // namespace resource
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::resource;

namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

#include "server/zone/objects/installation/HopperList.h"

#include "system/lang/String.h"

#include "system/lang/ref/Reference.h"

#include "system/util/SortedVector.h"

#include "system/util/VectorMap.h"

#include "engine/lua/LuaObject.h"

#include "engine/service/proto/BasePacket.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "system/lang/Time.h"

namespace server {
namespace zone {
namespace objects {
namespace installation {

class InstallationObject : public StructureObject {
public:
	InstallationObject();

	void initializeTransientMembers();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void fillAttributeList(AttributeListMessage* alm, CreatureObject* object);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void broadcastMessage(BasePacket* message, bool sendSelf);

	void updateResourceContainerQuantity(ResourceContainer* container, int newQuantity, bool notifyClient = true);

	void updateToDatabaseAllObjects(bool startTask);

	void setOperating(bool operating, bool notifyClient = true);

	void activateUiSync();

	void updateOperators();

	void verifyOperators();

	void updateInstallationWork();

	void handleStructureAddEnergy(CreatureObject* player);

	void setActiveResource(ResourceContainer* container);

	void changeActiveResourceID(unsigned long long spawnObjectID);

	void addResourceToHopper(ResourceContainer* container);

	void removeResourceFromHopper(ResourceContainer* container);

	void clearResourceHopper();

	float getHopperSize();

	bool updateMaintenance(Time& workingTime);

	void updateHopper(Time& workingTime, bool shutdownAfterUpdate);

	int getHopperItemQuantity(ResourceSpawn* spawn);

	ResourceContainer* getContainerFromHopper(ResourceSpawn* spawn);

	unsigned long long getActiveResourceSpawnID();

	float getActualRate();

	void broadcastToOperators(BasePacket* packet);

	void addOperator(CreatureObject* player);

	void removeOperator(CreatureObject* player);

	void sendBaselinesTo(SceneObject* player);

	bool isInstallationObject();

	bool isOperating();

	int getInstallationType();

	float getExtractionRate();

	float getHopperSizeMax();

	HopperList* getHopperList();

	bool isHarvesterObject();

	bool isGeneratorObject();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	InstallationObject(DummyConstructorParameter* param);

	virtual ~InstallationObject();

	friend class InstallationObjectHelper;
};

} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation;

namespace server {
namespace zone {
namespace objects {
namespace installation {

class InstallationObjectImplementation : public StructureObjectImplementation {
protected:
	Reference<SyncrhonizedUiListenInstallationTask* > syncUiTask;

	bool operating;

	SortedVector<ManagedReference<CreatureObject* > > operatorList;

	int installationType;

	Time resourceHopperTimestamp;

	Time lastMaintenanceTime;

	HopperList resourceHopper;

	float hopperSizeMax;

	float extractionRate;

public:
	InstallationObjectImplementation();

	InstallationObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void fillAttributeList(AttributeListMessage* alm, CreatureObject* object);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void broadcastMessage(BasePacket* message, bool sendSelf);

	void updateResourceContainerQuantity(ResourceContainer* container, int newQuantity, bool notifyClient = true);

	void updateToDatabaseAllObjects(bool startTask);

	virtual void setOperating(bool operating, bool notifyClient = true);

	void activateUiSync();

	virtual void updateOperators();

	void verifyOperators();

	virtual void updateInstallationWork();

	void handleStructureAddEnergy(CreatureObject* player);

	void setActiveResource(ResourceContainer* container);

	void changeActiveResourceID(unsigned long long spawnObjectID);

	void addResourceToHopper(ResourceContainer* container);

	void removeResourceFromHopper(ResourceContainer* container);

	void clearResourceHopper();

	float getHopperSize();

	bool updateMaintenance(Time& workingTime);

	void updateHopper(Time& workingTime, bool shutdownAfterUpdate);

	int getHopperItemQuantity(ResourceSpawn* spawn);

	ResourceContainer* getContainerFromHopper(ResourceSpawn* spawn);

	unsigned long long getActiveResourceSpawnID();

	float getActualRate();

	void broadcastToOperators(BasePacket* packet);

	void addOperator(CreatureObject* player);

	void removeOperator(CreatureObject* player);

	void sendBaselinesTo(SceneObject* player);

	bool isInstallationObject();

	bool isOperating();

	int getInstallationType();

	float getExtractionRate();

	float getHopperSizeMax();

	HopperList* getHopperList();

	virtual bool isHarvesterObject();

	virtual bool isGeneratorObject();

	WeakReference<InstallationObject*> _this;

	operator const InstallationObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~InstallationObjectImplementation();

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

	friend class InstallationObject;
};

class InstallationObjectAdapter : public StructureObjectAdapter {
public:
	InstallationObjectAdapter(InstallationObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void broadcastMessage(BasePacket* message, bool sendSelf);

	void updateResourceContainerQuantity(ResourceContainer* container, int newQuantity, bool notifyClient);

	void updateToDatabaseAllObjects(bool startTask);

	void setOperating(bool operating, bool notifyClient);

	void activateUiSync();

	void updateOperators();

	void verifyOperators();

	void updateInstallationWork();

	void handleStructureAddEnergy(CreatureObject* player);

	void setActiveResource(ResourceContainer* container);

	void changeActiveResourceID(unsigned long long spawnObjectID);

	void addResourceToHopper(ResourceContainer* container);

	void removeResourceFromHopper(ResourceContainer* container);

	void clearResourceHopper();

	float getHopperSize();

	int getHopperItemQuantity(ResourceSpawn* spawn);

	ResourceContainer* getContainerFromHopper(ResourceSpawn* spawn);

	unsigned long long getActiveResourceSpawnID();

	float getActualRate();

	void broadcastToOperators(BasePacket* packet);

	void addOperator(CreatureObject* player);

	void removeOperator(CreatureObject* player);

	void sendBaselinesTo(SceneObject* player);

	bool isInstallationObject();

	bool isOperating();

	int getInstallationType();

	float getExtractionRate();

	float getHopperSizeMax();

	bool isHarvesterObject();

	bool isGeneratorObject();

};

class InstallationObjectHelper : public DistributedObjectClassHelper, public Singleton<InstallationObjectHelper> {
	static InstallationObjectHelper* staticInitializer;

public:
	InstallationObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<InstallationObjectHelper>;
};

} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation;

#endif /*INSTALLATIONOBJECT_H_*/
