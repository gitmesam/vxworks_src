/* opc_ae.h generated by WIDL Version 2.2.1 on 06-Dec-01 at 11:53:57 AM */

#include "comBase.h"

#ifndef __INCopc_ae_h
#define __INCopc_ae_h


#include "vxidl.h"

#ifdef __cplusplus
extern "C" {
#endif

int include_opc_ae (void);

#ifndef __IOPCEventServer_FWD_DEFINED__
#define __IOPCEventServer_FWD_DEFINED__
typedef interface IOPCEventServer IOPCEventServer;
#endif /* __IOPCEventServer_FWD_DEFINED__ */

#ifndef __IOPCEventSubscriptionMgt_FWD_DEFINED__
#define __IOPCEventSubscriptionMgt_FWD_DEFINED__
typedef interface IOPCEventSubscriptionMgt IOPCEventSubscriptionMgt;
#endif /* __IOPCEventSubscriptionMgt_FWD_DEFINED__ */

#ifndef __IOPCEventAreaBrowser_FWD_DEFINED__
#define __IOPCEventAreaBrowser_FWD_DEFINED__
typedef interface IOPCEventAreaBrowser IOPCEventAreaBrowser;
#endif /* __IOPCEventAreaBrowser_FWD_DEFINED__ */

#ifndef __IOPCEventSink_FWD_DEFINED__
#define __IOPCEventSink_FWD_DEFINED__
typedef interface IOPCEventSink IOPCEventSink;
#endif /* __IOPCEventSink_FWD_DEFINED__ */

typedef DWORD OPCHANDLE;

enum OPCAE_BROWSE_DOWN
{
OPCAE_BROWSE_UP = 1,
OPCAE_BROWSE_TO = 2,
};

typedef enum OPCAE_BROWSE_DOWN OPCAEBROWSEDIRECTION;

enum OPC_SOURCE
{
OPC_AREA = 1,
};

typedef enum OPC_SOURCE OPCAEBROWSETYPE;

enum OPCAE_STATUS_FAILED
{
OPCAE_STATUS_RUNNING = 1,
OPCAE_STATUS_NOCONFIG = 2,
OPCAE_STATUS_SUSPENDED = 3,
OPCAE_STATUS_TEST = 4,
};

typedef enum OPCAE_STATUS_FAILED OPCEVENTSERVERSTATE;

struct tagONEVENTSTRUCT
{
WORD wChangeMask;
WORD wNewState;
LPWSTR szSource;
FILETIME ftTime;
LPWSTR szMessage;
DWORD dwEventType;
DWORD dwEventCategory;
DWORD dwSeverity;
LPWSTR szConditionName;
LPWSTR szSubconditionName;
WORD wQuality;
WORD wReserved;
BOOL bAckRequired;
FILETIME ftActiveTime;
DWORD dwCookie;
DWORD dwNumEventAttrs;
VARIANT* pEventAttributes;
LPWSTR szActorID;
};

typedef struct tagONEVENTSTRUCT ONEVENTSTRUCT;

struct tagOPCEVENTSERVERSTATUS
{
FILETIME ftStartTime;
FILETIME ftCurrentTime;
FILETIME ftLastUpdateTime;
OPCEVENTSERVERSTATE dwServerState;
WORD wMajorVersion;
WORD wMinorVersion;
WORD wBuildNumber;
WORD wReserved;
LPWSTR szVendorInfo;
};

typedef struct tagOPCEVENTSERVERSTATUS OPCEVENTSERVERSTATUS;

struct tagOPCCONDITIONSTATE
{
WORD wState;
WORD wReserved1;
LPWSTR szActiveSubCondition;
LPWSTR szASCDefinition;
DWORD dwASCSeverity;
LPWSTR szASCDescription;
WORD wQuality;
WORD wReserved2;
FILETIME ftLastAckTime;
FILETIME ftSubCondLastActive;
FILETIME ftCondLastActive;
FILETIME ftCondLastInactive;
LPWSTR szAcknowledgerID;
LPWSTR szComment;
DWORD dwNumSCs;
LPWSTR* pszSCNames;
LPWSTR* pszSCDefinitions;
DWORD* pdwSCSeverities;
LPWSTR* pszSCDescriptions;
DWORD dwNumEventAttrs;
VARIANT* pEventAttributes;
HRESULT* pErrors;
};

typedef struct tagOPCCONDITIONSTATE OPCCONDITIONSTATE;

typedef struct
    {
    COM_VTBL_BEGIN
    COM_VTBL_ENTRY (HRESULT, QueryInterface, (IUnknown* pThis, REFIID riid, void** ppvObject));

#define IUnknown_QueryInterface(pThis, riid, ppvObject) pThis->lpVtbl->QueryInterface(COM_ADJUST_THIS(pThis), riid, ppvObject)

    COM_VTBL_ENTRY (ULONG, AddRef, (IUnknown* pThis));

#define IUnknown_AddRef(pThis) pThis->lpVtbl->AddRef(COM_ADJUST_THIS(pThis))

    COM_VTBL_ENTRY (ULONG, Release, (IUnknown* pThis));

#define IUnknown_Release(pThis) pThis->lpVtbl->Release(COM_ADJUST_THIS(pThis))

    COM_VTBL_ENTRY (HRESULT, GetStatus, (IOPCEventServer* pThis, OPCEVENTSERVERSTATUS** ppEventServerStatus));

#define IOPCEventServer_GetStatus(pThis, ppEventServerStatus) pThis->lpVtbl->GetStatus(COM_ADJUST_THIS(pThis), ppEventServerStatus)

    COM_VTBL_ENTRY (HRESULT, CreateEventSubscription, (IOPCEventServer* pThis, BOOL bActive, DWORD dwBufferTime, DWORD dwMaxSize, OPCHANDLE hClientSubscription, REFIID riid, LPUNKNOWN* ppUnk, DWORD* pdwRevisedBufferTime, DWORD* pdwRevisedMaxSize));

#define IOPCEventServer_CreateEventSubscription(pThis, bActive, dwBufferTime, dwMaxSize, hClientSubscription, riid, ppUnk, pdwRevisedBufferTime, pdwRevisedMaxSize) pThis->lpVtbl->CreateEventSubscription(COM_ADJUST_THIS(pThis), bActive, dwBufferTime, dwMaxSize, hClientSubscription, riid, ppUnk, pdwRevisedBufferTime, pdwRevisedMaxSize)

    COM_VTBL_ENTRY (HRESULT, QueryAvailableFilters, (IOPCEventServer* pThis, DWORD* pdwFilterMask));

#define IOPCEventServer_QueryAvailableFilters(pThis, pdwFilterMask) pThis->lpVtbl->QueryAvailableFilters(COM_ADJUST_THIS(pThis), pdwFilterMask)

    COM_VTBL_ENTRY (HRESULT, QueryEventCategories, (IOPCEventServer* pThis, DWORD dwEventType, DWORD* pdwCount, DWORD** ppdwEventCategories, LPWSTR** ppszEventCategoryDescs));

#define IOPCEventServer_QueryEventCategories(pThis, dwEventType, pdwCount, ppdwEventCategories, ppszEventCategoryDescs) pThis->lpVtbl->QueryEventCategories(COM_ADJUST_THIS(pThis), dwEventType, pdwCount, ppdwEventCategories, ppszEventCategoryDescs)

    COM_VTBL_ENTRY (HRESULT, QueryConditionNames, (IOPCEventServer* pThis, DWORD dwEventCategory, DWORD* pdwCount, LPWSTR** ppszConditionNames));

#define IOPCEventServer_QueryConditionNames(pThis, dwEventCategory, pdwCount, ppszConditionNames) pThis->lpVtbl->QueryConditionNames(COM_ADJUST_THIS(pThis), dwEventCategory, pdwCount, ppszConditionNames)

    COM_VTBL_ENTRY (HRESULT, QuerySubConditionNames, (IOPCEventServer* pThis, LPWSTR szConditionName, DWORD* pdwCount, LPWSTR** ppszSubConditionNames));

#define IOPCEventServer_QuerySubConditionNames(pThis, szConditionName, pdwCount, ppszSubConditionNames) pThis->lpVtbl->QuerySubConditionNames(COM_ADJUST_THIS(pThis), szConditionName, pdwCount, ppszSubConditionNames)

    COM_VTBL_ENTRY (HRESULT, QuerySourceConditions, (IOPCEventServer* pThis, LPWSTR szSource, DWORD* pdwCount, LPWSTR** ppszConditionNames));

#define IOPCEventServer_QuerySourceConditions(pThis, szSource, pdwCount, ppszConditionNames) pThis->lpVtbl->QuerySourceConditions(COM_ADJUST_THIS(pThis), szSource, pdwCount, ppszConditionNames)

    COM_VTBL_ENTRY (HRESULT, QueryEventAttributes, (IOPCEventServer* pThis, DWORD dwEventCategory, DWORD* pdwCount, DWORD** ppdwAttrIDs, LPWSTR** ppszAttrDescs, VARTYPE** ppvtAttrTypes));

#define IOPCEventServer_QueryEventAttributes(pThis, dwEventCategory, pdwCount, ppdwAttrIDs, ppszAttrDescs, ppvtAttrTypes) pThis->lpVtbl->QueryEventAttributes(COM_ADJUST_THIS(pThis), dwEventCategory, pdwCount, ppdwAttrIDs, ppszAttrDescs, ppvtAttrTypes)

    COM_VTBL_ENTRY (HRESULT, TranslateToItemIDs, (IOPCEventServer* pThis, LPWSTR szSource, DWORD dwEventCategory, LPWSTR szConditionName, LPWSTR szSubconditionName, DWORD dwCount, DWORD* pdwAssocAttrIDs, LPWSTR** ppszAttrItemIDs, LPWSTR** ppszNodeNames, CLSID** ppCLSIDs));

#define IOPCEventServer_TranslateToItemIDs(pThis, szSource, dwEventCategory, szConditionName, szSubconditionName, dwCount, pdwAssocAttrIDs, ppszAttrItemIDs, ppszNodeNames, ppCLSIDs) pThis->lpVtbl->TranslateToItemIDs(COM_ADJUST_THIS(pThis), szSource, dwEventCategory, szConditionName, szSubconditionName, dwCount, pdwAssocAttrIDs, ppszAttrItemIDs, ppszNodeNames, ppCLSIDs)

    COM_VTBL_ENTRY (HRESULT, GetConditionState, (IOPCEventServer* pThis, LPWSTR szSource, LPWSTR szConditionName, DWORD dwNumEventAttrs, DWORD* pdwAttributeIDs, OPCCONDITIONSTATE** ppConditionState));

#define IOPCEventServer_GetConditionState(pThis, szSource, szConditionName, dwNumEventAttrs, pdwAttributeIDs, ppConditionState) pThis->lpVtbl->GetConditionState(COM_ADJUST_THIS(pThis), szSource, szConditionName, dwNumEventAttrs, pdwAttributeIDs, ppConditionState)

    COM_VTBL_ENTRY (HRESULT, EnableConditionByArea, (IOPCEventServer* pThis, DWORD dwNumAreas, LPWSTR* pszAreas));

#define IOPCEventServer_EnableConditionByArea(pThis, dwNumAreas, pszAreas) pThis->lpVtbl->EnableConditionByArea(COM_ADJUST_THIS(pThis), dwNumAreas, pszAreas)

    COM_VTBL_ENTRY (HRESULT, EnableConditionBySource, (IOPCEventServer* pThis, DWORD dwNumSources, LPWSTR* pszSources));

#define IOPCEventServer_EnableConditionBySource(pThis, dwNumSources, pszSources) pThis->lpVtbl->EnableConditionBySource(COM_ADJUST_THIS(pThis), dwNumSources, pszSources)

    COM_VTBL_ENTRY (HRESULT, DisableConditionByArea, (IOPCEventServer* pThis, DWORD dwNumAreas, LPWSTR* pszAreas));

#define IOPCEventServer_DisableConditionByArea(pThis, dwNumAreas, pszAreas) pThis->lpVtbl->DisableConditionByArea(COM_ADJUST_THIS(pThis), dwNumAreas, pszAreas)

    COM_VTBL_ENTRY (HRESULT, DisableConditionBySource, (IOPCEventServer* pThis, DWORD dwNumSources, LPWSTR* pszSources));

#define IOPCEventServer_DisableConditionBySource(pThis, dwNumSources, pszSources) pThis->lpVtbl->DisableConditionBySource(COM_ADJUST_THIS(pThis), dwNumSources, pszSources)

    COM_VTBL_ENTRY (HRESULT, AckCondition, (IOPCEventServer* pThis, DWORD dwCount, LPWSTR szAcknowledgerID, LPWSTR szComment, LPWSTR* pszSource, LPWSTR* pszConditionName, FILETIME* pftActiveTime, DWORD* pdwCookie, HRESULT** ppErrors));

#define IOPCEventServer_AckCondition(pThis, dwCount, szAcknowledgerID, szComment, pszSource, pszConditionName, pftActiveTime, pdwCookie, ppErrors) pThis->lpVtbl->AckCondition(COM_ADJUST_THIS(pThis), dwCount, szAcknowledgerID, szComment, pszSource, pszConditionName, pftActiveTime, pdwCookie, ppErrors)

    COM_VTBL_ENTRY (HRESULT, CreateAreaBrowser, (IOPCEventServer* pThis, REFIID riid, LPUNKNOWN* ppUnk));

#define IOPCEventServer_CreateAreaBrowser(pThis, riid, ppUnk) pThis->lpVtbl->CreateAreaBrowser(COM_ADJUST_THIS(pThis), riid, ppUnk)

    COM_VTBL_END
    } IOPCEventServerVtbl;

#ifdef __cplusplus

interface IOPCEventServer : public IUnknown
{
virtual HRESULT GetStatus (OPCEVENTSERVERSTATUS** ppEventServerStatus) =0;

virtual HRESULT CreateEventSubscription (BOOL bActive, DWORD dwBufferTime, DWORD dwMaxSize, OPCHANDLE hClientSubscription, REFIID riid, LPUNKNOWN* ppUnk, DWORD* pdwRevisedBufferTime, DWORD* pdwRevisedMaxSize) =0;

virtual HRESULT QueryAvailableFilters (DWORD* pdwFilterMask) =0;

virtual HRESULT QueryEventCategories (DWORD dwEventType, DWORD* pdwCount, DWORD** ppdwEventCategories, LPWSTR** ppszEventCategoryDescs) =0;

virtual HRESULT QueryConditionNames (DWORD dwEventCategory, DWORD* pdwCount, LPWSTR** ppszConditionNames) =0;

virtual HRESULT QuerySubConditionNames (LPWSTR szConditionName, DWORD* pdwCount, LPWSTR** ppszSubConditionNames) =0;

virtual HRESULT QuerySourceConditions (LPWSTR szSource, DWORD* pdwCount, LPWSTR** ppszConditionNames) =0;

virtual HRESULT QueryEventAttributes (DWORD dwEventCategory, DWORD* pdwCount, DWORD** ppdwAttrIDs, LPWSTR** ppszAttrDescs, VARTYPE** ppvtAttrTypes) =0;

virtual HRESULT TranslateToItemIDs (LPWSTR szSource, DWORD dwEventCategory, LPWSTR szConditionName, LPWSTR szSubconditionName, DWORD dwCount, DWORD* pdwAssocAttrIDs, LPWSTR** ppszAttrItemIDs, LPWSTR** ppszNodeNames, CLSID** ppCLSIDs) =0;

virtual HRESULT GetConditionState (LPWSTR szSource, LPWSTR szConditionName, DWORD dwNumEventAttrs, DWORD* pdwAttributeIDs, OPCCONDITIONSTATE** ppConditionState) =0;

virtual HRESULT EnableConditionByArea (DWORD dwNumAreas, LPWSTR* pszAreas) =0;

virtual HRESULT EnableConditionBySource (DWORD dwNumSources, LPWSTR* pszSources) =0;

virtual HRESULT DisableConditionByArea (DWORD dwNumAreas, LPWSTR* pszAreas) =0;

virtual HRESULT DisableConditionBySource (DWORD dwNumSources, LPWSTR* pszSources) =0;

virtual HRESULT AckCondition (DWORD dwCount, LPWSTR szAcknowledgerID, LPWSTR szComment, LPWSTR* pszSource, LPWSTR* pszConditionName, FILETIME* pftActiveTime, DWORD* pdwCookie, HRESULT** ppErrors) =0;

virtual HRESULT CreateAreaBrowser (REFIID riid, LPUNKNOWN* ppUnk) =0;

};

#else

/* C interface definition for IOPCEventServer */

interface IOPCEventServer
    {
    const IOPCEventServerVtbl *  lpVtbl;
    };

#endif /* __cplusplus */

EXTERN_C const IID IID_IOPCEventServer;

typedef struct
    {
    COM_VTBL_BEGIN
    COM_VTBL_ENTRY (HRESULT, QueryInterface, (IUnknown* pThis, REFIID riid, void** ppvObject));

#define IUnknown_QueryInterface(pThis, riid, ppvObject) pThis->lpVtbl->QueryInterface(COM_ADJUST_THIS(pThis), riid, ppvObject)

    COM_VTBL_ENTRY (ULONG, AddRef, (IUnknown* pThis));

#define IUnknown_AddRef(pThis) pThis->lpVtbl->AddRef(COM_ADJUST_THIS(pThis))

    COM_VTBL_ENTRY (ULONG, Release, (IUnknown* pThis));

#define IUnknown_Release(pThis) pThis->lpVtbl->Release(COM_ADJUST_THIS(pThis))

    COM_VTBL_ENTRY (HRESULT, SetFilter, (IOPCEventSubscriptionMgt* pThis, DWORD dwEventType, DWORD dwNumCategories, DWORD* pdwEventCategories, DWORD dwLowSeverity, DWORD dwHighSeverity, DWORD dwNumAreas, LPWSTR* pszAreaList, DWORD dwNumSources, LPWSTR* pszSourceList));

#define IOPCEventSubscriptionMgt_SetFilter(pThis, dwEventType, dwNumCategories, pdwEventCategories, dwLowSeverity, dwHighSeverity, dwNumAreas, pszAreaList, dwNumSources, pszSourceList) pThis->lpVtbl->SetFilter(COM_ADJUST_THIS(pThis), dwEventType, dwNumCategories, pdwEventCategories, dwLowSeverity, dwHighSeverity, dwNumAreas, pszAreaList, dwNumSources, pszSourceList)

    COM_VTBL_ENTRY (HRESULT, GetFilter, (IOPCEventSubscriptionMgt* pThis, DWORD* pdwEventType, DWORD* pdwNumCategories, DWORD** ppdwEventCategories, DWORD* pdwLowSeverity, DWORD* pdwHighSeverity, DWORD* pdwNumAreas, LPWSTR** ppszAreaList, DWORD* pdwNumSources, LPWSTR** ppszSourceList));

#define IOPCEventSubscriptionMgt_GetFilter(pThis, pdwEventType, pdwNumCategories, ppdwEventCategories, pdwLowSeverity, pdwHighSeverity, pdwNumAreas, ppszAreaList, pdwNumSources, ppszSourceList) pThis->lpVtbl->GetFilter(COM_ADJUST_THIS(pThis), pdwEventType, pdwNumCategories, ppdwEventCategories, pdwLowSeverity, pdwHighSeverity, pdwNumAreas, ppszAreaList, pdwNumSources, ppszSourceList)

    COM_VTBL_ENTRY (HRESULT, SelectReturnedAttributes, (IOPCEventSubscriptionMgt* pThis, DWORD dwEventCategory, DWORD dwCount, DWORD* dwAttributeIDs));

#define IOPCEventSubscriptionMgt_SelectReturnedAttributes(pThis, dwEventCategory, dwCount, dwAttributeIDs) pThis->lpVtbl->SelectReturnedAttributes(COM_ADJUST_THIS(pThis), dwEventCategory, dwCount, dwAttributeIDs)

    COM_VTBL_ENTRY (HRESULT, GetReturnedAttributes, (IOPCEventSubscriptionMgt* pThis, DWORD dwEventCategory, DWORD* pdwCount, DWORD** ppdwAttributeIDs));

#define IOPCEventSubscriptionMgt_GetReturnedAttributes(pThis, dwEventCategory, pdwCount, ppdwAttributeIDs) pThis->lpVtbl->GetReturnedAttributes(COM_ADJUST_THIS(pThis), dwEventCategory, pdwCount, ppdwAttributeIDs)

    COM_VTBL_ENTRY (HRESULT, Refresh, (IOPCEventSubscriptionMgt* pThis, DWORD dwConnection));

#define IOPCEventSubscriptionMgt_Refresh(pThis, dwConnection) pThis->lpVtbl->Refresh(COM_ADJUST_THIS(pThis), dwConnection)

    COM_VTBL_ENTRY (HRESULT, CancelRefresh, (IOPCEventSubscriptionMgt* pThis, DWORD dwConnection));

#define IOPCEventSubscriptionMgt_CancelRefresh(pThis, dwConnection) pThis->lpVtbl->CancelRefresh(COM_ADJUST_THIS(pThis), dwConnection)

    COM_VTBL_ENTRY (HRESULT, GetState, (IOPCEventSubscriptionMgt* pThis, BOOL* pbActive, DWORD* pdwBufferTime, DWORD* pdwMaxSize, OPCHANDLE* phClientSubscription));

#define IOPCEventSubscriptionMgt_GetState(pThis, pbActive, pdwBufferTime, pdwMaxSize, phClientSubscription) pThis->lpVtbl->GetState(COM_ADJUST_THIS(pThis), pbActive, pdwBufferTime, pdwMaxSize, phClientSubscription)

    COM_VTBL_ENTRY (HRESULT, SetState, (IOPCEventSubscriptionMgt* pThis, BOOL* pbActive, DWORD* pdwBufferTime, DWORD* pdwMaxSize, OPCHANDLE hClientSubscription, DWORD* pdwRevisedBufferTime, DWORD* pdwRevisedMaxSize));

#define IOPCEventSubscriptionMgt_SetState(pThis, pbActive, pdwBufferTime, pdwMaxSize, hClientSubscription, pdwRevisedBufferTime, pdwRevisedMaxSize) pThis->lpVtbl->SetState(COM_ADJUST_THIS(pThis), pbActive, pdwBufferTime, pdwMaxSize, hClientSubscription, pdwRevisedBufferTime, pdwRevisedMaxSize)

    COM_VTBL_END
    } IOPCEventSubscriptionMgtVtbl;

#ifdef __cplusplus

interface IOPCEventSubscriptionMgt : public IUnknown
{
virtual HRESULT SetFilter (DWORD dwEventType, DWORD dwNumCategories, DWORD* pdwEventCategories, DWORD dwLowSeverity, DWORD dwHighSeverity, DWORD dwNumAreas, LPWSTR* pszAreaList, DWORD dwNumSources, LPWSTR* pszSourceList) =0;

virtual HRESULT GetFilter (DWORD* pdwEventType, DWORD* pdwNumCategories, DWORD** ppdwEventCategories, DWORD* pdwLowSeverity, DWORD* pdwHighSeverity, DWORD* pdwNumAreas, LPWSTR** ppszAreaList, DWORD* pdwNumSources, LPWSTR** ppszSourceList) =0;

virtual HRESULT SelectReturnedAttributes (DWORD dwEventCategory, DWORD dwCount, DWORD* dwAttributeIDs) =0;

virtual HRESULT GetReturnedAttributes (DWORD dwEventCategory, DWORD* pdwCount, DWORD** ppdwAttributeIDs) =0;

virtual HRESULT Refresh (DWORD dwConnection) =0;

virtual HRESULT CancelRefresh (DWORD dwConnection) =0;

virtual HRESULT GetState (BOOL* pbActive, DWORD* pdwBufferTime, DWORD* pdwMaxSize, OPCHANDLE* phClientSubscription) =0;

virtual HRESULT SetState (BOOL* pbActive, DWORD* pdwBufferTime, DWORD* pdwMaxSize, OPCHANDLE hClientSubscription, DWORD* pdwRevisedBufferTime, DWORD* pdwRevisedMaxSize) =0;

};

#else

/* C interface definition for IOPCEventSubscriptionMgt */

interface IOPCEventSubscriptionMgt
    {
    const IOPCEventSubscriptionMgtVtbl *  lpVtbl;
    };

#endif /* __cplusplus */

EXTERN_C const IID IID_IOPCEventSubscriptionMgt;

typedef struct
    {
    COM_VTBL_BEGIN
    COM_VTBL_ENTRY (HRESULT, QueryInterface, (IUnknown* pThis, REFIID riid, void** ppvObject));

#define IUnknown_QueryInterface(pThis, riid, ppvObject) pThis->lpVtbl->QueryInterface(COM_ADJUST_THIS(pThis), riid, ppvObject)

    COM_VTBL_ENTRY (ULONG, AddRef, (IUnknown* pThis));

#define IUnknown_AddRef(pThis) pThis->lpVtbl->AddRef(COM_ADJUST_THIS(pThis))

    COM_VTBL_ENTRY (ULONG, Release, (IUnknown* pThis));

#define IUnknown_Release(pThis) pThis->lpVtbl->Release(COM_ADJUST_THIS(pThis))

    COM_VTBL_ENTRY (HRESULT, ChangeBrowsePosition, (IOPCEventAreaBrowser* pThis, OPCAEBROWSEDIRECTION dwBrowseDirection, LPCWSTR szString));

#define IOPCEventAreaBrowser_ChangeBrowsePosition(pThis, dwBrowseDirection, szString) pThis->lpVtbl->ChangeBrowsePosition(COM_ADJUST_THIS(pThis), dwBrowseDirection, szString)

    COM_VTBL_ENTRY (HRESULT, BrowseOPCAreas, (IOPCEventAreaBrowser* pThis, OPCAEBROWSETYPE dwBrowseFilterType, LPCWSTR szFilterCriteria, LPENUMSTRING* ppIEnumString));

#define IOPCEventAreaBrowser_BrowseOPCAreas(pThis, dwBrowseFilterType, szFilterCriteria, ppIEnumString) pThis->lpVtbl->BrowseOPCAreas(COM_ADJUST_THIS(pThis), dwBrowseFilterType, szFilterCriteria, ppIEnumString)

    COM_VTBL_ENTRY (HRESULT, GetQualifiedAreaName, (IOPCEventAreaBrowser* pThis, LPCWSTR szAreaName, LPWSTR* pszQualifiedAreaName));

#define IOPCEventAreaBrowser_GetQualifiedAreaName(pThis, szAreaName, pszQualifiedAreaName) pThis->lpVtbl->GetQualifiedAreaName(COM_ADJUST_THIS(pThis), szAreaName, pszQualifiedAreaName)

    COM_VTBL_ENTRY (HRESULT, GetQualifiedSourceName, (IOPCEventAreaBrowser* pThis, LPCWSTR szSourceName, LPWSTR* pszQualifiedSourceName));

#define IOPCEventAreaBrowser_GetQualifiedSourceName(pThis, szSourceName, pszQualifiedSourceName) pThis->lpVtbl->GetQualifiedSourceName(COM_ADJUST_THIS(pThis), szSourceName, pszQualifiedSourceName)

    COM_VTBL_END
    } IOPCEventAreaBrowserVtbl;

#ifdef __cplusplus

interface IOPCEventAreaBrowser : public IUnknown
{
virtual HRESULT ChangeBrowsePosition (OPCAEBROWSEDIRECTION dwBrowseDirection, LPCWSTR szString) =0;

virtual HRESULT BrowseOPCAreas (OPCAEBROWSETYPE dwBrowseFilterType, LPCWSTR szFilterCriteria, LPENUMSTRING* ppIEnumString) =0;

virtual HRESULT GetQualifiedAreaName (LPCWSTR szAreaName, LPWSTR* pszQualifiedAreaName) =0;

virtual HRESULT GetQualifiedSourceName (LPCWSTR szSourceName, LPWSTR* pszQualifiedSourceName) =0;

};

#else

/* C interface definition for IOPCEventAreaBrowser */

interface IOPCEventAreaBrowser
    {
    const IOPCEventAreaBrowserVtbl *  lpVtbl;
    };

#endif /* __cplusplus */

EXTERN_C const IID IID_IOPCEventAreaBrowser;

typedef struct
    {
    COM_VTBL_BEGIN
    COM_VTBL_ENTRY (HRESULT, QueryInterface, (IUnknown* pThis, REFIID riid, void** ppvObject));

#define IUnknown_QueryInterface(pThis, riid, ppvObject) pThis->lpVtbl->QueryInterface(COM_ADJUST_THIS(pThis), riid, ppvObject)

    COM_VTBL_ENTRY (ULONG, AddRef, (IUnknown* pThis));

#define IUnknown_AddRef(pThis) pThis->lpVtbl->AddRef(COM_ADJUST_THIS(pThis))

    COM_VTBL_ENTRY (ULONG, Release, (IUnknown* pThis));

#define IUnknown_Release(pThis) pThis->lpVtbl->Release(COM_ADJUST_THIS(pThis))

    COM_VTBL_ENTRY (HRESULT, OnEvent, (IOPCEventSink* pThis, OPCHANDLE hClientSubscription, BOOL bRefresh, BOOL bLastRefresh, DWORD dwCount, ONEVENTSTRUCT* pEvents));

#define IOPCEventSink_OnEvent(pThis, hClientSubscription, bRefresh, bLastRefresh, dwCount, pEvents) pThis->lpVtbl->OnEvent(COM_ADJUST_THIS(pThis), hClientSubscription, bRefresh, bLastRefresh, dwCount, pEvents)

    COM_VTBL_END
    } IOPCEventSinkVtbl;

#ifdef __cplusplus

interface IOPCEventSink : public IUnknown
{
virtual HRESULT OnEvent (OPCHANDLE hClientSubscription, BOOL bRefresh, BOOL bLastRefresh, DWORD dwCount, ONEVENTSTRUCT* pEvents) =0;

};

#else

/* C interface definition for IOPCEventSink */

interface IOPCEventSink
    {
    const IOPCEventSinkVtbl *  lpVtbl;
    };

#endif /* __cplusplus */

EXTERN_C const IID IID_IOPCEventSink;

#ifdef __cplusplus
}
#endif



#endif /* __INCopc_ae_h */

