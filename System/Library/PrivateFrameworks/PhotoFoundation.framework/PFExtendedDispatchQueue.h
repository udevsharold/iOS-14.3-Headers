/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFDispatchQueue.h>
#import <libobjc.A.dylib/PFDispatchQueueRunBlock.h>

@class PFDispatchQueue, PFSerialQueue, PFDispatchQueueExtensionManager;

@interface PFExtendedDispatchQueue : PFDispatchQueue <PFDispatchQueueRunBlock> {

	PFDispatchQueue* _queue;
	PFSerialQueue* _requestSerializer;
	PFDispatchQueueExtensionManager* _extensionManager;
	unsigned long long _suspendCount;

}
-(id)_extensionsForTargetingQueue;
-(void)dispatchBarrierAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)assertOnQueue;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)dispatchCancellableGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)_invoke:(/*^block*/id)arg1 extensionDataArray:(id)arg2 ;
-(void)dispatchBarrierSync:(/*^block*/id)arg1 ;
-(void)removeAllQueuedBlocksAndWait;
-(id)_dispatchQueueForSetTargetQueue;
-(void)dispatchAfterInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)onQueue;
-(void)dispatchGroup:(id)arg1 async:(/*^block*/id)arg2 ;
-(BOOL)assertQueueBarrier;
-(id)wrappedQueue;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void*)getSpecific:(void*)arg1 ;
-(id)description;
-(void)suspendRequests;
-(void)dispatchGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(id)dispatchCancellableAfterInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)_performAsyncNotify:(id)arg1 enqueueBlock:(/*^block*/id)arg2 ;
-(id)dispatchCancellable:(/*^block*/id)arg1 ;
-(id)_extensionManager;
-(void)runBlock:(/*^block*/id)arg1 ;
-(void)removeAllQueuedBlocks;
-(unsigned)qualityOfService;
-(void)suspend;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)resumeRequests;
-(void)disableExtension:(id)arg1 ;
-(void)setSpecific:(void*)arg1 forKey:(void*)arg2 ;
-(void)setTargetQueue:(id)arg1 ;
-(void)dispatchBarrierAsync:(/*^block*/id)arg1 ;
-(const char*)label;
-(id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)resume;
-(id)extensionMatching:(/*^block*/id)arg1 ;
-(void)addExtensions:(id)arg1 ;
-(BOOL)assertNotOnQueue;
-(void)enableExtension:(id)arg1 ;
@end

