/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMSNotificationDispatcherDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NPSDomainAccessor, NSDictionary, NMSNotificationDispatcher, NSNumber, NSDate, MPMediaPlaylist, NSArray, NSData, NSSet;

@interface NMSyncDefaults : NSObject <NMSNotificationDispatcherDelegate> {

	BOOL _needsSync;
	NSString* _pairingID;
	NSObject*<OS_dispatch_queue> _domainAccessorQueue;
	NPSDomainAccessor* _domainAccessor;
	NSDictionary* _notifiersDict;
	NMSNotificationDispatcher* _settingsNotifier;
	NMSNotificationDispatcher* _musicPinningSelectionsNotifier;
	NMSNotificationDispatcher* _recoSelectionsNotifier;
	NMSNotificationDispatcher* _libraryRecoNotifier;
	NMSNotificationDispatcher* _storeRecoNotifier;
	NMSNotificationDispatcher* _podcastsPinningSelectionsNotifier;
	NMSNotificationDispatcher* _podcastsSubscriptionMetadataNotifier;
	NMSNotificationDispatcher* _podcastsSizeInfoNotifier;
	NMSNotificationDispatcher* _audiobooksPinningSelectionsNotifier;
	NMSNotificationDispatcher* _audiobooksRecommendationsNotifier;
	NMSNotificationDispatcher* _syncStateNotifier;
	NMSNotificationDispatcher* _syncInfoNotifier;
	NMSNotificationDispatcher* _syncInfoRequestDateNotifier;
	BOOL _allowOffChargerAssetSync;
	NSNumber* _assetSyncLimit;
	NSNumber* _lastFullySentAssetSyncPlaylistPersistentID;
	NSNumber* _lastFullySentAssetSyncPlaylistVersion;
	NSDate* _modificationDate;
	NSDictionary* _musicSyncInfo;
	NSDictionary* _podcastsSyncInfo;
	NSDictionary* _audiobooksSyncInfo;
	unsigned long long _assetSyncLimitType;
	unsigned long long _assetSyncType;
	NSNumber* _assetSyncPlaylistPersistentID;

}

@property (nonatomic,retain) MPMediaPlaylist * assetSyncPlaylist; 
@property (nonatomic,copy) NSNumber * assetSyncLimit;                                                                        //@synthesize assetSyncLimit=_assetSyncLimit - In the implementation block
@property (nonatomic,copy) NSArray * pinnedPlaylists; 
@property (nonatomic,retain) NSNumber * workoutPlaylistID; 
@property (nonatomic,copy) NSArray * pinnedAlbums; 
@property (nonatomic,copy) NSArray * libraryRecommendationPlaylists; 
@property (nonatomic,copy) NSArray * libraryRecommendationAlbums; 
@property (nonatomic,copy) NSDictionary * musicRecommendationDict; 
@property (nonatomic,copy) NSData * cachedRecommendationsData; 
@property (nonatomic,copy) NSDate * storeRecommendationExpirationDate; 
@property (nonatomic,copy) NSDate * libraryRecommendationExpirationDate; 
@property (nonatomic,copy) NSNumber * minimumNumberOfRecentMusicModelObjects; 
@property (nonatomic,copy) NSNumber * lastFullySentAssetSyncPlaylistPersistentID;                                            //@synthesize lastFullySentAssetSyncPlaylistPersistentID=_lastFullySentAssetSyncPlaylistPersistentID - In the implementation block
@property (nonatomic,copy) NSNumber * lastFullySentAssetSyncPlaylistVersion;                                                 //@synthesize lastFullySentAssetSyncPlaylistVersion=_lastFullySentAssetSyncPlaylistVersion - In the implementation block
@property (nonatomic,copy) NSDate * lastMusicAppActiveDate; 
@property (nonatomic,copy) NSDate * lastSiriFaceActiveDate; 
@property (nonatomic,copy) NSDictionary * gizmoPodcastDownloadOrders; 
@property (nonatomic,copy) NSDictionary * gizmoPodcastEpisodeLimits; 
@property (assign,nonatomic) BOOL pinnedPodcastsAreUserSet; 
@property (nonatomic,copy) NSArray * listenNowPodcastFeedURLs; 
@property (nonatomic,copy) NSArray * pinnedPodcastFeedURLs; 
@property (nonatomic,copy) NSArray * pinnedPodcastStationUUIDs; 
@property (assign,nonatomic) BOOL wantToReadEnabled; 
@property (nonatomic,copy) NSArray * wantToReadAudiobooks; 
@property (assign,nonatomic) BOOL readingNowEnabled; 
@property (nonatomic,copy) NSArray * readingNowAudiobooks; 
@property (nonatomic,copy) NSArray * pinnedAudiobooks; 
@property (nonatomic,copy) NSNumber * audiobookDownloadLimit; 
@property (nonatomic,readonly) NSDate * modificationDate;                                                                    //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) BOOL debugSyncInfoEnabled; 
@property (nonatomic,readonly) NSDictionary * syncStateDict; 
@property (nonatomic,copy) NSDictionary * clientPinningSettingsToken; 
@property (nonatomic,copy) NSDictionary * musicSyncInfo;                                                                     //@synthesize musicSyncInfo=_musicSyncInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * podcastsSyncInfo;                                                                  //@synthesize podcastsSyncInfo=_podcastsSyncInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * audiobooksSyncInfo;                                                                //@synthesize audiobooksSyncInfo=_audiobooksSyncInfo - In the implementation block
@property (assign,nonatomic) unsigned long long assetSyncLimitType;                                                          //@synthesize assetSyncLimitType=_assetSyncLimitType - In the implementation block
@property (assign,nonatomic) unsigned long long assetSyncType;                                                               //@synthesize assetSyncType=_assetSyncType - In the implementation block
@property (setter=setAssetSyncPlaylistPersistentID:,nonatomic,retain) NSNumber * assetSyncPlaylistPersistentID;              //@synthesize assetSyncPlaylistPersistentID=_assetSyncPlaylistPersistentID - In the implementation block
@property (nonatomic,copy) NSSet * pinnedPodcasts; 
@property (nonatomic,copy) NSArray * listenNowPodcastEpisodes; 
@property (nonatomic,copy) NSArray * pinnedPodcastIdentifiers; 
@property (assign,nonatomic) BOOL allowOffChargerAssetSync;                                                                  //@synthesize allowOffChargerAssetSync=_allowOffChargerAssetSync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDefaults;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setMinimumNumberOfRecentMusicModelObjects:(NSNumber *)arg1 ;
-(NSDate *)modificationDate;
-(void)setAssetSyncPlaylist:(MPMediaPlaylist *)arg1 ;
-(void)_reloadPropertiesFromDefaultsOnMainThread;
-(NSData *)cachedRecommendationsData;
-(void)_addPhoneCapability:(id)arg1 ;
-(void)_preSeed2_setMusicRecommendationDict:(id)arg1 ;
-(void)setLastUserLaunchDateForBundleID:(id)arg1 ;
-(NSSet *)pinnedPodcasts;
-(NSDictionary *)gizmoPodcastEpisodeLimits;
-(NSArray *)readingNowAudiobooks;
-(unsigned long long)assetSyncLimitType;
-(unsigned long long)assetSyncType;
-(NSArray *)listenNowPodcastEpisodes;
-(NSDictionary *)musicRecommendationDict;
-(void)setLastSiriFaceActiveDate:(NSDate *)arg1 ;
-(id)_companionSidePerDeviceDefaults;
-(long long)dormancyIntervalInHoursForBundleID:(id)arg1 ;
-(void)_migrateDataIfNecessary;
-(void)setMusicSyncInfo:(NSDictionary *)arg1 ;
-(id)init;
-(id)lastUserPinningChangeDateForBundleID:(id)arg1 ;
-(NSArray *)pinnedPodcastIdentifiers;
-(unsigned long long)_spaceQuotaForNumberOfSongs:(unsigned long long)arg1 ;
-(BOOL)_continueUsingMusicRecommendationKey;
-(void)setAssetSyncPlaylistPersistentID:(NSNumber *)arg1 ;
-(void)setStoreRecommendationExpirationDate:(NSDate *)arg1 ;
-(void)setLibraryRecommendationExpirationDate:(NSDate *)arg1 ;
-(NSArray *)libraryRecommendationAlbums;
-(void)dispatcherDidReceiveNotificationFromOtherProcess:(id)arg1 ;
-(void)_removeOldMusicRecommendationsInfoIfPossible;
-(NSArray *)pinnedPlaylists;
-(NSArray *)pinnedAlbums;
-(id)_objectForKey:(id)arg1 ;
-(void)setPinnedPodcastFeedURLs:(NSArray *)arg1 ;
-(void)setPinnedPodcastIdentifiers:(NSArray *)arg1 ;
-(BOOL)pinnedPodcastsAreUserSet;
-(BOOL)wantToReadEnabled;
-(NSNumber *)lastFullySentAssetSyncPlaylistPersistentID;
-(void)setCachedRecommendationsData:(NSData *)arg1 ;
-(void)setAudiobooksSyncInfo:(NSDictionary *)arg1 ;
-(NSArray *)pinnedPodcastStationUUIDs;
-(void)_perDeviceSettingsDidResetNotification:(id)arg1 ;
-(void)setWantToReadEnabled:(BOOL)arg1 ;
-(void)setLibraryRecommendationPlaylists:(NSArray *)arg1 ;
-(void)setPinnedPodcasts:(NSSet *)arg1 ;
-(id)podcastSizeEstimationData;
-(void)setPinnedAlbums:(NSArray *)arg1 ;
-(void)_writePropertiesToDefaults;
-(NSDictionary *)audiobooksSyncInfo;
-(BOOL)readingNowEnabled;
-(NSNumber *)assetSyncPlaylistPersistentID;
-(id)lastSyncInfoRequestDateForBundleIdentifier:(id)arg1 ;
-(void)clearAppActivityStatusDefaultsForBundleID:(id)arg1 ;
-(void)_setupNotifiers;
-(void)setLastFullySentAssetSyncPlaylistPersistentID:(NSNumber *)arg1 ;
-(NSDate *)lastMusicAppActiveDate;
-(void)dispatcherDidReceiveNotificationFromRemoteDevice:(id)arg1 ;
-(void)_setLegacyObject:(id)arg1 forKey:(id)arg2 ifRemoteDeviceMissingCapability:(id)arg3 ;
-(BOOL)debugSyncInfoEnabled;
-(void)setLibraryRecommendationAlbums:(NSArray *)arg1 ;
-(id)_dateValueForKey:(id)arg1 bundleID:(id)arg2 ;
-(void)setReadingNowEnabled:(BOOL)arg1 ;
-(NSString *)description;
-(void)setLastSyncInfoRequestDate:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setPinnedPodcastStationUUIDs:(NSArray *)arg1 ;
-(void)_addCapability:(id)arg1 forCapabilitiesKey:(id)arg2 ;
-(BOOL)allowOffChargerAssetSync;
-(void)beginBatchUpdates;
-(void)_setObject:(id)arg1 forKey:(id)arg2 shouldSynchronizeToPairedDevice:(BOOL)arg3 ;
-(void)setPinnedAudiobooks:(NSArray *)arg1 ;
-(void)setAssetSyncLimit:(NSNumber *)arg1 ;
-(NSArray *)pinnedPodcastFeedURLs;
-(void)_reloadPropertiesFromDefaults;
-(void)_addWatchCapability:(id)arg1 ;
-(NSNumber *)workoutPlaylistID;
-(void)_clearAssetSyncPlaylistDependentDefaults;
-(void)setAudiobookDownloadLimit:(NSNumber *)arg1 ;
-(void)setListenNowPodcastEpisodes:(NSArray *)arg1 ;
-(void)setReadingNowAudiobooks:(NSArray *)arg1 ;
-(NSArray *)libraryRecommendationPlaylists;
-(NSArray *)wantToReadAudiobooks;
-(void)_writeDate:(id)arg1 forKey:(id)arg2 withBundleID:(id)arg3 ;
-(void)setAllowOffChargerAssetSync:(BOOL)arg1 ;
-(void)setGizmoPodcastDownloadOrders:(NSDictionary *)arg1 ;
-(void)setMusicRecommendationDict:(NSDictionary *)arg1 ;
-(MPMediaPlaylist *)assetSyncPlaylist;
-(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(void)setClientPinningSettingsToken:(NSDictionary *)arg1 ;
-(void)setPodcastsSyncInfo:(NSDictionary *)arg1 ;
-(void)setWorkoutPlaylistID:(NSNumber *)arg1 ;
-(NSDictionary *)clientPinningSettingsToken;
-(void)setAssetSyncLimitType:(unsigned long long)arg1 ;
-(NSNumber *)minimumNumberOfRecentMusicModelObjects;
-(BOOL)_deviceHasCapability:(id)arg1 forCapabilitiesKey:(id)arg2 ;
-(NSDate *)libraryRecommendationExpirationDate;
-(id)_defaultWithPrefix:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setLastMusicAppActiveDate:(NSDate *)arg1 ;
-(void)_resetDomainAccessor;
-(void)setPodcastSizeEstimationData:(id)arg1 ;
-(NSNumber *)lastFullySentAssetSyncPlaylistVersion;
-(void)_removeObjectForKey:(id)arg1 ;
-(void)setPinnedPodcastsAreUserSet:(BOOL)arg1 ;
-(id)_associatedObject;
-(void)setLastFullySentAssetSyncPlaylistVersion:(NSNumber *)arg1 ;
-(id)_playlistPersistentIDForPlaylistName:(id)arg1 ;
-(void)setWantToReadAudiobooks:(NSArray *)arg1 ;
-(BOOL)_watchHasCapability:(id)arg1 ;
-(void)endBatchUpdates;
-(void)setInstallDateForBundleID:(id)arg1 ;
-(NSDictionary *)syncStateDict;
-(NSNumber *)assetSyncLimit;
-(void)setLastUserPinningChangeDateForBundleID:(id)arg1 ;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setGizmoPodcastEpisodeLimits:(NSDictionary *)arg1 ;
-(void)setPinnedPlaylists:(NSArray *)arg1 ;
-(id)installDateForBundleID:(id)arg1 ;
-(void)setAssetSyncType:(unsigned long long)arg1 ;
-(NSArray *)listenNowPodcastFeedURLs;
-(NSDate *)storeRecommendationExpirationDate;
-(BOOL)_phoneHasCapability:(id)arg1 ;
-(void)clearPodcastsDefaults;
-(void)setListenNowPodcastFeedURLs:(NSArray *)arg1 ;
-(NSDate *)lastSiriFaceActiveDate;
-(void)_notifyChangesForKey:(id)arg1 ;
-(id)lastUserLaunchDateForBundleID:(id)arg1 ;
-(void)_setNeedsSynchronize;
-(NSDictionary *)musicSyncInfo;
-(NSDictionary *)podcastsSyncInfo;
-(id)_defaultPlaylistPersistentID;
-(NSDictionary *)gizmoPodcastDownloadOrders;
-(NSNumber *)audiobookDownloadLimit;
-(NSArray *)pinnedAudiobooks;
@end

