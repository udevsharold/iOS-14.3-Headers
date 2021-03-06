/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;
@class NSUUID, HDDatabase, NSObject, NSError;

@interface HDExtendedDatabaseTransaction : NSObject {

	BOOL _pendingWorkDidSucceed;
	NSUUID* _transactionIdentifier;
	HDDatabase* _database;
	NSObject*<OS_dispatch_queue> _transactionQueue;
	NSObject*<OS_dispatch_queue> _dataQueue;
	NSObject*<OS_dispatch_semaphore> _completionSemaphore;
	NSObject*<OS_dispatch_semaphore> _pendingWorkSemaphore;
	NSObject*<OS_dispatch_source> _automaticRollbackTimer;
	/*^block*/id _pendingWork;
	unsigned long long _status;
	NSError* _lastError;
	double _transactionTimeout;
	double _continuationTimeout;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> transactionQueue;                      //@synthesize transactionQueue=_transactionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataQueue;                             //@synthesize dataQueue=_dataQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> completionSemaphore;               //@synthesize completionSemaphore=_completionSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> pendingWorkSemaphore;              //@synthesize pendingWorkSemaphore=_pendingWorkSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> automaticRollbackTimer;               //@synthesize automaticRollbackTimer=_automaticRollbackTimer - In the implementation block
@property (nonatomic,copy) id pendingWork;                                                       //@synthesize pendingWork=_pendingWork - In the implementation block
@property (assign,nonatomic) unsigned long long status;                                          //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSError * lastError;                                                //@synthesize lastError=_lastError - In the implementation block
@property (assign,nonatomic) BOOL pendingWorkDidSucceed;                                         //@synthesize pendingWorkDidSucceed=_pendingWorkDidSucceed - In the implementation block
@property (nonatomic,readonly) double transactionTimeout;                                        //@synthesize transactionTimeout=_transactionTimeout - In the implementation block
@property (nonatomic,readonly) double continuationTimeout;                                       //@synthesize continuationTimeout=_continuationTimeout - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * transactionIdentifier;                              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) HDDatabase * database;                                     //@synthesize database=_database - In the implementation block
-(NSError *)lastError;
-(HDDatabase *)database;
-(NSObject*<OS_dispatch_queue>)dataQueue;
-(void)setTransactionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLastError:(NSError *)arg1 ;
-(void)setDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(unsigned long long)status;
-(NSObject*<OS_dispatch_queue>)transactionQueue;
-(NSUUID *)transactionIdentifier;
-(void)setStatus:(unsigned long long)arg1 ;
-(double)transactionTimeout;
-(id)initWithDatabase:(id)arg1 context:(id)arg2 transactionTimeout:(double)arg3 continuationTimeout:(double)arg4 error:(id*)arg5 ;
-(BOOL)rollbackDueToError:(id)arg1 errorOut:(id*)arg2 ;
-(void)_enableAutomaticRollbackTimer;
-(void)_transaction_runTransactionWithContext:(id)arg1 ;
-(BOOL)performInTransactionWithErrorOut:(id*)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)commitWithErrorOut:(id*)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)completionSemaphore;
-(void)setCompletionSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)pendingWorkSemaphore;
-(void)setPendingWorkSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_source>)automaticRollbackTimer;
-(void)setAutomaticRollbackTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)pendingWork;
-(void)setPendingWork:(id)arg1 ;
-(BOOL)pendingWorkDidSucceed;
-(void)setPendingWorkDidSucceed:(BOOL)arg1 ;
-(double)continuationTimeout;
@end

