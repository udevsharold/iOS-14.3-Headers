/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeldsparIDProviderObserving.h>
#import <libobjc.A.dylib/FCNewsAppConfigurationManager.h>
#import <libobjc.A.dylib/FCCoreConfigurationManager.h>
#import <libobjc.A.dylib/FCMagazinesConfigurationManager.h>

@protocol FCFeldsparIDProvider, OS_dispatch_queue;
@class NSArray, NSString, NSData, RCConfigurationManager, FCContextConfiguration, NSObject, FCAsyncSerialQueue, FCKeyValueStore, FCNewsAppConfig, NSDictionary, NSHashTable;

@interface FCConfigurationManager : NSObject <FCFeldsparIDProviderObserving, FCNewsAppConfigurationManager, FCCoreConfigurationManager, FCMagazinesConfigurationManager> {

	BOOL _shouldIgnoreCache;
	BOOL _attemptedAppConfigFetch;
	BOOL _runningUnitTests;
	RCConfigurationManager* _remoteConfigurationManager;
	FCContextConfiguration* _contextConfiguration;
	id<FCFeldsparIDProvider> _feldsparIDProvider;
	NSString* _appShortVersionString;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _appConfigFetchQueue;
	FCAsyncSerialQueue* _remoteConfigManagerSerialQueue;
	FCKeyValueStore* _localStore;
	FCNewsAppConfig* _currentAppConfiguration;
	NSArray* _treatmentIDs;
	NSArray* _segmentSetIDs;
	NSDictionary* _cachedWidgetConfigurationDict;
	NSData* _currentMagazinesConfiguration;
	NSHashTable* _appConfigObservers;
	NSHashTable* _coreConfigObservers;

}

@property (nonatomic,readonly) RCConfigurationManager * remoteConfigurationManager;                                                   //@synthesize remoteConfigurationManager=_remoteConfigurationManager - In the implementation block
@property (nonatomic,readonly) FCContextConfiguration * contextConfiguration;                                                         //@synthesize contextConfiguration=_contextConfiguration - In the implementation block
@property (nonatomic,readonly) id<FCFeldsparIDProvider> feldsparIDProvider;                                                           //@synthesize feldsparIDProvider=_feldsparIDProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * appShortVersionString;                                                                 //@synthesize appShortVersionString=_appShortVersionString - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                                                              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> appConfigFetchQueue;                                                      //@synthesize appConfigFetchQueue=_appConfigFetchQueue - In the implementation block
@property (nonatomic,readonly) FCAsyncSerialQueue * remoteConfigManagerSerialQueue;                                                   //@synthesize remoteConfigManagerSerialQueue=_remoteConfigManagerSerialQueue - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * localStore;                                                                            //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,copy) FCNewsAppConfig * currentAppConfiguration;                                                                 //@synthesize currentAppConfiguration=_currentAppConfiguration - In the implementation block
@property (nonatomic,copy) NSArray * treatmentIDs;                                                                                    //@synthesize treatmentIDs=_treatmentIDs - In the implementation block
@property (nonatomic,copy) NSArray * segmentSetIDs;                                                                                   //@synthesize segmentSetIDs=_segmentSetIDs - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreCache;                                                                                  //@synthesize shouldIgnoreCache=_shouldIgnoreCache - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedWidgetConfigurationDict;                                                            //@synthesize cachedWidgetConfigurationDict=_cachedWidgetConfigurationDict - In the implementation block
@property (nonatomic,copy) NSData * currentMagazinesConfiguration;                                                                    //@synthesize currentMagazinesConfiguration=_currentMagazinesConfiguration - In the implementation block
@property (nonatomic,retain) NSHashTable * appConfigObservers;                                                                        //@synthesize appConfigObservers=_appConfigObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * coreConfigObservers;                                                                       //@synthesize coreConfigObservers=_coreConfigObservers - In the implementation block
@property (assign,nonatomic) BOOL attemptedAppConfigFetch;                                                                            //@synthesize attemptedAppConfigFetch=_attemptedAppConfigFetch - In the implementation block
@property (assign,getter=isRunningUnitTests,nonatomic) BOOL runningUnitTests;                                                         //@synthesize runningUnitTests=_runningUnitTests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FCNewsAppConfiguration> appConfiguration; 
@property (nonatomic,readonly) id<FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration; 
@property (nonatomic,copy,readonly) NSString * feldsparID; 
@property (nonatomic,readonly) id<FCNewsAppConfiguration> fetchedAppConfiguration; 
@property (nonatomic,readonly) id<FCNewsAppConfiguration><FCJSONEncodableObjectProviding> jsonEncodableAppConfiguration; 
@property (nonatomic,readonly) id<FCCoreConfiguration> configuration; 
@property (nonatomic,readonly) NSData * magazinesConfigurationData; 
+(id)overrideAppConfigID;
+(id)internalOverrideSegmentSetIDs;
+(id)internalOverrideAdditionalSegmentSetIDs;
-(FCKeyValueStore *)localStore;
-(id)initForTesting;
-(id<FCNewsAppConfiguration><FCJSONEncodableObjectProviding>)jsonEncodableAppConfiguration;
-(NSData *)currentMagazinesConfiguration;
-(id)initWithContextConfiguration:(id)arg1 contentHostDirectoryFileURL:(id)arg2 feldsparIDProvider:(id)arg3 appShortVersionString:(id)arg4 ;
-(void)setCurrentMagazinesConfiguration:(NSData *)arg1 ;
-(id)_permanentURLForRequestKey:(id)arg1 storefrontID:(id)arg2 ;
-(id<FCNewsAppConfiguration>)possiblyUnfetchedAppConfiguration;
-(id)initWithContextConfiguration:(id)arg1 contentHostDirectoryFileURL:(id)arg2 feldsparIDProvider:(id)arg3 ;
-(id)init;
-(BOOL)isRunningUnitTests;
-(id)_storefrontID;
-(FCAsyncSerialQueue *)remoteConfigManagerSerialQueue;
-(NSHashTable *)appConfigObservers;
-(id)_requestInfoForRequestKey:(id)arg1 storefrontID:(id)arg2 additionalChangeTags:(id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(void)setTreatmentIDs:(NSArray *)arg1 ;
-(id<FCNewsAppConfiguration>)appConfiguration;
-(void)removeAppConfigObserver:(id)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(id)_recordIDForRequestKey:(id)arg1 storefrontID:(id)arg2 ;
-(BOOL)_checkIfShouldIgnoreCache;
-(void)setSegmentSetIDs:(NSArray *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)appConfigFetchQueue;
-(NSString *)feldsparID;
-(void)_configurationDidChangeSignificantConfigChange:(BOOL)arg1 paywallConfigDidChange:(BOOL)arg2 ;
-(NSArray *)segmentSetIDs;
-(void)_fetchRemoteAppWidgetConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCurrentAppConfiguration:(FCNewsAppConfig *)arg1 ;
-(void)feldsparIDProviderDidChangeFeldsparID:(id)arg1 ;
-(void)_refreshAppConfigurationWithConfigurationSettings:(id)arg1 force:(BOOL)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_changeTagsInWidgetConfigurationDict:(id)arg1 ;
-(BOOL)_paywallConfigDidChangeOldConfig:(id)arg1 newConfig:(id)arg2 ;
-(void)_fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_mergeCachedDataWithWidgetConfigurationData:(id)arg1 ;
-(id<FCFeldsparIDProvider>)feldsparIDProvider;
-(NSDictionary *)cachedWidgetConfigurationDict;
-(id)_deviceInfo;
-(FCNewsAppConfig *)currentAppConfiguration;
-(void)fetchAppConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)setAttemptedAppConfigFetch:(BOOL)arg1 ;
-(NSArray *)treatmentIDs;
-(RCConfigurationManager *)remoteConfigurationManager;
-(id)_responseKeyForRequestKey:(id)arg1 ;
-(void)fetchConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)addAppConfigObserver:(id)arg1 ;
-(void)setCoreConfigObservers:(NSHashTable *)arg1 ;
-(unsigned long long)_remoteConfigurationEnvironmentForContextIdentifier:(long long)arg1 ;
-(void)setCachedWidgetConfigurationDict:(NSDictionary *)arg1 ;
-(BOOL)shouldIgnoreCache;
-(id)_mergeRecords:(id)arg1 withCachedRecords:(id)arg2 ;
-(void)_loadConfigurationFromStore:(id)arg1 ;
-(NSData *)magazinesConfigurationData;
-(void)setRunningUnitTests:(BOOL)arg1 ;
-(FCContextConfiguration *)contextConfiguration;
-(id<FCNewsAppConfiguration>)fetchedAppConfiguration;
-(void)fetchAppWidgetConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchRemoteMagazinesConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(/*^block*/id)arg2 ;
-(NSHashTable *)coreConfigObservers;
-(void)fetchMagazinesConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAppConfigObservers:(NSHashTable *)arg1 ;
-(void)fetchConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)attemptedAppConfigFetch;
-(void)setShouldIgnoreCache:(BOOL)arg1 ;
-(void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)_configurationSourceForSourceName:(id)arg1 ;
-(id)_configurationSettingsWithRequestInfos:(id)arg1 feldsparID:(id)arg2 storefrontID:(id)arg3 contextConfiguration:(id)arg4 useBackgroundRefreshRate:(BOOL)arg5 ;
-(id)_changeTagsInRecords:(id)arg1 ;
-(NSString *)appShortVersionString;
-(NSObject*<OS_dispatch_queue>)accessQueue;
@end
