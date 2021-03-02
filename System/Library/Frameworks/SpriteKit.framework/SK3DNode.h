/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class SCNScene, SCNNode;

@interface SK3DNode : SKNode {

	SKC3DNode* _skc3DNode;

}

@property (assign) CGSize viewportSize; 
@property (nonatomic,retain) SCNScene * scnScene; 
@property (assign,nonatomic) double sceneTime; 
@property (getter=isPlaying) BOOL playing; 
@property (assign,nonatomic) BOOL loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) BOOL autoenablesDefaultLighting; 
+(BOOL)supportsSecureCoding;
+(id)nodeWithViewportSize:(CGSize)arg1 ;
-(void)commonInit;
-(BOOL)loops;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(id)init;
-(SCNNode *)pointOfView;
-(double)sceneTime;
-(BOOL)autoenablesDefaultLighting;
-(3)unprojectPoint:;
-(void)setPlaying:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(3)projectPoint:;
-(void)setLoops:(BOOL)arg1 ;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1 ;
-(BOOL)isPlaying;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(CGSize)viewportSize;
-(id)initWithCoder:(id)arg1 ;
-(void)setViewportSize:(CGSize)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSceneTime:(double)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(id)initWithViewportSize:(CGSize)arg1 ;
-(void)_renderForTime:(double)arg1 ;
-(void)setScnScene:(SCNScene *)arg1 ;
-(SCNScene *)scnScene;
-(void)_scnSceneDidUpdate:(id)arg1 ;
@end
