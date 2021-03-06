/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDeviceSPI, MTLLibrary;
#import <HDRProcessing/HDRProcessing-Structs.h>
@class ResamplerShader;

@interface SpatialResampler : NSObject {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _defaultLibrary;
	ResamplerShader* _verticalResampleKernel;
	ResamplerShader* _verticalResampleChromaKernel;
	ResamplerShader* _horizontalResampleKernel;

}
-(id)initWithDevice:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 input:(IOSurfaceRef)arg2 output:(IOSurfaceRef)arg3 ;
-(void)createKernels;
-(id)getComputePipeLineStateForShader:(id)arg1 ;
-(void)setupTextures:(id)arg1 input:(IOSurfaceRef)arg2 output:(IOSurfaceRef)arg3 ;
-(void)encodeSpatialResampleVertical:(id)arg1 Input:(id)arg2 Output:(id)arg3 isChroma:(BOOL)arg4 ;
-(void)encodeSpatialResampleHorizontal:(id)arg1 Input:(id)arg2 Output:(id)arg3 ;
@end

