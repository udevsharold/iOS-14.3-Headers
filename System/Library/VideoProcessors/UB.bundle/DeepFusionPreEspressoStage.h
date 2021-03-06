/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
#import <UB/UB-Structs.h>
@class DeepFusionPreEspressoKernels, FigMetalContext;

@interface DeepFusionPreEspressoStage : NSObject {

	id<MTLBuffer> _noiseParamBuffer;
	DeepFusionPreEspressoKernels* _kernels;
	FigMetalContext* _metalContext;

}
-(void)computeGlobalNoiseFactor:(id)arg1 totalGain:(float)arg2 synthRefFactor:(float*)arg3 synthLongFactor:(float*)arg4 ;
-(void)getLumaMaskTuning:(const NoiseEstimationParameters*)arg1 outTuning:(LumaMaskTuningParam*)arg2 ;
-(DeepFusionRawNoiseModelParameters)_createRawNoiseModelParameters:(const exposureParameters*)arg1 ;
-(DFSynthLongHighlightParameters)_createHighlightParameters:(const DeepFusionFrameMeta*)arg1 highlightTuning:(id)arg2 totalGain:(float)arg3 ;
-(void)getNoiseTuningParams:(const NoiseEstimationParameters*)arg1 fullDimension:(NoiseTuningParams*)arg2 ;
-(id)initWithContext:(id)arg1 deepFusionVersion:(int)arg2 ;
-(int)setEstimateNoiseParams:(NoiseEstimationParameters*)arg1 ;
-(int)estimateNoiseRefNoise:(id)arg1 synthLongNoise:(id)arg2 synthRefNoisePretuning:(id)arg3 synthLongNoisePretuning:(id)arg4 synthRefLuma:(id)arg5 synthRefChroma:(id)arg6 synthLongLuma:(id)arg7 synthLongChroma:(id)arg8 lscGains:(id)arg9 slFusionMap:(id)arg10 longFusionMap:(id)arg11 noiseEstimationParams:(NoiseEstimationParameters*)arg12 ;
-(int)yuvCopyAndBias:(id)arg1 chromaInput:(id)arg2 lumaOutput:(id)arg3 chromaOutput:(id)arg4 ;
-(int)yuvPlanarRGBToRGBA:(id)arg1 outRGBA:(id)arg2 ;
@end

