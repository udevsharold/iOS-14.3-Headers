/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPSNNPadding;
#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
@class NSMutableArray, MPSNNImageNode, NSString, MPSNNStateNode, NSArray;

@interface MPSNNFilterNode : NSObject {

	NSMutableArray* _sourceImages;
	NSMutableArray* _sourceStates;
	MPSNNImageNode* _resultImage;
	NSMutableArray* _resultStates;
	id<MPSNNPadding> _paddingPolicy;
	NSString* _label;

}

@property (nonatomic,readonly) MPSNNImageNode * resultImage;              //@synthesize resultImage=_resultImage - In the implementation block
@property (nonatomic,readonly) MPSNNStateNode * resultState; 
@property (nonatomic,readonly) NSArray * resultStates; 
@property (nonatomic,retain) id<MPSNNPadding> paddingPolicy;              //@synthesize paddingPolicy=_paddingPolicy - In the implementation block
@property (copy) NSString * label;                                        //@synthesize label=_label - In the implementation block
-(id)debugQuickLookObject;
-(id)sourceImages;
-(id)sourceStates;
-(id<MPSNNPadding>)paddingPolicy;
-(id)resultStatesNoAllocate;
-(id)trainingGraphWithSourceGradient:(id)arg1 nodeHandler:(/*^block*/id)arg2 ;
-(id)gradientFiltersWithSource:(id)arg1 ;
-(void)setPaddingPolicy:(id<MPSNNPadding>)arg1 ;
-(NSArray *)resultStates;
-(void)dealloc;
-(void)setLabel:(NSString *)arg1 ;
-(id)debugDescription;
-(id)initWithSourceImages:(id)arg1 sourceStates:(id)arg2 paddingPolicy:(id)arg3 ;
-(FilterGraphNodeRef)newFilterNode;
-(id)gradientFilterWithSource:(id)arg1 ;
-(Class)gradientClass;
-(MPSNNStateNode *)resultState;
-(NSString *)label;
-(id)gradientFilterWithSources:(id)arg1 ;
-(id)gradientFiltersWithSources:(id)arg1 ;
-(MPSNNImageNode *)resultImage;
@end

