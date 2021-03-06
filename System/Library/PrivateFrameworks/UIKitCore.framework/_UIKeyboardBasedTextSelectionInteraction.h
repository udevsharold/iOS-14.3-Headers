/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKeyboardTextSelectionInteraction.h>

@class UITextGestureTuning;

@interface _UIKeyboardBasedTextSelectionInteraction : _UIKeyboardTextSelectionInteraction {

	UITextGestureTuning* _gestureTuning;

}

@property (nonatomic,readonly) UITextGestureTuning * gestureTuning;              //@synthesize gestureTuning=_gestureTuning - In the implementation block
-(void)_createGestureTuningIfNecessary;
-(void)updateOneFingerSelectWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)didMoveToView:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)enclosingScrollViewIsScrolling;
-(void)dealloc;
-(void)transitionFromBlockMagnifyToBlockSelectWithLocation:(CGPoint)arg1 viaDrag:(BOOL)arg2 ;
-(void)oneFingerForcePress:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)owner;
-(void)endOneFingerSelectWithExecutionContext:(id)arg1 ;
-(void)oneFingerForcePan:(id)arg1 ;
-(UITextGestureTuning *)gestureTuning;
-(void)_processGestureForCustomHighlighter:(id)arg1 ;
-(void)beginOneFingerSelectWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
@end

