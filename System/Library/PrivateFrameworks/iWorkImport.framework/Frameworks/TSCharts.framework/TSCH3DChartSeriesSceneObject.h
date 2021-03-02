/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DChartElementSceneObject.h>

@interface TSCH3DChartSeriesSceneObject : TSCH3DChartElementSceneObject
+(float)depthLimitFactorForSeriesCount:(long long)arg1 maxLimitingSeries:(long long)arg2 ;
+(Class)propertiesClass;
+(BOOL)shouldCreateMeshSeriesStorage;
+(float)chartSeriesPolygonOffset;
+(id)createBoundsForSeries:(id)arg1 ;
-(float)chartMinZForScene:(id)arg1 ;
-(float)depthForScene:(id)arg1 ;
-(void)sortElements:(id*)arg1 pipeline:(id)arg2 ;
-(BOOL)shouldRenderSeries:(id)arg1 ;
-(void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4 ;
-(void)updateElementEffectsStates:(id)arg1 depthToWidthRatio:(float)arg2 ;
-(void)prerenderElement:(id)arg1 ;
-(void)postrenderElement:(id)arg1 ;
-(BOOL)transparencyDepthMask;
-(void)updateTilingEffect:(TexCoordTilingShaderEffectState*)arg1 properties:(id)arg2 textureTiling:(id)arg3 size:(tvec3<float>*)arg4 ;
-(float)shadowCameraDepthLimitAdjustmentFactorForScene:(id)arg1 ;
@end
