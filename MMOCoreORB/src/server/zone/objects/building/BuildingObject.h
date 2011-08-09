/*
 *	server/zone/objects/building/BuildingObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef BUILDINGOBJECT_H_
#define BUILDINGOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace objects {
namespace tangible {
namespace sign {

class SignObject;

} // namespace sign
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::sign;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace structure {

class StructureTerminal;

} // namespace structure
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::structure;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

#include "server/zone/objects/cell/CellObject.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "engine/lua/LuaObject.h"

#include "engine/util/u3d/QuadTree.h"

#include "engine/util/u3d/QuadTreeEntry.h"

#include "system/util/SortedVector.h"

#include "system/util/Vector.h"

#include "engine/util/u3d/Vector3.h"

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObject : public StructureObject {
public:
	static const int MAXPLAYERITEMS = 400;

	BuildingObject();

	void createCellObjects();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void createContainerComponent();

	void sendChangeNamePromptTo(CreatureObject* player);

	void sendContainerObjectsTo(SceneObject* player);

	void updateCellPermissionsTo(SceneObject* player);

	int notifyStructurePlaced(CreatureObject* player);

	Vector3 getEjectionPoint();

	void removeFromZone();

	void notifyLoadFromDatabase();

	void notifyInsert(QuadTreeEntry* obj);

	void notifyDissapear(QuadTreeEntry* obj);

	void notifyInsertToZone(SceneObject* object);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

	void sendTo(SceneObject* player, bool doClose);

	void sendBaselinesTo(SceneObject* player);

	void sendDestroyTo(SceneObject* player);

	bool isStaticBuilding();

	CellObject* getCell(int idx);

	int getTotalCellNumber();

	bool addObject(SceneObject* object, int containmentType, bool notifyClient = false);

	int getCurrentNumerOfPlayerItems();

	void onEnter(CreatureObject* player);

	void onExit(CreatureObject* player);

	bool isBuildingObject();

	bool isMedicalBuildingObject();

	void setSignObject(SignObject* sign);

	SignObject* getSignObject();

	bool isCityHallBuilding();

	void setAccessFee(int fee);

	int getAccessFee();

	bool isPublicStructure();

	void setPublicStructure(bool privacy);

	bool togglePrivacy();

	unsigned int getMaximumNumberOfPlayerItems();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	BuildingObject(DummyConstructorParameter* param);

	virtual ~BuildingObject();

	friend class BuildingObjectHelper;
};

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObjectImplementation : public StructureObjectImplementation {
protected:
	Vector<ManagedReference<CellObject* > > cells;

	int totalCellNumber;

	ManagedReference<SignObject* > signObject;

	unsigned long long deedObjectID;

	Reference<QuadTree* > quadTree;

	int accessFee;

public:
	bool publicStructure;

	static const int MAXPLAYERITEMS = 400;

	BuildingObjectImplementation();

	BuildingObjectImplementation(DummyConstructorParameter* param);

	void createCellObjects();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void createContainerComponent();

	void sendChangeNamePromptTo(CreatureObject* player);

	void sendContainerObjectsTo(SceneObject* player);

	void updateCellPermissionsTo(SceneObject* player);

	virtual int notifyStructurePlaced(CreatureObject* player);

	Vector3 getEjectionPoint();

	void removeFromZone();

	void notifyLoadFromDatabase();

	void notifyInsert(QuadTreeEntry* obj);

	void notifyDissapear(QuadTreeEntry* obj);

	void notifyInsertToZone(SceneObject* object);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

	void sendTo(SceneObject* player, bool doClose);

	void sendBaselinesTo(SceneObject* player);

	void sendDestroyTo(SceneObject* player);

private:
	void addCell(CellObject* cell);

public:
	bool isStaticBuilding();

	CellObject* getCell(int idx);

	int getTotalCellNumber();

	virtual bool addObject(SceneObject* object, int containmentType, bool notifyClient = false);

	int getCurrentNumerOfPlayerItems();

	virtual void onEnter(CreatureObject* player);

	virtual void onExit(CreatureObject* player);

	bool isBuildingObject();

	virtual bool isMedicalBuildingObject();

	void setSignObject(SignObject* sign);

	SignObject* getSignObject();

	virtual bool isCityHallBuilding();

	void setAccessFee(int fee);

	int getAccessFee();

	bool isPublicStructure();

	void setPublicStructure(bool privacy);

	bool togglePrivacy();

	virtual unsigned int getMaximumNumberOfPlayerItems();

	WeakReference<BuildingObject*> _this;

	operator const BuildingObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~BuildingObjectImplementation();

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

	friend class BuildingObject;
};

class BuildingObjectAdapter : public StructureObjectAdapter {
public:
	BuildingObjectAdapter(BuildingObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void createCellObjects();

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	void initializeTransientMembers();

	void createContainerComponent();

	void sendChangeNamePromptTo(CreatureObject* player);

	void sendContainerObjectsTo(SceneObject* player);

	void updateCellPermissionsTo(SceneObject* player);

	int notifyStructurePlaced(CreatureObject* player);

	void removeFromZone();

	void notifyLoadFromDatabase();

	void notifyInsertToZone(SceneObject* object);

	void sendTo(SceneObject* player, bool doClose);

	void sendBaselinesTo(SceneObject* player);

	void sendDestroyTo(SceneObject* player);

	bool isStaticBuilding();

	CellObject* getCell(int idx);

	int getTotalCellNumber();

	bool addObject(SceneObject* object, int containmentType, bool notifyClient);

	int getCurrentNumerOfPlayerItems();

	void onEnter(CreatureObject* player);

	void onExit(CreatureObject* player);

	bool isBuildingObject();

	bool isMedicalBuildingObject();

	void setSignObject(SignObject* sign);

	SignObject* getSignObject();

	bool isCityHallBuilding();

	void setAccessFee(int fee);

	int getAccessFee();

	bool isPublicStructure();

	void setPublicStructure(bool privacy);

	bool togglePrivacy();

	unsigned int getMaximumNumberOfPlayerItems();

};

class BuildingObjectHelper : public DistributedObjectClassHelper, public Singleton<BuildingObjectHelper> {
	static BuildingObjectHelper* staticInitializer;

public:
	BuildingObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<BuildingObjectHelper>;
};

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

#endif /*BUILDINGOBJECT_H_*/
