/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TeaUI/TeaUI-Structs.h>
@class CAMediaTimingFunction, TUAnimationFloatFunction;

@interface TUAnimationPointFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _speed;
	TUAnimationFloatFunction* _xFunction;
	TUAnimationFloatFunction* _yFunction;
	CGPoint _startValue;
	CGPoint _endValue;

}

@property (nonatomic,retain) TUAnimationFloatFunction * xFunction;                //@synthesize xFunction=_xFunction - In the implementation block
@property (nonatomic,retain) TUAnimationFloatFunction * yFunction;                //@synthesize yFunction=_yFunction - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) CGPoint startValue;                                  //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) CGPoint endValue;                                    //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double speed;                                        //@synthesize speed=_speed - In the implementation block
-(void)_reloadFunctions;
-(CAMediaTimingFunction *)timingFunction;
-(void)setStartValue:(CGPoint)arg1 ;
-(id)initWithTimingFunction:(id)arg1 startRect:(CGPoint)arg2 endRect:(CGPoint)arg3 speed:(double)arg4 ;
-(TUAnimationFloatFunction *)xFunction;
-(TUAnimationFloatFunction *)yFunction;
-(void)setXFunction:(TUAnimationFloatFunction *)arg1 ;
-(void)setYFunction:(TUAnimationFloatFunction *)arg1 ;
-(CGPoint)endValue;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)speed;
-(CGPoint)solveForTime:(double)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(CGPoint)startValue;
-(void)setEndValue:(CGPoint)arg1 ;
@end

