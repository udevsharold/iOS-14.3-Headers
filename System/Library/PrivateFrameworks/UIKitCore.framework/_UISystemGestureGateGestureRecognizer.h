/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class NSTimer;

@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer {

	unsigned char _systemGestureGateType;
	unsigned _systemGesturesRecognitionPossible : 1;
	unsigned _waitingForSystemGestureStateNotification : 1;
	double _lastTouchTime;
	NSTimer* _delayTimeoutTimer;

}
+(BOOL)_shouldDefaultToTouches;
-(void)_resetGestureRecognizer;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithWindow:(id)arg1 type:(unsigned char)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(void)_systemGestureStateChanged:(id)arg1 ;
-(id)_gateGestureTypeString;
-(void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelaysTouchesEnded:(BOOL)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(void)setDelaysTouchesBegan:(BOOL)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_timeOut;
-(void)setEnabled:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

