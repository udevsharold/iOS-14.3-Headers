/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPCAssistantSetVolume : NSObject
-(void)executeWithUIDs:(id)arg1 action:(unsigned long long)arg2 volumeValue:(float)arg3 completion:(/*^block*/id)arg4 ;
-(void)setVolume:(float)arg1 withUIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)increaseVolumeBy:(float)arg1 withUIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)decreaseVolumeBy:(float)arg1 withUIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
