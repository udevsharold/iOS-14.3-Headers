/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CKVideoPlayerReusePool : NSObject {

	NSMutableArray* _pool;

}

@property (nonatomic,retain) NSMutableArray * pool;              //@synthesize pool=_pool - In the implementation block
+(id)sharedPool;
-(NSMutableArray *)pool;
-(id)init;
-(void)dealloc;
-(id)_dequeuePlayerAtIndex:(long long)arg1 ;
-(void)lowMemoryWarningReceived:(id)arg1 ;
-(void)removeUneededVideoPlayers;
-(id)existingVideoPlayerForTransferGUID:(id)arg1 ;
-(long long)indexOfAvailablePlayer;
-(long long)indexOfPlayerWithGUID:(id)arg1 ;
-(id)dequeueAvailableVideoPlayer;
-(void)returnPlayerToPool:(id)arg1 ;
-(void)setPool:(NSMutableArray *)arg1 ;
@end

