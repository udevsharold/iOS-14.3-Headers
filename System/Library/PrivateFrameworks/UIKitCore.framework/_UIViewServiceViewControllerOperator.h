/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKitCore/_UIViewServiceViewControllerOperator_RemoteViewControllerInterface.h>
#import <UIKitCore/_UIHostedTextServiceSessionDelegate.h>
#import <UIKitCore/_UIViewServiceDummyPopoverControllerDelegate.h>
#import <UIKitCore/_UISheetPresentationControllerDelegate.h>
#import <UIKitCore/_UIFocusMovementActionForwarding.h>
#import <UIKitCore/_UIViewServiceDeputy.h>
#import <UIKitCore/_UIViewServiceDeputyRotationSource.h>

@protocol _UIViewServiceViewControllerOperatorDelegate;
@class NSMutableArray, NSString, NSArray, UIViewController, _UIHostedWindow, _UIHostedTextServiceSession, _UIAsyncInvocation, UIPopoverController, _UIViewServiceDummyPopoverController, _UIViewControllerOneToOneTransitionContext, NSUndoManager;

@interface _UIViewServiceViewControllerOperator : UIViewController <_UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UISheetPresentationControllerDelegate, _UIFocusMovementActionForwarding, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource> {

	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
	NSMutableArray* _deferredToViewDidAppear;
	int _hostPID;
	int _mediaPID;
	NSString* _hostBundleID;
	SCD_Struct_UI60 _hostAuditToken;
	id _remoteViewControllerProxyToOperator;
	id _remoteViewControllerProxyToViewController;
	NSArray* _pluginDisplayConfigurations;
	UIViewController* _localViewController;
	NSString* _presentationControllerClassName;
	_UIHostedWindow* _hostedWindow;
	BOOL _disableAutomaticKeyboardBehavior;
	BOOL _serviceInPopover;
	long long _hostStatusBarOrientation;
	double _hostStatusBarHeight;
	NSMutableArray* _deputyRotationDelegates;
	unsigned _hostAccessibilityServerPort;
	_UIHostedTextServiceSession* _textServiceSession;
	_UIAsyncInvocation* _prepareForDisconnectionInvocation;
	_UIAsyncInvocation* _invalidationInvocation;
	UIPopoverController* _displayedPopoverController;
	_UIViewServiceDummyPopoverController* _dummyPopoverController;
	unsigned long long _supportedOrientations;
	long long _availableTextServices;
	UIEdgeInsets _localViewControllerRequestedInsets;
	double _localViewControllerRequestedLeftMargin;
	double _localViewControllerRequestedRightMargin;
	_UIViewControllerOneToOneTransitionContext* _viewControllerTransitioningContext;
	long long _editAlertToken;
	NSUndoManager* _editAlertUndoManager;
	id<_UIViewServiceViewControllerOperatorDelegate> _delegate;
	/*^block*/id __traitsWillChangeHandler;
	/*^block*/id __traitsDidChangeHandler;

}

@property (setter=_setTraitsWillChangeHandler:,nonatomic,copy) id _traitsWillChangeHandler;                 //@synthesize _traitsWillChangeHandler=__traitsWillChangeHandler - In the implementation block
@property (setter=_setTraitsDidChangeHandler:,nonatomic,copy) id _traitsDidChangeHandler;                   //@synthesize _traitsDidChangeHandler=__traitsDidChangeHandler - In the implementation block
@property (nonatomic,readonly) UIViewController * localViewController; 
@property (assign,nonatomic,__weak) id<_UIViewServiceViewControllerOperatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostBundleID:(id)arg3 hostAuditToken:(SCD_Struct_UI60)arg4 ;
+(id)XPCInterface;
-(void)__hostDidEnterBackground;
-(id)_appearanceSource;
-(void)_prepareForDisconnectionUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)_firstResponderDidChange:(id)arg1 ;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg1 ;
-(void)_windowDidBecomeKey:(id)arg1 ;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(BOOL)becomeFirstResponder;
-(id)_window;
-(void)dismissHostedTextServiceSession:(id)arg1 animated:(BOOL)arg2 ;
-(id)preferredFocusEnvironments;
-(void)__hostWillEnterForeground;
-(id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(long long)arg2 traitCollection:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(id)childViewControllerForPointerLock;
-(void)__hostViewDidMoveToScreenWithFBSDisplayIdentity:(id)arg1 newHostingHandleReplyHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(void)__hostSceneDidEnterBackground;
-(id)_queue;
-(id)childViewControllerForStatusBarHidden;
-(void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(BOOL)arg2 ;
-(void)__undoActionWithToken:(long long)arg1 ;
-(UIEdgeInsets)_viewSafeAreaInsetsFromScene;
-(void)setNeedsUpdateOfPrefersPointerLocked;
-(BOOL)__knownPresentationWithoutPresentationControllerInstance;
-(int)__automatic_invalidation_logic;
-(void)__cancelAlertActionWithToken:(long long)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_providesCustomBasePresentationInsets;
-(id)autorelease;
-(CGSize)preferredContentSize;
-(void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2 ;
-(void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)__setContentSize:(CGSize)arg1 boundingPath:(id)arg2 withFence:(id)arg3 ;
-(void)__hostDidSetPresentationControllerClassName:(id)arg1 ;
-(void)_windowDidRegisterScrollToTopView;
-(void)__setContentSize:(CGSize)arg1 boundingPath:(id)arg2 ;
-(void)setNeedsStatusBarAppearanceUpdate;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)_willResignContentViewControllerOfPopover:(id)arg1 ;
-(void)__hostDidUpdateDisplay:(id)arg1 ;
-(BOOL)_isDeallocating;
-(void)_setNeedsUserInterfaceAppearanceUpdate;
-(id)_showServiceForType:(long long)arg1 withContext:(id)arg2 ;
-(void)dealloc;
-(id)_traitsDidChangeHandler;
-(BOOL)_tryRetain;
-(void)__hostSceneWillEnterForeground;
-(void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(long long)arg2 ;
-(BOOL)_forwardPresses:(id)arg1 withEvent:(id)arg2 canceled:(BOOL)arg3 ;
-(id)_presentationControllerClassName;
-(void)_forwardFocusMovementAction:(id)arg1 ;
-(void)__hostDidBecomeActive;
-(void)_setTraitsWillChangeHandler:(/*^block*/id)arg1 ;
-(BOOL)isModalInPresentation;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(unsigned long long)retainCount;
-(void)__showEditAlertView;
-(id)_supportedInterfaceOrientationsForViewController:(id)arg1 ;
-(void)addDeputyRotationDelegate:(id)arg1 ;
-(void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 ;
-(void)__hostDidPromoteFirstResponder;
-(void)_windowDidUnregisterScrollToTopView;
-(id)_viewControllersForRotationCallbacks;
-(UIEdgeInsets)_customBasePresentationInsetsForView:(id)arg1 ;
-(void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_popoverDidDismiss:(id)arg1 ;
-(void)__textServiceDidDismiss;
-(void)__hostDisablesAutomaticKeyboardBehavior:(BOOL)arg1 ;
-(void)__hostWillResignActive;
-(void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1 ;
-(void)_viewServiceIsDisplayingPopoverController:(id)arg1 ;
-(void)_sheetInteractionDidChangeOffset:(CGPoint)arg1 dragging:(BOOL)arg2 dismissible:(BOOL)arg3 indexOfCurrentDetent:(unsigned long long)arg4 duration:(double)arg5 timingCurve:(id)arg6 ;
-(void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__scrollToTopFromTouchAtViewLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(long long)_availableTextServices;
-(void)__dimmingViewWasTapped;
-(void)__setSheetConfiguration:(id)arg1 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)dummyPopoverController:(id)arg1 didChangeContentSize:(CGSize)arg2 animated:(BOOL)arg3 ;
-(void)__hostReadyToReceiveMessagesFromServiceViewController;
-(void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(BOOL)arg2 ;
-(void)_updateSupportedInterfaceOrientationsIfNecessary;
-(id)retain;
-(void)__hostViewDidAppear:(BOOL)arg1 ;
-(void)__redoActionWithToken:(long long)arg1 ;
-(void)__createViewControllerWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(id)_sessionForStateRestoration:(id)arg1 ;
-(void)__hostDidAttachDisplay:(id)arg1 ;
-(void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)__setBoundingPath:(id)arg1 ;
-(void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3 ;
-(void)__setMediaOverridePID:(int)arg1 ;
-(oneway void)release;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)_inputViewsKey;
-(void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(void)__setHostTraitCollection:(id)arg1 deferIfAnimated:(BOOL)arg2 ;
-(id)_dataFromPressesEvent:(id)arg1 ;
-(id)_showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(double)_canvasSystemMinimumMargin;
-(void)setDelegate:(id<_UIViewServiceViewControllerOperatorDelegate>)arg1 ;
-(void)setNeedsUpdateOfHomeIndicatorAutoHidden;
-(id)_childViewControllerForMultitaskingDragExclusionRects;
-(void)__hostViewWillTransitionToSize:(CGSize)arg1 withContextDescription:(id)arg2 boundingPath:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(BOOL)arg5 fence:(id)arg6 whenDone:(/*^block*/id)arg7 ;
-(BOOL)_isHostedRootViewController;
-(void)__prepareForDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setNeedsUpdateOfMultitaskingDragExclusionRects;
-(id)_traitsWillChangeHandler;
-(void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3 ;
-(void)__setServiceInPopover:(BOOL)arg1 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1 ;
-(BOOL)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char*)arg3 ;
-(void)__hostDidSetContentOverlayInsets:(UIEdgeInsets)arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3 ;
-(void)loadView;
-(void)__hostDidDetachDisplay:(id)arg1 ;
-(void)setNeedsWhitePointAdaptivityStyleUpdate;
-(void)_popoverWillPresent:(id)arg1 ;
-(void)__hostViewWillDisappear:(BOOL)arg1 ;
-(void)__hostViewDidDisappear:(BOOL)arg1 ;
-(BOOL)_shouldForwardLegacyRotationOnly;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(void)_didBecomeContentViewControllerOfPopover:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_setTraitsDidChangeHandler:(/*^block*/id)arg1 ;
-(UIViewController *)localViewController;
-(void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3 ;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(id)invalidate;
-(id<_UIViewServiceViewControllerOperatorDelegate>)delegate;
-(void)viewDidLoad;
-(void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(BOOL)arg3 inRemoteViewHierarchy:(BOOL)arg4 ;
-(void)__hostDidChangeStatusBarHeight:(double)arg1 ;
@end
