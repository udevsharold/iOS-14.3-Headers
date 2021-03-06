/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNNGradientState.h>

@class MPSCNNLossLabels;

@interface MPSNNLossGradientState : MPSNNGradientState {

	float _weight;
	float _labelSmoothing;
	float _epsilon;
	float _delta;
	MPSCNNLossLabels* _lossLabels;

}
+(id)temporaryStateWithCommandBuffer:(id)arg1 ;
-(void)dealloc;
-(id)initWithResource:(id)arg1 ;
-(id)debugDescription;
@end

