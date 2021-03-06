/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKSProcessDelegate;
#import <AssertionServices/AssertionServices-Structs.h>
@class RBSProcessIdentity, RBSProcessHandle, BKSLaunchdJobSpecification, RBSAssertion, RBSProcessMonitor, BKSProcessExitContext, BKSProcessAssertion, BSProcessHandle;

@interface BKSProcess : NSObject {

	os_unfair_lock_s _lock;
	BOOL _bootstrapped;
	RBSProcessIdentity* _identity;
	RBSProcessHandle* _processHandle;
	BKSLaunchdJobSpecification* _jobSpec;
	RBSAssertion* _assertion;
	RBSProcessMonitor* _monitor;
	BKSProcessExitContext* _lastExitContext;
	BKSProcessAssertion* _mediaAssertion;
	BKSProcessAssertion* _audioAssertion;
	BKSProcessAssertion* _accessoryAssertion;
	RBSAssertion* _visibilityAssertion;
	BOOL _workspaceLocked;
	BOOL _connectedToExternalAccessories;
	BOOL _nowPlayingWithAudio;
	BOOL _recordingAudio;
	id<BKSProcessDelegate> _delegate;
	long long _visibility;
	long long _taskState;
	long long _terminationReason;
	BSProcessHandle* _handle;

}

@property (assign,nonatomic) BOOL workspaceLocked;                                   //@synthesize workspaceLocked=_workspaceLocked - In the implementation block
@property (assign,nonatomic) long long visibility;                                   //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) BOOL connectedToExternalAccessories;                    //@synthesize connectedToExternalAccessories=_connectedToExternalAccessories - In the implementation block
@property (assign,nonatomic) BOOL nowPlayingWithAudio;                               //@synthesize nowPlayingWithAudio=_nowPlayingWithAudio - In the implementation block
@property (assign,nonatomic) BOOL recordingAudio;                                    //@synthesize recordingAudio=_recordingAudio - In the implementation block
@property (assign,nonatomic) long long terminationReason;                            //@synthesize terminationReason=_terminationReason - In the implementation block
@property (assign,nonatomic,__weak) id<BKSProcessDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BSProcessHandle * handle;                             //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) long long taskState;                                  //@synthesize taskState=_taskState - In the implementation block
@property (nonatomic,readonly) double backgroundTimeRemaining; 
@property (nonatomic,readonly) BKSProcessExitContext * lastExitContext; 
+(id)busyExtensionInstances:(id)arg1 ;
+(id)currentProcess;
+(double)backgroundTimeRemaining;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(long long)visibility;
-(id)init;
-(BKSProcessExitContext *)lastExitContext;
-(void)setVisibility:(long long)arg1 ;
-(void)setNowPlayingWithAudio:(BOOL)arg1 ;
-(BSProcessHandle *)handle;
-(void)setRecordingAudio:(BOOL)arg1 ;
-(void)bootstrapCurrentProcess;
-(id)initWithProcessIdentity:(id)arg1 ;
-(BOOL)bootstrapWithProcessHandle:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_bootstrapWithError:(out id*)arg1 ;
-(void)_lock_configureMonitor;
-(void)_lock_updateVisibility;
-(id)initWithPID:(int)arg1 bundlePath:(id)arg2 visibility:(long long)arg3 workspaceLocked:(BOOL)arg4 queue:(id)arg5 ;
-(BOOL)bootstrapWithSpecification:(id)arg1 error:(out id*)arg2 ;
-(void)setWorkspaceLocked:(BOOL)arg1 ;
-(void)setConnectedToExternalAccessories:(BOOL)arg1 ;
-(BOOL)workspaceLocked;
-(BOOL)connectedToExternalAccessories;
-(BOOL)nowPlayingWithAudio;
-(BOOL)recordingAudio;
-(id)description;
-(long long)taskState;
-(long long)terminationReason;
-(void)setTerminationReason:(long long)arg1 ;
-(void)setDelegate:(id<BKSProcessDelegate>)arg1 ;
-(double)backgroundTimeRemaining;
-(void)invalidate;
-(id<BKSProcessDelegate>)delegate;
@end

