/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class MPMediaQuery, MPMediaItem;

@interface MPCAssistantQueryPlaybackQueue : MPCAssistantPlaybackQueue {

	MPMediaQuery* _query;
	MPMediaItem* _firstItem;
	long long _shuffleType;

}

@property (nonatomic,readonly) MPMediaQuery * query;               //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) MPMediaItem * firstItem;              //@synthesize firstItem=_firstItem - In the implementation block
@property (assign,nonatomic) long long shuffleType;                //@synthesize shuffleType=_shuffleType - In the implementation block
+(id)queryQueueWithContextID:(id)arg1 query:(id)arg2 ;
-(MPMediaItem *)firstItem;
-(MPMediaQuery *)query;
-(void)setFirstItem:(MPMediaItem *)arg1 ;
-(void)setShuffleType:(long long)arg1 ;
-(id)description;
-(long long)shuffleType;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 query:(id)arg2 ;
@end

