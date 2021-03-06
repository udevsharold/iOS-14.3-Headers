/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIInputViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIKeyboardAutocorrectionObserver.h>
#import <libobjc.A.dylib/TUISystemInputAssistantViewDelegate.h>
#import <libobjc.A.dylib/TUIEmojiSearchInputViewControllerDelegate.h>

@protocol UIKeyInput, UIPredictiveViewController;
@class NSTimer, UIViewController, UIView, UITextInputAssistantItem, NSMutableDictionary, TUISystemInputAssistantLayoutStandard, TUISystemInputAssistantLayoutSplit, TUIEmojiSearchInputViewController, TUISystemInputAssistantView, NSString;

@interface UISystemInputAssistantViewController : UIInputViewController <UIPopoverPresentationControllerDelegate, UIKeyboardAutocorrectionObserver, TUISystemInputAssistantViewDelegate, TUIEmojiSearchInputViewControllerDelegate> {

	id<UIKeyInput> _pendingResponderForChangedNotification;
	NSTimer* _pendingResponderChangedTimer;
	BOOL _postedSwitchFromEmojiNotification;
	BOOL _assistantEnabledPreference;
	BOOL _assistantOniPhonePreference;
	BOOL _hasCheckedPreferences;
	BOOL _currentlyCheckingPreferences;
	UIViewController*<UIPredictiveViewController> _centerViewController;
	UIView* _popoverSourceView;
	UITextInputAssistantItem* _observedInputAssistantItem;
	NSMutableDictionary* _cachedPredictiveViewControllers;
	TUISystemInputAssistantLayoutStandard* _standardAssistantViewLayout;
	TUISystemInputAssistantLayoutSplit* _splitAssistantViewLayout;
	TUIEmojiSearchInputViewController* _emojiSearchViewController;
	UIViewController*<UIPredictiveViewController> _predictiveViewController;
	UIViewController* _expandedItemsController;

}

@property (assign,nonatomic,__weak) UIView * popoverSourceView;                                                   //@synthesize popoverSourceView=_popoverSourceView - In the implementation block
@property (assign,nonatomic,__weak) UITextInputAssistantItem * observedInputAssistantItem;                        //@synthesize observedInputAssistantItem=_observedInputAssistantItem - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPredictiveViewControllers;                               //@synthesize cachedPredictiveViewControllers=_cachedPredictiveViewControllers - In the implementation block
@property (nonatomic,retain) TUISystemInputAssistantLayoutStandard * standardAssistantViewLayout;                 //@synthesize standardAssistantViewLayout=_standardAssistantViewLayout - In the implementation block
@property (nonatomic,retain) TUISystemInputAssistantLayoutSplit * splitAssistantViewLayout;                       //@synthesize splitAssistantViewLayout=_splitAssistantViewLayout - In the implementation block
@property (nonatomic,retain) TUIEmojiSearchInputViewController * emojiSearchViewController;                       //@synthesize emojiSearchViewController=_emojiSearchViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<UIPredictiveViewController> predictiveViewController;              //@synthesize predictiveViewController=_predictiveViewController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * expandedItemsController;                                   //@synthesize expandedItemsController=_expandedItemsController - In the implementation block
@property (assign) BOOL assistantEnabledPreference;                                                               //@synthesize assistantEnabledPreference=_assistantEnabledPreference - In the implementation block
@property (assign) BOOL assistantOniPhonePreference;                                                              //@synthesize assistantOniPhonePreference=_assistantOniPhonePreference - In the implementation block
@property (assign) BOOL hasCheckedPreferences;                                                                    //@synthesize hasCheckedPreferences=_hasCheckedPreferences - In the implementation block
@property (assign) BOOL currentlyCheckingPreferences;                                                             //@synthesize currentlyCheckingPreferences=_currentlyCheckingPreferences - In the implementation block
@property (nonatomic,retain) UIViewController*<UIPredictiveViewController> centerViewController;                  //@synthesize centerViewController=_centerViewController - In the implementation block
@property (nonatomic,readonly) TUISystemInputAssistantView * systemInputAssistantView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_requiresProxyInterface;
+(double)_defaultPreferredHeightForTraitCollection:(id)arg1 ;
-(void)emojiSearchTextFieldWillBecomeInactive:(id)arg1 ;
-(BOOL)_isAssistantPreferenceEnabled;
-(double)preferredHeightForTraitCollection:(id)arg1 ;
-(void)emojiSearchTextFieldWillBecomeActive:(id)arg1 ;
-(void)emojiSearchTextFieldDidBecomeActive:(id)arg1 ;
-(void)emojiSearchTextFieldDidBecomeInactive:(id)arg1 ;
-(void)_didReceiveTextEffectsRotationNotification:(id)arg1 ;
-(BOOL)_shouldShowEmojiSearchViewControllerForInputDelegate:(id)arg1 ;
-(void)_didChangePlacementOrInputSourceNotification:(id)arg1 ;
-(BOOL)_shouldCollapseEmojiSearchView;
-(void)_queueResponderChangedForNewResponder:(id)arg1 ;
-(UIViewController*<UIPredictiveViewController>)predictiveViewController;
-(void)updateAssistantPreferences;
-(id)init;
-(void)setSplitAssistantViewLayout:(TUISystemInputAssistantLayoutSplit *)arg1 ;
-(id)_popoverViewControllerForBarButtonItemGroup:(id)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(id)_defaultTintColor;
-(void)setPredictiveViewController:(UIViewController*<UIPredictiveViewController>)arg1 ;
-(BOOL)hasCheckedPreferences;
-(TUISystemInputAssistantView *)systemInputAssistantView;
-(void)_inputModeChanged:(id)arg1 ;
-(TUISystemInputAssistantLayoutStandard *)standardAssistantViewLayout;
-(BOOL)_centerPredictionViewVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(void)dealloc;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(NSMutableDictionary *)cachedPredictiveViewControllers;
-(void)setAssistantEnabledPreference:(BOOL)arg1 ;
-(void)emojiSearchWillInsertEmoji:(id)arg1 forSearchQuery:(id)arg2 ;
-(void)_responderCapabilitiesChangedNotification:(id)arg1 ;
-(void)automaticallySetCenterViewControllerBasedOnInputDelegate:(id)arg1 ;
-(void)_collapseBarItems;
-(void)updateCenterViewVisibilityStateForInputDelegate:(id)arg1 ;
-(BOOL)_allowedToShowBarButtonItemsInline:(id)arg1 ;
-(void)setPopoverSourceView:(UIView *)arg1 ;
-(TUIEmojiSearchInputViewController *)emojiSearchViewController;
-(id)predictionViewController;
-(void)_keyboardDictationAvailabilityDidChangeNotification:(id)arg1 ;
-(void)setObservedInputAssistantItem:(UITextInputAssistantItem *)arg1 ;
-(void)setStandardAssistantViewLayout:(TUISystemInputAssistantLayoutStandard *)arg1 ;
-(id)_inputDelegateAsResponder:(id)arg1 ;
-(BOOL)_assistantItemsVisibleForResponder:(id)arg1 ;
-(void)setCachedPredictiveViewControllers:(NSMutableDictionary *)arg1 ;
-(void)_beginObservingInputAssistantItemForRelevantItemChanges:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(BOOL)_canShowCenterBarButtonItem;
-(void)_responderChangedNotification:(id)arg1 ;
-(void)setCurrentlyCheckingPreferences:(BOOL)arg1 ;
-(void)_updateCenterViewWidthForInterfaceOrientation:(long long)arg1 ;
-(UIViewController *)expandedItemsController;
-(TUISystemInputAssistantLayoutSplit *)splitAssistantViewLayout;
-(void)_showCandidates;
-(BOOL)shouldBeShownForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(void)setCenterViewController:(UIViewController*<UIPredictiveViewController>)arg1 ;
-(void)setInputAssistantButtonItemsForResponder:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_currentInputDelegate;
-(UIView *)popoverSourceView;
-(void)_willChangePlacementNotification:(id)arg1 ;
-(void)setEmojiSearchViewController:(TUIEmojiSearchInputViewController *)arg1 ;
-(void)setHasCheckedPreferences:(BOOL)arg1 ;
-(id)candidateViewController;
-(void)_expandBarItems;
-(BOOL)assistantEnabledPreference;
-(UIViewController*<UIPredictiveViewController>)centerViewController;
-(void)setExpandedItemsController:(UIViewController *)arg1 ;
-(void)_updateSystemInputAssistantViewStylingForInputAssistantItem:(id)arg1 ;
-(BOOL)_shouldShowExpandableButtonBarItemsForResponder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAssistantOniPhonePreference:(BOOL)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)loadView;
-(BOOL)layoutHasBuiltinAssistantView;
-(double)_buttonBarWidthForTraitCollection:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(BOOL)_isEmojiInputMode;
-(void)autocorrectionControllerDidClearAutocorrections:(id)arg1 ;
-(double)_centerViewWidthForTraitCollection:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(BOOL)currentlyCheckingPreferences;
-(BOOL)assistantOniPhonePreference;
-(void)preferencesControllerChanged:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)autocorrectionController:(id)arg1 didUpdateAutocorrectionList:(id)arg2 ;
-(void)_candidatesChanged;
-(void)systemInputAssistantView:(id)arg1 wantsToShowCollapsedItemGroup:(id)arg2 fromView:(id)arg3 ;
-(BOOL)isEmojiSearchResultsVisible;
-(UITextInputAssistantItem *)observedInputAssistantItem;
-(void)viewDidLoad;
-(void)_registerForAssistantViewNotifications;
@end

