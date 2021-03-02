/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DFramebufferTransformPipeline.h>

@class NSArray, TSCH3DResource;

@interface TSCH3DFramebufferCopyPipeline : TSCH3DFramebufferTransformPipeline {

	NSArray* mEffects;
	TSCH3DResource* mVertices;
	TSCH3DResource* mTexcoords;
	RenderState mRenderState;
	tmat4x4<float> mTransform;
	box<glm::detail::tvec2<int> > mTargetViewport;
	BOOL mWipeTarget;
	tvec4<float> mWipeColor;
	/*^block*/id mUpdateShaderEffectsStatesBlock;

}

@property (nonatomic,copy) NSArray * effects; 
@property (nonatomic,retain) TSCH3DResource * vertices; 
@property (nonatomic,retain) TSCH3DResource * texcoords; 
@property (assign,nonatomic) RenderState renderState; 
@property (assign,nonatomic) tmat4x4<float> transform; 
@property (assign,nonatomic) box<glm::detail::tvec2<int> > targetViewport; 
@property (assign,nonatomic) BOOL wipeTarget; 
@property (assign,nonatomic) tvec4<float> wipeColor; 
@property (nonatomic,copy) id updateShaderEffectsStatesBlock; 
-(tmat4x4<float>)transform;
-(void)setTransform:(tmat4x4<float>)arg1 ;
-(void)setVertices:(TSCH3DResource *)arg1 ;
-(void)dealloc;
-(TSCH3DResource *)vertices;
-(NSArray *)effects;
-(void)setEffects:(NSArray *)arg1 ;
-(RenderState)renderState;
-(void)setRenderState:(RenderState)arg1 ;
-(id)initWithProcessor:(id)arg1 session:(id)arg2 ;
-(void)transformFramebuffer;
-(BOOL)wipeTarget;
-(void)updateShaderEffectsStates;
-(box<glm::detail::tvec2<int> >)targetViewport;
-(TSCH3DResource *)texcoords;
-(void)setWipeColor:(tvec4<float>)arg1 ;
-(void)setTexcoords:(TSCH3DResource *)arg1 ;
-(void)setTargetViewport:(box<glm::detail::tvec2<int> >)arg1 ;
-(void)setWipeTarget:(BOOL)arg1 ;
-(tvec4<float>)wipeColor;
-(id)updateShaderEffectsStatesBlock;
-(void)setUpdateShaderEffectsStatesBlock:(id)arg1 ;
@end
