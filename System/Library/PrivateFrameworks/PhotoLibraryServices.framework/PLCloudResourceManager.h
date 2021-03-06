/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PLCloudResourcePrefetchManager, PLCloudResourcePruneManager, NSDate;

@interface PLCloudResourceManager : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	PLCloudResourcePrefetchManager* _prefetchManager;
	PLCloudResourcePruneManager* _pruneManager;
	NSDate* _lastOperationDate;
	BOOL _enqueuedOperation;

}
-(id)init;
-(void)_runOnWorkQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)clearPrefetchState;
-(id)statusForDebug:(BOOL)arg1 ;
-(void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)arg1 ;
-(void)updateCacheDeletePurgeableAmount;
-(void)handleOptimizeModeChange;
-(id)initWithCPLManager:(id)arg1 library:(id)arg2 ;
-(double)_minimumIntervalBetweenOperations;
-(void)stop;
-(void)invalidate;
@end

