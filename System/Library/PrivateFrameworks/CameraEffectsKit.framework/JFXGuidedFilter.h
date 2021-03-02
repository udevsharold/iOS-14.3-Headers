/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class MPSImageGuidedFilter;

@interface JFXGuidedFilter : NSObject {

	MPSImageGuidedFilter* _osGuidedFilter;
	BOOL _useCPU;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	CVPixelBufferPoolRef _coeffPool;
	CVMetalTextureCacheRef _textureCache;
	unsigned long long _guideImageWidth;
	unsigned long long _guideImageHeight;

}
-(void)dealloc;
-(id)initWithDiameter:(int)arg1 ;
-(void)scaleImage:(CVBufferRef)arg1 guidanceImage:(CVBufferRef)arg2 destinationImage:(CVBufferRef)arg3 ;
@end
