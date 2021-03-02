/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <AppleDepth/ADExecutor.h>

@class ADPearlColorPipeline, ADPearlColorExecutorParameters;

@interface ADPearlColorExecutor : ADExecutor {

	BOOL _isPrepared;
	ADPearlColorPipeline* _pipeline;
	CVBufferRef _itmCroppedScaledColor;
	CVBufferRef _itmRotatedColor;
	CVBufferRef _itmPreProcessedColor;
	CVBufferRef _itmCroppedScaledDisparity;
	CVBufferRef _itmRotatedDisparity;
	CVBufferRef _itmPreProcessedDisparity;
	CVBufferRef _itmUnprocessedOutputDisparity;
	ADPearlColorExecutorParameters* _executorParameters;

}

@property (nonatomic,copy) ADPearlColorExecutorParameters * executorParameters;              //@synthesize executorParameters=_executorParameters - In the implementation block
-(id)init;
-(void)dealloc;
-(ADPearlColorExecutorParameters *)executorParameters;
-(void)deallocateEspressoBuffers;
-(long long)allocateIntermediateBuffers;
-(long long)numberOfExecutionSteps;
-(void)setExecutorParameters:(ADPearlColorExecutorParameters *)arg1 ;
-(id)getIntermediates;
-(long long)prepareForEngineType:(unsigned long long)arg1 inputColorROI:(CGRect)arg2 ;
-(long long)executeWithDisparity:(CVBufferRef)arg1 color:(CVBufferRef)arg2 outDisparity:(_CVBuffer*)arg3 ;
@end
