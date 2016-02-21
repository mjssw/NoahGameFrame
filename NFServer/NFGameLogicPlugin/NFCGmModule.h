// -------------------------------------------------------------------------
//    @FileName      :    NFCPackModule.h
//    @Author           :    LvSheng.Huang
//    @Date             :    2013-07-10
//    @Module           :    NFCPackModule
//
// -------------------------------------------------------------------------

#ifndef NFC_GM_MODULE_H
#define NFC_GM_MODULE_H

#include "NFComm/NFPluginModule/NFIKernelModule.h"
#include "NFComm/NFPluginModule/NFIGameLogicModule.h"
#include "NFComm/NFPluginModule/NFIGmModule.h"
#include "NFComm/NFPluginModule/NFIElementInfoModule.h"
#include "NFComm/NFPluginModule/NFISceneProcessModule.h"
#include "NFComm/NFPluginModule/NFIPropertyModule.h"
#include "NFComm/NFPluginModule/NFILogModule.h"
#include "NFComm/NFPluginModule/NFIUUIDModule.h"
#include "NFComm/NFPluginModule/NFIPluginManager.h"
#include "NFComm/NFMessageDefine/NFProtocolDefine.hpp"
#include "NFComm/NFPluginModule/NFIGameServerNet_ServerModule.h"
#include "NFComm/NFPluginModule/NFILevelModule.h"

class NFCGmModule
    : public NFIGmModule
{
public:
    NFCGmModule( NFIPluginManager* p )
    {
        pPluginManager = p;
    }
    virtual ~NFCGmModule() {};

    virtual bool Init();
    virtual bool Shut();
    virtual bool Execute();
    virtual bool AfterInit();

	void OnGMPropertyIntProcess( const int nSockIndex, const int nMsgID, const char* msg, const uint32_t nLen );
	void OnGMPropertyStrProcess( const int nSockIndex, const int nMsgID, const char* msg, const uint32_t nLen );
	void OnGMPropertyObjectProcess( const int nSockIndex, const int nMsgID, const char* msg, const uint32_t nLen );
	void OnGMPropertyFloatProcess( const int nSockIndex, const int nMsgID, const char* msg, const uint32_t nLen );
	void OnGMRecordIntProcess( const int nSockIndex, const int nMsgID, const char* msg, const uint32_t nLen );
	void OnGMRecordStrProcess( const int nSockIndex, const int nMsgID, const char* msg, const uint32_t nLen );
	void OnGMRecordObjectProcess( const int nSockIndex, const int nMsgID, const char* msg, const uint32_t nLen );
	void OnGMRecordFloatProcess( const int nSockIndex, const int nMsgID, const char* msg, const uint32_t nLen );
	void OnGMNormalProcess( const int nSockIndex, const int nMsgID, const char* msg, const uint32_t nLen );

private:
    NFIKernelModule* m_pKernelModule;
    NFILogModule* m_pLogModule;
    NFIElementInfoModule* m_pElementInfoModule;
    NFISceneProcessModule* m_pSceneProcessModule;
    NFIPropertyModule* m_pPropertyModule;
	NFIGameServerNet_ServerModule* m_pGameServerNet_ServerModule;
	NFILevelModule* m_pLevelModule;
};


#endif
