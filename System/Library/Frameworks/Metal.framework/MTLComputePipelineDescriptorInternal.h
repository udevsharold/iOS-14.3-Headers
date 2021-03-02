/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineDescriptor.h>

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {

	MTLComputePipelineDescriptorPrivate _private;

}
-(void)setSupportAddingBinaryFunctions:(BOOL)arg1 ;
-(id)functionPointerGroups;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)stageInputDescriptor;
-(BOOL)validateWithDevice:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)setPipelineLibrary:(id)arg1 ;
-(void)setTextureWriteFPRoundingMode:(long long)arg1 ;
-(BOOL)needsCustomBorderColorSamplers;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(void)setMaxStackCallDepth:(unsigned long long)arg1 ;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(void)setInsertLibraries:(id)arg1 ;
-(id)computeFunction;
-(void)setBinaryArchives:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)openGLModeEnabled;
-(long long)textureWriteFPRoundingMode;
-(void)setOpenGLModeEnabled:(BOOL)arg1 ;
-(void)reset;
-(void)setFunctionPointers:(id)arg1 ;
-(void)setNeedsCustomBorderColorSamplers:(BOOL)arg1 ;
-(void)setDynamicLibraries:(id)arg1 ;
-(void)dealloc;
-(id)newSerializedComputeDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)pluginData;
-(void)setTextureWriteRoundingMode:(long long)arg1 ;
-(id)binaryArchives;
-(void)setPluginData:(id)arg1 ;
-(BOOL)supportIndirectCommandBuffers;
-(void)setSupportIndirectCommandBuffers:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)newSerializedComputeData;
-(void)validateWithDevice:(id)arg1 ;
-(void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1 ;
-(id)dynamicLibraries;
-(id)description;
-(void)setFunctionPointerGroups:(id)arg1 ;
-(id)buffers;
-(long long)textureWriteRoundingMode;
-(BOOL)isEqual:(id)arg1 ;
-(id)functionPointers;
-(void)setStageInputDescriptor:(id)arg1 ;
-(BOOL)supportAddingBinaryFunctions;
-(id)linkedFunctions;
-(void)setLabel:(id)arg1 ;
-(void)setDriverCompilerOptions:(id)arg1 ;
-(void)setComputeFunction:(id)arg1 ;
-(id)insertLibraries;
-(void)setOpenCLModeEnabled:(BOOL)arg1 ;
-(BOOL)forceResourceIndex;
-(const MTLComputePipelineDescriptorPrivate*)_descriptorPrivate;
-(void)setLinkedFunctions:(id)arg1 ;
-(void)setMaxCallStackDepth:(unsigned long long)arg1 ;
-(id)driverCompilerOptions;
-(unsigned long long)maxStackCallDepth;
-(BOOL)openCLModeEnabled;
-(void)setBinaryLibraries:(id)arg1 ;
-(id)pipelineLibrary;
-(id)label;
-(unsigned long long)maxCallStackDepth;
-(BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
-(unsigned long long)resourceIndex;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg1 ;
-(id)binaryLibraries;
@end
