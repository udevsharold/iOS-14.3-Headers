/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SidecarWriter;
#import <UB/UB-Structs.h>
@class FigMetalContext, SyntheticLongShaders;

@interface SyntheticLongStage : NSObject {

	FigMetalContext* _metal;
	SyntheticLongShaders* _shaders;
	id<SidecarWriter> _sidecarWriter;

}

@property (assign,nonatomic,__weak) id<SidecarWriter> sidecarWriter;              //@synthesize sidecarWriter=_sidecarWriter - In the implementation block
+(int)prewarmShaders:(id)arg1 ;
+(int)_fillConstants:(SyntheticLongFuseBandsConsts*)arg1 slPlist:(id)arg2 ev0ExposureParams:(const exposureParameters*)arg3 ;
+(int)_fillConstantsForBand:(int)arg1 consts:(SyntheticLongFuseBandsConsts*)arg2 slPlist:(id)arg3 ev0ExposureParams:(const exposureParameters*)arg4 ;
-(void)dealloc;
-(id)initWithMetalContext:(id)arg1 ;
-(void)purgeResources;
-(int)pyramidDownscale:(id)arg1 cscParams:(const ColorSpaceConversionParameters*)arg2 ;
-(void)setSidecarWriter:(id<SidecarWriter>)arg1 ;
-(int)doSyntheticLongWithBands:(id)arg1 slFuseEv0Plist:(id)arg2 slFuseLongPlist:(id)arg3 slParameters:(const SyntheticLongParameters*)arg4 intermediatePyramid:(id)arg5 fusedPyramid:(id)arg6 noiseDivisorTex:(id)arg7 realLongNoiseDivisorTex:(id)arg8 lscGainsTex:(id)arg9 intermediateMetadata:(id)arg10 ;
-(id<SidecarWriter>)sidecarWriter;
-(int)_fuseEv0s:(id)arg1 slParameters:(const SyntheticLongParameters*)arg2 slPlist:(id)arg3 lscGainsTex:(id)arg4 outputPyramid:(id)arg5 outputWeightsPyramid:(id)arg6 noiseDivisorTex:(id)arg7 ;
-(int)_fuseInLong:(id)arg1 slParameters:(const SyntheticLongParameters*)arg2 slPlist:(id)arg3 lscGainsTex:(id)arg4 fusedEv0sPyramid:(id)arg5 outputFusedPyramid:(id)arg6 noiseDivisorTex:(id)arg7 realLongNoiseDivisorTex:(id)arg8 ;
-(int)_doEv0sPlusRealLongWithBands:(id)arg1 slFuseEv0Plist:(id)arg2 slFuseLongPlist:(id)arg3 slParameters:(const SyntheticLongParameters*)arg4 intermediatePyramid:(id)arg5 fusedPyramid:(id)arg6 noiseDivisorTex:(id)arg7 realLongNoiseDivisorTex:(id)arg8 lscGainsTex:(id)arg9 intermediateMetadata:(id)arg10 ;
@end

