/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOGPU/IOGPU-Structs.h>
#import <Metal/_MTLResource.h>
#import <libobjc.A.dylib/MTLResourceSPI.h>

@class NSString;

@interface IOGPUMetalResource : _MTLResource <MTLResourceSPI> {

	IOGPUMetalResource* _res;
	IOGPUMetalResource* next;
	IOGPUMetalResource* prev;
	unsigned long long uniqueId;

}

@property (readonly) _IOGPUResource* resourceRef; 
@property (nonatomic,readonly) void* virtualAddress; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (nonatomic,readonly) unsigned resourceID; 
@property (nonatomic,readonly) unsigned long long resourceSize; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (readonly) unsigned long long allocatedSize; 
@property (readonly) unsigned long long protectionOptions; 
@property (readonly) unsigned long long heapOffset; 
@property (assign) int responsibleProcess; 
@property (readonly) unsigned long long allocationID; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLHeap> heap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)hazardTrackingMode;
-(unsigned long long)gpuAddress;
-(unsigned long long)resourceOptions;
-(unsigned long long)storageMode;
-(unsigned long long)cpuCacheMode;
-(id<MTLHeap>)heap;
-(CFArrayRef)copyAnnotations;
-(void)makeAliasable;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1 ;
-(unsigned long long)allocationID;
-(unsigned long long)unfilteredResourceOptions;
-(_IOGPUResource*)resourceRef;
-(id)initStandinWithDevice:(id)arg1 ;
-(id)retainedLabel;
-(void)dealloc;
-(void)waitUntilComplete;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(id<MTLDevice>)device;
-(id)initMemoryless:(id)arg1 descriptor:(id)arg2 ;
-(void)annotateResource:(CFDictionaryRef)arg1 ;
-(unsigned)resourceID;
-(BOOL)isComplete;
-(unsigned long long)resourceSize;
-(unsigned long long)heapOffset;
-(void*)virtualAddress;
-(CFDictionaryRef)copyAnnotationDictionary:(unsigned long long)arg1 obj_key_name:(CFStringRef)arg2 obj_dict:(CFDictionaryRef)arg3 ;
-(BOOL)isPurgeable;
-(BOOL)isAliasable;
-(unsigned long long)allocatedSize;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(unsigned long long)protectionOptions;
-(id)initWithResource:(id)arg1 ;
-(NSString *)label;
-(id)initWithDevice:(id)arg1 options:(unsigned long long)arg2 args:(IOGPUNewResourceArgs*)arg3 argsSize:(unsigned)arg4 ;
@end

