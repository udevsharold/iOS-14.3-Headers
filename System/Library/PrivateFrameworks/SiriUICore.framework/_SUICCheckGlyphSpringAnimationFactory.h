/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface _SUICCheckGlyphSpringAnimationFactory : NSObject {

	double _duration;
	BOOL _needsDurationUpdate;
	double _mass;
	double _stiffness;
	double _damping;
	double _velocity;
	CAMediaTimingFunction* _timing;

}

@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double mass;                                 //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;                            //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double damping;                              //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double velocity;                             //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timing;              //@synthesize timing=_timing - In the implementation block
+(double)defaultDuration;
+(id)springAnimationWithKeyPath:(id)arg1 ;
+(id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2 ;
+(id)defaultTimingFunction;
-(void)setDamping:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(double)stiffness;
-(double)damping;
-(void)setVelocity:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(id)springAnimationWithKeyPath:(id)arg1 ;
-(id)init;
-(double)mass;
-(void)dealloc;
-(double)velocity;
-(void)setTiming:(CAMediaTimingFunction *)arg1 ;
-(id)_timingFunctionForAnimation;
-(id)initWithVelocity:(double)arg1 timing:(id)arg2 ;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5 ;
-(id)_springAnimationWithKeyPath:(id)arg1 ;
-(void)_updateDurationIfNecessary;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 ;
-(id)initWithVelocity:(double)arg1 ;
-(double)duration;
-(CAMediaTimingFunction *)timing;
@end

