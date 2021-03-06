/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DSceneRenderPipeline.h>
#import <TSCharts/TSCH3DSceneObjectDelegator.h>

@class TSCH3DRayPickPipelineDelegate, NSArray, TSCH3DPickedPoint;

@interface TSCH3DRayPickPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator> {

	tvec2<float> mPickPosition;
	TSCH3DRayPickPipelineDelegate* mSceneObjectDelegate;

}

@property (nonatomic,readonly) NSArray * pickedPoints; 
@property (nonatomic,readonly) TSCH3DPickedPoint * pickedPoint; 
@property (assign,nonatomic) float slack; 
+(id)pipelineWithScene:(id)arg1 position:(const tvec2<float>*)arg2 ;
-(BOOL)run;
-(void)dealloc;
-(float)slack;
-(id)initWithScene:(id)arg1 position:(const tvec2<float>*)arg2 ;
-(void)rayPick:(id)arg1 ;
-(id)p_renderProcessor;
-(NSArray *)pickedPoints;
-(id)p_unsortedPickedPoints;
-(void)setSlack:(float)arg1 ;
-(id)p_closestPickedPoint;
-(id)p_frontMostPickedPoint;
-(id)makeDelegateWithScene:(id)arg1 ;
-(id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2 ;
-(TSCH3DPickedPoint *)pickedPoint;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1 ;
@end

