/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class RBSProcessExitContext, NSError, FBSProcessTerminationRequest, FBProcessWatchdogEventContext, FBProcessState, NSString;

@interface FBProcessExitContext : NSObject <BSDescriptionProviding> {

	unsigned long long _exitReason;
	RBSProcessExitContext* _underlyingContext;
	NSError* _launchError;
	FBSProcessTerminationRequest* _terminationRequest;
	FBProcessWatchdogEventContext* _watchdogContext;
	FBProcessState* _stateBeforeExiting;
	long long _terminationReason;

}

@property (nonatomic,retain) FBSProcessTerminationRequest * terminationRequest;              //@synthesize terminationRequest=_terminationRequest - In the implementation block
@property (nonatomic,retain) FBProcessWatchdogEventContext * watchdogContext;                //@synthesize watchdogContext=_watchdogContext - In the implementation block
@property (nonatomic,copy) FBProcessState * stateBeforeExiting;                              //@synthesize stateBeforeExiting=_stateBeforeExiting - In the implementation block
@property (assign,nonatomic) long long terminationReason;                                    //@synthesize terminationReason=_terminationReason - In the implementation block
@property (nonatomic,readonly) unsigned long long exitReason;                                //@synthesize exitReason=_exitReason - In the implementation block
@property (nonatomic,readonly) NSError * launchError;                                        //@synthesize launchError=_launchError - In the implementation block
@property (nonatomic,readonly) RBSProcessExitContext * underlyingContext;                    //@synthesize underlyingContext=_underlyingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionForExitReason:(unsigned long long)arg1 ;
-(NSError *)launchError;
-(BOOL)consideredJetsam;
-(FBProcessState *)stateBeforeExiting;
-(long long)exitStatus;
-(FBProcessWatchdogEventContext *)watchdogContext;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(int)terminationSignal;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(int)exitCode;
-(void)setStateBeforeExiting:(FBProcessState *)arg1 ;
-(BOOL)exitedNormally;
-(NSString *)description;
-(unsigned long long)exitReason;
-(id)createError;
-(id)succinctDescriptionBuilder;
-(id)initWithUnderlyingContext:(id)arg1 ;
-(id)initWithLaunchError:(id)arg1 underlyingContext:(id)arg2 ;
-(long long)terminationReason;
-(void)setWatchdogContext:(FBProcessWatchdogEventContext *)arg1 ;
-(void)setTerminationRequest:(FBSProcessTerminationRequest *)arg1 ;
-(void)setTerminationReason:(long long)arg1 ;
-(BOOL)fairPlayFailure;
-(NSString *)debugDescription;
-(FBSProcessTerminationRequest *)terminationRequest;
-(RBSProcessExitContext *)underlyingContext;
@end
