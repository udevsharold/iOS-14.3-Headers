/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/AnalyticsEngineCore.h>
#import <libobjc.A.dylib/ProxyAnalyticsDelegate.h>
#import <libobjc.A.dylib/NWUsageManagerDelegate.h>
#import <libobjc.A.dylib/CellThroughputAdviserDelegate.h>
#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@protocol OS_dispatch_source;
@class UsageAnalytics, ProcessAnalytics, AppAnalytics, ObjectAnalytics, NSMutableDictionary, NWUsageManager, NSDate, NWUsageTargetSelector, NSString, NSObject, CellThroughputAdviser, NSDictionary, RepeatedConnFailureDetector, CoreTelephonyShim, CellularStateRelay, NetworkAnalyticsStateRelay, ProxyAnalytics;

@interface FlowAnalyticsEngine : AnalyticsEngineCore <ProxyAnalyticsDelegate, NWUsageManagerDelegate, CellThroughputAdviserDelegate, ManagedEventInfoProtocol> {

	UsageAnalytics* uspace;
	ProcessAnalytics* pspace;
	AppAnalytics* aspace;
	ObjectAnalytics* calspace;
	NSMutableDictionary* processCache;
	NSMutableDictionary* appState;
	NSMutableDictionary* appCompactState;
	BOOL trackingRequiredForBaseband;
	NSMutableDictionary* pluginToBundleCache;
	NSMutableDictionary* audioBundleCache;
	NWUsageManager* nstatUsageManager;
	BOOL nstatUsageManagerConfigured;
	int cellularInterfaceIndex;
	NSDate* lastCellularThresholdRefreshTime;
	NWUsageTargetSelector* cellThresholdTargetSelector;
	NWUsageTargetSelector* cellRNFPeriodEndTargetSelector;
	NSString* networkUsageTraceFileRootName;
	int networkUsageTraceFileFD;
	ct_green_tea_logger_sRef _greenTeaLogger;
	unsigned long long logStateHandle;
	NSObject*<OS_dispatch_source> siginfo;
	unsigned pdpBitmap;
	/*^block*/id dataUsageRefreshCompletionBlock;
	int dataUsageRefreshCompletionNumWaiting;
	NSDate* lastFullRefreshTime;
	id tetherObserver;
	BOOL isTetherActive;
	id algosScoreObserver;
	id appStateChangeObserver;
	id cellTCCapabilityObserver;
	id transferSizeObserver;
	id assetDownloadObserver;
	id cellThroughputAdvisoryReqObserver;
	CellThroughputAdviser* cellThroughputAdviser;
	NSString* throughputAdviserTraceFileRootName;
	NSDictionary* throughputAdviserConfigurationParameters;
	NSObject*<OS_dispatch_source> throughputAdvicePollingTimer;
	NWUsageTargetSelector* throughputAdviceTargetSelector;
	double throughputAdvicePollingInterval;
	unsigned long long assetDownloadProcessId;
	RepeatedConnFailureDetector* repeatedConnFailureDetector;
	NSMutableDictionary* flowCache;
	NSMutableDictionary* flowInstant;
	id flowObserver;
	id relayReadyObserver;
	ObjectAnalytics* fspace;
	ObjectAnalytics* lfpspace;
	ObjectAnalytics* domspace;
	ObjectAnalytics* expspace;
	NSObject*<OS_dispatch_source> flushOldFlowRecordsTimer;
	BOOL isScreenDark;
	NSDate* screenDarkTimestamp;
	BOOL isScreenLocked;
	char _nrFrequencyBand;
	id userSwitchObserver;
	unsigned long long usageCoalescingSpanSecs;
	unsigned long long usageWindowUnitsCount;
	unsigned long long outcomeArrayLogEntryCount;
	BOOL flowCountExceededThreshold;
	BOOL thunderingHerdFlowCountExceededThreshold;
	NSMutableDictionary* estAwdMetricsDict;
	unsigned long long trackedFlowCountSincePrimaryInterfaceChanged;
	CoreTelephonyShim* ctShim;
	BOOL _haveCalendar;
	BOOL _haveTypicalUsage;
	BOOL _delegateToProxyAnalytics;
	NSMutableDictionary* _flowWatchers;
	CellularStateRelay* _cellRelay;
	NetworkAnalyticsStateRelay* _wifiRelay;
	NetworkAnalyticsStateRelay* _mostRecentPrimaryRelay;
	ProxyAnalytics* _proxyAnalytics;

}

@property (retain) CellularStateRelay * cellRelay;                                   //@synthesize cellRelay=_cellRelay - In the implementation block
@property (retain) NetworkAnalyticsStateRelay * wifiRelay;                           //@synthesize wifiRelay=_wifiRelay - In the implementation block
@property (retain) NetworkAnalyticsStateRelay * mostRecentPrimaryRelay;              //@synthesize mostRecentPrimaryRelay=_mostRecentPrimaryRelay - In the implementation block
@property (assign,nonatomic) BOOL delegateToProxyAnalytics;                          //@synthesize delegateToProxyAnalytics=_delegateToProxyAnalytics - In the implementation block
@property (nonatomic,retain) ProxyAnalytics * proxyAnalytics;                        //@synthesize proxyAnalytics=_proxyAnalytics - In the implementation block
@property (assign) BOOL haveCalendar;                                                //@synthesize haveCalendar=_haveCalendar - In the implementation block
@property (assign) BOOL haveTypicalUsage;                                            //@synthesize haveTypicalUsage=_haveTypicalUsage - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * flowWatchers;                   //@synthesize flowWatchers=_flowWatchers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasAnyForegroundApp;
+(id)_appBundleIdentifierFromBundleRecord:(id)arg1 ;
+(void)performAppPeriodicActivityWithReply:(/*^block*/id)arg1 ;
+(id)appBundleIdentifierFromAuditToken:(SCD_Struct_Ev10)arg1 ;
+(void)recentUsageForApps:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)identifierForUUID:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)performAppExperiencePeriodicActivityWithReply:(/*^block*/id)arg1 ;
+(void)workspaceSaveWithCallback:(/*^block*/id)arg1 ;
+(id)appBundleIdentifierFromBundleIdentifier:(id)arg1 ;
+(void)refreshDataUsageFor:(id)arg1 withCallback:(/*^block*/id)arg2 ;
+(void)appsWithFlowsPassingTest:(/*^block*/id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(id)foregroundAppKeys;
+(id)queue;
+(void)endRNFPeriod;
+(void)checkForegroundStateForProcessWithUUID:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(unsigned long long)_liveUsageCountForProcess:(id)arg1 subscriberTag:(id)arg2 ;
-(void)setCellRelay:(CellularStateRelay *)arg1 ;
-(BOOL)_isLiveUsageinScope:(id)arg1 forTime:(id)arg2 ;
-(void)_checkCellExcessUsageActions:(unsigned long long)arg1 previous:(unsigned long long)arg2 snapshot:(id)arg3 ;
-(void)_saveAndUnloadSelectState;
-(void)performAppExperiencePeriodicTasksComplete:(id)arg1 error:(id)arg2 ;
-(double)_usageFingerprintForBundleName:(id)arg1 ;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_calendarUsageForApp:(id)arg1 givenLastRun:(id)arg2 ;
-(void)_handleApplicationNotificationStateChangedForBundleName:(id)arg1 edgeMode:(BOOL)arg2 intervalType:(int)arg3 ;
-(id)_flowFetchForName:(id)arg1 ;
-(id)_fetchFromProcCacheWithName:(id)arg1 ;
-(id)_appExperienceForApp:(id)arg1 forTime:(id)arg2 ;
-(void)_newFlowData:(id)arg1 ;
-(unsigned long long)_pruneAppExperienceRecords;
-(BOOL)_handlesFlowEntity:(id)arg1 ;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 ;
-(void)logOutcomeArray:(id)arg1 ;
-(void)_logExcessCellUsage:(long long)arg1 snapshot:(id)arg2 ;
-(void)setDelegateToProxyAnalytics:(BOOL)arg1 ;
-(void)setPollingRate:(double)arg1 ;
-(void)_reportThresholdedFlowCount:(unsigned long long)arg1 threshold:(unsigned long long)arg2 ;
-(void)_stopMonitoringNetworkInterface:(int)arg1 ;
-(BOOL)_initializeLocalCache;
-(void)_refreshFullDataUsage;
-(id)_fetchFromFlowCacheWithName:(id)arg1 ;
-(void)_performAppExperiencePeriodicTasksWithReply:(/*^block*/id)arg1 ;
-(void)_dumpState;
-(id)_liveUsageFetchForProcess:(id)arg1 ;
-(void)dealloc;
-(void)_updateTetheringUsage:(BOOL)arg1 ;
-(BOOL)_isLiveFlowPerfinScope:(id)arg1 forTime:(id)arg2 andTag:(id)arg3 ;
-(void)getNetworkBitmapsWithNames:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)handlesEntity:(id)arg1 ;
-(id)_processFetchForName:(id)arg1 bundle:(id)arg2 shouldFillMiss:(BOOL)arg3 ;
-(void)_removeAllInfoForProcess:(id)arg1 withUUID:(id)arg2 ;
-(void)_archiveRecord:(id)arg1 ;
-(int)_performQueryOnEntityFromInstantFlowCache:(id)arg1 target:(id)arg2 pred:(id)arg3 found:(id*)arg4 ;
-(void)_endRNFPeriod;
-(void)_didReceiveSnapshot:(id)arg1 ;
-(BOOL)haveCalendar;
-(id)_attemptConvertingPluginNameToContainingAppName:(id)arg1 ;
-(BOOL)_processNameIsValid:(id)arg1 ;
-(void)_handleApplicationNotificationCompactForBundleName:(id)arg1 edgeMode:(BOOL)arg2 ;
-(BOOL)_bundleBackgroundAudioCapable:(id)arg1 ;
-(void)_compactUsageForApp:(id)arg1 intervalType:(int)arg2 givenLastRun:(id)arg3 ;
-(void)_generateFlowAnomalySymptom:(unsigned)arg1 currentUsage:(unsigned long long)arg2 snapshot:(id)arg3 ;
-(void)_appsWithFlowsPassingTest:(/*^block*/id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)delegateToProxyAnalytics;
-(void)_removeFromProcCache:(id)arg1 ;
-(id)_parseEvent:(id)arg1 withGeneration:(id*)arg2 ;
-(void)setHaveTypicalUsage:(BOOL)arg1 ;
-(id)getOption:(id)arg1 ;
-(void)_startMonitoringNetworkInterface:(int)arg1 usingThreshold:(unsigned long long)arg2 ;
-(void)relayCellThroughputAdvice:(unsigned)arg1 at:(double)arg2 ;
-(unsigned long long)_clearUninstalledAppEntries;
-(void)_updateLiveUsage:(id)arg1 wifiIn:(long long)arg2 wifiOut:(long long)arg3 cellIn:(long long)arg4 cellOut:(long long)arg5 wiredIn:(long long)arg6 wiredOut:(long long)arg7 xIn:(long long)arg8 xOut:(long long)arg9 isJumboFlow:(BOOL)arg10 closing:(BOOL)arg11 ;
-(void)performQueryPostProcessing:(id)arg1 actions:(id)arg2 processOutcome:(id)arg3 ;
-(void)_recentUsageForApps:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setMostRecentPrimaryRelay:(NetworkAnalyticsStateRelay *)arg1 ;
-(id)_has1stPartyImpliedBundleNameBehavior:(id)arg1 ;
-(id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3 ;
-(void)setWifiRelay:(NetworkAnalyticsStateRelay *)arg1 ;
-(void)_pruneFlowHistory;
-(void)_changedForegroundState:(BOOL)arg1 forBundle:(id)arg2 ;
-(void)_removeOldFlowRecords;
-(BOOL)_isLiveUsageInRollingWindow:(id)arg1 forTime:(id)arg2 ;
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_handleSnapshot:(id)arg1 ;
-(void)_liveUsagePackForProcess:(id)arg1 subscriberTag:(id)arg2 ;
-(BOOL)_requiresUserValidationPredicateForEntity:(id)arg1 ;
-(void)_removeInfoFromWorkspaceForProcess:(id)arg1 ;
-(void)workspaceSaveWithCallback:(/*^block*/id)arg1 ;
-(BOOL)_hasAnyForegroundApp;
-(void)setProxyAnalytics:(ProxyAnalytics *)arg1 ;
-(id)setOption:(id)arg1 ;
-(void)identifierForUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)identifierForUUID:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setHaveCalendar:(BOOL)arg1 ;
-(void)usageManager:(id)arg1 didReceiveSnapshot:(id)arg2 ;
-(void)_newExpectedTransfer:(id)arg1 ;
-(void)_newCoreMediaAssetDownloadEvent:(id)arg1 ;
-(void)_generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)performAppPeriodicTasksComplete:(id)arg1 error:(id)arg2 ;
-(ProxyAnalytics *)proxyAnalytics;
-(NetworkAnalyticsStateRelay *)wifiRelay;
-(int)_performQueryOnEntityFromProcCache:(id)arg1 target:(id)arg2 pred:(id)arg3 found:(id*)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)sendPowerLogReport:(id)arg1 isStart:(BOOL)arg2 ;
-(id)_foregroundAppKeys;
-(void)performThresholdingOn:(id)arg1 forKey:(id)arg2 andValue:(id)arg3 connection:(id)arg4 createdBlock:(/*^block*/id*)arg5 hitBlock:(/*^block*/id)arg6 errorBlock:(/*^block*/id)arg7 ;
-(void)_applyCountsTo:(id)arg1 fromLiveUsage:(id)arg2 mustReset:(BOOL)arg3 ;
-(void)_refreshDataUsageFor:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)_refreshFullDataUsageWithCallback:(/*^block*/id)arg1 ;
-(void)_insertProcCache:(id)arg1 underName:(id)arg2 ;
-(void)_algosScoreFor:(id)arg1 score:(double)arg2 ;
-(void)postAWDMetric:(id)arg1 withIdentifier:(unsigned)arg2 ;
-(void)usageManager:(id)arg1 thresholdReachedOn:(unsigned)arg2 ;
-(id)_safePredFrom:(id)arg1 forEntity:(id)arg2 ;
-(void)_refreshFullDataUsageComplete;
-(void)setTimerCallbackWithDelay:(double)arg1 context:(id)arg2 ;
-(int)performQueryOnEntityFromCache:(id)arg1 pred:(id)arg2 altpred:(id*)arg3 actions:(id)arg4 found:(id*)arg5 ;
-(NetworkAnalyticsStateRelay *)mostRecentPrimaryRelay;
-(BOOL)haveTypicalUsage;
-(void)_performAppPeriodicTasksWithReply:(/*^block*/id)arg1 ;
-(BOOL)_handlesProcEntity:(id)arg1 ;
-(CellularStateRelay *)cellRelay;
-(void)_startFlowMonitoring;
-(void)_checkForegroundStateForProcessWithUUID:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)flowWatchers;
-(id)_trafficEnvelopeToTier:(double)arg1 ;
@end

