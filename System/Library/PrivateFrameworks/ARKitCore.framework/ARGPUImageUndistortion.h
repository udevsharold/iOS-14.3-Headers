/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState, MTLTexture;
#import <ARKitCore/ARKitCore-Structs.h>
@interface ARGPUImageUndistortion : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _pipelineState;
	id<MTLComputePipelineState> _lutGenerationPipelineState;
	id<MTLTexture> _lut;
	SCD_Struct_AR25 _fisheyeIntrinsics;
	 _fisheyeRadialCoefficients;
	SCD_Struct_AR25 _rectilinearIntrinsics;

}
-(id)init;
-(void)undistortFisheyeImage:(CVBufferRef)arg1 withFisheyeIntrinsics:(SCD_Struct_AR25)arg2 withFisheyeRadialCoefficients:(_CVBuffer*)arg3 toRectilinearImage:(SCD_Struct_AR25)arg4 ;
@end

