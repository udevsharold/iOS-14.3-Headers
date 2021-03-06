/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _PASSqliteDatabase;

@interface PMLTrainingStore : NSObject {

	NSString* _dbPath;
	_PASSqliteDatabase* _db;
	id _lockStateNotificationToken;
	BOOL _allowSkipSchema;
	/*^block*/id _sourceRecoverer;
	unsigned long long _maxTimesAccessed;

}
+(id)getSchema:(unsigned long long*)arg1 ;
+(long long)migrate:(id)arg1 to:(id)arg2 forStore:(id)arg3 ;
+(long long)_migrate:(id)arg1 forStore:(id)arg2 ;
+(id)_sessionDataToBatchWithNumberOfColumns:(unsigned long long)arg1 rowsData:(id)arg2 labelsData:(id)arg3 ;
+(BOOL)_runQueries:(id)arg1 andUpdateVersionTo:(unsigned)arg2 inTransactionOnDb:(id)arg3 forStore:(id)arg4 ;
+(double)lastUsedTimestampLimit;
+(void)setLastUsedTimestampLimit:(double)arg1 ;
+(id)inMemoryStoreForTesting;
-(id)initWithPath:(id)arg1 ;
-(id)sessionStats;
-(unsigned long long)sessionDescriptorIdFor:(id)arg1 ;
-(void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(id)init;
-(void)deleteSessionsWithBundleId:(id)arg1 domainId:(id)arg2 ;
-(void)_unregisterUnlockHandler;
-(void)vacuumDb;
-(void)updateLastTrainingFeaturizationForModel:(id)arg1 andData:(id)arg2 ;
-(void)logDbNotOpenEvent;
-(void)_loadDataFromLabelAndTuples:(id)arg1 model:(id)arg2 numberOfRows:(unsigned long long)arg3 numberOfColumns:(unsigned long long)arg4 lastUsedMax:(double)arg5 block:(/*^block*/id)arg6 ;
-(void)dealloc;
-(BOOL)isDbOpen;
-(id)dbForTesting;
-(id)initWithPath:(id)arg1 allowSkipSchema:(BOOL)arg2 ;
-(void)_loadDataForModel:(id)arg1 positiveRowId:(unsigned long long)arg2 negativeRowId:(unsigned long long)arg3 excludeItemIdsUsedWithin:(double)arg4 limit:(unsigned long long)arg5 onlyAppleInternal:(BOOL)arg6 positiveLabel:(unsigned long long)arg7 skew:(double)arg8 block:(/*^block*/id)arg9 ;
-(unsigned long long)numberOfRowsInTable:(id)arg1 ;
-(void)closeDbForTesting;
-(void)loadDataForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labels:(id)arg3 batchSize:(unsigned long long)arg4 block:(/*^block*/id)arg5 ;
-(void)loadDataForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(BOOL)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(/*^block*/id)arg7 ;
-(void)limitSessionsForEachLabelWithSessionDescriptor:(id)arg1 totalSessionLimit:(unsigned long long)arg2 ;
-(void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(BOOL)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(/*^block*/id)arg7 ;
-(id)recoverSourceFromData:(id)arg1 ;
-(void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 withSkew:(double)arg3 andLimit:(int)arg4 block:(/*^block*/id)arg5 ;
-(void)_registerUnlockHandler;
-(void)limitSessionsByLastUsedTTL:(double)arg1 ;
-(void)limitSessionsByMaxTimesAccessed;
-(void)storeSession:(id)arg1 label:(long long)arg2 model:(id)arg3 ;
-(void)updateSessionsAndLabelForModel:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_loadBatchForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labels:(id)arg3 batchSize:(unsigned long long)arg4 block:(/*^block*/id)arg5 ;
-(void)deleteSessionsWithBundleId:(id)arg1 ;
-(void)enumerateSessionDescriptorsUsingBlock:(/*^block*/id)arg1 ;
-(long long)migrateTo:(id)arg1 ;
-(long long)_openDbIfUnlocked;
-(void)setMaxTimesAccessed:(unsigned long long)arg1 ;
-(BOOL)createSnapshot:(id)arg1 ;
-(void)setSourceRecoverer:(/*^block*/id)arg1 ;
-(id)sessionDimensionsForModel:(id)arg1 startingRowId:(unsigned long long)arg2 onlyAppleInternal:(BOOL)arg3 labelFilter:(id)arg4 ;
-(void)loadSessionsForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labels:(id)arg3 batchSize:(unsigned long long)arg4 block:(/*^block*/id)arg5 ;
-(void)limitSessionsWithSessionDescriptor:(id)arg1 withLabel:(id)arg2 limit:(unsigned long long)arg3 ;
-(void)storeSession:(id)arg1 source:(id)arg2 label:(long long)arg3 model:(id)arg4 ;
-(void)storeSession:(id)arg1 label:(long long)arg2 model:(id)arg3 bundleId:(id)arg4 domainId:(id)arg5 itemIds:(id)arg6 isAppleInternal:(BOOL)arg7 ;
-(BOOL)_truncateDbIfCorrupted;
-(id)sessionStatsForSessionDescriptor:(id)arg1 ;
-(id)getSchema:(unsigned long long*)arg1 ;
-(long long)_unsafeOpenDbIfUnlocked;
-(void)_loadDataForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labelAndStartRows:(id)arg3 batchSize:(unsigned long long)arg4 supportPerLabel:(unsigned long long)arg5 block:(/*^block*/id)arg6 ;
-(void)storeSession:(id)arg1 source:(id)arg2 label:(long long)arg3 model:(id)arg4 bundleId:(id)arg5 domainId:(id)arg6 itemIds:(id)arg7 isAppleInternal:(BOOL)arg8 ;
-(id)lastTrainingFeaturizationForModelName:(id)arg1 andLocale:(id)arg2 ;
-(void)deleteSessionsWithBundleId:(id)arg1 itemId:(id)arg2 ;
@end

