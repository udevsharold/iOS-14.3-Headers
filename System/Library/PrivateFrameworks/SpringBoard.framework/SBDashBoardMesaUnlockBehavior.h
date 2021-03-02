/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBMesaUnlockTriggerDelegate.h>
#import <libobjc.A.dylib/SBBiometricUnlockBehavior.h>

@protocol SBBiometricUnlockBehaviorDelegate;
@class CSLockScreenMesaSettings, SBHomeHardwareButton, SBMesaUnlockTrigger, NSString;

@interface SBDashBoardMesaUnlockBehavior : NSObject <SBMesaUnlockTriggerDelegate, SBBiometricUnlockBehavior> {

	long long _failedMesaUnlockAttempts;
	CSLockScreenMesaSettings* _mesaSettings;
	SBHomeHardwareButton* _homeHardwareButton;
	id<SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;
	SBMesaUnlockTrigger* _trigger;

}

@property (setter=_setHomeHardwareButton:,getter=_getHomeHardwareButton,nonatomic,retain) SBHomeHardwareButton * homeHardwareButton;              //@synthesize homeHardwareButton=_homeHardwareButton - In the implementation block
@property (setter=_setTrigger:,getter=_trigger,nonatomic,retain) SBMesaUnlockTrigger * trigger;                                                   //@synthesize trigger=_trigger - In the implementation block
@property (getter=_mesaSettings,nonatomic,readonly) CSLockScreenMesaSettings * mesaSettings;                                                      //@synthesize mesaSettings=_mesaSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;                                        //@synthesize biometricUnlockBehaviorDelegate=_biometricUnlockBehaviorDelegate - In the implementation block
-(void)screenOff;
-(void)setAuthenticated:(BOOL)arg1 ;
-(id<SBBiometricUnlockBehaviorDelegate>)biometricUnlockBehaviorDelegate;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(void)setBiometricUnlockBehaviorDelegate:(id<SBBiometricUnlockBehaviorDelegate>)arg1 ;
-(id)_mesaSettings;
-(id)_feedbackForPasscodeEvent;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)mesaUnlockTriggerFired:(id)arg1 ;
-(id)_homeHardwareButton;
-(void)lockButtonDown;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)_failureSettingsForFailAttempt:(long long)arg1 ;
-(NSString *)description;
-(id)_feedbackForBioUnlockEventThatWasSpontaneous:(BOOL)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)_trigger;
-(void)_handleMesaFailure;
-(void)significantUserInteractionDidOccur;
-(void)_setTrigger:(id)arg1 ;
-(void)_setHomeHardwareButton:(id)arg1 ;
-(id)_getHomeHardwareButton;
-(void)menuButtonUp;
-(void)menuButtonDown;
-(id)initWithMesaSettings:(id)arg1 andUnlockTrigger:(id)arg2 ;
-(id)_feedbackForFailureSettings:(id)arg1 ;
@end
