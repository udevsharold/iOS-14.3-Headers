/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/MattingV2.bundle/MattingV2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPSImageSpatioTemporalGuidedFilterDescriptor, MPSImageSpatioTemporalGuidedFilter, NSMutableArray, NSNumber, NSMutableDictionary;

@interface SemanticOutputCollection : NSObject {

	MPSImageSpatioTemporalGuidedFilterDescriptor* _spatioTemporalFilterDescriptor;
	BOOL _useDepthFilter;
	MPSImageSpatioTemporalGuidedFilter* _spatioTemporalFilter;
	NSMutableArray* _semanticOutputs;
	NSNumber* _iterations;
	NSMutableDictionary* __sourceTextures;
	NSMutableDictionary* __destinationTextures;

}

@property (nonatomic,retain) MPSImageSpatioTemporalGuidedFilter * spatioTemporalFilter;              //@synthesize spatioTemporalFilter=_spatioTemporalFilter - In the implementation block
@property (nonatomic,retain) NSMutableArray * semanticOutputs;                                       //@synthesize semanticOutputs=_semanticOutputs - In the implementation block
@property (nonatomic,retain) NSNumber * iterations;                                                  //@synthesize iterations=_iterations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _sourceTextures;                                  //@synthesize _sourceTextures=__sourceTextures - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _destinationTextures;                             //@synthesize _destinationTextures=__destinationTextures - In the implementation block
@property (assign,nonatomic) BOOL useDepthFilter;                                                    //@synthesize useDepthFilter=_useDepthFilter - In the implementation block
-(id)init;
-(int)allocateResources:(id)arg1 ;
-(id)description;
-(NSNumber *)iterations;
-(void)setIterations:(NSNumber *)arg1 ;
-(void)setSemanticOutputs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)semanticOutputs;
-(BOOL)isCompatibleWith:(id)arg1 ;
-(BOOL)useDepthFilter;
-(void)setUseDepthFilter:(BOOL)arg1 ;
-(void)setSpatioTemporalFilter:(MPSImageSpatioTemporalGuidedFilter *)arg1 ;
-(MPSImageSpatioTemporalGuidedFilter *)spatioTemporalFilter;
-(BOOL)add:(id)arg1 with:(id)arg2 ;
-(NSMutableDictionary *)_sourceTextures;
-(void)set_sourceTextures:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)_destinationTextures;
-(void)set_destinationTextures:(NSMutableDictionary *)arg1 ;
@end
