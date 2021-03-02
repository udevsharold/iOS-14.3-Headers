/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaLibraryDataProviderML3.h>

@protocol MPArtworkDataSource, OS_dispatch_queue;
@class NSObject;

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {

	id<MPArtworkDataSource> _completeMyCollectionArtworkDataSource;
	long long _currentRevision;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)_localizedGeniusErrorForError:(id)arg1 geniusEnabled:(BOOL)arg2 ;
+(id)_localizedCloudGeniusErrorForError:(id)arg1 ;
-(BOOL)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class*)arg3 ;
-(void)releaseGeniusClusterPlaylist:(void*)arg1 ;
-(void)updateEntitesToCurrentRevision;
-(id)errorResolverForItem:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 ;
-(void)geniusItemsForSeedItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)completeMyCollectionArtworkDataSource;
-(void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_initInstanceVariableOnce;
-(void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(long long)_currentRevision;
-(void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 error:(id*)arg3 ;
-(long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)isGeniusEnabled;
@end
