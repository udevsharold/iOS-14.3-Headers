/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sleep/HKSPPersistentStateMachine.h>
#import <libobjc.A.dylib/HDSPSleepLockScreenStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPSleepLockScreenStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPSleepLockScreenStateMachineEventHandler.h>

@class HDSPSleepLockScreenOffState, HDSPSleepLockScreenWindDownState, HDSPSleepLockScreenBedtimeState, HDSPSleepLockScreenGreetingState, NSString, NSDate, HKSPSleepScheduleModel;

@interface HDSPSleepLockScreenStateMachine : HKSPPersistentStateMachine <HDSPSleepLockScreenStateMachineDelegate, HDSPSleepLockScreenStateMachineInfoProvider, HDSPSleepLockScreenStateMachineEventHandler> {

	HDSPSleepLockScreenOffState* _offState;
	HDSPSleepLockScreenWindDownState* _windDownState;
	HDSPSleepLockScreenBedtimeState* _bedtimeState;
	HDSPSleepLockScreenGreetingState* _greetingState;

}

@property (nonatomic,__weak,readonly) id<HDSPSleepLockScreenStateMachineDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HDSPSleepLockScreenStateMachineInfoProvider> infoProvider; 
@property (nonatomic,readonly) HDSPSleepLockScreenOffState * offState;                                           //@synthesize offState=_offState - In the implementation block
@property (nonatomic,readonly) HDSPSleepLockScreenWindDownState * windDownState;                                 //@synthesize windDownState=_windDownState - In the implementation block
@property (nonatomic,readonly) HDSPSleepLockScreenBedtimeState * bedtimeState;                                   //@synthesize bedtimeState=_bedtimeState - In the implementation block
@property (nonatomic,readonly) HDSPSleepLockScreenGreetingState * greetingState;                                 //@synthesize greetingState=_greetingState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) long long sleepMode; 
-(void)presentAlertForGoodMorning;
-(void)dismissAlertForGoodMorning;
-(NSDate *)currentDate;
-(void)environmentDidBecomeReady;
-(long long)sleepMode;
-(void)sleepLockScreenStateDidChange:(long long)arg1 previousState:(long long)arg2 ;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(HDSPSleepLockScreenWindDownState *)windDownState;
-(void)sleepModeDidChange:(long long)arg1 reason:(unsigned long long)arg2 ;
-(HDSPSleepLockScreenGreetingState *)greetingState;
-(HDSPSleepLockScreenBedtimeState *)bedtimeState;
-(id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
-(HDSPSleepLockScreenOffState *)offState;
-(id)stateMachineLog;
@end
