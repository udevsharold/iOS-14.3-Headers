/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, MSVMultiCallback, NSMutableDictionary, MRPlayerPath, NSArray;

@interface MRNowPlayingPlayerClientCallbacks : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MSVMultiCallback* _createPlaybackQueueForRequestCallbacks;
	MSVMultiCallback* _createItemForOffsetCallbacks;
	MSVMultiCallback* _createItemForIdentifierCallbacks;
	MSVMultiCallback* _createChildItemCallbacks;
	MSVMultiCallback* _metadataCallbacks;
	MSVMultiCallback* _languageOptionsCallbacks;
	MSVMultiCallback* _infoCallbacks;
	MSVMultiCallback* _lyricsCallbacks;
	MSVMultiCallback* _artworkCallbacks;
	/*^block*/id _playbackSessionCallback;
	/*^block*/id _playbackSessionMigrateBeginCallback;
	/*^block*/id _playbackSessionMigrateEndCallback;
	/*^block*/id _playbackSessionMigrateRequestCallback;
	/*^block*/id _beginLyricsEventCallback;
	/*^block*/id _endLyricsEventCallback;
	/*^block*/id _videoThumbnailsCallback;
	/*^block*/id _audioAmplitudeSamplesCallback;
	NSMutableDictionary* _commandHandlerBlocks;
	MSVMultiCallback* _createItemToken;
	MSVMultiCallback* _createItemForIdentifierToken;
	MSVMultiCallback* _metadataToken;
	MSVMultiCallback* _languageToken;
	MSVMultiCallback* _artworkToken;
	MRPlayerPath* _playerPath;

}

@property (nonatomic,readonly) MRPlayerPath * playerPath;                                              //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueueCallbacks; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,readonly) MSVMultiCallback * createPlaybackQueueForRequestCallbacks;              //@synthesize createPlaybackQueueForRequestCallbacks=_createPlaybackQueueForRequestCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * createItemForOffsetCallbacks;                        //@synthesize createItemForOffsetCallbacks=_createItemForOffsetCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * createItemForIdentifierCallbacks;                    //@synthesize createItemForIdentifierCallbacks=_createItemForIdentifierCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * createChildItemCallbacks;                            //@synthesize createChildItemCallbacks=_createChildItemCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * metadataCallbacks;                                   //@synthesize metadataCallbacks=_metadataCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * languageOptionsCallbacks;                            //@synthesize languageOptionsCallbacks=_languageOptionsCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * infoCallbacks;                                       //@synthesize infoCallbacks=_infoCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * lyricsCallbacks;                                     //@synthesize lyricsCallbacks=_lyricsCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * artworkCallbacks;                                    //@synthesize artworkCallbacks=_artworkCallbacks - In the implementation block
@property (nonatomic,copy) id playbackSessionCallback; 
@property (nonatomic,copy) id playbackSessionMigrateBeginCallback; 
@property (nonatomic,copy) id playbackSessionMigrateEndCallback; 
@property (nonatomic,copy) id playbackSessionMigrateRequestCallback; 
@property (nonatomic,copy) id beginLyricsEventCallback; 
@property (nonatomic,copy) id endLyricsEventCallback; 
@property (nonatomic,copy) id videoThumbnailsCallback; 
@property (nonatomic,copy) id audioAmplitudeSamplesCallback; 
@property (nonatomic,copy,readonly) NSArray * commandHandlerBlocks; 
-(void)setPlaybackSessionMigrateRequestCallback:(id)arg1 ;
-(void)setPlaybackSessionMigrateBeginCallback:(id)arg1 ;
-(void)setPlaybackSessionCallback:(id)arg1 ;
-(id)playbackSessionCallback;
-(void)setPlaybackSessionMigrateEndCallback:(id)arg1 ;
-(id)endLyricsEventCallback;
-(void)setBeginLyricsEventCallback:(id)arg1 ;
-(MSVMultiCallback *)metadataCallbacks;
-(MSVMultiCallback *)lyricsCallbacks;
-(id)audioAmplitudeSamplesCallback;
-(unsigned long long)_onQueue_capabilities;
-(void)registerNowPlayingInfoAssetCallbacks:(id)arg1 ;
-(unsigned long long)capabilities;
-(void)setEndLyricsEventCallback:(id)arg1 ;
-(id)playbackSessionMigrateRequestCallback;
-(MRPlayerPath *)playerPath;
-(id)videoThumbnailsCallback;
-(void)registerNowPlayingInfoCallbacks:(id)arg1 ;
-(MSVMultiCallback *)languageOptionsCallbacks;
-(NSArray *)commandHandlerBlocks;
-(MSVMultiCallback *)artworkCallbacks;
-(BOOL)hasPlaybackQueueCallbacks;
-(void)registerNowPlayingInfoArtworkAssetCallback:(id)arg1 ;
-(id)initWithPlayerPath:(id)arg1 queue:(id)arg2 ;
-(void)registerNowPlayingInfoBackedPlaybackQueueDataSourceCallbacks;
-(id)playbackSessionMigrateEndCallback;
-(MSVMultiCallback *)createItemForIdentifierCallbacks;
-(void)setVideoThumbnailsCallback:(id)arg1 ;
-(BOOL)removePlaybackQueueDataSourceCallback:(id)arg1 ;
-(id)beginLyricsEventCallback;
-(id)playbackSessionMigrateBeginCallback;
-(void)setAudioAmplitudeSamplesCallback:(id)arg1 ;
-(void)removeCommandHandlerBlockForKey:(id)arg1 ;
-(MSVMultiCallback *)createPlaybackQueueForRequestCallbacks;
-(MSVMultiCallback *)createChildItemCallbacks;
-(void)addCommandHandlerBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(MSVMultiCallback *)createItemForOffsetCallbacks;
-(MSVMultiCallback *)infoCallbacks;
@end

