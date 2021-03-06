/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SleepDaemon/HDSPWakeUpResultsNotificationStateMachineState.h>

@interface HDSPWakeUpResultsNotificationQueryingState : HDSPWakeUpResultsNotificationStateMachineState {

	BOOL _shouldRetryImmediatelyOnFailure;

}
-(void)queryDidFailWithError:(id)arg1 ;
-(id)stateName;
-(void)protectedHealthDataDidBecomeAvailable;
-(id)initWithCoder:(id)arg1 ;
-(void)didExitWithNextState:(id)arg1 context:(id)arg2 ;
-(void)willEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(void)didEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(void)queryDidComplete;
-(void)_executeQuery;
-(void)_retryQueryIfNeededOrTransitionToNeedsProtectedDataState;
-(void)_transitionToRetryState;
-(void)_transitionToWaitingForWakeUpState;
-(void)_transitionToNotifiedState;
@end

