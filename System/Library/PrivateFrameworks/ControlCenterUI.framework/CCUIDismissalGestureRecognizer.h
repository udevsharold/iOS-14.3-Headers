/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPanGestureRecognizer.h>

@class NSSet;

@interface CCUIDismissalGestureRecognizer : UIPanGestureRecognizer {

	BOOL _triggered;
	NSSet* _currentTouches;

}
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)reset;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_tryToCancelTouches;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_cancelOtherGestureRecognizersForTouches:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end
