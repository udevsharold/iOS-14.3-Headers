/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCDatabaseProvider, OS_dispatch_queue, OS_nw_path_monitor;
#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
@class VCCKShortcutSyncService, CKContainer, NSObject, VCCKApplicationStateObserver, CKRecordID, NSString;

@interface VCCKShortcutSyncCoordinator : NSObject {

	BOOL _started;
	BOOL _syncEnabled;
	VCCKShortcutSyncService* _currentSyncService;
	long long _accountStatus;
	id<VCDatabaseProvider> _databaseProvider;
	CKContainer* _container;
	NSObject*<OS_dispatch_queue> _stateAccessQueue;
	NSObject*<OS_nw_path_monitor> _pathMonitor;
	CTServerConnectionRef _telephonyConnection;
	VCCKApplicationStateObserver* _applicationObserver;
	CKRecordID* _userRecordID;

}

@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;                         //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) CKContainer * container;                                         //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateAccessQueue;                   //@synthesize stateAccessQueue=_stateAccessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_path_monitor> pathMonitor;                       //@synthesize pathMonitor=_pathMonitor - In the implementation block
@property (nonatomic,readonly) CTServerConnectionRef telephonyConnection;                       //@synthesize telephonyConnection=_telephonyConnection - In the implementation block
@property (nonatomic,readonly) VCCKApplicationStateObserver * applicationObserver;              //@synthesize applicationObserver=_applicationObserver - In the implementation block
@property (assign,getter=isStarted,nonatomic) BOOL started;                                     //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) long long accountStatus;                                           //@synthesize accountStatus=_accountStatus - In the implementation block
@property (nonatomic,retain) CKRecordID * userRecordID;                                         //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,retain) VCCKShortcutSyncService * currentSyncService;                      //@synthesize currentSyncService=_currentSyncService - In the implementation block
@property (nonatomic,readonly) NSString * accountForSyncToken; 
@property (assign,getter=isSyncEnabled,nonatomic) BOOL syncEnabled;                             //@synthesize syncEnabled=_syncEnabled - In the implementation block
-(BOOL)isStarted;
-(CKContainer *)container;
-(NSString *)accountForSyncToken;
-(id)initWithDatabaseProvider:(id)arg1 ;
-(id<VCDatabaseProvider>)databaseProvider;
-(void)dealloc;
-(void)setSyncEnabled:(BOOL)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)deleteLegacyShortcutsZoneSubscriptionIfNeeded;
-(NSObject*<OS_nw_path_monitor>)pathMonitor;
-(void)stopObservingAccountChanges;
-(void)stopObservingUserDefaults;
-(long long)accountStatus;
-(void)handleAccountChangedNotification:(id)arg1 ;
-(void)startObservingAccountChanges;
-(BOOL)isSyncEnabled;
-(void)setUserRecordID:(CKRecordID *)arg1 ;
-(void)start;
-(void)startObservingReachability;
-(void)stopObservingApplicationVisibility;
-(void)updateCurrentSyncServiceIfNeeded;
-(CKRecordID *)userRecordID;
-(CTServerConnectionRef)telephonyConnection;
-(void)setAccountStatus:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)handleCloudKitSyncZoneWasPurgedChange;
-(void)setCurrentSyncService:(VCCKShortcutSyncService *)arg1 ;
-(void)handleCloudKitSyncEnabledChange;
-(void)stopObservingDataUsagePermission;
-(void)stopObservingReachability;
-(void)setupPathMonitor;
-(VCCKApplicationStateObserver *)applicationObserver;
-(void)startObservingApplicationVisibility;
-(VCCKShortcutSyncService *)currentSyncService;
-(void)startObservingUserDefaults;
-(void)startObservingDataUsagePermission;
-(void)updateAccountStatusAndUserRecordID;
-(NSObject*<OS_dispatch_queue>)stateAccessQueue;
@end

