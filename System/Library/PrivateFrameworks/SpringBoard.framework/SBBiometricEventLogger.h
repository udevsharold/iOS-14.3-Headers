/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIBiometricResourceObserver.h>

@protocol SBUIBiometricResource;
@class BiometricKit, NSString;

@interface SBBiometricEventLogger : NSObject <SBUIBiometricResourceObserver> {

	BiometricKit* _biometricKit;
	BOOL _isScreenOn;
	BOOL _passcodeSuccessAfterBioFailureTriggerArmed;
	id<SBUIBiometricResource> _biometricResource;
	BOOL _fingerOnWithScreenOn;
	unsigned long long _fingerOnTime;
	unsigned long long _keybagUnlockTime;

}

@property (assign,nonatomic) unsigned long long fingerOnTime;                  //@synthesize fingerOnTime=_fingerOnTime - In the implementation block
@property (assign,nonatomic) BOOL fingerOnWithScreenOn;                        //@synthesize fingerOnWithScreenOn=_fingerOnWithScreenOn - In the implementation block
@property (assign,nonatomic) unsigned long long keybagUnlockTime;              //@synthesize keybagUnlockTime=_keybagUnlockTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)logClass:(unsigned char)arg1 code:(unsigned)arg2 ;
+(void)logEvent:(unsigned)arg1 ;
-(void)_backlightLevelChanged:(id)arg1 ;
-(id)init;
-(void)_passcodeViewTransitionedToPasscode:(id)arg1 ;
-(void)_resetPasscodeStateMachine;
-(BOOL)fingerOnWithScreenOn;
-(void)_keybagBioUnlock:(id)arg1 ;
-(void)_clearEverything;
-(void)timestampEvent:(unsigned long long)arg1 ;
-(void)_passcodeAuthenticationSucceeded;
-(void)_fingerOn:(id)arg1 ;
-(unsigned long long)keybagUnlockTime;
-(void)_biometricAuthenticationSucceeded;
-(unsigned long long)fingerOnTime;
-(void)_tryAgain:(id)arg1 ;
-(void)setKeybagUnlockTime:(unsigned long long)arg1 ;
-(void)_coversheetSwipedForDismissal:(id)arg1 ;
-(unsigned long long)_machTimeInMilliseconds;
-(void)setFingerOnWithScreenOn:(BOOL)arg1 ;
-(void)_unlockAnimationWillStart:(id)arg1 ;
-(BOOL)_shouldSyslogTimestamps;
-(void)_passcodePromptCancelled:(id)arg1 ;
-(void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2 ;
-(void)_authRequestCompleted:(id)arg1 ;
-(void)_prearmMatch:(id)arg1 ;
-(void)_biometricAuthenticationFailed;
-(void)_systemDidWakeFromSleep:(id)arg1 ;
-(void)_screenTurnedOn:(id)arg1 ;
-(void)setFingerOnTime:(unsigned long long)arg1 ;
@end

