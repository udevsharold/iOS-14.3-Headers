/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>

@class UIDelayedAction;

@interface _UIPanOrFlickGestureRecognizer : UIPanGestureRecognizer {

	unsigned long long _touchCount;
	BOOL _didLongPress;
	BOOL _longPressOnly;
	unsigned long long _allowedFlickDirections;
	double _maximumFlickDuration;
	double _minimumFlickDistance;
	double _minimumPressDuration;
	double _allowableMovement;
	double _responsivenessDelay;
	double _timestampBeforeGestureBegan;
	double _timestampOfLastEvent;
	UIDelayedAction* _elapsedAction;
	UIDelayedAction* _responsivenessAction;
	CGPoint _initialCentroidLocation;

}

@property (assign,nonatomic) double timestampBeforeGestureBegan;                                           //@synthesize timestampBeforeGestureBegan=_timestampBeforeGestureBegan - In the implementation block
@property (assign,nonatomic) double timestampOfLastEvent;                                                  //@synthesize timestampOfLastEvent=_timestampOfLastEvent - In the implementation block
@property (nonatomic,retain) UIDelayedAction * elapsedAction;                                              //@synthesize elapsedAction=_elapsedAction - In the implementation block
@property (nonatomic,retain) UIDelayedAction * responsivenessAction;                                       //@synthesize responsivenessAction=_responsivenessAction - In the implementation block
@property (assign,nonatomic) CGPoint initialCentroidLocation;                                              //@synthesize initialCentroidLocation=_initialCentroidLocation - In the implementation block
@property (nonatomic,readonly) id<_UIPanOrFlickGestureRecognizerDelegate> panOrFlickDelegate; 
@property (assign,nonatomic) unsigned long long allowedFlickDirections;                                    //@synthesize allowedFlickDirections=_allowedFlickDirections - In the implementation block
@property (assign,nonatomic) double maximumFlickDuration;                                                  //@synthesize maximumFlickDuration=_maximumFlickDuration - In the implementation block
@property (assign,nonatomic) double minimumFlickDistance;                                                  //@synthesize minimumFlickDistance=_minimumFlickDistance - In the implementation block
@property (nonatomic,readonly) unsigned long long recognizedFlickDirection; 
@property (assign,nonatomic) double minimumPressDuration;                                                  //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (assign,nonatomic) double allowableMovement;                                                     //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (nonatomic,readonly) BOOL didLongPress;                                                          //@synthesize didLongPress=_didLongPress - In the implementation block
@property (assign,nonatomic) BOOL longPressOnly;                                                           //@synthesize longPressOnly=_longPressOnly - In the implementation block
@property (assign,nonatomic) double responsivenessDelay;                                                   //@synthesize responsivenessDelay=_responsivenessDelay - In the implementation block
-(void)setTimestampOfLastEvent:(double)arg1 ;
-(void)setAllowableMovement:(double)arg1 ;
-(UIDelayedAction *)responsivenessAction;
-(void)setMaximumFlickDuration:(double)arg1 ;
-(double)responsivenessDelay;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setElapsedAction:(UIDelayedAction *)arg1 ;
-(void)reset;
-(void)setResponsivenessAction:(UIDelayedAction *)arg1 ;
-(void)dealloc;
-(void)enoughTimeElapsed:(id)arg1 ;
-(void)setInitialCentroidLocation:(CGPoint)arg1 ;
-(double)timestampBeforeGestureBegan;
-(BOOL)_analyticsIsGestureHandled;
-(id<_UIPanOrFlickGestureRecognizerDelegate>)panOrFlickDelegate;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)initialCentroidLocation;
-(void)setMinimumPressDuration:(double)arg1 ;
-(BOOL)didLongPress;
-(double)minimumFlickDistance;
-(void)clearTimer;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)longPressOnly;
-(double)maximumFlickDuration;
-(UIDelayedAction *)elapsedAction;
-(void)setLongPressOnly:(BOOL)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowedFlickDirections:(unsigned long long)arg1 ;
-(void)setMinimumFlickDistance:(double)arg1 ;
-(unsigned long long)recognizedFlickDirection;
-(void)setResponsivenessDelay:(double)arg1 ;
-(void)responsivenessTimeElapsed:(id)arg1 ;
-(void)startTimer;
-(double)minimumPressDuration;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(BOOL)isValidLongPress;
-(void)setTimestampBeforeGestureBegan:(double)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)allowedFlickDirections;
-(double)timestampOfLastEvent;
-(double)allowableMovement;
@end

