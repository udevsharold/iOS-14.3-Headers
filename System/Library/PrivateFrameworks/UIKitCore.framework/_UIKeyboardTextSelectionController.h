/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInput;
#import <UIKitCore/UIKitCore-Structs.h>
@class UITextPosition, UITextRange, UIResponder, UITextInteractionAssistant, UIView;

@interface _UIKeyboardTextSelectionController : NSObject {

	BOOL _hasInteractionAssistant;
	BOOL _hasSelectionInteractionAssistant;
	BOOL _hasTextInputView;
	UITextPosition* _cursorPosition;
	UITextRange* _initialSelection;
	long long _selectionGranularity;
	UITextRange* _selectionBase;
	UIResponder*<UITextInput> _inputDelegate;
	CGRect _caretRectForCursorPosition;

}

@property (assign,nonatomic) CGRect caretRectForCursorPosition;                                                //@synthesize caretRectForCursorPosition=_caretRectForCursorPosition - In the implementation block
@property (nonatomic,retain) UITextRange * initialSelection;                                                   //@synthesize initialSelection=_initialSelection - In the implementation block
@property (nonatomic,retain) UITextRange * selectionBase;                                                      //@synthesize selectionBase=_selectionBase - In the implementation block
@property (nonatomic,readonly) UIResponder*<UITextInput> inputDelegate;                                        //@synthesize inputDelegate=_inputDelegate - In the implementation block
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (nonatomic,readonly) id<UISelectionInteractionAssistant> selectionInteractionAssistant; 
@property (assign,nonatomic) long long selectionGranularity;                                                   //@synthesize selectionGranularity=_selectionGranularity - In the implementation block
@property (nonatomic,retain) UITextPosition * cursorPosition; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (nonatomic,readonly) BOOL hasCaretSelection; 
@property (nonatomic,readonly) BOOL hasRangedSelection; 
@property (nonatomic,readonly) CGRect caretRectForFirstSelectedPosition; 
@property (nonatomic,readonly) CGRect caretRectForLastSelectedPosition; 
@property (nonatomic,readonly) CGRect caretRectForLeftmostSelectedPosition; 
@property (nonatomic,readonly) CGRect caretRectForRightmostSelectedPosition; 
-(void)setSelectedTextRange:(id)arg1 ;
-(UIView *)textInputView;
-(void)textDidChange;
-(UITextInteractionAssistant *)interactionAssistant;
-(UIResponder*<UITextInput>)inputDelegate;
-(void)updateGestureRecognizers;
-(void)setSelectionGranularity:(long long)arg1 ;
-(void)endSelectionChange;
-(void)beginSelectionChange;
-(void)endSelection;
-(void)setCursorPosition:(UITextPosition *)arg1 ;
-(UITextPosition *)cursorPosition;
-(void)willHandoffLoupeMagnifier;
-(id<UISelectionInteractionAssistant>)selectionInteractionAssistant;
-(CGRect)caretRectForCursorPosition;
-(long long)selectionGranularity;
-(void)resetCursorPosition;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3 ;
-(void)endFloatingCursor;
-(void)selectPositionAtPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)selectImmediatePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(CGRect)selectedRectInLineWithPoint:(CGPoint)arg1 ;
-(CGRect)caretRectForLeftmostSelectedPosition;
-(void)setCaretRectForCursorPosition:(CGRect)arg1 ;
-(void)beginSelectionWithBasePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 withInitialExtentPoint:(CGPoint)arg3 executionContext:(id)arg4 ;
-(void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endLoupeGestureAtPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)dealloc;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 andExtentPosition:(id)arg2 executionContext:(id)arg3 ;
-(void)scrollSelectionToVisible;
-(void)willBeginFloatingCursor:(BOOL)arg1 ;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)updateLoupeGestureAtPoint:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(BOOL)cursorPositionIsContainedByRange:(id)arg1 ;
-(void)beginLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(BOOL)beginLoupeGestureAtPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)selectionDidChange;
-(BOOL)hasCaretSelection;
-(UITextRange *)initialSelection;
-(CGRect)caretRectForLastSelectedPosition;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4 ;
-(void)showSelectionCommands;
-(void)beginSelection;
-(void)setRangedSelectionShouldShowGrabbers:(BOOL)arg1 ;
-(UITextRange *)selectionBase;
-(void)modifySelectionWithExtentPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)endRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(void)restartSelection;
-(CGPoint)boundedDeltaForTranslation:(CGPoint)arg1 cursorLocationBase:(CGPoint)arg2 ;
-(void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)selectPositionAtPoint:(CGPoint)arg1 granularity:(long long)arg2 executionContext:(id)arg3 ;
-(void)updateImmediateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionRects;
-(id)initWithInputDelegate:(id)arg1 ;
-(void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4 ;
-(void)endLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(void)setInitialSelection:(UITextRange *)arg1 ;
-(void)updateSelectionWithExtentPosition:(id)arg1 executionContext:(id)arg2 ;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)beginRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(void)switchToRangedSelection;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(CGRect)caretRectForRightmostSelectedPosition;
-(void)updateRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(void)setSelectionBase:(UITextRange *)arg1 ;
-(void)updateLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(CGRect)caretRectForFirstSelectedPosition;
-(BOOL)hasRangedSelection;
-(void)willBeginHighlighterGesture;
-(void)selectPositionAtPoint:(CGPoint)arg1 granularity:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

