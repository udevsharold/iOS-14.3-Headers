/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLComputePipelineState;
@interface PyramidStageShared : NSObject {

	id<MTLComputePipelineState> _pipeline[2][3];
	id<MTLComputePipelineState> _rec709DownsamplePipelineState[6];

}
+(id)sharedInstance;
+(void)releaseSharedInstance;
+(id)getSharedInstanceOrRelease:(BOOL)arg1 ;
+(id)compileShader:(id)arg1 lumaWrite:(BOOL)arg2 chromaType:(int)arg3 ;
+(id)compileShader:(id)arg1 kernelType:(int)arg2 ;
+(BOOL)isRec709DownsampleSupported;
-(id)getPipeline:(id)arg1 lumaWrite:(BOOL)arg2 chromaType:(int)arg3 ;
-(id)getRec709DownsamplePipelineState:(id)arg1 kernelType:(int)arg2 ;
@end
