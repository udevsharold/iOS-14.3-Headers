/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsDevice.h>

@protocol MTLRenderPipelineState, MTLDepthStencilState;
@class NSData, NSMutableArray;

@interface MTLGPUDebugDevice : MTLToolsDevice {

	MetalBufferHeap* bufferHeap;
	Options boundsCheckOptions;
	GPUDebugDeviceOptions deviceOptions;
	GPUDebugBufferDescriptorHeap* globalBufferHeap;
	GPUDebugConstantBufferCache* constantBufferCache;
	GlobalResidentBufferList* globalICBBufferResidentList;
	NSData* _boundsCheckOptionsData;
	NSMutableArray* _argumentDescriptors;
	once_flag _deviceInitFlag;
	once_flag _icbPipelineInit;
	id<MTLRenderPipelineState> _icbInheritVertexPipelineState;
	id<MTLRenderPipelineState> _icbInheritNoneVertexPipelineState;
	id<MTLRenderPipelineState> _icbInheritBuffersVertexPipelineState;
	id<MTLDepthStencilState> _icbDepthStencilState;

}

@property (nonatomic,readonly) id<MTLRenderPipelineState> ICB_Inherit_PSO_VertexPipelineState; 
@property (nonatomic,readonly) id<MTLRenderPipelineState> ICB_Inherit_None_VertexPipelineState; 
@property (nonatomic,readonly) id<MTLRenderPipelineState> ICB_Inherit_Buffers_VertexPipelineState; 
@property (nonatomic,readonly) id<MTLDepthStencilState> ICB_DepthStencilState; 
-(id)newLibraryWithFile:(id)arg1 error:(id*)arg2 ;
-(id)newCommandQueue;
-(BOOL)supportsRaytracing;
-(id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 gpuAddress:(unsigned long long)arg3 ;
-(id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id*)arg3 ;
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4 deallocator:(/*^block*/id)arg5 ;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newLibraryWithCIFiltersForComputePipeline:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT50*)arg2 error:(id*)arg3 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(BOOL)supportsGFXIndirectCommandBuffers;
-(BOOL)supportsBufferBoundsChecking;
-(id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)supportsBinaryArchives;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(id)newArgumentEncoderWithLayout:(id)arg1 ;
-(void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id*)arg3 ;
-(BOOL)supportsDynamicLibraries;
-(BOOL)supportsArgumentBuffersTier2;
-(id)newHeapWithDescriptor:(id)arg1 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportsCMPIndirectCommandBuffers;
-(id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT50*)arg2 error:(id*)arg3 ;
-(BOOL)supportsFunctionPointers;
-(id)newArgumentEncoderWithArguments:(id)arg1 structType:(id*)arg2 ;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newLibraryWithURL:(id)arg1 error:(id*)arg2 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newBufferWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(BOOL)supportsBinaryFunctionPointers;
-(id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT50*)arg2 error:(id*)arg3 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newLibraryWithData:(id)arg1 error:(id*)arg2 ;
-(id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newDefaultLibrary;
-(BOOL)supportsBinaryLibraries;
-(id)newArgumentEncoderWithArguments:(id)arg1 ;
-(id)newInternalBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)_modifyPluginData:(id)arg1 ;
-(void)_modifyCompileOptions:(unsigned long long*)arg1 ;
-(void)_modifyRenderPipelineDescriptor:(id)arg1 ;
-(void)_modifyComputePipelineDescriptor:(id)arg1 ;
-(void)_modifyTileRenderPipelineDescriptor:(id)arg1 ;
-(id)unwrapAndModifyRenderPipelineDescriptor:(id)arg1 options:(unsigned long long*)arg2 ;
-(void)onRenderPipelineCreated:(id)arg1 ;
-(id)unwrapAndModifyTileRenderPipelineDescriptor:(id)arg1 options:(unsigned long long*)arg2 ;
-(id)unwrapAndModifyComputePipelineDescriptor:(id)arg1 options:(unsigned long long*)arg2 ;
-(void)onComputePipelineCreated:(id)arg1 ;
-(id)newStageBufferArgumentEncoder;
-(id)newStageArgumentBuffer;
-(id<MTLRenderPipelineState>)ICB_Inherit_PSO_VertexPipelineState;
-(id<MTLRenderPipelineState>)ICB_Inherit_None_VertexPipelineState;
-(id<MTLRenderPipelineState>)ICB_Inherit_Buffers_VertexPipelineState;
-(id<MTLDepthStencilState>)ICB_DepthStencilState;
@end
