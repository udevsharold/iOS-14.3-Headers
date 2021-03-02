/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue, BRCAccountHandlerDelegate, OS_dispatch_workloop;
@class BRCAccountSession, NSString, NSObject, NSMutableDictionary;

@interface BRCAccountHandler : NSObject <MCProfileConnectionObserver> {

	BRCAccountSession* _session;
	NSString* _currentAccountID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _migrationStatusSetterQueue;
	BOOL _hasSetMigrationComplete;
	NSMutableDictionary* _syncPolicyByFolderType;
	id<BRCAccountHandlerDelegate> _delegate;
	NSObject*<OS_dispatch_workloop> _pushWorkloop;

}

@property (assign,nonatomic,__weak) id<BRCAccountHandlerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BRCAccountSession * session;                               //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_workloop> pushWorkloop;              //@synthesize pushWorkloop=_pushWorkloop - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)primaryiCloudAccount;
+(BOOL)destroyCurrentAccountSynchronously;
+(id)accountIDPath;
+(id)primaryiCloudAccountID;
+(id)mobileDocsAccountID;
+(id)dbAccountID;
+(void)_migrateAccountIfNecessaryForAccountID:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BRCAccountSession *)session;
-(void)reloadSyncedFolderPolicies;
-(id)init;
-(BOOL)setDBAccountID:(id)arg1 ;
-(void)_updateAccountToAccountID:(id)arg1 ;
-(NSObject*<OS_dispatch_workloop>)pushWorkloop;
-(void)markMigrationCompletedForDSID:(id)arg1 ;
-(void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
-(void)dealloc;
-(void)destroyCurrentSessionSynchronously;
-(void)setMigrationStatus:(char)arg1 forDSID:(id)arg2 shouldUpdateAccount:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)__destroySessionWithIntents:(id)arg1 ;
-(long long)syncPolicyforSyncedFolderType:(unsigned long long)arg1 ;
-(BOOL)_createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2 ;
-(void)setSyncPolicy:(long long)arg1 forSyncedFolderType:(unsigned long long)arg2 ;
-(void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(BOOL)arg1 ;
-(BOOL)_loadCurrentOnDiskAccountSessionWithError:(id*)arg1 ;
-(void)startAndLoadCurrentAccountSynchronously;
-(void)_handleAccountWillChange;
-(void)setDelegate:(id<BRCAccountHandlerDelegate>)arg1 ;
-(void)_destroyCurrentSessionSynchronously;
-(void)jetsamCloudDocsApps;
-(void)_handleAccountDidChange;
-(id<BRCAccountHandlerDelegate>)delegate;
-(BOOL)createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2 ;
@end
