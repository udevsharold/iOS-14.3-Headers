/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DSceneRenderCacheObject.h>

@class TSCH3DStrokePatternTexture;

@interface TSCH3DPrefilteredLineRendererRenderCacheObject : TSCH3DSceneRenderCacheObject {

	TSCH3DStrokePatternTexture* mStrokeTexture;
	BOOL mDidRenderOnce;

}

@property (assign,nonatomic) BOOL didRenderOnce; 
-(id)init;
-(void)dealloc;
-(id)p_box;
-(void)allocateDynamicResourcesIntoArray:(id)arg1 ;
-(id)p_geometry;
-(id)p_texcoords;
-(id)p_normals;
-(id)p_diffuseTexcoords;
-(id)p_originalGeometry;
-(void)submitResourcesWithLineRenderer:(id)arg1 setting:(id)arg2 ;
-(void)renderWithLineRenderer:(id)arg1 setting:(id)arg2 fromVertex:(const PrefilteredLineVertexProperties*)arg3 toVertex:(const PrefilteredLineVertexProperties*)arg4 ;
-(BOOL)didRenderOnce;
-(void)setDidRenderOnce:(BOOL)arg1 ;
@end

