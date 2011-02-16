/*
 *	server/zone/ZoneClientSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef ZONECLIENTSESSION_H_
#define ZONECLIENTSESSION_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace login {
namespace account {

class Account;

} // namespace account
} // namespace login
} // namespace server

using namespace server::login::account;

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

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "engine/service/proto/BaseClientProxy.h"

#include "engine/service/proto/BasePacket.h"

#include "engine/core/ManagedObject.h"

#include "system/lang/ref/Reference.h"

#include "system/net/SocketAddress.h"

#include "system/net/Socket.h"

#include "engine/service/proto/events/BaseClientNetStatusCheckupEvent.h"

#include "engine/service/proto/events/BaseClientCleanupEvent.h"

#include "engine/service/proto/events/BaseClientNetStatusRequestEvent.h"

#include "engine/service/proto/events/BaseClientEvent.h"

#include "engine/log/Logger.h"

namespace server {
namespace zone {

class ZoneClientSession : public ManagedObject {
public:
	ZoneClientSession(BaseClientProxy* session);

	void disconnect();

	void disconnect(bool doLock);

	void sendMessage(BasePacket* msg);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock = true);

	void info(const String& msg, bool force = false);

	void error(const String& msg);

	String getAddress();

	void setPlayer(SceneObject* playerCreature);

	void setSessionID(unsigned int id);

	void setAccount(Account* acc);

	BaseClientProxy* getSession();

	SceneObject* getPlayer();

	unsigned int getSessionID();

	Account* getAccount();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ZoneClientSession(DummyConstructorParameter* param);

	virtual ~ZoneClientSession();

	String _return_getAddress;

	friend class ZoneClientSessionHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneClientSessionImplementation : public ManagedObjectImplementation {
protected:
	Reference<BaseClientProxy*> session;

	ManagedWeakReference<SceneObject* > player;

	unsigned int sessionID;

	ManagedReference<Account* > account;

private:
	bool disconnecting;

public:
	ZoneClientSessionImplementation(BaseClientProxy* session);

	ZoneClientSessionImplementation(DummyConstructorParameter* param);

	void disconnect();

	void disconnect(bool doLock);

	void sendMessage(BasePacket* msg);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock = true);

	void info(const String& msg, bool force = false);

	void error(const String& msg);

	String getAddress();

	void setPlayer(SceneObject* playerCreature);

	void setSessionID(unsigned int id);

	void setAccount(Account* acc);

	BaseClientProxy* getSession();

	SceneObject* getPlayer();

	unsigned int getSessionID();

	Account* getAccount();

	ZoneClientSession* _this;

	operator const ZoneClientSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ZoneClientSessionImplementation();

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

	friend class ZoneClientSession;
};

class ZoneClientSessionAdapter : public ManagedObjectAdapter {
public:
	ZoneClientSessionAdapter(ZoneClientSessionImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void disconnect();

	void disconnect(bool doLock);

	void sendMessage(BasePacket* msg);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock);

	void info(const String& msg, bool force);

	void error(const String& msg);

	String getAddress();

	void setPlayer(SceneObject* playerCreature);

	void setSessionID(unsigned int id);

	void setAccount(Account* acc);

	SceneObject* getPlayer();

	unsigned int getSessionID();

	Account* getAccount();

protected:
	String _param0_info__String_bool_;
	String _param0_error__String_;
};

class ZoneClientSessionHelper : public DistributedObjectClassHelper, public Singleton<ZoneClientSessionHelper> {
	static ZoneClientSessionHelper* staticInitializer;

public:
	ZoneClientSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ZoneClientSessionHelper>;
};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*ZONECLIENTSESSION_H_*/
