/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNBlock.h>

@class MPSCNNBinaryConvolution;

@interface VCPCNNConvBlockBinary : VCPCNNBlock {

	int _filterSize;
	int _filterNum;
	unsigned* _filterWeightsBinary;
	int _filterWeightSize;
	float* _filterScaling;
	float* _bias;
	int _padding;
	unsigned long long _convType;
	BOOL _reLU;
	MPSCNNBinaryConvolution* _mpsBinaryConv;

}
-(void)dealloc;
-(int)forward;
-(BOOL)supportGPU;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)fillConvWeightsGPU;
-(int)gpuForward;
-(BOOL)useGPU;
-(id)initWithParameters:(int)arg1 filterNum:(int)arg2 convType:(unsigned long long)arg3 reLU:(BOOL)arg4 padding:(BOOL)arg5 ;
@end

