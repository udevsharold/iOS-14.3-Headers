/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class CADisplayLink, _UIVelocityIntegrator, NSDate;

@interface _UISteadyTouchForceGestureRecognizer : UIGestureRecognizer {

	CADisplayLink* _continuousEvaluationDisplayLink;
	_UIVelocityIntegrator* _velocityIntegrator;
	double _currentTouchForce;
	NSDate* _steadyTimestamp;
	BOOL _useOverridingMinimumDuration;
	double _overrideMinimumSteadyTouchForceDuration;
	double _minimumSteadyTouchForceDuration;

}

@property (assign,nonatomic) double minimumSteadyTouchForceDuration;              //@synthesize minimumSteadyTouchForceDuration=_minimumSteadyTouchForceDuration - In the implementation block
-(void)_updateForContinuousEvaluation:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)_endContinuousEvaluation;
-(void)_beginForContinuousEvaluationForTouches:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)recognize;
-(void)cancel;
-(void)setView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_evaluateTouches:(id)arg1 ;
-(void)_adjustSteadyForceDurationIfNeeded:(id)arg1 event:(id)arg2 ;
-(void)_evaluateWithTouchForce:(double)arg1 ;
-(double)minimumSteadyTouchForceDuration;
-(void)setMinimumSteadyTouchForceDuration:(double)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end
