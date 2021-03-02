/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSServiceFacility.h>

@protocol SBSystemServiceServerAppSwitcherDelegate, SBSystemServiceServerBiometricsDelegate, SBSystemServiceServerHardwareButtonDelegate, SBSystemServiceServerSoftwareUpdateDelegate, SBSystemServiceServerTestAutomationDelegate, SBSystemServiceServerStateDumpDelegate;
@interface SBSystemServiceServer : FBSServiceFacility {

	id<SBSystemServiceServerAppSwitcherDelegate> _appSwitcherDelegate;
	id<SBSystemServiceServerBiometricsDelegate> _biometricsDelegate;
	id<SBSystemServiceServerHardwareButtonDelegate> _hardwareButtonDelegate;
	id<SBSystemServiceServerSoftwareUpdateDelegate> _softwareUpdateDelegate;
	id<SBSystemServiceServerTestAutomationDelegate> _testAutomationDelegate;
	id<SBSystemServiceServerStateDumpDelegate> _stateDumpDelegate;

}

@property (assign,nonatomic,__weak) id<SBSystemServiceServerAppSwitcherDelegate> appSwitcherDelegate;                    //@synthesize appSwitcherDelegate=_appSwitcherDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSystemServiceServerBiometricsDelegate> biometricsDelegate;                      //@synthesize biometricsDelegate=_biometricsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSystemServiceServerHardwareButtonDelegate> hardwareButtonDelegate;              //@synthesize hardwareButtonDelegate=_hardwareButtonDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSystemServiceServerSoftwareUpdateDelegate> softwareUpdateDelegate;              //@synthesize softwareUpdateDelegate=_softwareUpdateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSystemServiceServerTestAutomationDelegate> testAutomationDelegate;              //@synthesize testAutomationDelegate=_testAutomationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSystemServiceServerStateDumpDelegate> stateDumpDelegate;                        //@synthesize stateDumpDelegate=_stateDumpDelegate - In the implementation block
+(id)sharedInstance;
-(void)setStateDumpDelegate:(id<SBSystemServiceServerStateDumpDelegate>)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(id<SBSystemServiceServerBiometricsDelegate>)biometricsDelegate;
-(void)_handleBiometricsFetchUnlockCredentialSetMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleStateDumpServiceClientMessageTypeStateDump:(id)arg1 fromClient:(id)arg2 ;
-(void)setTestAutomationDelegate:(id<SBSystemServiceServerTestAutomationDelegate>)arg1 ;
-(void)_handleSoftwareUpdateGetPasscodePolicy:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleTestAutomationGetScencesForBundleIdentifier:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleTestAutomationSetTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleTestAutomationBlockApplicationForScreenTime:(id)arg1 fromClient:(id)arg2 ;
-(void)dealloc;
-(void)_handleRequestAppSwitcherAppearanceForHiddenApp:(id)arg1 fromClient:(id)arg2 ;
-(void)setAppSwitcherDelegate:(id<SBSystemServiceServerAppSwitcherDelegate>)arg1 ;
-(void)_handleHardwareButtonSetHapticType:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleTestAutomationSuspendAllDisplays:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleTestAutomationSetHiddenFeatureState:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleTestAutomationSetIdleTimerState:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleTestAutomationResetToHomeScreen:(id)arg1 fromClient:(id)arg2 ;
-(id<SBSystemServiceServerHardwareButtonDelegate>)hardwareButtonDelegate;
-(void)_handleSoftwareUpdateSetPasscodePolicy:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleTestAutomationAddWidgetsToEachPage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleHardwareButtonGetToggleButtonState:(id)arg1 fromClient:(id)arg2 ;
-(id<SBSystemServiceServerTestAutomationDelegate>)testAutomationDelegate;
-(void)setSoftwareUpdateDelegate:(id<SBSystemServiceServerSoftwareUpdateDelegate>)arg1 ;
-(void)setHardwareButtonDelegate:(id<SBSystemServiceServerHardwareButtonDelegate>)arg1 ;
-(void)_handleTestAutomationSetMallocStackLoggingState:(id)arg1 fromClient:(id)arg2 ;
-(id)_init;
-(void)_handleHardwareButtonSetPressEventMask:(id)arg1 fromClient:(id)arg2 ;
-(id<SBSystemServiceServerSoftwareUpdateDelegate>)softwareUpdateDelegate;
-(void)_handleTestAutomationSetAlertState:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleHardwareButtonAcquireAssertionMessage:(id)arg1 fromClient:(id)arg2 ;
-(id<SBSystemServiceServerAppSwitcherDelegate>)appSwitcherDelegate;
-(id<SBSystemServiceServerStateDumpDelegate>)stateDumpDelegate;
-(void)_handleStashSwitcherModelToPath:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleTestAutomationRequestHUDHiddenAssertion:(id)arg1 fromClient:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)_handleHardwareButtonSetRequestsHIDEvents:(id)arg1 fromClient:(id)arg2 ;
-(void)setBiometricsDelegate:(id<SBSystemServiceServerBiometricsDelegate>)arg1 ;
-(void)_handleHardwareButtonGetHapticType:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleStateDumpServiceClientMessageTypeEnableRemoteStateDump:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleStateDumpServiceClientMessageTypeDisableRemoteStateDump:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleTestAutomationAddSpecificWidgetToPageWithSize:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleLoadStashedSwitcherModelFromPath:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleTestAutomationSetOrientationLockState:(id)arg1 fromClient:(id)arg2 ;
@end
