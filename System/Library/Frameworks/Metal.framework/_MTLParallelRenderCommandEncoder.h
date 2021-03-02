/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLParallelRenderCommandEncoder.h>

@protocol MTLDevice, MTLCommandQueue, MTLCommandBuffer, MTLFence;
@class _MTLCommandBuffer, MTLRenderPassDescriptor, NSMutableArray, NSString;

@interface _MTLParallelRenderCommandEncoder : _MTLObjectWithLabel <MTLParallelRenderCommandEncoder> {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _queue;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;
	_MTLCommandBuffer*<MTLCommandBuffer> _commandBuffer;
	MTLRenderPassDescriptor* _renderPassDescriptor;
	opaque_pthread_mutex_t _lock;
	unsigned long long _commandBuffersSize;
	unsigned long long _commandBuffersCount;
	id* _commandBuffers;
	BOOL _retainedReferences;
	BOOL _StatEnabled;
	unsigned long long _numThisEncoder;
	id<MTLFence> _progressFence;
	BOOL _needsFrameworkAssistedErrorTracking;
	NSMutableArray* _debugSignposts;

}

@property (readonly) unsigned long long globalTraceObjectID;                        //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (getter=getType,nonatomic,readonly) unsigned long long type; 
@property (readonly) id<MTLDevice> device;                                          //@synthesize device=_device - In the implementation block
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)popDebugGroup;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)renderCommandEncoder;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(void)initializeEnhancedCommandBufferErrors;
-(id)_renderCommandEncoderCommon;
-(unsigned long long)getDriverUniqueID;
-(id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2 ;
-(id)sampledRenderCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2 ;
-(void)preEndEncoding;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)dealloc;
-(id<MTLDevice>)device;
-(unsigned long long)globalTraceObjectID;
-(NSString *)description;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)commandBuffer;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1 ;
-(BOOL)isMemorylessRender;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)endEncoding;
@end
