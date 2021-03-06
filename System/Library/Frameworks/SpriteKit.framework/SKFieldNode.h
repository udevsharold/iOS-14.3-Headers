/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class PKPhysicsField, SKTexture, SKRegion;

@interface SKFieldNode : SKNode {

	PKPhysicsField* _field;
	BOOL _exclusive;
	float _animationSpeed;
	float _smoothness;
	SKTexture* _texture;
	SKRegion* _region;

}

@property (nonatomic,retain) SKRegion * region;                              //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) float strength; 
@property (assign,nonatomic) float falloff; 
@property (assign,nonatomic) float minimumRadius; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isExclusive,nonatomic) BOOL exclusive;              //@synthesize exclusive=_exclusive - In the implementation block
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic)  direction; 
@property (assign,nonatomic) float smoothness;                               //@synthesize smoothness=_smoothness - In the implementation block
@property (assign,nonatomic) float animationSpeed;                           //@synthesize animationSpeed=_animationSpeed - In the implementation block
@property (nonatomic,retain) SKTexture * texture;                            //@synthesize texture=_texture - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dragField;
+(id)linearGravityFieldWithVector:;
+(id)velocityFieldWithVector:;
+(id)magneticField;
+(id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)vortexField;
+(id)springField;
+(id)electricField;
+(id)customFieldWithEvaluationBlock:(/*^block*/id)arg1 ;
+(id)radialGravityField;
+(id)velocityFieldWithTexture:(id)arg1 ;
-(SKTexture *)texture;
-(float)strength;
-(void)setRegion:(SKRegion *)arg1 ;
-(id)field;
-(void)setTexture:(SKTexture *)arg1 ;
-(SKRegion *)region;
-(void)setStrength:(float)arg1 ;
-(void)setDirection:;
-(float)falloff;
-(id)init;
-(void)setExclusive:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEnabled;
-(float)minimumRadius;
-()direction;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)smoothness;
-(void)setAnimationSpeed:(float)arg1 ;
-(void)setFalloff:(float)arg1 ;
-(void)setMinimumRadius:(float)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSmoothness:(float)arg1 ;
-(float)animationSpeed;
-(BOOL)isExclusive;
-(void)setPhysicsField:(id)arg1 ;
-(id)_descriptionClassName;
-(id)initWithCoder:(id)arg1 field:(id)arg2 ;
@end

