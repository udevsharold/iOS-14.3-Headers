/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardImplAccessibility_super.h>

@interface UIKeyboardImplAccessibility : __UIKeyboardImplAccessibility_super
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)safeCategoryTargetClassName;
-(void)insertText:(id)arg1 ;
-(void)toggleSoftwareKeyboard;
-(void)deleteBackwardAndNotify:(BOOL)arg1 ;
-(void)updateAutocorrectPrompt:(id)arg1 ;
-(void)setShift:(BOOL)arg1 autoshift:(BOOL)arg2 ;
-(void)hideKeyboard;
-(void)updateTextCandidateView;
-(void)completeDeleteFromInput;
-(void)_performKeyboardOutput:(id)arg1 shouldCheckDelegate:(BOOL)arg2 ;
-(BOOL)callShouldInsertText:(id)arg1 ;
-(void)dealloc;
-(BOOL)autocorrectionPreference;
-(void)completeHandleKeyEvent:(id)arg1 ;
-(BOOL)autocorrectSpellingEnabled;
-(void)setInputModeToNextInPreferredListWithExecutionContext:(id)arg1 ;
-(BOOL)_shouldMinimizeForHardwareKeyboard;
-(void)dismissKeyboard;
-(void)setInHardwareKeyboardMode:(BOOL)arg1 ;
-(void)_setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2 inputString:(id)arg3 searchString:(id)arg4 compareAttributes:(BOOL)arg5 ;
-(void)showKeyboard;
-(void)textDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)arg1 characterCountForRapidDelete:(int)arg2 ;
-(void)showKeyboardIfNeeded;
-(void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2 ;
-(BOOL)acceptWord:(id)arg1 firstDelete:(unsigned long long)arg2 forInput:(id)arg3 ;
-(void)unmarkText:(id)arg1 ;
-(void)acceptCandidate:(id)arg1 ;
-(BOOL)callShouldReplaceExtendedRange:(long long)arg1 withText:(id)arg2 includeMarkedText:(BOOL)arg3 ;
-(void)handleKeyboardInput:(id)arg1 executionContext:(id)arg2 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_axIsObservingAppLifecycleNotifications;
-(void)_axUnregisterForVoiceOverNotifications:(id)arg1 ;
-(void)_axRegisterForVoiceOverNotifications:(id)arg1 ;
-(void)_axHandleVoiceOverStatusChanged:(id)arg1 ;
-(void)_axSetIsObservingAppLifecycleNotifications:(BOOL)arg1 ;
-(BOOL)_axIsObservingVoiceOverNotifications;
-(void)_axSetIsObservingVoiceOverNotifications:(BOOL)arg1 ;
-(void)_axUpdateAutocorrectionSettings;
-(BOOL)_axIsHandwritingEnabled;
-(void)setInputModeToNextInPreferredList;
-(void)updateLayoutForInterfaceOrientation:(long long)arg1 ;
-(void)_axResetFKAFocusToFirstResponder;
-(id)_accessibilityKeyboardInputDelegate;
-(BOOL)_axShouldShowKeyboard;
-(void)_axShowKeyboardIfHidden;
-(void)_axSetIsHandwritingEnabled:(BOOL)arg1 ;
-(BOOL)_accessibilityInputObjectUsesSecureText:(id)arg1 ;
@end
