/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIScrollDynamics : NSObject {

	BOOL _shouldRoundCalculations;
	CGSize _tolerance;
	CGPoint _decelerationTarget;
	CGPoint _initialContentOffset;
	CGVector _initialVelocity;
	CGPoint _contentOrigin;
	CGSize _viewSize;
	CGRect _contentFrame;

}

@property (assign,nonatomic) BOOL shouldRoundCalculations;              //@synthesize shouldRoundCalculations=_shouldRoundCalculations - In the implementation block
@property (nonatomic,readonly) CGSize tolerance;                        //@synthesize tolerance=_tolerance - In the implementation block
@property (assign,nonatomic) CGPoint decelerationTarget;                //@synthesize decelerationTarget=_decelerationTarget - In the implementation block
@property (assign,nonatomic) CGPoint initialContentOffset;              //@synthesize initialContentOffset=_initialContentOffset - In the implementation block
@property (assign,nonatomic) CGVector initialVelocity;                  //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                       //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) CGPoint contentOrigin;                     //@synthesize contentOrigin=_contentOrigin - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                           //@synthesize viewSize=_viewSize - In the implementation block
@property (nonatomic,readonly) double durationUntilStop; 
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)setInitialVelocity:(CGVector)arg1 ;
-(CGSize)tolerance;
-(CGSize)viewSize;
-(id)init;
-(CGPoint)contentOrigin;
-(void)setContentOrigin:(CGPoint)arg1 ;
-(double)durationUntilStop;
-(double)speedAfterDuration:(double)arg1 ;
-(void)calculateToReachDecelerationTarget;
-(void)setDecelerationTarget:(CGPoint)arg1 ;
-(void)setShouldRoundCalculations:(BOOL)arg1 ;
-(CGVector)velocityAfterDuration:(double)arg1 ;
-(void)calculateDecelerationTarget;
-(void)setInitialContentOffset:(CGPoint)arg1 ;
-(id)initWithInitialContentOffset:(CGPoint)arg1 velocity:(CGVector)arg2 contentFrame:(CGRect)arg3 viewSize:(CGSize)arg4 screenScale:(double)arg5 ;
-(CGPoint)positionAfterDuration:(double)arg1 ;
-(BOOL)isRubberBandingAfterDuration:(double)arg1 ;
-(BOOL)shouldRoundCalculations;
-(void)recalculateForDecelerationTarget:(CGPoint)arg1 ;
-(CGPoint)decelerationTarget;
-(CGPoint)initialContentOffset;
-(CGVector)initialVelocity;
-(void)setViewSize:(CGSize)arg1 ;
@end
