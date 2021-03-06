/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTSleepModeStateMachineState.h>

@class NSDate;

@interface MTSleepModeStateMachineOnState : MTSleepModeStateMachineState {

	NSDate* _sleepModeEndDate;

}

@property (nonatomic,readonly) NSDate * sleepModeEndDate;              //@synthesize sleepModeEndDate=_sleepModeEndDate - In the implementation block
-(id)initWithSleepModeEndDate:(id)arg1 stateMachine:(id)arg2 ;
-(NSDate *)sleepModeEndDate;
-(void)didEnterWithPreviousState:(id)arg1 ;
-(BOOL)isEqualToState:(id)arg1 ;
@end

