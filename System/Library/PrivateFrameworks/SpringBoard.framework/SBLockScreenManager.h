/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBPasscodeEntryTransientOverlayViewControllerDelegate.h>
#import <libobjc.A.dylib/SBFPrivateAuthenticationObserver.h>
#import <libobjc.A.dylib/CSCoverSheetViewControllerDelegate.h>
#import <libobjc.A.dylib/CSWallpaperColorProvider.h>
#import <libobjc.A.dylib/SBLockScreenBiometricAuthenticationCoordinatorDelegate.h>
#import <libobjc.A.dylib/SBHomeButtonShowPasscodeRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHomeButtonSuppressAfterUnlockRecognizerDelegate.h>
#import <libobjc.A.dylib/SBWallpaperObserver.h>
#import <libobjc.A.dylib/SBCoverSheetPresentationDelegate.h>
#import <libobjc.A.dylib/SBUILockStateProvider.h>
#import <libobjc.A.dylib/SBTapToWakeDelegate.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>

@protocol SBLockScreenEnvironment, SBHomeButtonShowPasscodeRecognizer, SBHomeButtonSuppressAfterUnlockRecognizer, SBFLockOutStatusProvider, BSInvalidatable;
@class SBLockScreenBiometricAuthenticationCoordinator, SBCoverSheetBiometricResourceObserver, SBPearlInterlockObserver, SBLockScreenUnlockRequest, SBPasscodeEntryTransientOverlayViewController, SBFAuthenticationAssertion, SBLockScreenDisabledAssertionManager, SBLockScreenAutoUnlockAggregateRule, SBSRemoteAlertHandle, SBFUserAuthenticationController, SBLiftToWakeManager, SBTapToWakeController, SBFMouseButtonDownGestureRecognizer, NSMutableDictionary, NSMutableSet, SBIdleTimerCoordinatorHelper, UINotificationFeedbackGenerator, SBLockScreenOrientationManager, CSCoverSheetViewController, NSString;

@interface SBLockScreenManager : NSObject <BSDescriptionProviding, SBPasscodeEntryTransientOverlayViewControllerDelegate, SBFPrivateAuthenticationObserver, CSCoverSheetViewControllerDelegate, CSWallpaperColorProvider, SBLockScreenBiometricAuthenticationCoordinatorDelegate, SBHomeButtonShowPasscodeRecognizerDelegate, SBHomeButtonSuppressAfterUnlockRecognizerDelegate, SBWallpaperObserver, SBCoverSheetPresentationDelegate, SBUILockStateProvider, SBTapToWakeDelegate, SBSRemoteAlertHandleObserver, SBIdleTimerProviding, SBIdleTimerCoordinating> {

	SBLockScreenBiometricAuthenticationCoordinator* _biometricAuthenticationCoordinator;
	SBCoverSheetBiometricResourceObserver* _biometricResourceObserver;
	SBPearlInterlockObserver* _pearlInterlockObserver;
	id<SBLockScreenEnvironment> _lockScreenEnvironment;
	id<SBHomeButtonShowPasscodeRecognizer> _homeButtonShowPasscodeRecognizer;
	id<SBHomeButtonSuppressAfterUnlockRecognizer> _homeButtonSuppressAfterUnlockRecognizer;
	BOOL _allowDisablePasscodeLockAssertion;
	BOOL _allowUILockUnlock;
	BOOL _isScreenOn;
	BOOL _isUILocked;
	SBLockScreenUnlockRequest* _unlockRequest;
	BOOL _saveUnlockRequest;
	BOOL _uiHasBeenLockedOnce;
	BOOL _uiUnlocking;
	SBPasscodeEntryTransientOverlayViewController* _passcodeEntryTransientOverlayViewController;
	BOOL _passcodeEntryTransientOverlayViewControllerPresentedAnimated;
	SBFAuthenticationAssertion* _sustainAuthenticationWhileUIUnlockedAssertion;
	SBLockScreenDisabledAssertionManager* _lockScreenDisabledAssertionManager;
	BOOL _isInLostMode;
	SBLockScreenAutoUnlockAggregateRule* _autoUnlockRuleAggregator;
	BOOL _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
	SBSRemoteAlertHandle* _wakeToRemoteAlertHandle;
	/*^block*/id _alertLaunchFinish;
	id<SBFLockOutStatusProvider> _lockOutController;
	SBFUserAuthenticationController* _userAuthController;
	SBLiftToWakeManager* _liftToWakeManager;
	SBTapToWakeController* _tapToWakeController;
	SBFMouseButtonDownGestureRecognizer* _mouseButtonDownGesture;
	NSMutableDictionary* _mesaCoordinatorDisabledAssertions;
	NSMutableDictionary* _mesaWalletPreArmDisabledAssertions;
	NSMutableSet* _mesaWalletPreArmDisabledReasons;
	NSMutableDictionary* _mesaAutoUnlockingDisabledAssertions;
	NSMutableDictionary* _mesaUnlockingDisabledAssertions;
	SBIdleTimerCoordinatorHelper* _idleTimerCoordinatorHelper;
	UINotificationFeedbackGenerator* _authenticationFeedbackGenerator;
	id<BSInvalidatable> _bannerSuppressionAssertion;
	id<BSInvalidatable> _pipInterruptionAssertion;
	BOOL _isWaitingToLockUI;
	SBLockScreenOrientationManager* _lockScreenOrientationManager;
	/*^block*/id _unlockActionBlock;

}

@property (assign,getter=isUIUnlocking,nonatomic) BOOL UIUnlocking;                                                                                       //@synthesize uiUnlocking=_uiUnlocking - In the implementation block
@property (setter=_setLockOutController:,getter=_lockOutController,nonatomic,retain) id<SBFLockOutStatusProvider> lockOutController;                      //@synthesize lockOutController=_lockOutController - In the implementation block
@property (setter=_setUserAuthController:,getter=_userAuthController,nonatomic,retain) SBFUserAuthenticationController * userAuthController;              //@synthesize userAuthController=_userAuthController - In the implementation block
@property (setter=_setLiftToWakeManager:,getter=_liftToWakeManager,nonatomic,retain) SBLiftToWakeManager * liftToWakeManager;                             //@synthesize liftToWakeManager=_liftToWakeManager - In the implementation block
@property (setter=_setTapToWakeController:,getter=_tapToWakeController,nonatomic,retain) SBTapToWakeController * tapToWakeController;                     //@synthesize tapToWakeController=_tapToWakeController - In the implementation block
@property (nonatomic,copy) id unlockActionBlock;                                                                                                          //@synthesize unlockActionBlock=_unlockActionBlock - In the implementation block
@property (nonatomic,readonly) id<SBLockScreenEnvironment> lockScreenEnvironment;                                                                         //@synthesize lockScreenEnvironment=_lockScreenEnvironment - In the implementation block
@property (nonatomic,readonly) CSCoverSheetViewController * coverSheetViewController; 
@property (nonatomic,readonly) id<SBNotificationDestination> notificationDestination; 
@property (nonatomic,readonly) SBLockScreenOrientationManager * lockScreenOrientationManager;                                                             //@synthesize lockScreenOrientationManager=_lockScreenOrientationManager - In the implementation block
@property (readonly) BOOL isUILocked;                                                                                                                     //@synthesize isUILocked=_isUILocked - In the implementation block
@property (readonly) BOOL isWaitingToLockUI;                                                                                                              //@synthesize isWaitingToLockUI=_isWaitingToLockUI - In the implementation block
@property (readonly) BOOL shouldHandlePocketStateChanges; 
@property (readonly) BOOL shouldTapToWake; 
@property (readonly) BOOL shouldPlayLockSound; 
@property (readonly) BOOL isLockScreenActive; 
@property (readonly) BOOL isLockScreenVisible; 
@property (readonly) BOOL isSupressingLockButton; 
@property (readonly) BOOL bioAuthenticatedWhileMenuButtonDown; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstanceIfExists;
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNeeded:(BOOL)arg1 ;
-(BOOL)isLockScreenVisible;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)lockScreenViewControllerDidPresent;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(void)coverSheetPresentationManager:(id)arg1 unlockWithRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setUILocked:(BOOL)arg1 ;
-(void)_deviceBlockedChanged:(id)arg1 ;
-(void)lockScreenViewControllerRequestsUnlock;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(BOOL)isLockScreenActive;
-(void)loadViewsIfNeeded;
-(BOOL)_isUnlockDisabled;
-(void)_evaluatePreArmDisabledAssertions;
-(BOOL)_attemptUnlockWithPasscode:(id)arg1 mesa:(BOOL)arg2 finishUIUnlock:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(CSCoverSheetViewController *)coverSheetViewController;
-(id)init;
-(void)_sendUILockStateChangedNotification;
-(void)_authenticationStateChanged:(id)arg1 ;
-(void)_handleAuthenticationFeedback:(id)arg1 ;
-(void)coverSheetViewControllerIrisPlayingDidFinish:(id)arg1 ;
-(id)_liftToWakeManager;
-(BOOL)shouldHandlePocketStateChanges;
-(void)coverSheetWindowedAccessoryViewControllerDidDismiss:(id)arg1 ;
-(BOOL)handleTransitionRequest:(id)arg1 ;
-(void)_clearAuthenticationLockAssertion;
-(void)startUIUnlockFromSource:(int)arg1 withOptions:(id)arg2 ;
-(void)_lockFeaturesForRemoteLock:(BOOL)arg1 ;
-(id)_userAuthController;
-(void)coverSheetWindowedAccessoryViewControllerDidPresent:(id)arg1 ;
-(id)_lockOutController;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)_shouldLockAfterEndingTelephonyCall;
-(void)_prepareWallpaperForStaticMode;
-(void)coverSheetViewController:(id)arg1 unlockWithRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)activationChanged:(id)arg1 ;
-(BOOL)biometricAuthenticationCoordinator:(id)arg1 requestsUnlockWithIntent:(int)arg2 ;
-(void)enableLostModePlugin;
-(BOOL)_canAttemptRealUIUnlockIgnoringBacklightNonsenseWithReason:(out id*)arg1 ;
-(void)_createAuthenticationAssertion;
-(void)_prepareWallpaperForInteractiveMode;
-(void)_activateLockScreenAnimated:(BOOL)arg1 animationProvider:(/*^block*/id)arg2 automatically:(BOOL)arg3 inScreenOffMode:(BOOL)arg4 dismissNotificationCenter:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)attemptUnlockWithMesa;
-(BOOL)shouldLockUIAfterEndingCall;
-(void)_emulateInterstitialPasscodePresentation;
-(void)attemptUnlockWithPasscode:(id)arg1 ;
-(void)_noteStartupTransitionWillBegin;
-(void)coverSheetViewController:(id)arg1 setMesaUnlockingDisabled:(BOOL)arg2 forReason:(id)arg3 ;
-(id)newLegibilitySettingsProvider;
-(void)setPasscodeVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldEmulateInterstitialPresentation;
-(BOOL)passcodeEntryTransientOverlayViewController:(id)arg1 authenticatePasscode:(id)arg2 ;
-(id)averageColorForCurrentWallpaper;
-(id)succinctDescription;
-(void)homeButtonShowPasscodeRecognizerDidFailToRecognize:(id)arg1 ;
-(void)extendedKeybagLockStateChanged:(BOOL)arg1 ;
-(void)_setMesaUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setUnlockActionBlock:(id)arg1 ;
-(void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(id)arg1 ;
-(BOOL)_attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(BOOL)arg2 ;
-(BOOL)_shouldDisconnectCallWhenLockingForActiveAudioRoute;
-(id)biometricAuthenticationCoordinator;
-(void)_setupModeChanged;
-(void)_disconnectActiveCallIfNeededFromSource:(int)arg1 ;
-(void)coverSheetViewControllerShouldDismissContextMenu:(id)arg1 ;
-(void)_setHomeButtonSuppressAfterUnlockRecognizer:(id)arg1 ;
-(id)_newLockScreenEnvironment;
-(void)_setHomeButtonShowPasscodeRecognizer:(id)arg1 ;
-(BOOL)_attemptUnlockWithPasscode:(id)arg1 mesa:(BOOL)arg2 finishUIUnlock:(BOOL)arg3 ;
-(BOOL)_canHandleTransitionRequest:(id)arg1 ;
-(BOOL)_lockUI;
-(id)_tapToWakeController;
-(NSString *)description;
-(void)remoteLock:(BOOL)arg1 ;
-(BOOL)_unlockWithRequest:(id)arg1 cancelPendingRequests:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)contrastForCurrentWallpaper;
-(BOOL)handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(void)exitLostModeIfNecessaryFromRemoteRequest:(BOOL)arg1 ;
-(void)setBiometricAutoUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_runUnlockActionBlock:(BOOL)arg1 ;
-(void)noteMenuButtonSinglePress;
-(void)homeButtonShowPasscodeRecognizerRequestsPasscodeUIToBeShown:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)_handleBacklightLevelWillChange:(id)arg1 ;
-(BOOL)_setPasscodeVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)homeButtonSuppressAfterUnlockRecognizerRequestsEndOfSuppression:(id)arg1 ;
-(BOOL)_shouldBeInSetupMode;
-(BOOL)isUILocked;
-(void)_setUserAuthController:(id)arg1 ;
-(void)noteMenuButtonDoublePress;
-(void)coverSheetViewController:(id)arg1 requestsTouchIDDisabled:(BOOL)arg2 forReason:(id)arg3 ;
-(BOOL)_shouldLockAfterEndingFaceTimeCall;
-(void)tapToWakeControllerDidRecognizeWakeGesture:(id)arg1 ;
-(void)tapToWakeControllerDidRecognizePencilWakeGesture:(id)arg1 ;
-(void)_lockScreenDimmed:(id)arg1 ;
-(BOOL)isPasscodeEntryTransientOverlayVisible;
-(void)lockScreenViewControllerWillPresent;
-(void)lockUIFromSource:(int)arg1 withOptions:(id)arg2 ;
-(BOOL)biometricAuthenticationCoordinator:(id)arg1 requestsAuthenticationFeedback:(id)arg2 ;
-(void)addLockScreenDisableAssertion:(id)arg1 ;
-(void)_setWalletPreArmDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_activeCallStateChanged;
-(BOOL)unlockUIFromSource:(int)arg1 withOptions:(id)arg2 ;
-(BOOL)shouldTapToWake;
-(void)_setLockOutController:(id)arg1 ;
-(BOOL)_isPasscodeVisible;
-(BOOL)isUIUnlocking;
-(BOOL)bioAuthenticatedWhileMenuButtonDown;
-(void)_reallySetUILocked:(BOOL)arg1 ;
-(BOOL)_shouldUnlockUIOnKeyDownEvent;
-(BOOL)isInLostMode;
-(void)_relockUIForButtonlikeSource:(int)arg1 ;
-(void)passcodeEntryTransientOverlayViewControllerRequestsEmergencyCall:(id)arg1 ;
-(BOOL)shouldPlayLockSound;
-(BOOL)unlockWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeLockScreenDisableAssertion:(id)arg1 ;
-(BOOL)_specifiesTransientPresentationForMode:(long long)arg1 ;
-(BOOL)isLockScreenDisabledForAssertion;
-(void)updateSpringBoardStatusBarForLockScreenTeardown;
-(void)_resetOrRestoreStateChanged:(id)arg1 ;
-(id<SBLockScreenEnvironment>)lockScreenEnvironment;
-(void)_setTapToWakeController:(id)arg1 ;
-(BOOL)hasUIEverBeenLocked;
-(void)_setMesaAutoUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)isSupressingLockButton;
-(void)_setLiftToWakeManager:(id)arg1 ;
-(id)averageColorForCurrentWallpaperInScreenRect:(CGRect)arg1 ;
-(void)_wakeScreenForTapToWake;
-(BOOL)isWaitingToLockUI;
-(id)unlockActionBlock;
-(SBLockScreenOrientationManager *)lockScreenOrientationManager;
-(void)lockScreenViewControllerWillDismiss;
-(void)_maybeLaunchSetupForcingCheckIfNotBricked:(BOOL)arg1 ;
-(void)_noteStartupTransitionDidBegin;
-(void)lockUIFromSource:(int)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)passcodeEntryTransientOverlayViewControllerDidDisappear:(id)arg1 ;
-(BOOL)_finishUIUnlockFromSource:(int)arg1 withOptions:(id)arg2 ;
-(void)_postLockCompletedNotification:(BOOL)arg1 ;
-(void)_setIdleTimerCoordinator:(id)arg1 ;
-(void)_setMesaCoordinatorDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_evaluateWallpaperMode;
-(id<SBNotificationDestination>)notificationDestination;
-(void)_handleBacklightDidTurnOff:(id)arg1 ;
-(BOOL)handlesHomeButtonSinglePresses;
-(void)activateLostModeForRemoteLock:(BOOL)arg1 ;
-(void)lockScreenViewControllerDidDismiss;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)_wakeScreenForMouseButtonDown:(id)arg1 ;
-(void)setUIUnlocking:(BOOL)arg1 ;
@end
