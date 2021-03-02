/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPCloudSynchronizerRunConditionsDelegate.h>
#import <libobjc.A.dylib/MSPCloudNotificationReceiver.h>

@protocol OS_dispatch_source, OS_dispatch_queue, MSPCloudSynchronizerDelegate;
@class NSString, MSPCloudSynchronizerRunConditions, NSObject, NSUUID, MSPCloudClientRegistration, MSPJournal, MSPCloudMigrator, NSArray, MSPCloudKitAccountAccess;

@interface MSPCloudSynchronizer : NSObject <MSPCloudSynchronizerRunConditionsDelegate, MSPCloudNotificationReceiver> {

	BOOL _isRunning;
	BOOL _hasMigratedPreSync;
	BOOL _hasMigrated;
	NSString* _accountID;
	MSPCloudSynchronizerRunConditions* _runConditions;
	NSObject*<OS_dispatch_source> _mergeTimer;
	NSUUID* _clientIdentifier;
	MSPCloudClientRegistration* _clientRegistration;
	MSPJournal* _journal;
	NSObject*<OS_dispatch_queue> _mergeQueue;
	MSPCloudMigrator* _migrator;
	unsigned long long _lastRetryInterval;
	NSArray* _containers;
	id<MSPCloudSynchronizerDelegate> _delegate;
	MSPCloudKitAccountAccess* _cloudAccess;

}

@property (nonatomic,retain) NSString * accountID;                                           //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) BOOL isRunning;                                                 //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) MSPCloudSynchronizerRunConditions * runConditions;              //@synthesize runConditions=_runConditions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> mergeTimer;                       //@synthesize mergeTimer=_mergeTimer - In the implementation block
@property (nonatomic,retain) NSUUID * clientIdentifier;                                      //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) MSPCloudClientRegistration * clientRegistration;                //@synthesize clientRegistration=_clientRegistration - In the implementation block
@property (nonatomic,retain) MSPJournal * journal;                                           //@synthesize journal=_journal - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mergeQueue;                        //@synthesize mergeQueue=_mergeQueue - In the implementation block
@property (nonatomic,retain) MSPCloudMigrator * migrator;                                    //@synthesize migrator=_migrator - In the implementation block
@property (assign,nonatomic) BOOL hasMigratedPreSync;                                        //@synthesize hasMigratedPreSync=_hasMigratedPreSync - In the implementation block
@property (assign,nonatomic) BOOL hasMigrated;                                               //@synthesize hasMigrated=_hasMigrated - In the implementation block
@property (assign,nonatomic) unsigned long long lastRetryInterval;                           //@synthesize lastRetryInterval=_lastRetryInterval - In the implementation block
@property (nonatomic,retain) NSArray * containers;                                           //@synthesize containers=_containers - In the implementation block
@property (assign,nonatomic,__weak) id<MSPCloudSynchronizerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MSPCloudKitAccountAccess * cloudAccess;                         //@synthesize cloudAccess=_cloudAccess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)containers;
-(void)performMigrationsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isRunning;
-(MSPJournal *)journal;
-(void)setJournal:(MSPJournal *)arg1 ;
-(void)setMigrator:(MSPCloudMigrator *)arg1 ;
-(void)requestMergeWithReason:(unsigned long long)arg1 ;
-(MSPCloudMigrator *)migrator;
-(void)setIsRunning:(BOOL)arg1 ;
-(void)performPreSyncMigrations:(/*^block*/id)arg1 ;
-(NSString *)accountID;
-(void)requestMergeWithReason:(unsigned long long)arg1 afterDelay:(unsigned long long)arg2 ;
-(id)initWithCloudContainers:(id)arg1 clientRegistration:(id)arg2 runConditions:(id)arg3 cloudAccess:(id)arg4 ;
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(void)setMergeTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)dealloc;
-(void)requestMerge;
-(id)initWithDefaultRemoteContainers;
-(MSPCloudSynchronizerRunConditions *)runConditions;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setClientRegistration:(MSPCloudClientRegistration *)arg1 ;
-(void)runConditionsChanged:(id)arg1 ;
-(void)didReceiveRemoteNotification:(id)arg1 ;
-(void)setLastRetryInterval:(unsigned long long)arg1 ;
-(void)_merge;
-(void)prepareForMergeWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)mergeQueue;
-(NSObject*<OS_dispatch_source>)mergeTimer;
-(MSPCloudClientRegistration *)clientRegistration;
-(void)start;
-(BOOL)hasMigrated;
-(void)setRunConditions:(MSPCloudSynchronizerRunConditions *)arg1 ;
-(unsigned long long)retryIntervalForError:(id)arg1 ;
-(void)setDelegate:(id<MSPCloudSynchronizerDelegate>)arg1 ;
-(void)setHasMigrated:(BOOL)arg1 ;
-(BOOL)isCurrentlyRunning;
-(id)initWithContainers:(id)arg1 ;
-(id)initWithDefaultLocalContainers;
-(NSUUID *)clientIdentifier;
-(void)merge;
-(void)handleAccountChangeWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMergeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)hasMigratedPreSync;
-(MSPCloudKitAccountAccess *)cloudAccess;
-(void)setCloudAccess:(MSPCloudKitAccountAccess *)arg1 ;
-(unsigned long long)lastRetryInterval;
-(void)stop;
-(id<MSPCloudSynchronizerDelegate>)delegate;
-(void)setContainers:(NSArray *)arg1 ;
-(void)setHasMigratedPreSync:(BOOL)arg1 ;
@end
