/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <CoverSheet/CSPageViewController.h>
#import <libobjc.A.dylib/SBDashBoardHostedAppViewControllerDelegate.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHomeGesturePanGestureRecognizerInterfaceDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBHomeGrabberPointerClickDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureInteractionDelegate.h>
#import <libobjc.A.dylib/CSApplicationHosting.h>

@class UIView, SBDashBoardHostedAppViewController, NSTimer, CSLockScreenSettings, SBLockScreenDefaults, SBHomeGestureInteraction, UIViewFloatAnimatableProperty, SBFFluidBehaviorSettings, SBHomeGestureParticipant, NSSet, NSString;

@interface SBDashBoardCameraPageViewController : CSPageViewController <SBDashBoardHostedAppViewControllerDelegate, SBSceneHandleObserver, SBSystemGestureRecognizerDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBHomeGestureParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBHomeGestureInteractionDelegate, CSApplicationHosting> {

	UIView* _maskView;
	UIView* _tintView;
	SBDashBoardHostedAppViewController* _appViewController;
	BOOL _orientationLockAcquired;
	BOOL _interactiveDismissalInProgress;
	BOOL _hasWarmedCameraForThisPresentation;
	BOOL _cameraPrewarmSucceeded;
	long long _cameraPresentLargestPercent;
	NSTimer* _prewarmDebounceTimer;
	NSTimer* _prewarmCancelTimer;
	CSLockScreenSettings* _prototypeSettings;
	SBLockScreenDefaults* _lockScreenDefaults;
	BOOL _wantsHomeGestureOwnership;
	SBHomeGestureInteraction* _homeGestureInteraction;
	UIViewFloatAnimatableProperty* _scaleProperty;
	UIViewFloatAnimatableProperty* _alphaProperty;
	SBFFluidBehaviorSettings* _scaleSettings;
	SBFFluidBehaviorSettings* _alphaSettings;
	SBHomeGestureParticipant* _homeGestureParticipant;

}

@property (assign,nonatomic) BOOL wantsHomeGestureOwnership;                                 //@synthesize wantsHomeGestureOwnership=_wantsHomeGestureOwnership - In the implementation block
@property (nonatomic,retain) SBHomeGestureInteraction * homeGestureInteraction;              //@synthesize homeGestureInteraction=_homeGestureInteraction - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * scaleProperty;                  //@synthesize scaleProperty=_scaleProperty - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * alphaProperty;                  //@synthesize alphaProperty=_alphaProperty - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * scaleSettings;                       //@synthesize scaleSettings=_scaleSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * alphaSettings;                       //@synthesize alphaSettings=_alphaSettings - In the implementation block
@property (nonatomic,retain) SBHomeGestureParticipant * homeGestureParticipant;              //@synthesize homeGestureParticipant=_homeGestureParticipant - In the implementation block
@property (nonatomic,retain) NSSet * actionsToDeliver; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)requiredCapabilities;
+(BOOL)isAvailableForConfiguration;
-(BOOL)homeGestureInteraction:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(SBHomeGestureInteraction *)homeGestureInteraction;
-(void)homeGestureInteractionBegan:(id)arg1 ;
-(void)homeGestureInteractionCancelled:(id)arg1 ;
-(void)setHomeGestureInteraction:(SBHomeGestureInteraction *)arg1 ;
-(id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1 ;
-(BOOL)isHostingAnApp;
-(void)homeGestureInteractionChanged:(id)arg1 ;
-(void)_addOrRemoveGestureForCurrentSettings;
-(void)aggregateAppearance:(id)arg1 ;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(id)hostedAppSceneHandle;
-(BOOL)canHostAnApp;
-(void)_updateDimmingAlpha:(double)arg1 interactive:(BOOL)arg2 ;
-(long long)presentationAltitude;
-(void)setActionsToDeliver:(NSSet *)arg1 ;
-(void)didTransitionToVisible:(BOOL)arg1 ;
-(void)conformsToSBApplicationHosting;
-(UIViewFloatAnimatableProperty *)alphaProperty;
-(id)hostedAppSceneHandles;
-(id)pageRole;
-(void)updateTransitionToVisible:(BOOL)arg1 progress:(double)arg2 mode:(long long)arg3 ;
-(void)_createProperties;
-(void)aggregateBehavior:(id)arg1 ;
-(id)requestedDismissalSettings;
-(void)setHomeGestureParticipant:(SBHomeGestureParticipant *)arg1 ;
-(long long)requestedDismissalType;
-(void)willTransitionToVisible:(BOOL)arg1 ;
-(void)_endPrewarmBackoffPeriod;
-(BOOL)dashBoardHostedAppViewController:(id)arg1 shouldTransitionToMode:(long long)arg2 ;
-(void)_relinquishHomeGestureOwnership;
-(BOOL)homeGestureInteraction:(id)arg1 shouldBeginGestureRecognizerOfType:(long long)arg2 ;
-(SBFFluidBehaviorSettings *)scaleSettings;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(UIViewFloatAnimatableProperty *)scaleProperty;
-(BOOL)handlesRotationIndependentOfCoverSheet;
-(BOOL)handleEvent:(id)arg1 ;
-(double)_prelaunchThreshold;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(SBHomeGestureParticipant *)homeGestureParticipant;
-(void)_updateForPropertyChanged;
-(void)setScaleSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)_setSceneGrabberHidden:(BOOL)arg1 ;
-(BOOL)wantsHomeGestureOwnership;
-(BOOL)_shouldCancelInteractiveDismissGesture;
-(void)_updateCameraScale:(double)arg1 interactive:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSSet *)actionsToDeliver;
-(void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2 ;
-(void)_coolCameraIfNecessary;
-(void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2 interactive:(BOOL)arg3 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(void)setWantsHomeGestureOwnership:(BOOL)arg1 ;
-(BOOL)_shouldPrewarmOnSwipe;
-(void)_requestHomeGestureOwnership;
-(BOOL)homeGestureInteraction:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_resetAfterInteractiveGestureToCameraVisible:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)homeGrabberViewDidReceiveClick:(id)arg1 ;
-(void)_transitionAppViewWithProgress:(double)arg1 ;
-(void)_makeApplicationStatic;
-(void)_bailIfFaceTimeCallComesIn;
-(double)_prewarmThreshold;
-(void)loadView;
-(SBFFluidBehaviorSettings *)alphaSettings;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)homeGestureInteractionEnded:(id)arg1 ;
-(BOOL)_shouldPrelaunchOnSwipe;
-(void)setAlphaProperty:(UIViewFloatAnimatableProperty *)arg1 ;
-(unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2 ;
-(void)setAlphaSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)_takeHiddenAssertionForHomeGrabber:(id)arg1 ;
-(CGPoint)_convertTranslationFromContainerOrientationToContentOrientation:(CGPoint)arg1 ;
-(void)_noteUserLaunchEventTime;
-(void)_prepareForInteractiveGestureToCameraVisible:(BOOL)arg1 ;
-(long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1 ;
-(void)_relinquishHiddenAssertionForHomeGrabber:(id)arg1 ;
-(void)_prewarmCamera;
-(void)conformsToCSApplicationHosting;
-(void)setScaleProperty:(UIViewFloatAnimatableProperty *)arg1 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
@end
