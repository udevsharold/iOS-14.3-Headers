/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICStateHandlerProvider.h>

@protocol ICCloudContextDelegate, ICCloudAnalyticsDelegate, OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSMutableSet, NSTimer, NSMutableDictionary, ICSelectorDelayer, NSDictionary, NSString;

@interface ICCloudContext : NSObject <ICStateHandlerProvider> {

	BOOL _fetchOperationsPending;
	BOOL _needsToUpdateSubscriptions;
	BOOL _enableLongLivedOperations;
	BOOL _disableAutomaticallyRetryNetworkFailures;
	BOOL _disableRetryTimer;
	BOOL _syncOnlyIfReachable;
	BOOL _disabled;
	BOOL _disabledInternal;
	BOOL _needsToProcessAllObjects;
	BOOL _didAddObservers;
	BOOL _fetchingEnabled;
	BOOL _syncDisabledByServer;
	BOOL _didCheckForLongLivedOperations;
	id<ICCloudContextDelegate> _cloudContextDelegate;
	id<ICCloudAnalyticsDelegate> _cloudAnalyticsDelegate;
	long long _qualityOfService;
	unsigned long long _discretionaryNetworkBehavior;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_queue> _containersCreationQueue;
	NSMutableSet* _objectIDsToRetry;
	NSTimer* _retryTimer;
	NSMutableDictionary* _retryCountsByOperationType;
	NSMutableSet* _objectIDsToProcess;
	ICSelectorDelayer* _processingSelectorDelayer;
	ICSelectorDelayer* _syncSelectorDelayer;
	NSDictionary* _containersByAccountID;
	NSMutableDictionary* _accountZoneIDsNeedingFetchChanges;
	NSMutableDictionary* _accountZoneIDsFetchingChanges;
	NSMutableDictionary* _accountZoneIDsNeedingToBeSaved;
	NSMutableSet* _subscribedSubscriptionIDs;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                            //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> containersCreationQueue;                    //@synthesize containersCreationQueue=_containersCreationQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * objectIDsToRetry;                                         //@synthesize objectIDsToRetry=_objectIDsToRetry - In the implementation block
@property (retain) NSTimer * retryTimer;                                                              //@synthesize retryTimer=_retryTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * retryCountsByOperationType;                        //@synthesize retryCountsByOperationType=_retryCountsByOperationType - In the implementation block
@property (assign,nonatomic) long long accountStatus; 
@property (getter=isDisabledInternal) BOOL disabledInternal;                                          //@synthesize disabledInternal=_disabledInternal - In the implementation block
@property (nonatomic,readonly) NSDictionary * cloudObjectClassesByRecordType; 
@property (assign,nonatomic) BOOL needsToProcessAllObjects;                                           //@synthesize needsToProcessAllObjects=_needsToProcessAllObjects - In the implementation block
@property (nonatomic,retain) NSMutableSet * objectIDsToProcess;                                       //@synthesize objectIDsToProcess=_objectIDsToProcess - In the implementation block
@property (retain) ICSelectorDelayer * processingSelectorDelayer;                                     //@synthesize processingSelectorDelayer=_processingSelectorDelayer - In the implementation block
@property (retain) ICSelectorDelayer * syncSelectorDelayer;                                           //@synthesize syncSelectorDelayer=_syncSelectorDelayer - In the implementation block
@property (assign,nonatomic) BOOL didAddObservers;                                                    //@synthesize didAddObservers=_didAddObservers - In the implementation block
@property (assign,getter=isFetchingEnabled,nonatomic) BOOL fetchingEnabled;                           //@synthesize fetchingEnabled=_fetchingEnabled - In the implementation block
@property (assign,nonatomic) BOOL syncDisabledByServer;                                               //@synthesize syncDisabledByServer=_syncDisabledByServer - In the implementation block
@property (nonatomic,retain) NSDictionary * containersByAccountID;                                    //@synthesize containersByAccountID=_containersByAccountID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountZoneIDsNeedingFetchChanges;                 //@synthesize accountZoneIDsNeedingFetchChanges=_accountZoneIDsNeedingFetchChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountZoneIDsFetchingChanges;                     //@synthesize accountZoneIDsFetchingChanges=_accountZoneIDsFetchingChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountZoneIDsNeedingToBeSaved;                    //@synthesize accountZoneIDsNeedingToBeSaved=_accountZoneIDsNeedingToBeSaved - In the implementation block
@property (retain) NSMutableSet * subscribedSubscriptionIDs;                                          //@synthesize subscribedSubscriptionIDs=_subscribedSubscriptionIDs - In the implementation block
@property (assign,nonatomic) BOOL didCheckForLongLivedOperations;                                     //@synthesize didCheckForLongLivedOperations=_didCheckForLongLivedOperations - In the implementation block
@property (assign,nonatomic,__weak) id<ICCloudContextDelegate> cloudContextDelegate;                  //@synthesize cloudContextDelegate=_cloudContextDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<ICCloudAnalyticsDelegate> cloudAnalyticsDelegate;              //@synthesize cloudAnalyticsDelegate=_cloudAnalyticsDelegate - In the implementation block
@property (nonatomic,readonly) BOOL fetchOperationsPending;                                           //@synthesize fetchOperationsPending=_fetchOperationsPending - In the implementation block
@property (assign) BOOL needsToUpdateSubscriptions;                                                   //@synthesize needsToUpdateSubscriptions=_needsToUpdateSubscriptions - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                              //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryNetworkBehavior;                         //@synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) BOOL enableLongLivedOperations;                                          //@synthesize enableLongLivedOperations=_enableLongLivedOperations - In the implementation block
@property (assign,nonatomic) BOOL disableAutomaticallyRetryNetworkFailures;                           //@synthesize disableAutomaticallyRetryNetworkFailures=_disableAutomaticallyRetryNetworkFailures - In the implementation block
@property (assign,nonatomic) BOOL disableRetryTimer;                                                  //@synthesize disableRetryTimer=_disableRetryTimer - In the implementation block
@property (assign,nonatomic) BOOL syncOnlyIfReachable;                                                //@synthesize syncOnlyIfReachable=_syncOnlyIfReachable - In the implementation block
@property (getter=isDisabled) BOOL disabled;                                                          //@synthesize disabled=_disabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isZoneConfigurations:(id)arg1 subsetOfZoneConfigurations:(id)arg2 ;
+(id)zoneIDsFromZoneInfos:(id)arg1 ;
+(id)errorCodesToIgnoreForBackoffTimer;
+(void)registerStateHandler;
+(id)allZoneIDsInAccountZoneIDs:(id)arg1 ;
+(void)batchRecordsToSave:(id)arg1 delete:(id)arg2 maxRecordCountPerBatch:(unsigned long long)arg3 maxRecordSizePerBatch:(unsigned long long)arg4 withBlock:(/*^block*/id)arg5 ;
+(id)errorForDisabledCloudSyncing;
+(BOOL)haveZoneIDsInAccountZoneIDs:(id)arg1 ;
+(BOOL)shouldIgnoreErrorForBackoffTimer:(id)arg1 ;
+(id)sortedRecords:(id)arg1 ;
+(id)errorFromErrors:(id)arg1 ;
+(id)newNotesContainerForAccountID:(id)arg1 ;
+(id)errorForWaitingForRetryTimer;
+(id)metadataZoneID;
+(id)userRecordNameForContainer:(id)arg1 ;
+(id)objectsByDatabaseScope:(id)arg1 ;
+(id)zoneInfosFromZoneIDs:(id)arg1 ;
+(id)errorFromOperations:(id)arg1 ;
+(id)objectsByAccount:(id)arg1 ;
+(void)deleteAllServerChangeTokens;
+(id)newNotesContainer;
+(id)errorsFromError:(id)arg1 ;
+(id)deduplicatedRecordsForCloudObjects:(id)arg1 ;
+(id)notesZoneID;
+(id)sharedContext;
-(BOOL)isDisabled;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)fetchUserRecordWithContainer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isInForeground;
-(void)setDisabled:(BOOL)arg1 ;
-(id)existingCloudObjectForRecordID:(id)arg1 recordType:(id)arg2 accountID:(id)arg3 context:(id)arg4 ;
-(void)pauseCloudSyncWhileSynchronouslyPerformingBlock:(/*^block*/id)arg1 ;
-(void)setDisableRetryTimer:(BOOL)arg1 ;
-(void)fetchDatabaseChangesWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)modifyRecordsOperation:(id)arg1 perSaveRecordCompletion:(id)arg2 error:(id)arg3 ;
-(void)setContainersByAccountID:(NSDictionary *)arg1 ;
-(BOOL)didCheckForLongLivedOperations;
-(void)setDidAddObservers:(BOOL)arg1 ;
-(void)addDependenciesForModifyRecordsOperation:(id)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)addOperationsToFetchRecordZoneChangesForAccountZoneIDs:(id)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)processAllCloudObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchRecordZoneChangesWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processPendingCloudObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(unsigned long long)discretionaryNetworkBehavior;
-(void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2 accountID:(id)arg3 ;
-(void)modifyRecordsOperation:(id)arg1 didCompleteWithSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 rootRecordIDsByShareID:(id)arg4 error:(id)arg5 ;
-(void)clearRetryCountForOperationType:(id)arg1 ;
-(void)fetchDatabaseChangesForDatabases:(id)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setSyncOnlyIfReachable:(BOOL)arg1 ;
-(void)deleteRecordZonesWithZoneIDs:(id)arg1 accountID:(id)arg2 markZonesAsUserPurged:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchRecordZoneChangesOperationDidComplete:(id)arg1 error:(id)arg2 ;
-(void)reachabilityChanged:(id)arg1 ;
-(void)setContainersCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)clearSubscribedSubscriptionIDs;
-(void)fetchRecordIDs:(id)arg1 accountID:(id)arg2 operationGroupName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)needsToUpdateSubscriptions;
-(void)deleteSharesForObjects:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isFetchingEnabled;
-(id)allZoneIDs;
-(NSMutableSet *)objectIDsToProcess;
-(void)setCloudContextDelegate:(id<ICCloudContextDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)containersCreationQueue;
-(BOOL)disableRetryTimer;
-(BOOL)syncDisabledByServer;
-(void)syncWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)didAddObservers;
-(void)updateCloudContextState;
-(void)fetchOperation:(id)arg1 fetchedRecord:(id)arg2 recordID:(id)arg3 error:(id)arg4 ;
-(void)dealloc;
-(id)existingCloudObjectForUserSpecificRecordID:(id)arg1 createPlaceholderIfNecessary:(BOOL)arg2 accountID:(id)arg3 context:(id)arg4 ;
-(id)operationsToFetchRecordIDs:(id)arg1 qualityOfService:(long long)arg2 operationGroupName:(id)arg3 accountID:(id)arg4 ;
-(void)setFetchingEnabled:(BOOL)arg1 ;
-(void)updateSubscriptionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didFetchShare:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(void)handleGenericPartialFailuresForError:(id)arg1 operation:(id)arg2 ;
-(NSMutableSet *)subscribedSubscriptionIDs;
-(NSMutableDictionary *)retryCountsByOperationType;
-(void)fireSyncRequest;
-(void)setSyncSelectorDelayer:(ICSelectorDelayer *)arg1 ;
-(void)validateAccountZoneIDsNeedingFetchChanges;
-(void)fetchCloudObjects:(id)arg1 accountID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setRetryCountsByOperationType:(NSMutableDictionary *)arg1 ;
-(void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(NSDictionary *)containersByAccountID;
-(id)subscriptionForDatabase:(id)arg1 ;
-(void)fetchRecordZoneChangesOperation:(id)arg1 completedFetchForZoneID:(id)arg2 serverChangeToken:(id)arg3 error:(id)arg4 ;
-(id)operationToFetchRecordIDs:(id)arg1 database:(id)arg2 qualityOfService:(long long)arg3 ;
-(void)fetchRecordZoneChangesOperation:(id)arg1 recordChanged:(id)arg2 context:(id)arg3 ;
-(BOOL)isInternetReachable;
-(id)operationToSaveZonesIfNecessaryForAccountID:(id)arg1 ;
-(BOOL)enableLongLivedOperations;
-(void)saveServerChangeToken:(id)arg1 forChangedZonesInDatabase:(id)arg2 accountID:(id)arg3 ;
-(void)fetchRecordZoneChangesOperation:(id)arg1 recordWasDeletedWithRecordID:(id)arg2 recordType:(id)arg3 context:(id)arg4 ;
-(ICSelectorDelayer *)syncSelectorDelayer;
-(void)setAccountZoneIDsFetchingChanges:(NSMutableDictionary *)arg1 ;
-(void)receivedZoneNotFound:(id)arg1 operation:(id)arg2 ;
-(NSTimer *)retryTimer;
-(void)updateSelectorDelayers;
-(id)operationToFetchRecordZoneChangesForZoneIDs:(id)arg1 database:(id)arg2 ;
-(void)fetchUserRecordWithAccountID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchOperation:(id)arg1 didCompleteWithRecordsByRecordID:(id)arg2 error:(id)arg3 ;
-(void)deleteServerChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2 accountID:(id)arg3 ;
-(void)incrementOrClearRetryCountForOperationType:(id)arg1 error:(id)arg2 ;
-(id)existingCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(void)fetchOperation:(id)arg1 progressWithRecordID:(id)arg2 progress:(double)arg3 ;
-(void)fetchRecordZoneChangesForZoneIDs:(id)arg1 accountID:(id)arg2 reason:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_syncWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)operationToSaveZonesForZoneIDs:(id)arg1 accountID:(id)arg2 ;
-(void)_processCloudObjects:(id)arg1 operationQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSOperationQueue *)operationQueue;
-(void)fetchRecordZoneChangesOperation:(id)arg1 zoneID:(id)arg2 accountID:(id)arg3 changeTokenUpdated:(id)arg4 ;
-(void)setDisableAutomaticallyRetryNetworkFailures:(BOOL)arg1 ;
-(void)saveZoneFetchState;
-(id)operationsToFetchRecordZoneChangesForZoneIDs:(id)arg1 accountID:(id)arg2 ;
-(void)setDisabledInternal:(BOOL)arg1 ;
-(void)loadZoneFetchState;
-(void)resetZoneForCloudAccount:(id)arg1 withReason:(id)arg2 ;
-(BOOL)fetchOperationsPending;
-(void)addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 accountID:(id)arg3 operationGroupName:(id)arg4 waitForDependencies:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(long long)accountStatus;
-(void)pushCloudObjects:(id)arg1 operationGroupName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCloudAnalyticsDelegate:(id<ICCloudAnalyticsDelegate>)arg1 ;
-(void)setSubscribedSubscriptionIDs:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)accountZoneIDsNeedingFetchChanges;
-(void)disableCloudSyncingIfCurrentVersionNotSuppported;
-(void)modifyRecordsOperation:(id)arg1 perDeleteRecordIDCompletion:(id)arg2 rootRecordIDsByShareID:(id)arg3 error:(id)arg4 ;
-(id)containerForAccountID:(id)arg1 ;
-(void)startRetryTimerIfNecessaryWithError:(id)arg1 ;
-(void)checkForLongLivedOperations;
-(void)setAccountZoneIDsNeedingFetchChanges:(NSMutableDictionary *)arg1 ;
-(id)operationsToFetchRecordIDs:(id)arg1 database:(id)arg2 qualityOfService:(long long)arg3 ;
-(void)fetchDatabaseChangesOperation:(id)arg1 changeTokenUpdated:(id)arg2 accountID:(id)arg3 ;
-(void)setNeedsToUpdateSubscriptions:(BOOL)arg1 ;
-(BOOL)disableAutomaticallyRetryNetworkFailures;
-(void)fetchDatabaseChangesOperation:(id)arg1 finishedWithServerChangeToken:(id)arg2 accountID:(id)arg3 error:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)recursiveCancelDependentOperations:(id)arg1 ;
-(id)existingCloudObjectForRecordID:(id)arg1 recordType:(id)arg2 accountID:(id)arg3 context:(id)arg4 excludingRecordTypes:(id)arg5 ;
-(id)operationToFetchDatabaseChangesForDatabase:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveSubscriptionsForDatabase:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)needsToProcessAllObjects;
-(void)addFetchOperationsForRecordIDs:(id)arg1 accountID:(id)arg2 qualityOfService:(long long)arg3 operationGroupName:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)printOperationQueue;
-(ICSelectorDelayer *)processingSelectorDelayer;
-(BOOL)isDisabledInternal;
-(void)contextDidSave:(id)arg1 ;
-(id)operationsToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4 ;
-(BOOL)partialError:(id)arg1 containsErrorCode:(long long)arg2 ;
-(id)newOperationToFetchRecordZoneChangesWithZoneConfigurations:(id)arg1 database:(id)arg2 ;
-(NSMutableSet *)objectIDsToRetry;
-(void)setAccountZoneIDsNeedingToBeSaved:(NSMutableDictionary *)arg1 ;
-(void)setEnableLongLivedOperations:(BOOL)arg1 ;
-(void)incrementRetryCountForOperationType:(id)arg1 ;
-(void)addCallbackBlocksToModifyRecordsOperation:(id)arg1 rootRecordIDsByShareID:(id)arg2 ;
-(void)clearZoneFetchState;
-(NSDictionary *)cloudObjectClassesByRecordType;
-(void)clearPendingActivity;
-(NSMutableDictionary *)accountZoneIDsNeedingToBeSaved;
-(BOOL)isReadyToSync;
-(id)operationsToModifyRecordsForCloudObjectsToSave:(id)arg1 delete:(id)arg2 deleteShares:(id)arg3 saveUserSpecificRecords:(id)arg4 operationGroupName:(id)arg5 addDependencies:(BOOL)arg6 accountID:(id)arg7 ;
-(void)_addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 accountID:(id)arg3 operationGroupName:(id)arg4 waitForDependencies:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)deleteSharesForObjects:(id)arg1 accountID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setObjectIDsToRetry:(NSMutableSet *)arg1 ;
-(void)fetchRecordZoneChangesForAccountZoneIDs:(id)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)informCloudAnalyticsDelegateForOperationDidEnd:(id)arg1 recordsByRecordID:(id)arg2 operationError:(id)arg3 ;
-(void)setAccountStatus:(long long)arg1 ;
-(id)serverChangeTokenForChangedZonesInDatabase:(id)arg1 accountID:(id)arg2 ;
-(id<ICCloudContextDelegate>)cloudContextDelegate;
-(void)clearContainers;
-(long long)qualityOfService;
-(void)setObjectIDsToProcess:(NSMutableSet *)arg1 ;
-(void)updateConfiguration;
-(void)cloudKitAccountChanged:(id)arg1 ;
-(void)setNeedsToProcessAllObjects:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(NSMutableDictionary *)accountZoneIDsFetchingChanges;
-(BOOL)isCloudKitAccountAvailable;
-(void)retryOperationsIfNecessary;
-(void)updateAccountStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)newPlaceholderObjectForRecordID:(id)arg1 recordType:(id)arg2 accountID:(id)arg3 context:(id)arg4 ;
-(void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2 accountID:(id)arg3 ;
-(id<ICCloudAnalyticsDelegate>)cloudAnalyticsDelegate;
-(void)setDidCheckForLongLivedOperations:(BOOL)arg1 ;
-(void)setProcessingSelectorDelayer:(ICSelectorDelayer *)arg1 ;
-(void)processPendingCloudObjects;
-(void)finishOperationsForRecordID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)syncOnlyIfReachable;
-(BOOL)hasPendingOperations;
-(id)serverChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2 accountID:(id)arg3 ;
-(id)operationToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4 ;
-(void)syncIfNeeded;
-(double)timeIntervalToRetryAfterFromError:(id)arg1 ;
-(void)setSyncDisabledByServer:(BOOL)arg1 ;
-(id)allCloudObjectsInContext:(id)arg1 ;
-(void)addOperationToProcessObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)canRetryImmediatelyAfterError:(id)arg1 ;
-(BOOL)isFetchingAllRecordZones;
-(void)processObjectIDs:(id)arg1 operationQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleDatabaseNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 databaseScope:(long long)arg3 accountID:(id)arg4 ;
-(void)fetchSubscriptionsForDatabase:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)readinessLoggingDescription;
-(void)cancelEverythingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteServerChangeTokenForChangedZonesInDatabase:(id)arg1 accountID:(id)arg2 ;
-(void)setRetryTimer:(NSTimer *)arg1 ;
@end
