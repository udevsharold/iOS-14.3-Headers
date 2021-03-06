/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOGPU/IOGPU-Structs.h>
#import <Metal/_MTLDevice.h>

@protocol OS_dispatch_queue, OS_dispatch_source, MTLDeviceSPI;
@class NSObject, IOGPUMemoryInfo;

@interface IOGPUMetalDevice : _MTLDevice {

	IOGPUDeviceRef _deviceRef;
	unsigned _acceleratorPort;
	SCD_Struct_IO4* _storageCreateParams;
	IOGPUMetalCommandBufferStoragePool* _commandBufferStoragePool;
	unsigned _configBits;
	unsigned _deviceBits;
	unsigned long long _textureRam;
	unsigned long long _videoRam;
	unsigned long long _sharedMemorySize;
	unsigned _accelID;
	int _numCommandBuffers;
	unsigned long long _segmentByteThreshold;
	IOGPUMetalSuballocatorRef _buffer_suballocator;
	NSObject*<OS_dispatch_queue> _device_dispatch_queue;
	NSObject*<OS_dispatch_queue> _device_pool_cleanup_queue;
	NSObject*<OS_dispatch_source> _device_pool_cleanup_source;
	os_unfair_lock_s _device_pool_cleanup_lock;
	BOOL _device_pool_cleanup_scheduled;
	BOOL _device_pool_cleanup_requested;
	unsigned _fenceAllocatedCount;
	unsigned _fenceMaximumCount;
	unsigned _fenceBitmapSearchStart;
	unsigned _fenceBitmapCount;
	unsigned long long* _fenceAllocationBitmap;
	unsigned long long _registryID;
	id<MTLDeviceSPI> _deviceWrapper;

}

@property (readonly) id* hwResourcePools; 
@property (readonly) unsigned hwResourcePoolCount; 
@property (readonly) int numCommandBuffers;                                        //@synthesize numCommandBuffers=_numCommandBuffers - In the implementation block
@property (readonly) unsigned acceleratorPort;                                     //@synthesize acceleratorPort=_acceleratorPort - In the implementation block
@property (readonly) unsigned long long sharedMemorySize; 
@property (readonly) unsigned long long dedicatedMemorySize; 
@property (readonly) unsigned long long recommendedMaxWorkingSetSize; 
@property (readonly) unsigned long long registryID; 
@property (readonly) BOOL hasUnifiedMemory; 
@property (readonly) BOOL supportsVertexAmplification; 
@property (readonly) BOOL supportPriorityBand; 
@property (readonly) unsigned long long currentAllocatedSize; 
@property (readonly) IOGPUMemoryInfo * memoryInfo; 
+(void)registerDevices;
+(void)registerService:(unsigned)arg1 ;
-(void)_addResource:(id)arg1 ;
-(int)numCommandBuffers;
-(void)_purgeDevice;
-(void)setIndirectArgumentBufferDecodingData:(id)arg1 ;
-(id)newIndirectArgumentEncoderWithLayout:(id)arg1 ;
-(BOOL)supportsVertexAmplificationCount:(unsigned long long)arg1 ;
-(id)newFence;
-(void)setComputePipelineStateCommandShmemSize:(unsigned)arg1 ;
-(id)indirectArgumentBufferDecodingData;
-(BOOL)hasUnifiedMemory;
-(void)dealloc;
-(id)newArgumentEncoderWithLayout:(id)arg1 ;
-(void)kickCleanupQueue;
-(unsigned)initialDebugBufferShmemSize;
-(void)_removeResource:(id)arg1 ;
-(id)allocBufferSubDataWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 alignment:(unsigned long long)arg3 heapIndex:(short*)arg4 bufferIndex:(short*)arg5 bufferOffset:(unsigned long long*)arg6 ;
-(unsigned long long)maxBufferLength;
-(void)setSegmentListShmemSize:(unsigned)arg1 ;
-(unsigned long long)registryID;
-(unsigned long long)sharedMemorySize;
-(id)_deviceWrapper;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(void)updateResourcePoolPurgeability;
-(BOOL)supportPriorityBand;
-(unsigned long long)recommendedMaxWorkingSetSize;
-(void)setHwResourcePool:(id*)arg1 count:(int)arg2 ;
-(void)_setDeviceWrapper:(id)arg1 ;
-(IOGPUMemoryInfo *)memoryInfo;
-(id)newEvent;
-(unsigned)initialSegmentListShmemSize;
-(id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(unsigned)acceleratorPort;
-(id)newAccelerationStructureWithSize:(unsigned long long)arg1 ;
-(unsigned long long)currentAllocatedSize;
-(id)akResourceListPool;
-(id*)hwResourcePools;
-(id)initWithAcceleratorPort:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(BOOL)supportsVertexAmplification;
-(void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(unsigned long long)arg4 length:(unsigned long long)arg5 ;
-(IOGPUDeviceRef)deviceRef;
-(id)initWithAcceleratorPort:(unsigned)arg1 ;
-(BOOL)setResourcesPurgeableState:(id*)arg1 newState:(unsigned long long)arg2 oldState:(unsigned long long*)arg3 count:(int)arg4 ;
-(unsigned)hwResourcePoolCount;
-(unsigned)initialKernelCommandShmemSize;
-(id)akPrivateResourceListPool;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg1 ;
-(id)newIndirectArgumentBufferLayoutWithStructType:(id)arg1 ;
-(unsigned long long)dedicatedMemorySize;
@end

