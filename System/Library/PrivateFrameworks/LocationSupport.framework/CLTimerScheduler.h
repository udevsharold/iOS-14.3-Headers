/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLTimer;


@protocol CLTimerScheduler
@property (assign,nonatomic,__weak) CLTimer * timer; 
@required
-(void)setTimer:(id)arg1;
-(void)reflectNextFireDelay:(double)arg1 fireInterval:(double)arg2;
-(CLTimer *)timer;

@end
