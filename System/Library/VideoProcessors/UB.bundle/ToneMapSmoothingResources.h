/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
#import <UB/UB-Structs.h>
@class FigMetalContext, NSArray;

@interface ToneMapSmoothingResources : NSObject {

	FigMetalContext* _metalContext;
	SCD_Struct_To53* _offsets;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _bytesRequired;
	unsigned long long _maxNPyramidLevels;
	NSArray* _referencePyramidOdd;
	NSArray* _referencePyramidEven;
	NSArray* _outputPyramidOdd;
	NSArray* _outputPyramidEven;
	id<MTLBuffer> _srlGlobalStatsBuffer;
	id<MTLBuffer> _srlFaceStatsBuffer;
	id<MTLBuffer> _srlCoeffsBuffer;
	id<MTLBuffer> _mstmTuningParams;
	id<MTLBuffer> _srlOnMSTMTuningParams;

}

@property (nonatomic,readonly) unsigned long long width;                          //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                         //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesRequired;                  //@synthesize bytesRequired=_bytesRequired - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNPyramidLevels;              //@synthesize maxNPyramidLevels=_maxNPyramidLevels - In the implementation block
@property (nonatomic,readonly) NSArray * referencePyramidOdd;                     //@synthesize referencePyramidOdd=_referencePyramidOdd - In the implementation block
@property (nonatomic,readonly) NSArray * referencePyramidEven;                    //@synthesize referencePyramidEven=_referencePyramidEven - In the implementation block
@property (nonatomic,readonly) NSArray * outputPyramidOdd;                        //@synthesize outputPyramidOdd=_outputPyramidOdd - In the implementation block
@property (nonatomic,readonly) NSArray * outputPyramidEven;                       //@synthesize outputPyramidEven=_outputPyramidEven - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> srlGlobalStatsBuffer;                //@synthesize srlGlobalStatsBuffer=_srlGlobalStatsBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> srlFaceStatsBuffer;                  //@synthesize srlFaceStatsBuffer=_srlFaceStatsBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> srlCoeffsBuffer;                     //@synthesize srlCoeffsBuffer=_srlCoeffsBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> mstmTuningParams;                    //@synthesize mstmTuningParams=_mstmTuningParams - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> srlOnMSTMTuningParams;               //@synthesize srlOnMSTMTuningParams=_srlOnMSTMTuningParams - In the implementation block
+(unsigned long long)calcBytesRequiredForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
+(unsigned long long)calcMaxNPyramidLevelsForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
+(unsigned long long)calcBytesRequiredAndOffsets:(SCD_Struct_To53*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)dealloc;
-(unsigned long long)bytesRequired;
-(id)initWithMetalContext:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(int)bindBuffer:(id)arg1 offset:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(id<MTLBuffer>)srlGlobalStatsBuffer;
-(id<MTLBuffer>)srlFaceStatsBuffer;
-(id<MTLBuffer>)srlCoeffsBuffer;
-(id<MTLBuffer>)mstmTuningParams;
-(id<MTLBuffer>)srlOnMSTMTuningParams;
-(NSArray *)referencePyramidOdd;
-(NSArray *)referencePyramidEven;
-(SCD_Struct_To54)computeSizeForOddEvenLevel:(unsigned long long)arg1 xDivisor:(unsigned long long)arg2 yDivisor:(unsigned long long)arg3 ;
-(NSArray *)outputPyramidOdd;
-(NSArray *)outputPyramidEven;
-(unsigned long long)maxNPyramidLevels;
@end
