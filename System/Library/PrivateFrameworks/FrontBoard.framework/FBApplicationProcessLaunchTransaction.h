/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>

@class FBProcessManager, RBSProcessIdentity, FBProcess, FBWaitForProcessDeathTransaction, FBProcessExecutionContext, BSAtomicSignal;

@interface FBApplicationProcessLaunchTransaction : FBTransaction {

	FBProcessManager* _processManager;
	RBSProcessIdentity* _identity;
	FBProcess* _process;
	/*^block*/id _executionContextProvider;
	FBWaitForProcessDeathTransaction* _deathTransaction;
	FBProcessExecutionContext* _executionContext;
	BSAtomicSignal* _interruptedOrComplete;
	BOOL _failedLaunch;
	BOOL _exited;

}

@property (nonatomic,readonly) FBProcess * process;              //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) BOOL failedLaunch;                //@synthesize failedLaunch=_failedLaunch - In the implementation block
@property (nonatomic,readonly) BOOL exited;                      //@synthesize exited=_exited - In the implementation block
-(void)_willInterruptWithReason:(id)arg1 ;
-(void)_willFailWithReason:(id)arg1 ;
-(id)initWithApplicationProcess:(id)arg1 ;
-(id)initWithProcessIdentity:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(BOOL)failedLaunch;
-(BOOL)_canBeInterrupted;
-(void)addObserver:(id)arg1 ;
-(id)_customizedDescriptionProperties;
-(void)_begin;
-(void)_queue_processWillLaunch:(id)arg1 ;
-(FBProcess *)process;
-(void)_didComplete;
-(void)_willComplete;
-(BOOL)exited;
-(void)_queue_launchProcess:(id)arg1 ;
-(void)_queue_finishProcessLaunch:(BOOL)arg1 ;
-(id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(void)_queue_noteExited;
@end

