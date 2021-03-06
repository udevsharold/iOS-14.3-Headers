/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncOperation.h>
#import <libobjc.A.dylib/HDSyncSessionDelegate.h>

@protocol OS_dispatch_queue;
@class HDCloudSyncTarget, HDCloudSyncSequenceRecord, NSObject, HDCloudSyncSessionContext, NSMutableArray, NSString;

@interface HDCloudSyncPushSequenceOperation : HDCloudSyncOperation <HDSyncSessionDelegate> {

	HDCloudSyncTarget* _target;
	HDCloudSyncSequenceRecord* _sequenceRecord;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _syncQueue;
	HDCloudSyncSessionContext* _sessionContext;
	NSMutableArray* _changeRecordsPendingPush;
	NSMutableArray* _recordsPendingDeletion;
	BOOL _hasMadeForwardProgress;

}

@property (nonatomic,readonly) BOOL hasMadeForwardProgress;              //@synthesize hasMadeForwardProgress=_hasMadeForwardProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)syncSession:(id)arg1 sendChanges:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)nextSyncAnchorForEntity:(Class)arg1 session:(id)arg2 startSyncAnchor:(long long)arg3 error:(id*)arg4 ;
-(void)syncSessionWillBegin:(id)arg1 ;
-(void)syncSession:(id)arg1 didFinishSuccessfully:(BOOL)arg2 error:(id)arg3 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(void)_updateStoreRecordProperties;
-(id)_excludedSyncStoresForPush;
-(void)_synthesizeEmptySyncForSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_prepareLocalSyncAnchorMapForStore:(id)arg1 error:(id*)arg2 ;
-(void)_setInitialForwardProgressDateIfNecessary;
-(void)_syncQueue_performSyncWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)_protocolVersionForPush;
-(BOOL)_validateArchiveFileHandle:(id)arg1 error:(id*)arg2 ;
-(void)_pushRecords:(id)arg1 recordIDsToDelete:(id)arg2 containerID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_recordForwardProgressDate;
-(BOOL)_lock_finalizeNextChangeRecordForUploadToSession:(id)arg1 shouldFreeze:(BOOL)arg2 error:(id*)arg3 ;
-(void)_endSyncSessionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_uploadChangesForSyncSession:(id)arg1 isFinalUpload:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_estimateSyncEntityClassesWithChangesForSession:(id)arg1 ;
-(void)_finalizePushForSession:(id)arg1 ;
-(BOOL)syncSession:(id)arg1 didEndTransactionWithError:(id*)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3 sequence:(id)arg4 ;
-(BOOL)hasMadeForwardProgress;
@end

