/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface BWDeferredContainerManagerBase : NSObject {

	opaque_pthread_rwlock_t _lock;
	NSObject*<OS_dispatch_queue> _timerQueue;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithQueuePriority:(unsigned)arg1 ;
-(id)_containerURLForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 exists:(BOOL*)arg3 isDirectory:(BOOL*)arg4 ;
-(BOOL)_insertUniqueManifestIntoTimeSortedArray:(id)arg1 manifestArray:(id)arg2 ;
-(id)manifestsForApplicationID:(id)arg1 err:(int*)arg2 ;
-(id)manifestForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int*)arg3 ;
-(int)deleteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 ;
@end

