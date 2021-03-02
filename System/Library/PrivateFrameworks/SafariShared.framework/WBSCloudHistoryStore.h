/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSCloudHistoryDataStore.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, CKDatabase, CKRecordZoneID, CKRecordZone, WBSCloudHistoryConfiguration;

@interface WBSCloudHistoryStore : NSObject <WBSCloudHistoryDataStore> {

	NSObject*<OS_dispatch_queue> _databaseQueue;
	NSOperationQueue* _cloudKitOperationQueue;
	CKDatabase* _database;
	CKRecordZoneID* _recordZoneID;
	CKRecordZone* _recordZone;
	WBSCloudHistoryConfiguration* _configuration;
	BOOL _useManateeContainer;

}
-(void)fetchNumberOfDevicesInSyncCircleWithCompletion:(/*^block*/id)arg1 ;
-(void)_scheduleOperation:(id)arg1 ;
-(void)_prepareRecordZoneWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldTryToResetRecordZoneForError:(id)arg1 ;
-(void)_resetRecordZone;
-(id)_recordsWithCloudHistoryVisits:(id)arg1 ;
-(id)_recordWithHistoryTombstones:(id)arg1 version:(unsigned long long)arg2 ;
-(void)saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_batchSaveRecords:(id)arg1 useLongLivedOperation:(BOOL)arg2 longLivedOperationPersistenceCompletion:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_saveRecords:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_recordWithCloudHistoryVisits:(id)arg1 ;
-(id)_recordWithType:(id)arg1 version:(unsigned long long)arg2 dataDictionary:(id)arg3 ;
-(void)_fetchRecordsWithServerChangeToken:(id)arg1 numberOfFetchRecordsOperationsPerformedSoFar:(unsigned long long)arg2 result:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_configureFetchChangesOperation:(id)arg1 ;
-(void)_appendRecord:(id)arg1 toResult:(id)arg2 ;
-(id)_dictionaryForRecordData:(id)arg1 ;
-(id)_recordDataForDictionary:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 useManateeContainer:(BOOL)arg2 ;
-(void)deleteHistoryZoneWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchRecordsWithServerChangeTokenData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)replayPersistedLongLivedSaveOperationWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)initializePushNotifications:(/*^block*/id)arg1 ;
@end
