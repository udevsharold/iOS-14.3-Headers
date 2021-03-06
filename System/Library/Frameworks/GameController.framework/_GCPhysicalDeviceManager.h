/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _GCPhysicalDeviceManager <_GCDeviceManager>
@property (__weak) id<GCPhysicalDeviceRegistry> deviceRegistry; 
@optional
-(BOOL)acceptDriverConnection:(id)arg1 forHIDDevice:(id)arg2;
-(id)driverConnectionForHIDDevice:(id)arg1;

@required
-(id)matchHIDDevice:(id)arg1;
-(void)claimHIDDevice:(id)arg1;
-(void)relinquishHIDDevice:(id)arg1;
-(void)setDeviceRegistry:(id)arg1;
-(id<GCPhysicalDeviceRegistry>)deviceRegistry;

@end

