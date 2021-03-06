/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPMediaRemoteEntityArtworkGenerator.h>

@protocol OS_dispatch_queue, MPNowPlayingPlaybackQueueDataSource, MPNowPlayingInfoLyricsDelegate, MPNowPlayingPlaybackQueueDelegate;
@class NSDictionary, NSDate, NSObject, MPNowPlayingInfoCenterArtworkContext, NSMutableDictionary, NSMutableArray, MSVLRUDictionary, MPNowPlayingContentItem, MPArtworkResizeUtility, MSVTimer, MRPlayerPath, NSString;

@interface MPNowPlayingInfoCenter : NSObject <MPMediaRemoteEntityArtworkGenerator> {

	NSDictionary* _nowPlayingInfo;
	NSDictionary* _queuedNowPlayingInfo;
	NSDictionary* _convertedNowPlayingInfo;
	NSDate* _pushDate;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	MPNowPlayingInfoCenterArtworkContext* _publishedContext;
	NSMutableDictionary* _mutatedContentItems;
	NSMutableDictionary* _mutatedPlaybackQueueRequests;
	MSVSignedRange _loadedContentItemsRange;
	MSVSignedRange _requestedContentItemsRange;
	NSMutableArray* _contentItemIdentifiers;
	MSVLRUDictionary* _contentItems;
	MPNowPlayingContentItem* _nowPlayingContentItem;
	unsigned long long _playbackState;
	NSObject*<OS_dispatch_queue> _utilityQueue;
	MPArtworkResizeUtility* _artworkResizeUtility;
	MSVTimer* _contentItemInvalidationTimer;
	id<MPNowPlayingPlaybackQueueDataSource> _playbackQueueDataSource;
	id<MPNowPlayingInfoLyricsDelegate> _lyricsDelegate;
	SCD_Struct_MP66* _callbacks;
	void* _fallbackActivity;
	unsigned long long _stateHandle;
	MRPlayerPath* _playerPath;
	id<MPNowPlayingPlaybackQueueDelegate> _playbackQueueDelegate;
	NSString* _playerID;
	NSString* _representedApplicationBundleIdentifier;
	NSObject*<OS_dispatch_queue> _dataSourceQueue;

}

@property (nonatomic,readonly) MRPlayerPath * playerPath;                                                         //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) BOOL supportsArtworkCatalogLoading; 
@property (assign,nonatomic,__weak) id<MPNowPlayingPlaybackQueueDelegate> playbackQueueDelegate;                  //@synthesize playbackQueueDelegate=_playbackQueueDelegate - In the implementation block
@property (nonatomic,readonly) NSString * playerID;                                                               //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,copy) NSString * representedApplicationBundleIdentifier;                                     //@synthesize representedApplicationBundleIdentifier=_representedApplicationBundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<MPNowPlayingPlaybackQueueDataSource> playbackQueueDataSource; 
@property (nonatomic,retain) MPNowPlayingContentItem * nowPlayingContentItem; 
@property (assign,nonatomic,__weak) id<MPNowPlayingInfoLyricsDelegate> lyricsDelegate; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataSourceQueue;                                        //@synthesize dataSourceQueue=_dataSourceQueue - In the implementation block
@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@property (assign,nonatomic) unsigned long long playbackState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCenter;
+(id)infoCenterForPlayerID:(id)arg1 ;
+(id)serviceQueue;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(NSString *)playerID;
-(NSObject*<OS_dispatch_queue>)dataSourceQueue;
-(unsigned long long)playbackState;
-(id)init;
-(void)_becomeActiveIfPossibleWithCompletion:(/*^block*/id)arg1 ;
-(void)_getTransportablePlaybackSessionRepresentationWithIdentifier:(id)arg1 preferredSessionType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_onQueue_pushContentItemsUpdate;
-(id)_contentItemIDsInRange:(MSVSignedRange)arg1 itemsRange:(MSVSignedRange*)arg2 ;
-(void)_becomeActiveWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setRepresentedApplicationBundleIdentifier:(NSString *)arg1 ;
-(BOOL)supportsArtworkCatalogLoading;
-(id)_childContentItemForContentItem:(id)arg1 index:(long long)arg2 ;
-(NSString *)representedApplicationBundleIdentifier;
-(void)setPlaybackQueueDataSource:(id<MPNowPlayingPlaybackQueueDataSource>)arg1 ;
-(MRPlayerPath *)playerPath;
-(void)invalidatePlaybackQueue;
-(id)_artworkCatalogForContentItem:(id)arg1 ;
-(void)invalidatePlaybackQueueWithCompletion:(/*^block*/id)arg1 ;
-(void)_getMetadataForContentItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLyricsDelegate:(id<MPNowPlayingInfoLyricsDelegate>)arg1 ;
-(id<MPNowPlayingPlaybackQueueDataSource>)playbackQueueDataSource;
-(void)_onQueue_clearPlaybackQueueDataSourceCallbacks;
-(void)setDataSourceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithPlayerID:(id)arg1 ;
-(void)_invalidatePlaybackQueueImmediatelyWithCompletion:(/*^block*/id)arg1 ;
-(void)resignActiveSystemFallback;
-(void)_onQueue_pushNowPlayingInfoAndRetry:(BOOL)arg1 ;
-(id)_contentItemForIdentifier:(id)arg1 alreadyOnDataSourceQueue:(BOOL)arg2 ;
-(void)_onQueue_registerLyricsDelegateCallbacks:(id)arg1 ;
-(void*)_createPlaybackQueueForRequest:(void*)arg1 ;
-(void)setPlaybackState:(unsigned long long)arg1 ;
-(id<MPNowPlayingInfoLyricsDelegate>)lyricsDelegate;
-(void)_contentItemChangedNotification:(id)arg1 ;
-(/*^block*/id)artworkCatalogBlockForContentItem:(id)arg1 ;
-(id)_onDataSourceQueue_artworkCatalogForContentItem:(id)arg1 ;
-(void)setPlaybackQueueDelegate:(id<MPNowPlayingPlaybackQueueDelegate>)arg1 ;
-(MPNowPlayingContentItem *)nowPlayingContentItem;
-(void)becomeActive;
-(id<MPNowPlayingPlaybackQueueDelegate>)playbackQueueDelegate;
-(void)_onQueue_registerPlaybackQueueDataSourceCallbacks:(id)arg1 ;
-(void)_onDataSourceQueue_getContentItemIDsInRange:(MSVSignedRange)arg1 completion:(/*^block*/id)arg2 ;
-(void)becomeActiveSystemFallback;
-(void)setNowPlayingContentItem:(MPNowPlayingContentItem *)arg1 ;
-(id)_contentItemForIdentifier:(id)arg1 ;
-(void)_initializeNowPlayingInfo;
@end

