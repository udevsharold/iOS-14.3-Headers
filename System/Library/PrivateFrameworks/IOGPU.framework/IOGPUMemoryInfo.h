/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IOGPU/IOGPU-Structs.h>
@class IOGPUMetalResource;

@interface IOGPUMemoryInfo : NSObject {

	void* memlist_key;
	IOGPUMetalResource* fResourceListHead;
	os_unfair_lock_s _memoryInfoLock;

}
+(id)initialize;
-(void)shutdown;
-(id)init;
-(void)removeDataSource:(void*)arg1 ;
-(void)unlock;
-(void)dealloc;
-(void*)addDataSource:(/*^block*/id)arg1 ;
-(void)removeResourceFromList:(id)arg1 ;
-(void)addResourceToList:(id)arg1 ;
-(CFArrayRef)annotationList;
-(void)lock;
@end

