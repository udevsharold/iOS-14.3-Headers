/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <UB/UB-Structs.h>
@class NSObject;

@interface RegWarpPP : NSObject {

	rwppRegistrationEngineS* _regEng;
	BOOL _resourcesAllocated;
	BOOL _usesExternalMemory;
	NSObject*<OS_dispatch_queue> _mtQueue;
	NSObject*<OS_dispatch_group> _mtGroup;

}
+(int)CheckParameters:(SCD_Struct_Re44*)arg1 imageWidth:(unsigned)arg2 imageHeight:(unsigned)arg3 imageFormat:(unsigned)arg4 ;
+(unsigned)getMaxNumCorners;
+(unsigned)computeExternalMemoryBlockSize:(SCD_Struct_Re44*)arg1 imageWidth:(unsigned)arg2 imageHeight:(unsigned)arg3 imageFormat:(unsigned)arg4 ;
+(void)getDefaults:(SCD_Struct_Re44*)arg1 ;
+(int)convertFromImageSizeToUnity:(SCD_Struct_Re45*)arg1 inMatrix:(SCD_Struct_Re45*)arg2 imgWidth:(unsigned long long)arg3 imgHeight:(unsigned long long)arg4 ;
+(int)convertFromUnityToImageSize:(SCD_Struct_Re45*)arg1 inMatrix:(SCD_Struct_Re45*)arg2 imgWidth:(unsigned long long)arg3 imgHeight:(unsigned long long)arg4 ;
-(void)dealloc;
-(void)releaseResources;
-(int)processParameters:(CGRect*)arg1 inputImage:(CVBufferRef)arg2 ;
-(void)constructPyramid:(CVBufferRef)arg1 selector:(unsigned)arg2 mapping:(SCD_Struct_Re46*)arg3 level0Only:(BOOL)arg4 ;
-(id)initWithParms:(unsigned char)arg1 config:(SCD_Struct_Re44*)arg2 dispatchQueue:(id)arg3 ;
-(int)allocateResources:(unsigned)arg1 imageHeight:(unsigned)arg2 imageFormat:(unsigned)arg3 externalMemory:(void*)arg4 externalMemorySize:(unsigned)arg5 ;
-(int)calculateHistEqLUT:(SCD_Struct_Re46*)arg1 fromHistogram:(SCD_Struct_Re47*)arg2 ;
-(int)calculateTotalCornerStrength:(CVBufferRef)arg1 regionOfInterest:(CGRect*)arg2 mapping:(SCD_Struct_Re46*)arg3 outTotalCornerStrength:(float*)arg4 ;
-(int)processReference:(CVBufferRef)arg1 regionOfInterest:(CGRect*)arg2 numKeypoints:(unsigned*)arg3 mapping:(SCD_Struct_Re46*)arg4 ;
-(int)getReferenceKeypoints:(NoiseModel*)arg1 ;
-(int)processNonReference:(CVBufferRef)arg1 seedTransform:(SCD_Struct_Re45*)arg2 outputTransform:(SCD_Struct_Re45*)arg3 mapping:(SCD_Struct_Re46*)arg4 ;
-(int)getNonReferenceKeypoints:(NoiseModel*)arg1 ;
-(int)getNormalizedPoints:(SCD_Struct_Re48*)arg1 numPairs:(unsigned*)arg2 ;
@end
