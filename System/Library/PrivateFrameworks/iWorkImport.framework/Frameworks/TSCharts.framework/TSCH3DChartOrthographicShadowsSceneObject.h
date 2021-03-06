/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DChartShadowsSceneObject.h>

@interface TSCH3DChartOrthographicShadowsSceneObject : TSCH3DChartShadowsSceneObject
+(id)blurParametersArray;
-(id)createShadowsRenderer;
-(id)createCamera;
-(void)updateShadowPlane:(id)arg1 texcoords:(id)arg2 scene:(id)arg3 blurslack:(float)arg4 angle:(float)arg5 quality:(float)arg6 planePadding:(box<glm::detail::tvec3<float> >)arg7 ;
-(void)updateCoordsAndTexcoords:(const box<glm::detail::tvec3<float> >*)arg1 zOffset:(float)arg2 cameraPosition:(const tvec3<float>*)arg3 quad:(id)arg4 texcoords:(id)arg5 ;
@end

