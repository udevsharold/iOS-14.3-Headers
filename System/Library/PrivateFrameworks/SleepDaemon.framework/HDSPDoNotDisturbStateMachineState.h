/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sleep/HKSPPersistentStateMachineState.h>
#import <libobjc.A.dylib/HDSPDoNotDisturbStateMachineEventHandler.h>

@class HDSPDoNotDisturbStateMachine, NSString;

@interface HDSPDoNotDisturbStateMachineState : HKSPPersistentStateMachineState <HDSPDoNotDisturbStateMachineEventHandler>

@property (nonatomic,__weak,readonly) HDSPDoNotDisturbStateMachine * stateMachine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState;
-(void)userTurnedOffDoNotDisturb;
-(id)determineNextState;
@end

