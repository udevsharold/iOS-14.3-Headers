/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDAccessoryFirmwareUpdatePolicy.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMFTimer, HMDAccessoryFirmwareUpdateTimeWindow, NSString;

@interface HMDAccessoryFirmwareUpdateTimeWindowPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFLogging, HMFTimerDelegate, NSCopying> {

	HMFTimer* _reevaluateTimer;
	HMDAccessoryFirmwareUpdateTimeWindow* _updateTimeWindow;

}

@property (nonatomic,readonly) HMDAccessoryFirmwareUpdateTimeWindow * updateTimeWindow;              //@synthesize updateTimeWindow=_updateTimeWindow - In the implementation block
@property (nonatomic,retain) HMFTimer * reevaluateTimer;                                             //@synthesize reevaluateTimer=_reevaluateTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)configure;
-(void)timerDidFire:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)evaluate;
-(HMDAccessoryFirmwareUpdateTimeWindow *)updateTimeWindow;
-(void)_stopReevaluateTimer;
-(void)_startReevaluateTimer:(id)arg1 ;
-(HMFTimer *)reevaluateTimer;
-(void)setReevaluateTimer:(HMFTimer *)arg1 ;
-(id)initWithTimeWindow:(id)arg1 workQueue:(id)arg2 ;
@end

