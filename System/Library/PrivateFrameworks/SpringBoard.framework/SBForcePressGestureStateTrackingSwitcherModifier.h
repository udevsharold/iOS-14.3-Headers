/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;

@interface SBForcePressGestureStateTrackingSwitcherModifier : SBSwitcherModifier {

	SBAppLayout* _selectedAppLayout;
	BOOL _didBeginPanning;
	BOOL _didPop;
	double _panTranslationThreshold;
	double _panProgress;
	double _forceProgress;
	CGPoint _velocity;
	CGPoint _averageVelocity;

}

@property (nonatomic,readonly) CGPoint velocity;                            //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,readonly) CGPoint averageVelocity;                     //@synthesize averageVelocity=_averageVelocity - In the implementation block
@property (nonatomic,readonly) double panTranslationThreshold;              //@synthesize panTranslationThreshold=_panTranslationThreshold - In the implementation block
@property (nonatomic,readonly) double panProgress;                          //@synthesize panProgress=_panProgress - In the implementation block
@property (nonatomic,readonly) double forceProgress;                        //@synthesize forceProgress=_forceProgress - In the implementation block
@property (nonatomic,readonly) BOOL didBeginPanning;                        //@synthesize didBeginPanning=_didBeginPanning - In the implementation block
@property (nonatomic,readonly) BOOL didPop;                                 //@synthesize didPop=_didPop - In the implementation block
-(CGPoint)averageVelocity;
-(BOOL)didPop;
-(CGPoint)velocity;
-(id)handleGestureEvent:(id)arg1 ;
-(id)_responseForActivatingFinalDestination:(long long)arg1 ;
-(id)initWithSelectedAppLayout:(id)arg1 ;
-(double)panTranslationThreshold;
-(double)forceProgress;
-(BOOL)didBeginPanning;
-(double)panProgress;
-(id)_updateForGestureDidBeginWithGestureEvent:(id)arg1 ;
-(id)_updateForGestureDidChangeWithGestureEvent:(id)arg1 ;
-(id)_updateForGestureDidEndWithGestureEvent:(id)arg1 ;
-(double)_currentProgressForGestureEvent:(id)arg1 ;
-(void)_updateForcePressTrackingWithGestureEvent:(id)arg1 ;
-(BOOL)_canCommitToSwitcherWithPanPercent:(double)arg1 forceComplete:(BOOL)arg2 ;
-(long long)_currentFinalDestination;
-(double)_projectedTranslationWithVelocity:(CGPoint)arg1 initialTranslation:(double)arg2 ;
@end
