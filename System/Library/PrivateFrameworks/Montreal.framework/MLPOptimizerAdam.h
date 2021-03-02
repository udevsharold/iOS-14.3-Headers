/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Montreal/MLPOptimizer.h>

@class MPSVector;

@interface MLPOptimizerAdam : MLPOptimizer {

	MPSVector* _momentum;
	MPSVector* _velocity;

}

@property (retain) MPSVector * momentum;              //@synthesize momentum=_momentum - In the implementation block
@property (retain) MPSVector * velocity;              //@synthesize velocity=_velocity - In the implementation block
-(void)setVelocity:(MPSVector *)arg1 ;
-(MPSVector *)velocity;
-(MPSVector *)momentum;
-(void)setMomentum:(MPSVector *)arg1 ;
-(id)initWithNetwork:(id)arg1 momentum:(/*^block*/id)arg2 velocity:(/*^block*/id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 ;
@end
