/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface WBSFluidProgressAnimation : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _initialPosition;
	double _destinationPosition;
	double _animationDuration;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) double initialPosition;                              //@synthesize initialPosition=_initialPosition - In the implementation block
@property (assign,nonatomic) double destinationPosition;                          //@synthesize destinationPosition=_destinationPosition - In the implementation block
@property (assign,nonatomic) double animationDuration;                            //@synthesize animationDuration=_animationDuration - In the implementation block
-(void)setAnimationDuration:(double)arg1 ;
-(double)animationDuration;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)destinationPosition;
-(double)initialPosition;
-(void)setInitialPosition:(double)arg1 ;
-(void)setDestinationPosition:(double)arg1 ;
@end
