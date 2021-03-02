/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCH3DScene, TSCH3DCamera, TSCH3DChartScenePropertyAccessor;

@interface TSCH3DLabelsRendererTransforms : NSObject {

	TSCH3DScene* mScene;
	TSCH3DCamera* mCamera;
	TSCH3DChartScenePropertyAccessor* mAccessor;
	tmat4x4<float> mProjector;
	tmat4x4<float> mUnitToWorld;
	tmat4x4<float> mStageToWorld;
	tmat4x4<float> mWorldToStage;
	bitset<5> mValidBits;

}

@property (nonatomic,retain) TSCH3DScene * scene; 
@property (nonatomic,retain) TSCH3DCamera * camera; 
+(id)transforms;
-(TSCH3DCamera *)camera;
-(void)setCamera:(TSCH3DCamera *)arg1 ;
-(tvec3<float>)samples;
-(tvec3<float>)projectPoint:(const tvec3<float>*)arg1 ;
-(void)dealloc;
-(void)setScene:(TSCH3DScene *)arg1 ;
-(TSCH3DScene *)scene;
-(id)accessor;
-(void)resetWithScene:(id)arg1 camera:(id)arg2 ;
-(const tmat4x4<float>*)unitToWorld;
-(const tmat4x4<float>*)worldToStage;
-(const tmat4x4<float>*)p_stageToWorld;
-(const tmat4x4<float>*)p_projector;
@end
