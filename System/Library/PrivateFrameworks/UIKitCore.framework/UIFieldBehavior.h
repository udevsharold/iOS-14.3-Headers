/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class PKPhysicsField, UIRegion, NSArray;

@interface UIFieldBehavior : UIDynamicBehavior {

	PKPhysicsField* _field;
	SCD_Struct_UI34 _fieldFlags;
	UIRegion* _region;

}

@property (nonatomic,readonly) PKPhysicsField * _field; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (assign,nonatomic) CGPoint position; 
@property (nonatomic,retain) UIRegion * region;                      //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) double strength; 
@property (assign,nonatomic) double falloff; 
@property (assign,nonatomic) double minimumRadius; 
@property (assign,nonatomic) CGVector direction; 
@property (assign,nonatomic) double smoothness; 
@property (assign,nonatomic) double animationSpeed; 
+(BOOL)_isPrimitiveBehavior;
+(id)dragField;
+(id)fieldWithEvaluationBlock:(/*^block*/id)arg1 ;
+(id)radialGravityFieldWithPosition:(CGPoint)arg1 ;
+(id)linearGravityFieldWithVector:(CGVector)arg1 ;
+(id)velocityFieldWithVector:(CGVector)arg1 ;
+(id)magneticField;
+(id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)vortexField;
+(id)springField;
+(id)electricField;
-(void)removeItem:(id)arg1 ;
-(double)strength;
-(void)addItem:(id)arg1 ;
-(void)setRegion:(UIRegion *)arg1 ;
-(PKPhysicsField *)_field;
-(UIRegion *)region;
-(void)setStrength:(double)arg1 ;
-(void)setDirection:(CGVector)arg1 ;
-(double)falloff;
-(id)init;
-(BOOL)isEnabled;
-(double)minimumRadius;
-(CGVector)direction;
-(void)_changedParameter;
-(NSArray *)items;
-(void)_associate;
-(double)smoothness;
-(id)_initWithField:(id)arg1 ;
-(void)setAnimationSpeed:(double)arg1 ;
-(CGPoint)position;
-(void)_dissociate;
-(void)setFalloff:(double)arg1 ;
-(void)setMinimumRadius:(double)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSmoothness:(double)arg1 ;
-(void)_addFieldItem:(id)arg1 ;
-(double)animationSpeed;
@end
