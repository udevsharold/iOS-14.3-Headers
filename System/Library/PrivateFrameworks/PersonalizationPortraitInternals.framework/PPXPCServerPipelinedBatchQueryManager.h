/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableDictionary;

@interface PPXPCServerPipelinedBatchQueryManager : NSObject {

	long long _pipelineDepth;
	unsigned long long _pipelinedCallTimeoutNsec;
	NSObject*<OS_dispatch_semaphore> _concurrentRequestSem;
	NSMutableDictionary* _queryReplyThrottleSemaphores;
	AB _isInterrupted;

}
-(void)sendBatchedResultForQueryWithName:(id)arg1 queryId:(unsigned long long)arg2 batchGenerator:(/*^block*/id)arg3 sendError:(/*^block*/id)arg4 sendBatch:(/*^block*/id)arg5 ;
-(id)initWithPipelineDepth:(long long)arg1 pipelinedCallTimeoutNsec:(unsigned long long)arg2 maxConcurrentRequestsPerConnection:(unsigned long long)arg3 ;
-(void)unblockPendingQueries;
-(void)runConcurrentlyWithRequestThrottle:(/*^block*/id)arg1 ;
-(void)_unblockQueryReplyThrottleSemaphore:(id)arg1 ;
@end

