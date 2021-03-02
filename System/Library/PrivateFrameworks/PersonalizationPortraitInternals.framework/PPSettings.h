/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSUserDefaults, _PASLock, NSObject, PPKVOObserver;

@interface PPSettings : NSObject {

	NSUserDefaults* _portraitDefaults;
	NSUserDefaults* _canLearnFromAppDefaults;
	_PASLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _initializationComplete;
	PPKVOObserver* _canLearnFromAppKVOObserver;
	PPKVOObserver* _weightKVOObserver;
	PPKVOObserver* _abGroupKVObserver;
	PPKVOObserver* _queryPlanLoggingKVOObserver;

}

@property (assign,getter=isAppConnectionsLocationsEnabled,nonatomic) BOOL appConnectionsLocationsEnabled; 
+(void)initialize;
+(void)clearTestSettings;
+(id)cloudSyncDisabledFirstPartyBundleIds;
+(id)sharedInstance;
+(BOOL)isVoiceAssistantEnabled;
+(void)disableBundleIdentifier:(id)arg1 ;
+(BOOL)isCloudSyncEnabled;
-(id)_cloudKitDisabledBundleIds;
-(double)assetMetadataRefreshIntervalSeconds;
-(id)trialPathOverrides;
-(id)init;
-(void)refreshCloudKitDisabledBundleIdsAsync;
-(id)userDefaults;
-(id)entitiesBackfilledTimestamp;
-(void)clearAssetMetadataRefreshIntervalSeconds;
-(id)trialPathOverrideForNamespaceName:(id)arg1 factorName:(id)arg2 ;
-(void)_refreshCloudKitDisabledBundleIds;
-(BOOL)isAppConnectionsLocationsEnabled;
-(BOOL)trialUseDefaultFiles;
-(void)_triggerDelayedBundleIdPurge;
-(void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)arg1 ;
-(BOOL)queryPlanLoggingEnabled;
-(void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)arg1 ;
-(void)rewriteSyncStateForDisabledBundleIdsAsync;
-(int)registerQueryPlanLoggingChangeHandler:(/*^block*/id)arg1 ;
-(id)_donationDisabledBundleIds;
-(double)weightMultiplier;
-(void)setTrialPathOverrideForNamespaceName:(id)arg1 factorName:(id)arg2 path:(id)arg3 ;
-(void)_updateQueryPlanLogging;
-(id)entitiesMappingPreviousTrieSha256;
-(void)_handleCloudStorageDeletedByUser;
-(id)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 ;
-(void)_clearTestSettings;
-(BOOL)showLocationsFoundInApps;
-(void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 ;
-(void)setAppConnectionsLocationsEnabled:(BOOL)arg1 ;
-(void)_invokeChangeHandlersAsync;
-(void)setTrialUseDefaultFiles:(BOOL)arg1 ;
-(BOOL)bundleIdentifierIsEnabledForCloudKit:(id)arg1 ;
-(BOOL)bundleIdentifierIsEnabledForDonation:(id)arg1 ;
-(id)abGroupOverride;
-(void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 ;
-(void)setQueryPlanLoggingEnabled:(BOOL)arg1 ;
-(void)_triggerDelayedOperationWithCoalescingToken:(A*)arg1 operation:(int)arg2 :(/*^block*/id)arg3 ;
-(void)_updateAppConnectionsSettings;
-(BOOL)isAuthorizedToLogLocation;
-(int)registerDisabledBundleIdentifierChangeHandler:(/*^block*/id)arg1 ;
-(void)_purgeRecordsForDisabledBundleIdsAsync;
-(void)registerDisabledBundleIdPurgeHandler;
-(void)_refreshDisabledBundleIds;
-(void)setEntitiesBackfilledTimestamp:(id)arg1 ;
-(void)registerCloudKitDisabledBundleIdRewriteHandler;
-(void)setEntitiesMappingTrieSha256:(id)arg1 ;
-(void)_disableBundleIdentifier:(id)arg1 ;
-(void)triggerDelayedCloudSyncRewrite;
@end
