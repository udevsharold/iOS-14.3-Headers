/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSMatrixSum : MPSKernel {

	BOOL _transpose;
	int _neuronType;
	float _neuronA;
	float _neuronB;
	float _neuronC;
	unsigned long long _rows;
	unsigned long long _columns;
	unsigned long long _count;
	MPSImageCoordinate _resultMatrixOrigin;

}

@property (assign,nonatomic) int neuronType;                                     //@synthesize neuronType=_neuronType - In the implementation block
@property (assign,nonatomic) float neuronA;                                      //@synthesize neuronA=_neuronA - In the implementation block
@property (assign,nonatomic) float neuronB;                                      //@synthesize neuronB=_neuronB - In the implementation block
@property (assign,nonatomic) float neuronC;                                      //@synthesize neuronC=_neuronC - In the implementation block
@property (nonatomic,readonly) unsigned long long rows;                          //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;                       //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                         //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) BOOL transpose;                                   //@synthesize transpose=_transpose - In the implementation block
@property (assign,nonatomic) MPSImageCoordinate resultMatrixOrigin;              //@synthesize resultMatrixOrigin=_resultMatrixOrigin - In the implementation block
@property (nonatomic,readonly) float neuronParameterA; 
@property (nonatomic,readonly) float neuronParameterB; 
@property (nonatomic,readonly) float neuronParameterC; 
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(unsigned long long)rows;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)columns;
-(float)neuronParameterC;
-(void)encodeToCommandBuffer:(id)arg1 encoder:(id)arg2 sourceMatrices:(id)arg3 resultMatrix:(id)arg4 scaleVector:(id)arg5 offsetVector:(id)arg6 biasVector:(id)arg7 startIndex:(unsigned long long)arg8 ;
-(float)neuronA;
-(float)neuronB;
-(float)neuronC;
-(BOOL)transpose;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4 ;
-(int)neuronType;
-(float)neuronParameterA;
-(MPSImageCoordinate)resultMatrixOrigin;
-(unsigned long long)count;
-(float)neuronParameterB;
-(void)setNeuronA:(float)arg1 ;
-(void)setNeuronC:(float)arg1 ;
-(void)setNeuronB:(float)arg1 ;
-(void)setNeuronType:(int)arg1 ;
-(id)initWithDevice:(id)arg1 count:(unsigned long long)arg2 rows:(unsigned long long)arg3 columns:(unsigned long long)arg4 transpose:(BOOL)arg5 ;
-(void)setResultMatrixOrigin:(MPSImageCoordinate)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrices:(id)arg2 resultMatrix:(id)arg3 scaleVector:(id)arg4 offsetVector:(id)arg5 biasVector:(id)arg6 startIndex:(unsigned long long)arg7 ;
@end
