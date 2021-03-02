/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsCommandBuffer.h>

@class MTLCountersTraceCommandBuffer;

@interface MTLCountersCommandBuffer : MTLToolsCommandBuffer {

	MTLCountersTraceCommandBuffer* _traceBuffer;

}

@property (nonatomic,readonly) MTLCountersTraceCommandBuffer * traceBuffer;              //@synthesize traceBuffer=_traceBuffer - In the implementation block
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(void)presentDrawable:(id)arg1 ;
-(id)blitCommandEncoderWithDescriptor:(id)arg1 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(void)waitUntilScheduled;
-(void)dealloc;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(id)resourceStateCommandEncoderWithDescriptor:(id)arg1 ;
-(void)waitUntilCompleted;
-(void)addPurgedHeap:(id)arg1 ;
-(id)computeCommandEncoderWithDescriptor:(id)arg1 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)resourceStateCommandEncoder;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)blitCommandEncoder;
-(id)computeCommandEncoder;
-(void)addPurgedResource:(id)arg1 ;
-(MTLCountersTraceCommandBuffer *)traceBuffer;
-(id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 ;
@end
