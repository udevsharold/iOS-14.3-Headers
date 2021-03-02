/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPanGestureRecognizer.h>

@protocol _UIMultiSelectOneFingerPanGestureDelegate;
@class UITouch, UIEvent;

@interface _UIMultiSelectOneFingerPanGesture : UIPanGestureRecognizer {

	UITouch* _activeTouch;
	UIEvent* _activeEvent;
	id<_UIMultiSelectOneFingerPanGestureDelegate> _oneFingerPanDelegate;

}

@property (nonatomic,readonly) UITouch * activeTouch;                                                                //@synthesize activeTouch=_activeTouch - In the implementation block
@property (nonatomic,readonly) UIEvent * activeEvent;                                                                //@synthesize activeEvent=_activeEvent - In the implementation block
@property (assign,nonatomic,__weak) id<_UIMultiSelectOneFingerPanGestureDelegate> oneFingerPanDelegate;              //@synthesize oneFingerPanDelegate=_oneFingerPanDelegate - In the implementation block
-(BOOL)_affectedByGesture:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id<_UIMultiSelectOneFingerPanGestureDelegate>)oneFingerPanDelegate;
-(void)reset;
-(UIEvent *)activeEvent;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)setOneFingerPanDelegate:(id<_UIMultiSelectOneFingerPanGestureDelegate>)arg1 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(UITouch *)activeTouch;
-(BOOL)_preventsDragInteractionGestures;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end
