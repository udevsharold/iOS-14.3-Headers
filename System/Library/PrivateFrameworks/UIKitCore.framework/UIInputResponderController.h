/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISceneComponentProviding.h>
#import <UIKit/UITextInputSessionActionAnalyticsDelegateSource.h>

@class UITextEffectsWindow, UIResponder, UIInputViewSet, NSMutableDictionary, NSMutableArray, NSHashTable, UIInputViewPostPinningReloadState, NSMutableSet, NSDate, UITextFormattingCoordinator, UISystemInputAssistantViewController, UITextInputSessionActionAnalytics, UIScene, UIKBRenderConfig, UIInputWindowController, UIView, UIWindowScene, NSString;

@interface UIInputResponderController : NSObject <_UISceneComponentProviding, UITextInputSessionActionAnalyticsDelegateSource> {

	unsigned long long _hostedUseCount;
	UITextEffectsWindow* _containerWindow;
	UIResponder* _responder;
	UIResponder* _responderWithoutAutomaticAppearanceEnabled;
	UIResponder* _selfHostingTrigger;
	UIInputViewSet* _inputViewSet;
	UIInputViewSet* _transientInputViewSet;
	NSMutableDictionary* _preservedViewSets;
	NSMutableArray* _animationStyleStack;
	NSHashTable* _visibilityObservers;
	NSMutableDictionary* _keyboardSnapshots;
	UIInputViewPostPinningReloadState* _postPinningReloadState;
	NSMutableSet* _pinningResponders;
	NSMutableDictionary* _persistentInputAccessoryResponders;
	NSMutableArray* _persistentInputAccessoryResponderOrder;
	NSDate* _transitionStartTime;
	UITextFormattingCoordinator* _textFormattingCoordinator;
	UISystemInputAssistantViewController* _systemInputAssistantViewController;
	UITextInputSessionActionAnalytics* _sessionAnalytics;
	int _ignoringReloadInputViews;
	int _ignoredReloads;
	int _disableAnimationsCount;
	BOOL _ignoresPinning;
	BOOL _interfaceAutorotationDisabled;
	BOOL _automaticAppearanceEnabled;
	BOOL _automaticAppearanceEnabledInternal;
	BOOL _dontNeedAssistantBar;
	BOOL _allowNilResponderReload;
	BOOL _reloadInputViewsForcedIsAllowed;
	BOOL _blockedReloadInputViewsForDictation;
	id _keyForPreservingInputViews;
	id _keyForRestoringInputViews;
	BOOL _hasCustomAnimationProperties;
	double _nextAutomaticOrderInDuration;
	int _nextAutomaticOrderInDirection;
	BOOL _shouldSuppressInputAssistantUpdates;
	BOOL _hideSystemInputAssistantView;
	UIScene* _scene;
	long long _currentState;
	UIKBRenderConfig* _restorableRenderConfig;
	unsigned long long _deactivationCount;

}

@property (assign,nonatomic) BOOL useHostedInstance; 
@property (nonatomic,readonly) UITextEffectsWindow * containerWindow; 
@property (nonatomic,readonly) UITextEffectsWindow * existingContainerWindow; 
@property (nonatomic,readonly) UIInputWindowController * containerRootController; 
@property (nonatomic,readonly) UIInputWindowController * existingContainerRootController; 
@property (nonatomic,readonly) UISystemInputAssistantViewController * systemInputAssistantViewController; 
@property (nonatomic,readonly) UIView * containerView; 
@property (assign,nonatomic) BOOL hideSystemInputAssistantView;                                                        //@synthesize hideSystemInputAssistantView=_hideSystemInputAssistantView - In the implementation block
@property (nonatomic,readonly) UIInputViewSet * inputViews; 
@property (nonatomic,readonly) UIInputViewSet * transientInputViews; 
@property (nonatomic,readonly) long long currentState;                                                                 //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * restorableRenderConfig;                                                //@synthesize restorableRenderConfig=_restorableRenderConfig - In the implementation block
@property (nonatomic,readonly) BOOL deactivated; 
@property (assign,nonatomic) unsigned long long deactivationCount;                                                     //@synthesize deactivationCount=_deactivationCount - In the implementation block
@property (assign,nonatomic) BOOL automaticAppearanceInternalEnabled; 
@property (nonatomic,readonly) BOOL automaticAppearanceReallyEnabled; 
@property (nonatomic,readonly) NSDate * _transitionStartTime; 
@property (nonatomic,readonly) UITextFormattingCoordinator * textFormattingCoordinator; 
@property (getter=_isIgnoringReloadInputViews,nonatomic,readonly) BOOL ignoringReloadInputViews; 
@property (assign,nonatomic) BOOL ignoresPinning;                                                                      //@synthesize ignoresPinning=_ignoresPinning - In the implementation block
@property (nonatomic,readonly) UIWindowScene * scene; 
@property (nonatomic,readonly) UIResponder * responder;                                                                //@synthesize responder=_responder - In the implementation block
@property (nonatomic,readonly) BOOL isOnScreen; 
@property (assign,nonatomic) BOOL automaticAppearanceEnabled;                                                          //@synthesize automaticAppearanceEnabled=_automaticAppearanceEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressInputAssistantUpdates;                                                 //@synthesize shouldSuppressInputAssistantUpdates=_shouldSuppressInputAssistantUpdates - In the implementation block
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;                                  //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)logInterfaceOrientation:(long long)arg1 withDescription:(id)arg2 ;
+(id)applicationConnectedWindowScenes;
+(id)activeInputResponderController;
+(void)setInterfaceOrientation:(long long)arg1 ;
+(void)_pinInputViewsForInputResponderController:(id)arg1 onBehalfOfResponder:(id)arg2 duringBlock:(/*^block*/id)arg3 ;
+(void)performOnControllers:(/*^block*/id)arg1 ;
+(long long)interfaceOrientation;
-(UIKBRenderConfig *)restorableRenderConfig;
-(BOOL)maximize;
-(void)_reloadInputViewsForResponder:(id)arg1 ;
-(BOOL)animationsEnabled;
-(BOOL)automaticAppearanceReallyEnabled;
-(void)pushAnimationStyle:(id)arg1 ;
-(void)popAnimationStyle;
-(UIScene *)_scene;
-(UIInputWindowController *)existingContainerRootController;
-(BOOL)_isIgnoringReloadInputViews;
-(BOOL)ignoresPinning;
-(BOOL)isOnScreen;
-(void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2 reset:(BOOL)arg3 ;
-(UIInputViewSet *)inputViews;
-(void)updateRenderConfigForCurrentResponder;
-(UITextEffectsWindow *)containerWindow;
-(void)performMultipleOperations:(/*^block*/id)arg1 withAnimationStyle:(id)arg2 ;
-(id)nextAnimationStyle;
-(id)_windowScene;
-(BOOL)isUndocked;
-(void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(void)setRestorableRenderConfig:(UIKBRenderConfig *)arg1 ;
-(BOOL)minimize;
-(void)_setScene:(id)arg1 ;
-(void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(void)createAutomaticKeyboardIfNeeded;
-(UITextFormattingCoordinator *)textFormattingCoordinator;
-(void)inputModeChangedForRenderConfig:(id)arg1 ;
-(unsigned long long)deactivationCount;
-(void)_beginPersistingInputAccessoryViewForResponder:(id)arg1 withId:(id)arg2 ;
-(UIInputWindowController *)containerRootController;
-(id)nextAnimationStyle:(BOOL)arg1 ;
-(void)refreshWithLocalMinimumKeyboardHeight:(double)arg1 ;
-(id)systemInputAssistantViewControllerForResponder:(id)arg1 ;
-(void)_updateVisibilityObserversWithVisibility:(BOOL)arg1 reset:(BOOL)arg2 ;
-(BOOL)pinningPreventsInputViews:(id)arg1 ;
-(UIView *)containerView;
-(void)dealloc;
-(id)_textInputSessionAnalytics;
-(UITextEffectsWindow *)existingContainerWindow;
-(long long)currentState;
-(void)traitCollectionDidChange;
-(CGRect)visibleInputViewFrameInView:(id)arg1 ;
-(void)setTextEffectsWindowLevelForInputView:(id)arg1 responder:(id)arg2 ;
-(void)_reloadInputViewsForWindowSceneResponder:(id)arg1 ;
-(void)_updateContainerWindowLevel;
-(void)setAutomaticAppearanceInternalEnabled:(BOOL)arg1 ;
-(BOOL)minimizeWithAnimationStyle:(id)arg1 force:(BOOL)arg2 ;
-(void)setDeactivationCount:(unsigned long long)arg1 ;
-(void)setWindowSceneInputViews:(id)arg1 animationStyle:(id)arg2 ;
-(UISystemInputAssistantViewController *)systemInputAssistantViewController;
-(void)_reloadInputViewsForKeyWindowSceneResponder:(id)arg1 ;
-(void)destroyWindowForKeyboardPopoverIfNecessary;
-(void)_endDisablingAnimations;
-(id)windowForKeyboardPopover;
-(BOOL)_restoreInputViewsWithId:(id)arg1 animated:(BOOL)arg2 ;
-(long long)_preferredAppearanceForResponder:(id)arg1 ;
-(void)setIgnoresPinning:(BOOL)arg1 ;
-(BOOL)_preserveMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 reset:(BOOL)arg3 ;
-(double)verticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2 ;
-(void)setUseHostedInstance:(BOOL)arg1 ;
-(void)_removePreservedInputViewSetForInputView:(id)arg1 ;
-(UIResponder *)responder;
-(void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2 ;
-(void)inputResponderControllerWillResume:(id)arg1 ;
-(BOOL)deactivated;
-(int)_endIgnoringReloadInputViews;
-(void)setKeyboardSnapshot:(id)arg1 inWindow:(long long)arg2 ;
-(void)forceOrderOutAutomaticAnimated:(BOOL)arg1 ;
-(BOOL)_isTrackingResponder:(id)arg1 ;
-(BOOL)_isPreservedRestorableResponder:(id)arg1 ;
-(void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3 ;
-(BOOL)hasDictationKeyboard;
-(void)prepareForAlongsideTransitionWithContext:(id)arg1 ;
-(void)setInputViews:(id)arg1 animationStyle:(id)arg2 ;
-(BOOL)_hasPostPinningReloadState;
-(void)_clearPreservedInputViewsWithRestorableResponder:(id)arg1 ;
-(CGRect)visibleFrameInView:(id)arg1 ;
-(void)forceReloadInputViews;
-(void)prepareToMoveKeyboardForInputViewSet:(id)arg1 animationStyle:(id)arg2 ;
-(void)cleanDeactivation;
-(void)_setReloadInputViewsForcedIsAllowed:(BOOL)arg1 ;
-(void)performWithAllowingNilResponderReload:(/*^block*/id)arg1 ;
-(void)setAutomaticAppearanceEnabled:(BOOL)arg1 ;
-(NSDate *)_transitionStartTime;
-(void)forceOrderInAutomaticAnimated:(BOOL)arg1 ;
-(void)_updateTextInputSession;
-(void)_clearMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 ;
-(id)_delegateAsResponder;
-(BOOL)_isPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(BOOL)automaticAppearanceEnabled;
-(BOOL)_restoreMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 ;
-(id)getKeyboardSnapshotInWindow:(long long)arg1 ;
-(void)_restoreInputAccessoryViewOverrideWithId:(id)arg1 ;
-(void)_beginDisablingAnimations;
-(id)passthroughViews;
-(void)_preserveInputViewsWithId:(id)arg1 ;
-(BOOL)useHostedInstance;
-(BOOL)maximizeWithAnimationStyle:(id)arg1 force:(BOOL)arg2 ;
-(void)orderInWithAnimationStyle:(id)arg1 ;
-(BOOL)minimizeWithAnimationStyle:(id)arg1 ;
-(id)_renderConfigForResponder:(id)arg1 ;
-(void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)updateRenderConfigForResponder:(id)arg1 ;
-(void)addVisibilityObserver:(id)arg1 ;
-(void)setShouldSuppressInputAssistantUpdates:(BOOL)arg1 ;
-(id)_inputViewsForResponder:(id)arg1 withAutomaticKeyboard:(BOOL)arg2 ;
-(void)setInputViews:(id)arg1 animated:(BOOL)arg2 ;
-(void)disableInterfaceAutorotation:(BOOL)arg1 ;
-(BOOL)hideSystemInputAssistantView;
-(void)_setIgnoresPinning:(BOOL)arg1 allowImmediateReload:(BOOL)arg2 ;
-(BOOL)_showKeyboardWindowForInputViewSet:(id)arg1 placement:(id)arg2 windowScene:(id)arg3 ;
-(void)_clearPreservedInputViewsWithId:(id)arg1 clearKeyboard:(BOOL)arg2 ;
-(void)orderOutWithAnimationStyle:(id)arg1 ;
-(void)_beginIgnoringReloadInputViews;
-(UIWindowScene *)scene;
-(BOOL)automaticAppearanceInternalEnabled;
-(BOOL)shouldSuppressInputAssistantUpdates;
-(void)setInputViews:(UIInputViewSet *)arg1 ;
-(id)_inputViewsForResponder:(id)arg1 ;
-(void)removeVisibilityObserver:(id)arg1 ;
-(void)_endPersistingInputAccessoryViewWithId:(id)arg1 ;
-(void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)_clearPinningResponders;
-(void)setNextAutomaticOrderInDirection:(int)arg1 duration:(double)arg2 ;
-(id)_placementForDeactivatedKeyboard:(BOOL)arg1 currentPlacement:(id)arg2 ;
-(void)setHideSystemInputAssistantView:(BOOL)arg1 ;
-(void)setKeyWindowSceneInputViews:(id)arg1 animationStyle:(id)arg2 ;
-(UIInputViewSet *)transientInputViews;
-(void)forceOrderOutAutomaticExceptAccessoryView;
-(id)initWithScene:(id)arg1 ;
-(void)reloadPlacement;
-(BOOL)maximizeWithAnimation:(BOOL)arg1 ;
-(void)clearAnimationStyleForUserDrivenPresentation;
-(BOOL)maximizeWithAnimationStyle:(id)arg1 ;
@end

