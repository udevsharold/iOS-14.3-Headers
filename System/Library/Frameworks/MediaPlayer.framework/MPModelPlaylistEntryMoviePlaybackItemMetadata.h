/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelMoviePlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntryMoviePlaybackItemMetadata : MPModelMoviePlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelPlaylistEntry* _playlistEntry;

}

@property (nonatomic,retain) MPModelPlaylistEntry * playlistEntry;              //@synthesize playlistEntry=_playlistEntry - In the implementation block
+(id)requiredProperties;
-(id)movie;
-(unsigned long long)hash;
-(id)modelGenericObject;
-(BOOL)isEqual:(id)arg1 ;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(void)setMovie:(id)arg1 ;
-(void)setPlaylistEntry:(MPModelPlaylistEntry *)arg1 ;
-(MPModelPlaylistEntry *)playlistEntry;
@end

