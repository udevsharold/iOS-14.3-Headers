/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class MPMediaQuery, MPMediaItemCollection, MPMediaItem;

@interface MPMusicPlayerMediaItemQueueDescriptor : MPMusicPlayerQueueDescriptor {

	MPMediaQuery* _query;
	MPMediaItemCollection* _itemCollection;
	MPMediaItem* _startItem;

}

@property (nonatomic,copy,readonly) MPMediaQuery * query; 
@property (nonatomic,readonly) MPMediaItemCollection * itemCollection; 
@property (nonatomic,retain) MPMediaItem * startItem;                               //@synthesize startItem=_startItem - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPMediaItemCollection *)itemCollection;
-(MPMediaQuery *)query;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(id)initWithItemCollection:(id)arg1 ;
-(void)setStartTime:(double)arg1 forItem:(id)arg2 ;
-(void)setEndTime:(double)arg1 forItem:(id)arg2 ;
-(void)setStartItem:(MPMediaItem *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(MPMediaItem *)startItem;
-(void)encodeWithCoder:(id)arg1 ;
@end

