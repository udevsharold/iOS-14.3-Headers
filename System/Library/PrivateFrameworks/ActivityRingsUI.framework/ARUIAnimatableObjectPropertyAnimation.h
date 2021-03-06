/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ARUIAnimatableObjectPropertyAnimation : NSObject {

	/*^block*/id _animationTimingFunction;
	double _currentAnimationTime;
	double _duration;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) double duration;                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) id completionHandler;                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (setter=_setStartValue:,nonatomic,retain) id _startValue; 
@property (setter=_setEndValue:,nonatomic,retain) id _endValue; 
@property (setter=_setCurrentValue:,nonatomic,retain) id _currentValue; 
+(/*^block*/id)timingFunctionForMediaTimingFunction:(id)arg1 ;
+(/*^block*/id)linearTimingFunction;
+(id)animationWithDuration:(double)arg1 timingFunction:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)completionHandler;
-(id)_endValue;
-(void)_updateWithProgress:(float)arg1 ;
-(id)_startValue;
-(void)update:(double)arg1 ;
-(double)duration;
-(id)_currentValue;
-(BOOL)isFinishedAnimating;
-(void)_setStartValue:(id)arg1 ;
-(void)_setEndValue:(id)arg1 ;
-(void)_setCurrentValue:(id)arg1 ;
-(id)valueByAddingCurrentValueToValue:(id)arg1 ;
-(void)callAndReleaseCompletionHandler;
@end

