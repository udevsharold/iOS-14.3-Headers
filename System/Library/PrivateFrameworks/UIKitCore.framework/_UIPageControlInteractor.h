/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIHyperInteractor;

@interface _UIPageControlInteractor : NSObject {

	double _scrubbingOffset;
	double _lowerBound;
	double _upperBound;
	_UIHyperInteractor* _interactor;

}

@property (nonatomic,retain) _UIHyperInteractor * interactor;                //@synthesize interactor=_interactor - In the implementation block
@property (nonatomic,readonly) double joggingDistance; 
@property (nonatomic,readonly) double unconstrainedPosition; 
@property (nonatomic,readonly) double boundedScrubPosition; 
@property (nonatomic,readonly) double unboundedScrubPosition; 
@property (nonatomic,readonly) double hyperConstrainedPosition; 
-(_UIHyperInteractor *)interactor;
-(double)joggingDistance;
-(id)initWithMaximumDistance:(double)arg1 ;
-(void)updateScrubLowerBound:(double)arg1 upperBound:(double)arg2 ;
-(void)updateRubberbandLowerBound:(double)arg1 upperBound:(double)arg2 ;
-(double)unboundedScrubPosition;
-(void)commitTranslation;
-(double)unconstrainedPosition;
-(void)setTranslation:(double)arg1 velocity:(double)arg2 ;
-(double)boundedScrubPosition;
-(void)reduceScrubOffsetByOffset:(double)arg1 ;
-(double)hyperConstrainedPosition;
-(void)reduceScrubOffsetByRatio:(double)arg1 ;
-(void)setInteractor:(_UIHyperInteractor *)arg1 ;
-(void)setUnconstrainedPosition:(double)arg1 offset:(double)arg2 ;
@end

