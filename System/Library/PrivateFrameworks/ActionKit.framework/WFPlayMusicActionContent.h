/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, MPMediaItemCollection, MPPlaybackArchive;

@interface WFPlayMusicActionContent : NSObject {

	NSArray* _storeIDs;
	MPMediaItemCollection* _mediaCollection;
	MPPlaybackArchive* _playbackArchive;

}

@property (nonatomic,copy) NSArray * storeIDs;                                     //@synthesize storeIDs=_storeIDs - In the implementation block
@property (nonatomic,retain) MPMediaItemCollection * mediaCollection;              //@synthesize mediaCollection=_mediaCollection - In the implementation block
@property (nonatomic,retain) MPPlaybackArchive * playbackArchive;                  //@synthesize playbackArchive=_playbackArchive - In the implementation block
-(MPMediaItemCollection *)mediaCollection;
-(void)setMediaCollection:(MPMediaItemCollection *)arg1 ;
-(NSArray *)storeIDs;
-(id)initWithStoreIDs:(id)arg1 ;
-(id)initWithPlaybackArchive:(id)arg1 ;
-(MPPlaybackArchive *)playbackArchive;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(void)setPlaybackArchive:(MPPlaybackArchive *)arg1 ;
-(id)initWithMediaCollection:(id)arg1 ;
@end

