/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLComputePipelineState, MTLFunction;
@interface SCNMTLComputePipeline : NSObject {

	id<MTLComputePipelineState> _state;
	id<MTLFunction> _computeFunction;

}

@property (nonatomic,retain) id<MTLComputePipelineState> state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) id<MTLFunction> computeFunction;                //@synthesize computeFunction=_computeFunction - In the implementation block
-(id)init;
-(id<MTLFunction>)computeFunction;
-(void)dealloc;
-(id<MTLComputePipelineState>)state;
-(id)description;
-(void)setComputeFunction:(id<MTLFunction>)arg1 ;
-(void)setState:(id<MTLComputePipelineState>)arg1 ;
@end
