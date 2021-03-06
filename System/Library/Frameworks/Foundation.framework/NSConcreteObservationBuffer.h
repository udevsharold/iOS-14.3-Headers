/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSObservationBuffer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSMutableArray;

@interface NSConcreteObservationBuffer : NSObservationBuffer {

	NSObject*<OS_dispatch_queue> _inputQueue;
	NSOperationQueue* _outputQueue;
	long long _policy;
	int _state;
	opaque_pthread_mutex_t _lock;
	NSMutableArray* _dequeue;
	unsigned long long _maxCount;
	/*^block*/id _bufferFullHandler;
	BOOL _memoryPressureSensitive;
	BOOL _automaticallyEmitsObjects;

}
-(id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3 ;
-(void)dealloc;
-(void)emitObject;
-(void)_mergeChanges;
-(void)setMemoryPressureSensitive:(BOOL)arg1 ;
-(void)_alreadyOnQueueEmitAllObjects;
-(void)setAutomaticallyEmitsObjects:(BOOL)arg1 ;
-(/*^block*/id)bufferFullHandler;
-(void)emitAllObjects;
-(void)_alreadyOnQueueEmitObject;
-(BOOL)automaticallyEmitsObjects;
-(BOOL)isMemoryPressureSensitive;
-(void)setBufferFullHandler:(/*^block*/id)arg1 ;
-(void)_receiveBox:(id)arg1 ;
@end

