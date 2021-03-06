/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libprequelite.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction, OS_dispatch_source, OS_dispatch_queue;
#import <libprequelite.dylib/libprequelite.dylib-Structs.h>
@class NSObject, NSMutableArray, NSString, NSURL, NSError;

@interface PQLConnection : NSObject {

	unsigned long long _currentStmtStart;
	sqlite3Ref _db;
	NSObject*<OS_os_transaction> _batchStarted;
	int _suspendCaching;
	int _savePointLevel;
	int _skipBatchStop;
	int _vacuumTracker;
	NSMutableArray* _flushNotifications;
	/*^block*/id _batchingPolicyHandler;
	NSObject*<OS_dispatch_source> _batchingTimer;
	double _batchingPeriod;
	int _batchingChangesLimit;
	int _batchingChangesCount;
	int _cacheSize;
	BOOL _useBatching;
	BOOL _useQueue;
	BOOL _needsFullSync;
	cache_sRef _preparedStatements;
	NSObject*<OS_dispatch_source> _stmtCacheSource;
	NSMutableArray* _stmtCacheCleanupQueue;
	long long _changesOverride;
	NSObject*<OS_dispatch_queue> _targetQueue;
	BOOL _traced;
	BOOL _crashIfUsedAfterClose;
	BOOL _shouldUseWALJournalMode;
	int _batchTransactionType;
	NSString* _label;
	NSURL* _url;
	/*^block*/id _lockedHandler;
	/*^block*/id _busyHandler;
	/*^block*/id _autoRollbackHandler;
	/*^block*/id _sqliteErrorHandler;
	/*^block*/id _preFlushHook;
	/*^block*/id _postFlushHook;
	/*^block*/id _profilingHook;
	/*^block*/id _willBeginBatchingHook;
	/*^block*/id _didFinishBatchingHook;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSError* _lastError;

}

@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,getter=isTraced,nonatomic) BOOL traced;                             //@synthesize traced=_traced - In the implementation block
@property (assign,nonatomic) BOOL crashIfUsedAfterClose;                              //@synthesize crashIfUsedAfterClose=_crashIfUsedAfterClose - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) sqlite3Ref dbHandle;                                   //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) BOOL isInBatch; 
@property (nonatomic,readonly) BOOL isInTransaction; 
@property (nonatomic,retain) NSError * lastError;                                     //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,readonly) long long lastInsertedRowID; 
@property (nonatomic,readonly) long long changes; 
@property (assign,nonatomic) unsigned long long statementCacheMaxCount; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) double currentOperationDuration; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long synchronousMode; 
@property (assign,nonatomic) int batchTransactionType;                                //@synthesize batchTransactionType=_batchTransactionType - In the implementation block
@property (assign,nonatomic) BOOL shouldUseWALJournalMode;                            //@synthesize shouldUseWALJournalMode=_shouldUseWALJournalMode - In the implementation block
@property (nonatomic,copy) id lockedHandler;                                          //@synthesize lockedHandler=_lockedHandler - In the implementation block
@property (nonatomic,copy) id busyHandler;                                            //@synthesize busyHandler=_busyHandler - In the implementation block
@property (nonatomic,copy) id autoRollbackHandler;                                    //@synthesize autoRollbackHandler=_autoRollbackHandler - In the implementation block
@property (nonatomic,copy) id sqliteErrorHandler;                                     //@synthesize sqliteErrorHandler=_sqliteErrorHandler - In the implementation block
@property (nonatomic,copy) id preFlushHook;                                           //@synthesize preFlushHook=_preFlushHook - In the implementation block
@property (nonatomic,copy) id postFlushHook;                                          //@synthesize postFlushHook=_postFlushHook - In the implementation block
@property (nonatomic,copy) id profilingHook;                                          //@synthesize profilingHook=_profilingHook - In the implementation block
@property (nonatomic,copy) id willBeginBatchingHook;                                  //@synthesize willBeginBatchingHook=_willBeginBatchingHook - In the implementation block
@property (nonatomic,copy) id didFinishBatchingHook;                                  //@synthesize didFinishBatchingHook=_didFinishBatchingHook - In the implementation block
@property (nonatomic,readonly) BOOL isBatchSuspended; 
+(void)initialize;
-(id)numberWithSQL:(id)arg1 ;
-(BOOL)registerFunction:(id)arg1 nArgs:(int)arg2 handler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)stringWithSQL:(id)arg1 ;
-(id)itemIDWithSQL:(id)arg1 ;
-(void)_fireFlushNotifications;
-(void)setWillBeginBatchingHook:(id)arg1 ;
-(void)useSerialQueue;
-(NSError *)lastError;
-(BOOL)isTraced;
-(id)fetchObjectOfClassSwift:(Class)arg1 query:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)useBatchingWithDelay:(double)arg1 changeCount:(int)arg2 ;
-(void)setTraced:(BOOL)arg1 ;
-(id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3 ;
-(int)_vacuumMode;
-(void)useSerialQueueWithTarget:(id)arg1 ;
-(int)batchTransactionType;
-(void)setPreFlushHook:(id)arg1 ;
-(id)fetch:(id)arg1 ;
-(BOOL)setupPragmas;
-(BOOL)destroyDatabaseWithError:(id*)arg1 ;
-(void)setBatchTransactionType:(int)arg1 ;
-(void)forceBatchStart;
-(void)setSynchronousMode:(unsigned long long)arg1 ;
-(BOOL)registerFunction:(id)arg1 nArgs:(int)arg2 handler:(/*^block*/id)arg3 ;
-(void)setStatementCacheMaxCount:(unsigned long long)arg1 ;
-(void)_vacuumIfNeeded;
-(void)setDidFinishBatchingHook:(id)arg1 ;
-(void)_batchStopIfNeeded;
-(void)useBatchingOnTargetQueue:(id)arg1 withPolicyHandler:(/*^block*/id)arg2 ;
-(BOOL)performWithFlags:(unsigned)arg1 action:(/*^block*/id)arg2 ;
-(BOOL)isInTransaction;
-(BOOL)_execute:(id)arg1 mustSucceed:(BOOL)arg2 bindings:(char*)arg3 ;
-(id)fetchObject:(/*^block*/id)arg1 sql:(id)arg2 args:(char*)arg3 ;
-(id)sqliteErrorHandler;
-(BOOL)executeSwift:(/*^block*/id)arg1 error:(id*)arg2 ;
-(long long)changes;
-(BOOL)_incrementalVacuum:(unsigned long long)arg1 ;
-(id)fetch:(id)arg1 args:(char*)arg2 ;
-(id)fetchObjectSwift:(/*^block*/id)arg1 query:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2 ;
-(long long)lastInsertedRowID;
-(long long)autovacuumableSpaceInBytes;
-(void)setLockedHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setAutoRollbackHandler:(id)arg1 ;
-(BOOL)groupInTransaction:(/*^block*/id)arg1 ;
-(unsigned long long)statementCacheMaxCount;
-(BOOL)isBatchSuspended;
-(id)profilingHook;
-(BOOL)incrementalVacuum:(long long)arg1 ;
-(void)_createCacheIfNeeded;
-(void)setPostFlushHook:(id)arg1 ;
-(BOOL)close:(id*)arg1 ;
-(id)fetchSwift:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)willBeginBatchingHook;
-(void)setSqliteErrorHandler:(id)arg1 ;
-(void)setShouldUseWALJournalMode:(BOOL)arg1 ;
-(id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3 args:(char*)arg4 ;
-(double)currentOperationDuration;
-(void)makeNextFlushFullSync;
-(BOOL)_fullSync;
-(void)_batchStartIfNeeded:(int)arg1 ;
-(id)fetchObject:(/*^block*/id)arg1 sql:(id)arg2 ;
-(void)setBusyHandler:(id)arg1 ;
-(BOOL)execute:(id)arg1 args:(char*)arg2 ;
-(BOOL)shouldUseWALJournalMode;
-(id)postFlushHook;
-(BOOL)openAtURL:(id)arg1 sharedCache:(BOOL)arg2 error:(id*)arg3 ;
-(id)_description:(BOOL)arg1 ;
-(id)_newStatementForBuilder:(/*^block*/id)arg1 ;
-(id)_newStatementForFormat:(id)arg1 arguments:(char*)arg2 ;
-(void)groupInBatch:(/*^block*/id)arg1 ;
-(id)preFlushHook;
-(id)userVersion;
-(BOOL)_performWithFlags:(unsigned)arg1 action:(/*^block*/id)arg2 whenFlushed:(/*^block*/id)arg3 ;
-(id)busyHandler;
-(void)_clearCleanupCacheQueueIfNeeded;
-(BOOL)execute:(id)arg1 ;
-(BOOL)isInBatch;
-(BOOL)executeRaw:(id)arg1 ;
-(id)init;
-(BOOL)performWithFlags:(unsigned)arg1 action:(/*^block*/id)arg2 whenFlushed:(/*^block*/id)arg3 ;
-(void)useBatchingWithPolicyHandler:(/*^block*/id)arg1 ;
-(void)_resetState;
-(void)_clearStatementCache;
-(unsigned long long)synchronousMode;
-(BOOL)crashIfUsedAfterClose;
-(void)assertOnQueue;
-(sqlite3Ref)dbHandle;
-(void)setProfilingHook:(id)arg1 ;
-(id)autoRollbackHandler;
-(id)lockedHandler;
-(BOOL)_executeStmt:(id)arg1 mustSucceed:(BOOL)arg2 ;
-(BOOL)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id*)arg3 ;
-(void)setLastError:(NSError *)arg1 ;
-(void)useBatchingOnTargetQueue:(id)arg1 delay:(double)arg2 changeCount:(int)arg3 ;
-(id)didFinishBatchingHook;
-(BOOL)backupToURL:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2 args:(char*)arg3 ;
-(BOOL)setUserVersion:(long long)arg1 ;
-(void)setCrashIfUsedAfterClose:(BOOL)arg1 ;
-(void)dealloc;
-(void)flush;
-(id)description;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)debugDescription;
-(NSString *)label;
-(NSURL *)url;
@end

