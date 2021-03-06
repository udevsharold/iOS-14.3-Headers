/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLBackgroundJobWorkerProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString, PLPhotoLibrary;

@interface PLBackgroundJobWorker : NSObject <PLBackgroundJobWorkerProtocol> {

	/*^block*/id _workerCompleteCompletionHandler;
	/*^block*/id _currentManagedObjectCompletionHandler;
	Aq _workerAtomicCounter;
	Aq _completionHandlerAtomicCounter;
	/*^block*/id _workerForcefullyStopHandler;
	NSMutableArray* _pendingJobs;
	unsigned long long _totalJobsCount;
	NSObject*<OS_dispatch_queue> _processingQueue;
	os_unfair_lock_s _lock;
	BOOL _shouldStop;
	unsigned long long _workerPriority;
	NSString* _workerName;
	NSString* _workerDetailedName;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary;                  //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) unsigned long long workerPriority;              //@synthesize workerPriority=_workerPriority - In the implementation block
@property (nonatomic,readonly) NSString * workerName;                          //@synthesize workerName=_workerName - In the implementation block
@property (nonatomic,readonly) NSString * workerDetailedName;                  //@synthesize workerDetailedName=_workerDetailedName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)workerWithLibrary:(id)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(BOOL)isInterruptible;
-(id)init;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPriority:(unsigned long long)arg1 photoLibrary:(id)arg2 ;
-(NSString *)description;
-(void)_processNextManagedObject;
-(void)_handleAllJobsComplete;
-(BOOL)hasPendingJobs;
-(void)stopWorkingOnManagedObjectID:(id)arg1 ;
-(id)managedObjectIDsNeedingProcessing;
-(NSString *)workerDetailedName;
-(void)startWorkWithCompletion:(/*^block*/id)arg1 ;
-(void)stopAllWork;
-(unsigned long long)workerPriority;
-(NSString *)workerName;
@end

