/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BSAnimationSettings, NSString;

@interface BSUIAnimationFactory : NSObject <_UIBasicAnimationFactory, NSCopying> {

	BOOL _allowsAdditiveAnimations;
	BSAnimationSettings* _settings;

}

@property (nonatomic,copy,readonly) BSAnimationSettings * settings;                       //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy,readonly) BSAnimationSettings * effectiveSettings; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double delay; 
@property (assign,nonatomic) BOOL allowsAdditiveAnimations;                               //@synthesize allowsAdditiveAnimations=_allowsAdditiveAnimations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)animateWithFactory:(id)arg1 actions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5 ;
+(void)animateWithSettings:(id)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4 ;
+(void)animateWithSettings:(id)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 ;
+(void)animateWithSettings:(id)arg1 actions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned long long)arg3 actions:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
+(void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned long long)arg3 actions:(/*^block*/id)arg4 ;
+(id)factoryWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 ;
+(void)animateWithFactory:(id)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(void)animateWithFactory:(id)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 ;
+(void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 ;
+(double)globalSlowDownFactor;
+(id)factoryWithDuration:(double)arg1 timingFunction:(id)arg2 ;
+(id)factoryWithAnimationAttributes:(id)arg1 ;
+(id)factoryWithSettings:(id)arg1 timingFunction:(id)arg2 ;
+(id)factoryWithSettings:(id)arg1 ;
+(void)addAlongsideAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
+(id)factoryWithDuration:(double)arg1 ;
+(id)factoryWithDuration:(double)arg1 delay:(double)arg2 ;
+(void)animateWithFactory:(id)arg1 actions:(/*^block*/id)arg2 ;
+(void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(/*^block*/id)arg3 ;
+(void)animateWithSettings:(id)arg1 actions:(/*^block*/id)arg2 ;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)init;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)applySettingsToCAAnimation:(id)arg1 ;
-(double)delay;
-(BSAnimationSettings *)effectiveSettings;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_timingFunctionForAnimation;
-(void)setAllowsAdditiveAnimations:(BOOL)arg1 ;
-(BOOL)allowsAdditiveAnimations;
-(id)factoryWithTimingFunction:(id)arg1 ;
-(double)duration;
-(BSAnimationSettings *)settings;
@end

