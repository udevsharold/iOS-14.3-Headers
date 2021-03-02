/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLRenderPipelineState, MTLComputePipelineState;
@interface RegDenseShaders : NSObject {

	id<MTLRenderPipelineState> _confPipeline;
	id<MTLComputePipelineState> _warpPipeline;
	id<MTLComputePipelineState> _warpWithConfidencePipeline;
	id<MTLComputePipelineState> _warpWithBlendingWeightPipeline;
	id<MTLComputePipelineState> _warpAdditionalFrameWithBlendingWeightPipeline;
	id<MTLComputePipelineState> _getBlendingWeightPipeline;
	id<MTLComputePipelineState> _getBlendingWeightLowLightPipeline;

}
-(id)initWithMetal:(id)arg1 ;
@end
