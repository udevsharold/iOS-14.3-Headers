/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCStatisticsCollectorQueue : NSObject {

	OpaqueFigThreadRef _thread;
	BOOL _isThreadRunning;
	BOOL _shouldBlockWhenFull;
	SCD_Struct_VC147 _messageQueue[300];
	int _firstMessageIndex;
	int _nextMessageIndex;
	int _maxQueueSize;
	int _almostFullQueueSize;
	/*^block*/id _messageHandler;
	opaque_pthread_mutex_t _queueMutex;
	opaque_pthread_cond_t _queueNotFullCondition;
	opaque_pthread_cond_t _queueNotEmptyCondition;
	opaque_pthread_mutex_t _waitMutex;
	opaque_pthread_cond_t _waitCondition;
	BOOL _shouldProcessMessageOnExternalThread;
	BOOL _shouldProcessMessageImmediately;
	unsigned _queueProcessWaitTimeMs;

}

@property (readonly) BOOL isThreadRunning;              //@synthesize isThreadRunning=_isThreadRunning - In the implementation block
@property (copy) id messageHandler;                     //@synthesize messageHandler=_messageHandler - In the implementation block
-(void)setMessageHandler:(id)arg1 ;
-(void)dealloc;
-(id)messageHandler;
-(int)queueSize;
-(BOOL)enqueue:(SCD_Struct_AV33)arg1 ;
-(void)start;
-(void)processMessage:(SCD_Struct_AV33)arg1 ;
-(void)stop;
-(id)initWithQueueSize:(int)arg1 shouldBlockWhenFull:(BOOL)arg2 queueWaitTimeMs:(unsigned)arg3 useExternalThread:(BOOL)arg4 ;
-(void)drainAndProcessAllStatistics;
-(BOOL)addStatisticsMessage:(SCD_Struct_AV33)arg1 ;
-(void)stopThread;
-(BOOL)dequeue:(SCD_Struct_AV33*)arg1 ;
-(BOOL)isQueueFull;
-(void)cancelWait;
-(void)waitBeforeProcessingQueue;
-(BOOL)isThreadRunning;
@end
