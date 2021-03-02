/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBContainerProtocol <NSObject>
@required
-(void)registerNotificationBlock:(/*^block*/id)arg1;
-(id)copyPropertyForKey:(id)arg1;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2;
-(void)unregisterNotificationBlock;
-(BOOL)start;
-(void)stop;
-(void)scheduleWithDispatchQueue:(id)arg1;
-(void)unscheduleWithDispatchQueue:(id)arg1;

@end
