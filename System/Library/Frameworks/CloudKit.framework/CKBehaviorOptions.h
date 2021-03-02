/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, NSUserDefaults;

@interface CKBehaviorOptions : NSObject {

	BOOL _didReadAutomatedDeviceGroup;
	int _mcToken;
	int _ckToken;
	NSMutableDictionary* _cachedPrefs;
	NSObject*<OS_dispatch_queue> _cachedPrefsQueue;
	NSString* _automatedDeviceGroup;
	NSUserDefaults* _automatedDeviceGroupDefaults;

}

@property (nonatomic,retain) NSMutableDictionary * cachedPrefs;                          //@synthesize cachedPrefs=_cachedPrefs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedPrefsQueue;              //@synthesize cachedPrefsQueue=_cachedPrefsQueue - In the implementation block
@property (assign,nonatomic) int mcToken;                                                //@synthesize mcToken=_mcToken - In the implementation block
@property (assign,nonatomic) int ckToken;                                                //@synthesize ckToken=_ckToken - In the implementation block
@property (assign) BOOL didReadAutomatedDeviceGroup;                                     //@synthesize didReadAutomatedDeviceGroup=_didReadAutomatedDeviceGroup - In the implementation block
@property (nonatomic,retain) NSString * automatedDeviceGroup;                            //@synthesize automatedDeviceGroup=_automatedDeviceGroup - In the implementation block
@property (nonatomic,retain) NSUserDefaults * automatedDeviceGroupDefaults;              //@synthesize automatedDeviceGroupDefaults=_automatedDeviceGroupDefaults - In the implementation block
+(id)sharedOptions;
-(id)buildVersion;
-(id)productVersion;
-(void)_setPref:(id)arg1 forKey:(id)arg2 ;
-(void)setCachedRecordExpiryTime:(int)arg1 ;
-(id)productName;
-(void)setShouldProfileSQL:(BOOL)arg1 ;
-(id)transcoderServiceName;
-(void)setTranscoderServiceName:(id)arg1 ;
-(void)setRollRecordMasterKeysOnUnshare:(BOOL)arg1 ;
-(unsigned long long)maxBatchSize;
-(BOOL)rollRecordPCSMasterKeys;
-(BOOL)evictRecentAssets;
-(BOOL)compressRequests;
-(id)customCloudDBBaseURL;
-(int)defaultRetryAfter;
-(void)setRollRecordPCSMasterKeys:(BOOL)arg1 ;
-(double)publicIdentitiesExpirationTimeout;
-(id)containerIdentifierToForceFatalManateeZoneDecryptionFailure;
-(void)setCFNetworkLogging:(BOOL)arg1 ;
-(BOOL)_getBoolOptionForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)_urlForKey:(id)arg1 defaultURLString:(id)arg2 ;
-(void)setModTimeInAssetCacheEviction:(BOOL)arg1 ;
-(unsigned long long)recordCacheSizeLimit;
-(id)transcoderFunctionName;
-(int)PCSRetryCount;
-(void)setTranscoderPermittedRemoteMeasurement:(id)arg1 ;
-(id)vettedEmailsTestFormat;
-(void)setDeviceCountOverride:(id)arg1 ;
-(void)setCachedPrefs:(NSMutableDictionary *)arg1 ;
-(id)containerIdentifierPrefixesUsingDebugBinaries;
-(id)customDeviceServiceBaseURL;
-(void)setCustomShareServiceBaseURL:(id)arg1 ;
-(void)setCustomCodeServiceBaseURL:(id)arg1 ;
-(id)customCodeServiceBaseURL;
-(void)setCKCtlPrompt:(char*)arg1 ;
-(void)dealloc;
-(BOOL)highPriorityURLDelegates;
-(NSString *)automatedDeviceGroup;
-(void)setOperationTimeout:(double)arg1 ;
-(BOOL)sandboxCloudD;
-(double)packageGCGracePeriod;
-(BOOL)enableMMCSMetricsWithDefaultValue:(BOOL)arg1 ;
-(double)maxRecentProxyAge;
-(long long)sqlBatchCount;
-(int)longlivedOperationMaxRetryCount;
-(void)setUseEncryption:(BOOL)arg1 ;
-(unsigned long long)PCSCacheSize;
-(id)setupBaseURL;
-(int)cachedRecordExpiryTime;
-(id)_behaviorContainerOptionForKey:(id)arg1 ;
-(BOOL)didReadAutomatedDeviceGroup;
-(void)setCustomMetricsServiceBaseURL:(id)arg1 ;
-(NSMutableDictionary *)cachedPrefs;
-(void)setContainerIdentifierToForceFatalManateeZoneDecryptionFailure:(id)arg1 ;
-(double)maximumWaitAfterFetchRequest;
-(BOOL)disableCaching;
-(BOOL)rollRecordMasterKeysOnUnshare;
-(BOOL)useEnhancedPCSEncryptionContext;
-(void)setUsePreauth:(BOOL)arg1 ;
-(double)packageGCPeriod;
-(id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)customShareServiceBaseURL;
-(void)setMcToken:(int)arg1 ;
-(int)trafficLogQueueWidth;
-(unsigned long long)recentProxiesToSave;
-(void)setCachedPrefsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)longlivedOperationThrottlingRetryCount;
-(double)minTTRPromptInterval;
-(NSUserDefaults *)automatedDeviceGroupDefaults;
-(BOOL)logTraffic;
-(void)setIgnoreUploadRequestPushNotifications:(BOOL)arg1 ;
-(double)sqlBatchTime;
-(BOOL)usePreauth;
-(unsigned long long)savedErrorCount;
-(double)PCSCacheMinTime;
-(BOOL)ignoreUploadRequestPushNotifications;
-(long long)maxRecordPCSMasterKeyRolls;
-(BOOL)_buildIsOverridden;
-(void)setAutomatedDeviceGroupDefaults:(NSUserDefaults *)arg1 ;
-(void)setLogTraffic:(BOOL)arg1 ;
-(void)setProductVersion:(id)arg1 ;
-(BOOL)sendDebugHeader;
-(long long)flowControlBudget;
-(double)operationTimeout;
-(id)_init;
-(long long)flowControlBudgetOverride;
-(void)setRollZonePCSIdentities:(BOOL)arg1 ;
-(id)customMetricsServiceBaseURL;
-(BOOL)pipelineFetchAllChangesRequests;
-(void)setSetupBaseURL:(id)arg1 ;
-(void)setCkToken:(int)arg1 ;
-(unsigned long long)maxPackageUploadsPerBatchWithDefaultValue:(unsigned long long)arg1 ;
-(void)setOptimisticPCS:(BOOL)arg1 ;
-(double)maximumQueuedFetchWaitTime;
-(void)setSqlBatchTime:(double)arg1 ;
-(unsigned long long)assetEvictionGracePeriodWithDefaultValue:(unsigned long long)arg1 ;
-(void)setSqlBatchCount:(long long)arg1 ;
-(double)flowControlRegeneration;
-(void)setUseEnhancedPCSEncryptionContext:(BOOL)arg1 ;
-(double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2 ;
-(id)_behaviorOptionForKey:(id)arg1 ;
-(BOOL)allowExpiredDNSBehavior;
-(void)setBuildVersion:(id)arg1 ;
-(BOOL)forceUploadRequestActivitiesToRunImmediately;
-(BOOL)CFNetworkLogging;
-(BOOL)shouldProfileSQL;
-(void)setRollZoneSharingKeys:(BOOL)arg1 ;
-(BOOL)rollZoneSharingKeys;
-(NSObject*<OS_dispatch_queue>)cachedPrefsQueue;
-(int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)arg1 ;
-(BOOL)shouldDecryptRecordsBeforeSave;
-(id)deviceCountOverride;
-(void)setUseStingray:(BOOL)arg1 ;
-(id)configBaseURL;
-(int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2 ;
-(void)setSendDebugHeader:(BOOL)arg1 ;
-(BOOL)useModTimeInAssetCacheEviction;
-(void)setDisableCaching:(BOOL)arg1 ;
-(void)_startListeningForNotifications;
-(double)shareAcceptorRetrievingDialogMinPeriod;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)recordNamesForFakingDecryptionFailure;
-(id)_getDataOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)setCompressRequests:(BOOL)arg1 ;
-(const char*)CKCtlPrompt;
-(void)setDidReadAutomatedDeviceGroup:(BOOL)arg1 ;
-(void)setCustomCloudDBBaseURL:(id)arg1 ;
-(double)shareAcceptorRetrievingDialogDelay;
-(int)mcToken;
-(int)trafficLogMaximumDataSize;
-(void)setCustomDeviceServiceBaseURL:(id)arg1 ;
-(id)transcoderPermittedRemoteMeasurement;
-(void)setAutomatedDeviceGroup:(NSString *)arg1 ;
-(int)ckToken;
-(void)setTranscoderFunctionName:(id)arg1 ;
-(void)setForceUploadRequestActivitiesToRunImmediately:(BOOL)arg1 ;
-(BOOL)useStingray;
-(BOOL)rollZonePCSIdentities;
-(int)clientThrottleQueueWidth;
-(void)setProductName:(id)arg1 ;
-(double)flowControlRegenerationOverride;
-(id)testRunIDHeader;
-(double)maximumThrottleSeconds;
-(void)setTestRunIDHeader:(id)arg1 ;
-(BOOL)isAppleInternalInstall;
-(BOOL)optimisticPCS;
-(BOOL)useEncryption;
-(unsigned long long)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned long long)arg1 ;
-(unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned long long)arg1 ;
-(id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)setTrafficLogMaximumDataSize:(int)arg1 ;
-(void)setConfigBaseURL:(id)arg1 ;
@end
