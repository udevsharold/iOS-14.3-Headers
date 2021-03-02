/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <AppleDepth/ADExecutor.h>

@class ADMonocularPipeline, ADMonocularExecutorParameters;

@interface ADMonocularExecutor : ADExecutor {

	ADMonocularPipeline* _pipeline;
	CVBufferRef _itmCroppedScaledColor;
	CVBufferRef _itmRotatedColor;
	CVBufferRef _itmPreProcessedColor;
	CVBufferRef _itmUnprocessedDepth;
	CVBufferRef _itmPostProcessedDepth;
	ADMonocularExecutorParameters* _executorParameters;

}

@property (nonatomic,retain) ADMonocularExecutorParameters * executorParameters;              //@synthesize executorParameters=_executorParameters - In the implementation block
-(void)dealloc;
-(ADMonocularExecutorParameters *)executorParameters;
-(id)initWithInputPrioritization:(long long)arg1 ;
-(void)deallocateEspressoBuffers;
-(long long)allocateIntermediateBuffers;
-(long long)numberOfExecutionSteps;
-(void)setExecutorParameters:(ADMonocularExecutorParameters *)arg1 ;
-(id)getIntermediates;
-(long long)prepareForEngineType:(unsigned long long)arg1 roi:(CGRect)arg2 exifOrientation:(unsigned)arg3 rotationPreference:(unsigned long long)arg4 ;
-(long long)prepareForEngineType:(unsigned long long)arg1 roi:(CGRect)arg2 exifOrientation:(unsigned)arg3 ;
-(long long)executeWithColor:(CVBufferRef)arg1 outDepthMap:(_CVBuffer*)arg2 ;
@end
