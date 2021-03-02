/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ICCloudAvailability;
@class ICCloudClient, NSObject, MSVDistributedNotificationObserver, ICConnectionConfiguration, ICUserIdentity;

@interface MPCloudController : NSObject {

	BOOL _active;
	BOOL _cloudEnabled;
	BOOL _jaliscoGeniusEnabled;
	BOOL _preferencesChangedNotifyTokenIsValid;
	BOOL _canShowCloudDownloadButtons;
	BOOL _canDefaultMediaLibraryShowCloudContent;
	BOOL _canShowCloudMusic;
	BOOL _canShowCloudVideo;
	BOOL _cloudEnabledValid;
	BOOL _cloudLockerAccount;
	BOOL _purchaseHistoryAccount;
	BOOL _updateInProgress;
	BOOL _initialImport;
	BOOL _cloudLibraryUpdateInProgress;
	BOOL _cloudLibraryInitialImport;
	BOOL _jaliscoUpdateInProgress;
	BOOL _jaliscoInitialImport;
	int _preferencesChangedNotifyToken;
	ICCloudClient* _cloudClient;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<ICCloudAvailability> _cloudAvailabilityController;
	long long _activeCount;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _cloudClientCallbackQueue;
	MSVDistributedNotificationObserver* _addToPlaylistBehaviorChangedObserver;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                                                   //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<ICCloudAvailability> cloudAvailabilityController;                                 //@synthesize cloudAvailabilityController=_cloudAvailabilityController - In the implementation block
@property (nonatomic,readonly) ICConnectionConfiguration * configuration; 
@property (assign,nonatomic) long long activeCount;                                                                        //@synthesize activeCount=_activeCount - In the implementation block
@property (assign,nonatomic) int preferencesChangedNotifyToken;                                                            //@synthesize preferencesChangedNotifyToken=_preferencesChangedNotifyToken - In the implementation block
@property (assign,nonatomic) BOOL preferencesChangedNotifyTokenIsValid;                                                    //@synthesize preferencesChangedNotifyTokenIsValid=_preferencesChangedNotifyTokenIsValid - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cloudClientCallbackQueue;                                      //@synthesize cloudClientCallbackQueue=_cloudClientCallbackQueue - In the implementation block
@property (nonatomic,readonly) MSVDistributedNotificationObserver * addToPlaylistBehaviorChangedObserver;                  //@synthesize addToPlaylistBehaviorChangedObserver=_addToPlaylistBehaviorChangedObserver - In the implementation block
@property (assign,nonatomic) BOOL canShowCloudDownloadButtons;                                                             //@synthesize canShowCloudDownloadButtons=_canShowCloudDownloadButtons - In the implementation block
@property (assign,nonatomic) BOOL canDefaultMediaLibraryShowCloudContent;                                                  //@synthesize canDefaultMediaLibraryShowCloudContent=_canDefaultMediaLibraryShowCloudContent - In the implementation block
@property (assign,nonatomic) BOOL canShowCloudMusic;                                                                       //@synthesize canShowCloudMusic=_canShowCloudMusic - In the implementation block
@property (assign,nonatomic) BOOL canShowCloudVideo;                                                                       //@synthesize canShowCloudVideo=_canShowCloudVideo - In the implementation block
@property (assign,getter=isCloudEnabledValid,nonatomic) BOOL cloudEnabledValid;                                            //@synthesize cloudEnabledValid=_cloudEnabledValid - In the implementation block
@property (assign,getter=isCloudEnabled,nonatomic) BOOL cloudEnabled;                                                      //@synthesize cloudEnabled=_cloudEnabled - In the implementation block
@property (assign,getter=hasCloudLockerAccount,nonatomic) BOOL cloudLockerAccount;                                         //@synthesize cloudLockerAccount=_cloudLockerAccount - In the implementation block
@property (assign,getter=hasPurchaseHistoryAccount,nonatomic) BOOL purchaseHistoryAccount;                                 //@synthesize purchaseHistoryAccount=_purchaseHistoryAccount - In the implementation block
@property (assign,getter=isUpdateInProgress,nonatomic) BOOL updateInProgress;                                              //@synthesize updateInProgress=_updateInProgress - In the implementation block
@property (assign,getter=isInitialImport,nonatomic) BOOL initialImport;                                                    //@synthesize initialImport=_initialImport - In the implementation block
@property (assign,getter=isCloudLibraryUpdateInProgress,nonatomic) BOOL cloudLibraryUpdateInProgress;                      //@synthesize cloudLibraryUpdateInProgress=_cloudLibraryUpdateInProgress - In the implementation block
@property (assign,getter=isCloudLibraryInitialImport,nonatomic) BOOL cloudLibraryInitialImport;                            //@synthesize cloudLibraryInitialImport=_cloudLibraryInitialImport - In the implementation block
@property (assign,getter=isJaliscoUpdateInProgress,nonatomic) BOOL jaliscoUpdateInProgress;                                //@synthesize jaliscoUpdateInProgress=_jaliscoUpdateInProgress - In the implementation block
@property (assign,getter=isJaliscoInitialImport,nonatomic) BOOL jaliscoInitialImport;                                      //@synthesize jaliscoInitialImport=_jaliscoInitialImport - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;                                                                //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) ICCloudClient * cloudClient;                                                                //@synthesize cloudClient=_cloudClient - In the implementation block
@property (nonatomic,readonly) ICUserIdentity * userIdentity; 
@property (getter=isEnablingCloudLibraryDestructive,nonatomic,readonly) BOOL enablingCloudLibraryDestructive; 
@property (nonatomic,readonly) BOOL isGeniusEnabled; 
@property (getter=isJaliscoGeniusEnabled,nonatomic,readonly) BOOL jaliscoGeniusEnabled;                                    //@synthesize jaliscoGeniusEnabled=_jaliscoGeniusEnabled - In the implementation block
@property (nonatomic,readonly) BOOL enablingJaliscoGeniusRequiresTerms; 
+(id)_controllerWithUserIdentity:(id)arg1 createIfRequired:(BOOL)arg2 ;
+(id)globalSerialQueue;
+(void)_postNotificationName:(id)arg1 controller:(id)arg2 userInfo:(id)arg3 ;
+(BOOL)isMediaApplication;
+(void)migrateCellularDataPreferencesIfNeeded;
+(void)_postNotificationName:(id)arg1 controller:(id)arg2 ;
+(id)sharedCloudController;
+(id)controllers;
+(id)controllerWithUserIdentity:(id)arg1 ;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(void)_resignActive;
-(BOOL)canShowCloudDownloadButtons;
-(ICUserIdentity *)userIdentity;
-(BOOL)canShowCloudVideo;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isCellularDataRestricted;
-(BOOL)hasCloudLockerAccount;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)hasPurchaseHistoryAccount;
-(BOOL)canShowCloudMusic;
-(BOOL)isCellularDataRestrictedForVideos;
-(void)activeUserDidChangeNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)_loadIsJaliscoGeniusSupportedWithCompletion:(/*^block*/id)arg1 ;
-(long long)cloudAddToPlaylistBehavior;
-(BOOL)isAutomaticDownloadsEnabled;
-(void)resignActive;
-(void)updateJaliscoMediaLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isJaliscoUpdateInProgress;
-(id)init;
-(void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCanShowCloudMusic:(BOOL)arg1 ;
-(BOOL)isCloudLibraryUpdateInProgress;
-(BOOL)_handlesSameAccountAs:(id)arg1 ;
-(void)setCloudEnabled:(BOOL)arg1 ;
-(void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setJaliscoInitialImport:(BOOL)arg1 ;
-(void)uploadCloudItemProperties;
-(void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 ;
-(void)setUpdateInProgress:(BOOL)arg1 ;
-(void)uploadCloudPlaylistProperties;
-(void)setJaliscoUpdateInProgress:(BOOL)arg1 ;
-(void)setPurchaseHistoryAccount:(BOOL)arg1 ;
-(void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isEnablingCloudLibraryDestructive;
-(NSObject*<ICCloudAvailability>)cloudAvailabilityController;
-(void)dealloc;
-(void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)enableICMLErrorReasonChange:(id)arg1 ;
-(void)loadCloudMusicLibraryUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)becomeActiveAndWaitUntilDone:(BOOL)arg1 ;
-(ICConnectionConfiguration *)configuration;
-(id)_initWithUserIdentity:(id)arg1 ;
-(void)addStoreItemWithAdamID:(long long)arg1 referralObject:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPreferencesChangedNotifyToken:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)cloudClientCallbackQueue;
-(void)setPreferencesChangedNotifyTokenIsValid:(BOOL)arg1 ;
-(void)setCanDefaultMediaLibraryShowCloudContent:(BOOL)arg1 ;
-(BOOL)isInitialImport;
-(void)setCloudEnabledValid:(BOOL)arg1 ;
-(void)updateSubscribedPlaylistWithSagaID:(unsigned long long)arg1 ignoreMinRefreshInterval:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCanShowCloudDownloadButtons:(BOOL)arg1 ;
-(void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistWithPersistentID:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performBlockOnControllerHandlingTheSameAccount:(/*^block*/id)arg1 ;
-(BOOL)isJaliscoInitialImport;
-(BOOL)isJaliscoGeniusEnabled;
-(void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3 ;
-(BOOL)preferencesChangedNotifyTokenIsValid;
-(void)hasProperNetworkConditionsToShowCloudMediaDidChangeNotification:(id)arg1 ;
-(void)disableAutomaticDownloadsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_referralForModelObject:(id)arg1 ;
-(void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)description;
-(void)setActiveCount:(long long)arg1 ;
-(void)setInitialImport:(BOOL)arg1 ;
-(long long)activeCount;
-(void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2 ;
-(void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkInfoForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disableCloudLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isCloudLibraryEnabled;
-(void)_becomeActiveAndWaitUntilDone:(BOOL)arg1 ;
-(void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sdk_createPlaylistWithPersistenID:(unsigned long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isUpdateInProgress;
-(void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(MSVDistributedNotificationObserver *)addToPlaylistBehaviorChangedObserver;
-(BOOL)isCloudEnabledValid;
-(void)setCloudLockerAccount:(BOOL)arg1 ;
-(void)disableCloudLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enableAutomaticDownloadsWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)preferencesChangedNotifyToken;
-(BOOL)isActive;
-(void)publishPlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)isCellularDataRestrictedDidChangeNotification:(id)arg1 ;
-(void)canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1 ;
-(void)authenticatedDidChangeNotification:(id)arg1 ;
-(void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCloudLibraryUpdateInProgress:(BOOL)arg1 ;
-(void)loadArtworkForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)loadUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2 ;
-(void)_loadIsSagaAuthenticatedWithCompletion:(/*^block*/id)arg1 ;
-(void)setCloudLibraryInitialImport:(BOOL)arg1 ;
-(void)loadJaliscoLibraryUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchRecommendedContentWithSeedTrackID:(long long)arg1 seedTrackIDType:(long long)arg2 count:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)becomeActive;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)canDefaultMediaLibraryShowCloudContent;
-(void)setCanShowCloudVideo:(BOOL)arg1 ;
-(ICCloudClient *)cloudClient;
-(void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 ;
-(BOOL)isCloudEnabled;
-(void)loadLastKnownEnableICMLErrorStatusWithCompletionHander:(/*^block*/id)arg1 ;
-(void)enableCloudLibraryWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deprioritizeArtworkRequestForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 ;
-(BOOL)isCloudLibraryInitialImport;
-(void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)uploadArtworkForPlaylist:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isGeniusEnabled;
-(void)addStoreItemWithAdamID:(long long)arg1 referralObject:(id)arg2 toPlaylistWithPersistentID:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)enablingJaliscoGeniusRequiresTerms;
-(BOOL)hasSetPreferenceForAutomaticDownloads;
-(void)_initializeUpdateInProgressState;
-(void)_copyObservationStateFrom:(id)arg1 ;
@end
