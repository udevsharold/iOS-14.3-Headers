/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>

@protocol UITextInput;
@class UIResponder;

@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer {

	UIResponder*<UITextInput> _textView;

}

@property (__weak) UIResponder*<UITextInput> textView;              //@synthesize textView=_textView - In the implementation block
-(UIResponder*<UITextInput>)textView;
-(BOOL)_tracksPointerTouch;
-(BOOL)shouldUseLegacyBehavior;
-(void)setTextView:(UIResponder*<UITextInput>)arg1 ;
-(BOOL)_isGestureType:(long long)arg1 ;
-(BOOL)isWithinRecentTap;
-(BOOL)_allowsForShortDelay;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)startTimer;
-(void)invalidate;
-(BOOL)isCloseToCaret;
@end
