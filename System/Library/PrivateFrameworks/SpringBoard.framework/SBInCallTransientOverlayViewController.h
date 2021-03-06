/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateObserver.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBApplicationSceneBackgroundView, SBInCallTransientOverlayViewControllerDelegate;
@class UIView, SBIdleTimerCoordinatorHelper, SBSUIInCallSceneClientSettingsDiffInspector, _SBInCallProxySceneBackgroundView, SBDeviceApplicationSceneViewController, SBInCallSettings, SBDeviceApplicationSceneHandle, NSString;

@interface SBInCallTransientOverlayViewController : SBTransientOverlayViewController <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBIdleTimerCoordinating, BSInvalidatable> {

	UIView*<SBApplicationSceneBackgroundView> _existingSceneBackgroundView;
	SBIdleTimerCoordinatorHelper* _idleTimerCoordinatorHelper;
	SBSUIInCallSceneClientSettingsDiffInspector* _inCallSceneClientSettingsDiffInspector;
	_SBInCallProxySceneBackgroundView* _proxySceneBackgroundView;
	SBDeviceApplicationSceneViewController* _sceneViewController;
	SBInCallSettings* _settings;
	BOOL _shouldIgnoreHomeIndicatorAutoHiddenClientSettings;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	id<SBInCallTransientOverlayViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * sceneHandle;                                  //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (assign,nonatomic,__weak) id<SBInCallTransientOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreHomeIndicatorAutoHiddenClientSettings;                          //@synthesize shouldIgnoreHomeIndicatorAutoHiddenClientSettings=_shouldIgnoreHomeIndicatorAutoHiddenClientSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)preferredStatusBarStyle;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(long long)preferredWhitePointAdaptivityStyle;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(void)setIdleTimerCoordinator:(id)arg1 ;
-(BOOL)handleHomeButtonPress;
-(BOOL)canResignFirstResponder;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(BOOL)handleLockButtonPress;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleOverridesToSuppressTo:(int)arg2 ;
-(id)initWithSceneHandle:(id)arg1 ;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(BOOL)arg2 withAnimation:(long long)arg3 ;
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2 ;
-(int)serviceProcessIdentifier;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setContainerOrientation:(long long)arg1 ;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(BOOL)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(id)succinctDescriptionBuilder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDelegate:(id<SBInCallTransientOverlayViewControllerDelegate>)arg1 ;
-(BOOL)isContentOpaque;
-(BOOL)_canShowWhileLocked;
-(void)invalidate;
-(id<SBInCallTransientOverlayViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(long long)preferredUnlockedGestureDismissalStyle;
-(BOOL)allowsStackingOverlayContentAbove;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(id)_inCallSceneClientSettingsDiffInspector;
-(void)handleGestureDismissal;
-(long long)preferredLockedGestureDismissalStyle;
-(int)preferredStatusBarStyleOverridesToCancel;
-(id)preferredDisplayLayoutElementIdentifier;
-(void)setShouldIgnoreHomeIndicatorAutoHiddenClientSettings:(BOOL)arg1 ;
-(BOOL)shouldIgnoreHomeIndicatorAutoHiddenClientSettings;
-(/*^block*/id)sceneDeactivationPredicate;
-(BOOL)shouldUseSceneBasedKeyboardFocus;
@end

