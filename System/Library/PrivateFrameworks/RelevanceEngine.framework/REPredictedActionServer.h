/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, REUpNextScheduler, NSArray, NSDate, NSObject, NSMutableArray, REObserverStore;

@interface REPredictedActionServer : NSObject {

	NSXPCConnection* _connection;
	REUpNextScheduler* _scheduler;
	NSArray* _predictions;
	NSArray* _counts;
	NSDate* _firstPerformedDate;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _fetchingData;
	NSDate* _lastFetchedDate;
	NSMutableArray* _fetchCompletionBlocks;
	REObserverStore* _observers;

}
+(id)sharedInstance;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)_notifyObservers;
-(void)_invalidateConnection;
-(void)_clearConnection;
-(void)_requestPredictions:(id)arg1 ;
-(void)_queue_fetchPredicitions;
-(void)_accessOrEnqueueDataRequest:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
-(void)_queue_setupConnection;
-(void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_finishProcessingData;
-(void)fetchFirstPerformedActionDate:(/*^block*/id)arg1 ;
-(void)fetchPredictedActions:(/*^block*/id)arg1 ;
@end

