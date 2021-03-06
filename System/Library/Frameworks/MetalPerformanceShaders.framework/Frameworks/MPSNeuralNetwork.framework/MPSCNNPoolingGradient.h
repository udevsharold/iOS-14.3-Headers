/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@interface MPSCNNPoolingGradient : MPSCNNGradientKernel {

	MPSImageCoordinate _sourceSize;

}

@property (assign,nonatomic) MPSImageCoordinate sourceSize;              //@synthesize sourceSize=_sourceSize - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(unsigned long long)maxBatchSize;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(MPSImageCoordinate)sourceSize;
-(void)setKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 strideInPixelsX:(unsigned long long)arg3 strideInPixelsY:(unsigned long long)arg4 ;
-(void)setSourceSize:(MPSImageCoordinate)arg1 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

