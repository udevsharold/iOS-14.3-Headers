/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFMediaValueSource <NSObject>
@required
-(id)mediaProfileContainerForRouteID:(id)arg1;
-(id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3;
-(id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1;
-(BOOL)hasPendingWritesForRouteID:(id)arg1;
-(long long)lastPlaybackStateForProfileForRouteID:(id)arg1;
-(void)clearCachedPlaybackStateWriteErrorWithReason:(id)arg1 notifyDelegates:(BOOL)arg2;

@end
