/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DChartGetProjectedBoundsPipeline.h>

@class TSCH3DGetBoundsProjector;

@interface TSCH3DChartCacheableGetProjectedBoundsPipeline : TSCH3DChartGetProjectedBoundsPipeline {

	BOOL mUseIndividualBounds;
	BOOL mLayoutBoundsValid;
	box<glm::detail::tvec3<float> > mShadowsLayout3DBounds;
	box<glm::detail::tvec3<float> > mLayout3DBounds;
	box<glm::detail::tvec3<float> > mBodyLayout3DBounds;
	box<glm::detail::tvec3<float> > mConstantDepthBodyLayout3DBounds;
	TSCH3DGetBoundsProjector* mProjector;

}

@property (assign,nonatomic) BOOL useIndividualBounds; 
+(BOOL)includesDepthForUnitScaleForScene:(id)arg1 ;
+(void)setIncludesDepthForUnitScale:(BOOL)arg1 forScene:(id)arg2 ;
-(void)dealloc;
-(void)updateBounds;
-(id)initWithScene:(id)arg1 ;
-(BOOL)useIndividualBounds;
-(void)invalidateCachedBounds;
-(void)setUseIndividualBounds:(BOOL)arg1 ;
-(id)updatedConstantDepthSceneFromScene:(id)arg1 ;
-(box<glm::detail::tvec3<float> >)boundsFromObjectBoundsOfType:(int)arg1 ;
-(void)calculateLayoutBounds;
-(void)calculateBounds;
-(void)updateLayoutBounds;
-(void)updateRenderBounds;
-(void)calculateLayoutLabelsBounds;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1 ;
@end

