/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@interface SBFCARendererImpl : NSObject
+(id)renderMaterialImage:(CGImageRef)arg1 recipeName:(id)arg2 containingBundle:(id)arg3 weighting:(double)arg4 downsampleFactor:(double)arg5 ;
+(id)luminanceTreatmentFilters;
+(id)_actuallyRenderImage:(CGImageRef)arg1 requiresBGRA:(BOOL)arg2 downsampleFactor:(double)arg3 layerCustomizer:(/*^block*/id)arg4 ;
+(id)renderTreatedWallpaperImage:(CGImageRef)arg1 needsLuminanceTreatment:(BOOL)arg2 needsDimmingTreatment:(BOOL)arg3 downsampleFactor:(double)arg4 averageColor:(id)arg5 ;
@end

