/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class UIDelayedAction, NSMutableSet, NSSet;

@interface UIHBDownGestureRecognizer : UIGestureRecognizer {

	UIDelayedAction* _delayedAction;
	NSMutableSet* _currentlyPressedTypes;
	NSSet* _requiredPressTypes;
	double _maximumIntervalBetweenPresses;

}

@property (assign,nonatomic) double maximumIntervalBetweenPresses;              //@synthesize maximumIntervalBetweenPresses=_maximumIntervalBetweenPresses - In the implementation block
-(void)_resetGestureRecognizer;
-(void)_processPresses:(id)arg1 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)_succeed;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_allRequiredButtonsDown;
-(double)maximumIntervalBetweenPresses;
-(void)setMaximumIntervalBetweenPresses:(double)arg1 ;
-(void)_fail;
@end

