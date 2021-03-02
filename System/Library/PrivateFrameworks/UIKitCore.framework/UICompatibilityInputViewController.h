/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIInputViewController.h>
#import <UIKitCore/_UIKBDelegateAwareInputController.h>

@protocol UITextCursorAssertion;
@class UIKeyboardInputMode, UIKeyboard, UILayoutGuide, UIViewController, NSArray, NSString;

@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController> {

	UIKeyboardInputMode* _inputMode;
	UIKeyboard* _deferredSystemView;
	UIKeyboardInputMode* _incomingExtensionInputMode;
	double _incomingExtensionInputModeTime;
	double _lastSuspendedTime;
	double _currentResumeTime;
	BOOL _shouldRegenerateSizingConstraints;
	BOOL _shouldSuppressRemoteInputController;
	BOOL _tearingDownInputController;
	double _resetInputModeTime;
	unsigned long long _latestDelayTime;
	UILayoutGuide* _focusSafeAreaLayoutGuide;
	UIViewController* _inputController;
	NSArray* _internalEdgeMatchConstraints;
	id<UITextCursorAssertion> _blinkAssertion;

}

@property (nonatomic,retain) UIViewController * inputController;                      //@synthesize inputController=_inputController - In the implementation block
@property (nonatomic,retain) NSArray * internalEdgeMatchConstraints;                  //@synthesize internalEdgeMatchConstraints=_internalEdgeMatchConstraints - In the implementation block
@property (nonatomic,retain) id<UITextCursorAssertion> blinkAssertion;                //@synthesize blinkAssertion=_blinkAssertion - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * focusSafeAreaLayoutGuide; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)inputViewControllerWithView:(id)arg1 ;
+(id)inputSnapshotViewForInputMode:(id)arg1 orientation:(long long)arg2 ;
+(id)deferredInputModeControllerWithKeyboard:(id)arg1 ;
+(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
+(BOOL)_requiresProxyInterface;
-(void)willResume:(id)arg1 ;
-(void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2 ;
-(id)_compatView;
-(void)didSuspend:(id)arg1 ;
-(void)didFinishTranslation;
-(void)finishSplitTransition:(BOOL)arg1 ;
-(void)setInputMode:(id)arg1 ;
-(void)willBeginTranslation;
-(void)setBlinkAssertion:(id<UITextCursorAssertion>)arg1 ;
-(id)_keyboardForThisViewController;
-(void)didMoveToParentViewController:(id)arg1 ;
-(id<UITextCursorAssertion>)blinkAssertion;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)_tvUpdateAppearanceForUserInterfaceStyle;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setInternalEdgeMatchConstraints:(NSArray *)arg1 ;
-(void)validateInputModeIsDisplayed;
-(id)preferredFocusedView;
-(void)isHosted:(id)arg1 ;
-(NSArray *)internalEdgeMatchConstraints;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(void)resetInputMode;
-(void)setDeferredSystemView:(id)arg1 ;
-(void)takeSnapshotView;
-(void)viewDidLayoutSubviews;
-(id)_compatibilityController;
-(void)tearDownInputController;
-(id)_systemViewControllerForInputMode:(id)arg1 ;
-(void)killIncomingExtension;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)resetInputModeInMainThread;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_keyboard;
-(id)childCompatibilityController;
-(void)setInputController:(UIViewController *)arg1 ;
-(void)rebuildChildConstraints;
-(UIViewController *)inputController;
-(void)assertCurrentInputModeIfNecessary;
-(void)setTearingDownInputController;
-(UILayoutGuide *)focusSafeAreaLayoutGuide;
-(void)loadView;
-(void)shouldUpdateInputMode:(id)arg1 ;
-(void)generateCompatibleSizeConstraintsIfNecessary;
-(BOOL)_canShowWhileLocked;
-(void)addSnapshotViewForInputMode:(id)arg1 ;
-(id)_initAsDeferredController;
-(void)removeSnapshotView;
@end
