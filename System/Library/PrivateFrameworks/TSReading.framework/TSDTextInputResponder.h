/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <UIKit/UITextInput.h>
#import <UIKit/UIResponderStandardEditActions.h>
#import <libobjc.A.dylib/_UITextInputRevealSupport.h>

@protocol TSDTextInput, UITextInputDelegate;
@class UITextRange, NSDictionary, UITextPosition, UIView, NSObject, TSDTextInputTokenizer, TSDTextPosition, UIResponder, NSString, UITextInputPasswordRules;

@interface TSDTextInputResponder : UIResponder <UITextInput, UIResponderStandardEditActions, _UITextInputRevealSupport> {

	NSObject*<TSDTextInput> _editor;
	TSDTextInputTokenizer* _tokenizer;
	BOOL _isResigning;
	int _respondingToUITextInput;
	BOOL _isSettingSelectedTextRange;
	float _preferredStartPosition;
	float _preferredEndPosition;
	TSDTextPosition* _referencePosition;
	long long _referenceOffset;
	TSDTextPosition* _cachedPosition;
	BOOL _pendingEditorChange;
	NSObject*<TSDTextInput> _pendingEditor;
	BOOL _pendingFirstResponderChange;
	id<TSDTextInput> _pendingFirstResponderObject;
	BOOL _inDynamicOperation;
	UIResponder* _nextResponder;
	id<UITextInputDelegate> _inputDelegate;
	BOOL _editorRespondsToRawArrowKeySelectors;
	int _ignoreKeyboardInputCount;

}

@property (nonatomic,retain) id<TSDTextInput> editor;                                    //@synthesize editor=_editor - In the implementation block
@property (getter=isResigning,nonatomic,readonly) BOOL resigning; 
@property (assign,nonatomic) float preferredStartPosition;                               //@synthesize preferredStartPosition=_preferredStartPosition - In the implementation block
@property (assign,nonatomic) float preferredEndPosition;                                 //@synthesize preferredEndPosition=_preferredEndPosition - In the implementation block
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate;               //@synthesize inputDelegate=_inputDelegate - In the implementation block
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)p_accessibilityShouldCheckAncestorCanPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(UIView *)textInputView;
-(void)insertText:(id)arg1 ;
-(id<UITextInputDelegate>)inputDelegate;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(void)toggleItalics:(id)arg1 ;
-(BOOL)_disableAutomaticKeyboardUI;
-(void)unmarkText;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(id)textInRange:(id)arg1 ;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(UITextPosition *)endOfDocument;
-(CGRect)firstRectForRange:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)deleteBackward;
-(NSDictionary *)markedTextStyle;
-(void)selectAll:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(BOOL)becomeFirstResponder;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(id)inputAccessoryView;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(BOOL)hasText;
-(UITextRange *)markedTextRange;
-(UITextPosition *)beginningOfDocument;
-(UITextRange *)selectedTextRange;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(long long)autocorrectionType;
-(id)keyCommands;
-(void)delete:(id)arg1 ;
-(id)nextResponder;
-(long long)returnKeyType;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(long long)_indexForTextPosition:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(long long)keyboardType;
-(id)superview;
-(void)dealloc;
-(void)acceptAutocorrection;
-(id)p_ICC;
-(void)deleteForward;
-(void)teardown;
-(NSRange)_nsrangeForTextRange:(id)arg1 ;
-(void)setEditor:(id<TSDTextInput>)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(float)preferredStartPosition;
-(id)selectionRectsForRange:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)insertDictationResult:(id)arg1 ;
-(id)_selectableText;
-(id)inputView;
-(id)_textRangeFromNSRange:(NSRange)arg1 ;
-(float)preferredEndPosition;
-(BOOL)isSecureTextEntry;
-(id<TSDTextInput>)editor;
-(NSRange)_selectedNSRange;
-(void)editorDidChangeSelection:(id)arg1 ;
-(void)p_willShowPopoverNotification:(id)arg1 ;
-(void)forceDelayedResponderChange;
-(id)initWithNextResponder:(id)arg1 ;
-(void)clearEditorAndResignFirstResponder;
-(void)customAction6:(id)arg1 ;
-(void)customAction7:(id)arg1 ;
-(void)customAction8:(id)arg1 ;
-(void)cancelDelayedResponderChange;
-(void)canvasWillScroll;
-(void)canvasWillZoom;
-(void)editorDidChangeSelection:(id)arg1 withFlags:(unsigned long long)arg2 ;
-(void)resumeEditing;
-(void)p_editorSelectionWasForciblyChangedNotification:(id)arg1 ;
-(void)p_editorWillClearSelectionNotification:(id)arg1 ;
-(void)p_editorWillStyleTextNotification:(id)arg1 ;
-(void)p_editorWillHandleTapNotification:(id)arg1 ;
-(void)p_editorDidInsertTextNotification:(id)arg1 ;
-(void)p_willUndoChangeNotification:(id)arg1 ;
-(void)p_didUndoRedoChangeNotification:(id)arg1 ;
-(void)p_startDynamicOperation:(id)arg1 ;
-(void)p_finishDynamicOperation:(id)arg1 ;
-(BOOL)p_isExecutingUITextInput;
-(void)p_textChanged;
-(void)p_setFirstResponder:(id)arg1 ;
-(BOOL)p_requiresFirstResponderChangeForEditor:(id)arg1 ;
-(BOOL)p_resignFirstResponder;
-(void)p_setEditor:(id)arg1 ;
-(void)p_setFirstResponderAndEditor:(id)arg1 ;
-(void)p_setFirstResponderAndEditorAfterDelay;
-(void)p_setFirstResponderAfterDelay;
-(id)editingTextReps;
-(BOOL)p_wantRawArrowKeys;
-(BOOL)p_didEnterUITextInput;
-(void)p_setSelectedTextRange:(id)arg1 ;
-(void)p_willExitUITextInput;
-(void)p_unmarkText;
-(BOOL)p_currentEditorIsNotOnMyCanvas;
-(BOOL)isResigning;
-(void)beginIgnoringKeyboardInput;
-(void)endIgnoringKeyboardInput;
-(id)editingTextRep;
-(void)canvasWillRotate;
-(id)rectsForRange:(id)arg1 ;
-(void)setPreferredStartPosition:(float)arg1 ;
-(void)setPreferredEndPosition:(float)arg1 ;
@end
