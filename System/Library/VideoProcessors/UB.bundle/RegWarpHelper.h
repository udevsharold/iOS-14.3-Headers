/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLComputePipelineState;
#import <UB/UB-Structs.h>
@class FigMetalContext;

@interface RegWarpHelper : NSObject {

	FigMetalContext* _metal;
	id<MTLComputePipelineState> _downsampleAndConvert10To8;

}
+(int)prewarmShaders:(id)arg1 ;
-(id)initWithMetal:(id)arg1 ;
-(int)convertInput10BitPixBuf:(CVBufferRef)arg1 downsampledOutput8BitPixBuf:(CVBufferRef)arg2 mtlCommandBuffer:(id)arg3 ;
@end
