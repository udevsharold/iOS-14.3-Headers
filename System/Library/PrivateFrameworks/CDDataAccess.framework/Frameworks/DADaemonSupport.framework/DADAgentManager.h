/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DADaemonSupport/DADaemonSupport-Structs.h>
@class NSArray, NSObject, NSMutableDictionary, NSDictionary, DADBuddyStateObserver, NSMutableArray, DADREMLocalDBWatcher;

@interface DADAgentManager : NSObject {

	NSArray* _activeAgents;
	NSObject*<OS_dispatch_queue> _activeAgentsQueue;
	NSMutableDictionary* _watchedIDs;
	unsigned _pmNotifier;
	IONotificationPortRef _pmPort;
	CFRunLoopSourceRef _pmRunLoopSource;
	/*^block*/id _startAgentsWhenSystemReadyBlock;
	NSObject*<OS_dispatch_queue> _CTCellularUsagePolicyNotificationQ;
	CTServerConnectionRef _ctServerConnection;
	NSDictionary* _wirelessPolicies;
	int _pendingAccountSetupCount;
	DADBuddyStateObserver* _buddyStateObserver;
	NSMutableArray* _subCalHandlers;
	unsigned long long _nextDisableMonitoringAgentsToken;
	NSMutableDictionary* _disableMonitoringAgentsTokens;

}

@property (nonatomic,retain) DADREMLocalDBWatcher * rem_localDBWatcher; 
@property (nonatomic,copy) id rem_xpcEventHandler; 
@property (nonatomic,retain) id<DADREMUserNotificationPresentingProvider> rem_userNotificationPresentingProvider; 
@property (nonatomic,retain) id<DADREMStoreProvider> rem_storeProvider; 
@property (nonatomic,retain) NSMutableArray * subCalHandlers;                                                                  //@synthesize subCalHandlers=_subCalHandlers - In the implementation block
@property (assign,nonatomic) unsigned long long nextDisableMonitoringAgentsToken;                                              //@synthesize nextDisableMonitoringAgentsToken=_nextDisableMonitoringAgentsToken - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * disableMonitoringAgentsTokens;                                            //@synthesize disableMonitoringAgentsTokens=_disableMonitoringAgentsTokens - In the implementation block
@property (nonatomic,readonly) NSArray * activeAgents; 
+(id)sharedManager;
+(BOOL)wirelessPolicy:(id)arg1 isMorePermissiveThanPolicy:(id)arg2 ;
-(id)accountWithAccountID:(id)arg1 andClassName:(id)arg2 ;
-(void)_deviceDidWake;
-(void)setRem_xpcEventHandler:(id)arg1 ;
-(void)getStatusReportDictsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setRem_userNotificationPresentingProvider:(id<DADREMUserNotificationPresentingProvider>)arg1 ;
-(void)_clearOrphanedStores;
-(id)init;
-(void)_loadAndStartMonitoringAgents:(BOOL)arg1 ;
-(BOOL)resumeMonitoringAccountID:(id)arg1 syncKeyMap:(id)arg2 ;
-(id)rem_xpcEventHandler;
-(BOOL)hasActiveAccounts;
-(void)registerForBuddy;
-(NSArray *)activeAgents;
-(void)setNextDisableMonitoringAgentsToken:(unsigned long long)arg1 ;
-(void)setRem_localDBWatcher:(DADREMLocalDBWatcher *)arg1 ;
-(id)activeAccountBundleIDs;
-(void)dealloc;
-(id<DADREMUserNotificationPresentingProvider>)rem_userNotificationPresentingProvider;
-(BOOL)hasEASAccountConfigured;
-(id)stateString;
-(id)agentWithAccountID:(id)arg1 ;
-(void)enableMonitoringAgentsWithToken:(unsigned long long)arg1 ;
-(void)removePendingAccountSetup;
-(BOOL)_hasDataclassWeCareAbout:(id)arg1 ;
-(id)currentPolicyKeyForAccount:(id)arg1 ;
-(void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 callback:(/*^block*/id)arg6 ;
-(id)_accountInfoPath;
-(BOOL)stopMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(void)requestPolicyUpdateForAccount:(id)arg1 ;
-(NSMutableDictionary *)disableMonitoringAgentsTokens;
-(void)_addAccountAggdEntries;
-(id)accountWithAccountID:(id)arg1 ;
-(id<DADREMStoreProvider>)rem_storeProvider;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4 ;
-(void)_stopMonitoringAndSaveAgents;
-(DADREMLocalDBWatcher *)rem_localDBWatcher;
-(void)addPendingAccountSetup;
-(void)_registerForCTDataUsageNotificaiton;
-(id)_configFileForAgent:(id)arg1 ;
-(void)enableActiveSync;
-(void)loadAgents:(BOOL)arg1 ;
-(void)setSubCalHandlers:(NSMutableArray *)arg1 ;
-(void)saveAndReleaseAgents;
-(void)_handleCellularDataUsageChangedNotification;
-(BOOL)updateContentsOfAllFoldersForAccountIDs:(id)arg1 ;
-(void)_deviceWillSleep;
-(unsigned long long)disableMonitoringAgents;
-(BOOL)hasPendingAccountSetup;
-(void)_resetMonitoringRequestsAndLoadAgents;
-(unsigned long long)nextDisableMonitoringAgentsToken;
-(void)setRem_storeProvider:(id<DADREMStoreProvider>)arg1 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)unregisterForBuddy;
-(void)disableActiveSync;
-(BOOL)updateContentsOfFolders:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(BOOL)arg4 ;
-(BOOL)_systemMayNowBeReady;
-(NSMutableArray *)subCalHandlers;
-(BOOL)startMonitoringAccountID:(id)arg1 syncKeyMap:(id)arg2 ;
-(BOOL)suspendMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
@end
