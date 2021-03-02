/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@protocol OS_dispatch_queue;
@class NSObject, MPMediaItem, NSDictionary;

@interface MPMediaLibraryPlaybackItemMetadata : MPMediaPlaybackItemMetadata {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasValidMediaItemValuesForProperties;
	BOOL _hasEvaluatedOfflineHLS;
	BOOL _isOfflineHLS;
	MPMediaItem* _mediaItem;
	NSDictionary* _mediaItemValuesForProperties;
	NSDictionary* _playbackKeys;
	NSObject*<OS_dispatch_queue> _writeQueue;

}

@property (getter=_writeQueue,nonatomic,retain) NSObject*<OS_dispatch_queue> writeQueue;              //@synthesize writeQueue=_writeQueue - In the implementation block
@property (nonatomic,retain) MPMediaItem * mediaItem; 
+(id)streamingPlaybackAssetDestinationFilePathForMediaLibraryPersistentID:(long long)arg1 storeAdamID:(long long)arg2 storeSagaID:(unsigned long long)arg3 assetQuality:(unsigned long long)arg4 assetFlavor:(id)arg5 protectionType:(unsigned long long)arg6 pathExtension:(id)arg7 ;
+(id)_highQualityCachedAssetDestinationDirectory;
+(id)_lowQualityCachedAssetDestinationDirectory;
-(id)buyParameters;
-(id)_writeQueue;
-(id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg1 returningAssetQuality:(unsigned long long*)arg2 protectionType:(unsigned long long*)arg3 usesPurchaseBundle:(BOOL*)arg4 ;
-(id)copyrightText;
-(id)protectedContentSupportStorageURL;
-(id)init;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(BOOL)isOfflineHLS;
-(id)_mediaItemValuesForProperties;
-(void)setWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithMediaItem:(id)arg1 ;
-(BOOL)prefersStoreContentInfo;
-(id)hlsPlaylistURLString;
-(id)hlsOfflinePlaybackKeys;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long*)arg1 protectionType:(unsigned long long*)arg2 usesPurchaseBundle:(BOOL*)arg3 ;
-(BOOL)isSubscriptionRequired;
-(id)iTunesStoreContentID;
-(id)iTunesStoreContentDSID;
-(id)localNetworkContentURL;
-(long long)mediaLibraryPersistentID;
-(void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(/*^block*/id)arg1 ;
-(float)volumeNormalization;
-(long long)endpointType;
-(void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(BOOL)shouldRememberBookmarkTime;
-(BOOL)shouldReportPlayEventsToStore;
-(id)storeUbiquitousIdentifier;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4 ;
-(void)_persistURI:(id)arg1 persistentContentKey:(id)arg2 ;
-(void)_invalidateMediaItemProperties;
-(id)_onqueue_mediaItemValuesForProperties;
-(long long)downloadIdentifier;
-(void)dealloc;
-(unsigned long long)contentType;
-(unsigned long long)hash;
-(double)bookmarkTime;
-(BOOL)isExplicitTrack;
-(long long)artistStoreAdamID;
-(id)modelGenericObject;
-(id)artistName;
-(id)albumTitle;
-(long long)storeAdamID;
-(BOOL)showComposer;
-(BOOL)isEqual:(id)arg1 ;
-(id)composerName;
-(unsigned long long)storeAccountID;
-(id)contentTitle;
-(long long)albumStoreAdamID;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(double)expectedDuration;
-(unsigned long long)storeSagaID;
-(long long)storeSubscriptionAdamID;
-(MPMediaItem *)mediaItem;
-(id)albumArtistName;
@end
