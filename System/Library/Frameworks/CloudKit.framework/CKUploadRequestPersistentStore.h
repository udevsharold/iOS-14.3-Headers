/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface CKUploadRequestPersistentStore : NSObject {

	BOOL _firstInvocation;
	NSURL* _databaseURL;
	NSObject*<OS_dispatch_queue> _stateQueue;

}

@property (nonatomic,retain) NSURL * databaseURL;                                  //@synthesize databaseURL=_databaseURL - In the implementation block
@property (assign,nonatomic) BOOL firstInvocation;                                 //@synthesize firstInvocation=_firstInvocation - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateQueue;              //@synthesize stateQueue=_stateQueue - In the implementation block
+(id)repairRecordToMetadata:(id)arg1 ;
-(id)lastFetchDate;
-(id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3 ;
-(id)allData;
-(void)setCurrentUser:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 ;
-(id)currentUser;
-(NSURL *)databaseURL;
-(void)clearDatabase;
-(BOOL)firstInvocation;
-(void)readDatabase:(/*^block*/id)arg1 async:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)sortedDelayedSyncRecordsForDatabase:(id)arg1 ;
-(id)delayedSyncRecordNamesAfterDate:(id)arg1 ;
-(id)delayedSyncDateForRecord:(id)arg1 ;
-(void)readWriteDatabase:(/*^block*/id)arg1 async:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setFirstInvocation:(BOOL)arg1 ;
-(id)assetRepairMetadata;
-(id)packageRepairMetadata;
-(id)metadataForRecordName:(id)arg1 ;
-(id)delayedSyncRecordNamesBeforeAndIncludingDate:(id)arg1 ;
-(id)earliestDelayedSyncDateAfterDate:(id)arg1 ;
-(long long)delayedSyncCountForRecordName:(id)arg1 ;
-(id)syncEngineMetadata;
-(void)setLastFetchDate:(id)arg1 ;
-(void)persistRepairRecord:(id)arg1 ;
-(void)deleteRepairRecord:(id)arg1 ;
-(void)clearRepairRecords;
-(void)setDatabaseURL:(NSURL *)arg1 ;
-(void)persistDelayedSyncForRecordName:(id)arg1 withDate:(id)arg2 increasingCount:(BOOL)arg3 ;
-(void)deleteDelayedSyncForRecordName:(id)arg1 ;
-(void)clearDelayedSyncRecords;
-(void)markRecordNameUnrecoverable:(id)arg1 ;
-(void)persistSyncEngineMetadata:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(void)deleteDatabase;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
