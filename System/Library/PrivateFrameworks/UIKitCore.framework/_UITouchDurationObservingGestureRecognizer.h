/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class CADisplayLink, UIDelayedAction;

@interface _UITouchDurationObservingGestureRecognizer : UIGestureRecognizer {

	BOOL _hasExceededAllowableMovement;
	CADisplayLink* _displayLink;
	double _minimumDurationRequired;
	double _allowableMovement;
	double _touchForce;
	double _touchStartTimestamp;
	UIDelayedAction* _delayedAction;
	CGPoint _originalCentroid;

}

@property (nonatomic,readonly) CADisplayLink * displayLink;                    //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double touchStartTimestamp;                       //@synthesize touchStartTimestamp=_touchStartTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint originalCentroid;                         //@synthesize originalCentroid=_originalCentroid - In the implementation block
@property (nonatomic,readonly) UIDelayedAction * delayedAction;                //@synthesize delayedAction=_delayedAction - In the implementation block
@property (assign,nonatomic) double minimumDurationRequired;                   //@synthesize minimumDurationRequired=_minimumDurationRequired - In the implementation block
@property (assign,nonatomic) double allowableMovement;                         //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (nonatomic,readonly) BOOL hasExceededAllowableMovement;              //@synthesize hasExceededAllowableMovement=_hasExceededAllowableMovement - In the implementation block
@property (nonatomic,readonly) double touchDuration; 
@property (nonatomic,readonly) double touchForce;                              //@synthesize touchForce=_touchForce - In the implementation block
-(double)touchDuration;
-(BOOL)hasExceededAllowableMovement;
-(void)_cancelOrFail;
-(void)setAllowableMovement:(double)arg1 ;
-(UIDelayedAction *)delayedAction;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(double)touchForce;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)dealloc;
-(double)minimumDurationRequired;
-(CADisplayLink *)displayLink;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_exceededNumberOfTouchesForEvent:(id)arg1 ;
-(void)setTouchStartTimestamp:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)touchStartTimestamp;
-(void)setOriginalCentroid:(CGPoint)arg1 ;
-(void)_displayLinkDidFire:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_performDelayedBegin;
-(CGPoint)originalCentroid;
-(void)setMinimumDurationRequired:(double)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(double)allowableMovement;
@end
