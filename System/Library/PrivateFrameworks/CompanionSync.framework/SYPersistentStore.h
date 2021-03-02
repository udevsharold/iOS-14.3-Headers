/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction, OS_dispatch_queue;
#import <CompanionSync/CompanionSync-Structs.h>
@class NSString, NSObject, NSMutableDictionary, NSMutableSet, NSSet, _SYSharedServiceDB, NSDate, NSError, NSDictionary;

@interface SYPersistentStore : NSObject {

	NSString* _path;
	CFStringRef _loggingFacility;
	double _timeToLiveCache;
	NSObject*<OS_os_transaction> _transaction;
	BOOL _changeTrackingEnabled;
	NSString* _peerID;
	NSMutableDictionary* _peerSeqnoSets;
	NSMutableSet* _ignoringMessageIDs;
	NSObject*<OS_dispatch_queue> _syncQ;
	sqlite3Ref _db;
	sqlite3_stmtRef _getInFullSync;
	sqlite3_stmtRef _getChangeCount;
	sqlite3_stmtRef _getNextExpireTime;
	sqlite3_stmtRef _purgeExpiredChanges;
	sqlite3_stmtRef _insertChange;
	sqlite3_stmtRef _getFullsyncSent;
	sqlite3_stmtRef _setFullsyncSent;
	sqlite3_stmtRef _logSyncComplete;
	sqlite3_stmtRef _getChangeIDsSinceVersion;
	sqlite3_stmtRef _getLocalVersion;
	sqlite3_stmtRef _getOldestVersion;
	sqlite3_stmtRef _setVectorClock;
	sqlite3_stmtRef _setPeerSeqNo;
	sqlite3_stmtRef _getPeerSeqNo;
	sqlite3_stmtRef _setPeerSeqNoSet;
	sqlite3_stmtRef _enterFullSync;
	sqlite3_stmtRef _exitFullSync;
	sqlite3_stmtRef _getIgnoringSyncID;
	sqlite3_stmtRef _getCurrentSyncID;
	sqlite3_stmtRef _getCurrentSyncStartTime;
	sqlite3_stmtRef _getLastEndedSyncID;
	sqlite3_stmtRef _getWaitingForSyncID;
	sqlite3_stmtRef _setWaitingForSyncID;
	sqlite3_stmtRef _setAllSentForSyncID;
	sqlite3_stmtRef _getAllSentForCurrentSync;
	sqlite3_stmtRef _getLastSyncError;
	sqlite3_stmtRef _setSyncUserInfo;
	sqlite3_stmtRef _getSyncUserInfo;
	sqlite3_stmtRef _setSyncIDSOptions;
	sqlite3_stmtRef _getSyncIDSOptions;
	BOOL _cachedVersionStale;
	double _unfinishedSyncTimeout;
	NSSet* _cachedChangedSyncIDs;
	unsigned long long _cachedChangedSyncIDsVersion;
	_SYSharedServiceDB* _sharedDB;

}

@property (nonatomic,retain) NSSet * cachedChangedSyncIDs;                                       //@synthesize cachedChangedSyncIDs=_cachedChangedSyncIDs - In the implementation block
@property (assign,nonatomic) unsigned long long cachedChangedSyncIDsVersion;                     //@synthesize cachedChangedSyncIDsVersion=_cachedChangedSyncIDsVersion - In the implementation block
@property (assign,nonatomic) BOOL cachedVersionStale;                                            //@synthesize cachedVersionStale=_cachedVersionStale - In the implementation block
@property (nonatomic,retain) _SYSharedServiceDB * sharedDB;                                      //@synthesize sharedDB=_sharedDB - In the implementation block
@property (assign,getter=isPerformingDeltaSync,nonatomic) BOOL performingDeltaSync; 
@property (nonatomic,readonly) NSString * path; 
@property (assign,nonatomic) double timeToLive; 
@property (nonatomic,readonly) unsigned long long changeCount; 
@property (nonatomic,readonly) NSString * peerID; 
@property (nonatomic,retain) NSString * vectorClockJSON; 
@property (nonatomic,copy) NSDate * overflowResyncTime; 
@property (nonatomic,copy) NSDate * lastMessageReceived; 
@property (assign,nonatomic) double unfinishedSyncTimeout;                                       //@synthesize unfinishedSyncTimeout=_unfinishedSyncTimeout - In the implementation block
@property (nonatomic,readonly) BOOL canStartNewSyncSession; 
@property (nonatomic,readonly) BOOL currentSyncSendComplete; 
@property (nonatomic,readonly) BOOL lastSyncFailed; 
@property (nonatomic,readonly) NSError * lastSyncError; 
@property (nonatomic,readonly) NSString * currentFullSyncID; 
@property (nonatomic,readonly) BOOL inFullSync; 
@property (nonatomic,readonly) NSString * lastSyncEndID; 
@property (nonatomic,copy) NSString * waitingForSyncEndID; 
@property (nonatomic,copy) NSDictionary * fullSyncUserInfo; 
@property (nonatomic,copy) NSDictionary * fullSyncIDSOptions; 
@property (assign,nonatomic) BOOL completedSync; 
@property (nonatomic,readonly) double durationOfLastFullSync; 
@property (nonatomic,readonly) unsigned long long currentLocalVersion; 
@property (nonatomic,readonly) unsigned long long lastSeenRemoteVersion; 
+(id)_loadOrCreatePeerIDForDB:(sqlite3Ref)arg1 ;
+(id)sharedPersistentStoreForService:(id)arg1 ;
+(BOOL)_tableEmpty:(id)arg1 db:(sqlite3Ref)arg2 ;
-(NSString *)currentFullSyncID;
-(void)_loadIgnoreList_LOCKED:(sqlite3Ref)arg1 ;
-(double)durationOfLastFullSync;
-(id)_decodeIndexSet:(id)arg1 ;
-(BOOL)_LOCKED_storeSequenceNumberSet:(id)arg1 forPeerID:(id)arg2 db:(sqlite3Ref)arg3 error:(id*)arg4 ;
-(double)timeToLive;
-(BOOL)currentSyncSendComplete;
-(NSError *)lastSyncError;
-(void)setPerformingDeltaSync:(BOOL)arg1 ;
-(BOOL)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2 ;
-(void)setCachedChangedSyncIDs:(NSSet *)arg1 ;
-(id)init;
-(NSDictionary *)fullSyncIDSOptions;
-(unsigned long long)lastSequenceNumberForPeerID:(id)arg1 ;
-(void)clearAllChanges;
-(BOOL)lastSyncFailed;
-(void)resetSequenceNumbersForPeer:(id)arg1 ;
-(void)_saveIgnoreList_LOCKED:(sqlite3Ref)arg1 ;
-(void)setFullSyncUserInfo:(NSDictionary *)arg1 ;
-(void)changeTrackingToggled:(BOOL)arg1 ;
-(id)_encodeIndexSet:(id)arg1 ;
-(NSString *)path;
-(NSDictionary *)fullSyncUserInfo;
-(void)dealloc;
-(void)setWaitingForSyncEndID:(NSString *)arg1 ;
-(void)setLastSequenceNumber:(unsigned long long)arg1 fromPeer:(id)arg2 ;
-(NSString *)waitingForSyncEndID;
-(void)setLastMessageReceived:(NSDate *)arg1 ;
-(BOOL)reassignCurrentSyncID:(id)arg1 ;
-(void)resetSequenceNumber:(unsigned long long)arg1 ;
-(BOOL)isPerformingDeltaSync;
-(void)setPeerID:(NSString *)arg1 ;
-(sqlite3Ref)_dbRef;
-(BOOL)_openDBAtPath:(id)arg1 ;
-(void)setCachedChangedSyncIDsVersion:(unsigned long long)arg1 ;
-(NSDate *)overflowResyncTime;
-(void)setOverflowResyncTime:(NSDate *)arg1 ;
-(void)sendCompletedForSyncWithID:(id)arg1 ;
-(BOOL)shouldIgnoreMessageID:(id)arg1 ;
-(id)lastDBErrorInfo;
-(_SYSharedServiceDB *)sharedDB;
-(BOOL)_inTransaction:(BOOL)arg1 do:(/*^block*/id)arg2 ;
-(NSString *)peerID;
-(void)_convertTimestamps;
-(NSSet *)cachedChangedSyncIDs;
-(BOOL)inFullSync;
-(BOOL)sequenceNumberIsDuplicate:(unsigned long long)arg1 forPeer:(id)arg2 ;
-(void)_withDB:(/*^block*/id)arg1 ;
-(unsigned long long)currentLocalVersion;
-(void)setCachedVersionStale:(BOOL)arg1 ;
-(BOOL)setLastSequenceNumber:(unsigned long long)arg1 fromPeer:(id)arg2 error:(id*)arg3 ;
-(id)initWithSharedDatabase:(id)arg1 ;
-(void)exitFullSyncWithID:(id)arg1 error:(id)arg2 ;
-(void)setCompletedSync:(BOOL)arg1 ;
-(unsigned long long)changeCount;
-(NSString *)vectorClockJSON;
-(unsigned long long)lastSeenRemoteVersion;
-(BOOL)completedSync;
-(NSDate *)lastMessageReceived;
-(void)_storeSequenceNumberSet:(id)arg1 forPeerID:(id)arg2 ;
-(NSString *)lastSyncEndID;
-(void)_prepareStatements;
-(id)_sequenceNumberSetForPeerID:(id)arg1 inDB:(sqlite3Ref)arg2 ;
-(unsigned long long)_oldestVersion;
-(void)setSharedDB:(_SYSharedServiceDB *)arg1 ;
-(unsigned long long)_lastSequenceNumberForPeerID_LOCKED:(id)arg1 db:(sqlite3Ref)arg2 ;
-(BOOL)logChanges:(id)arg1 error:(id*)arg2 ;
-(void)setUnfinishedSyncTimeout:(double)arg1 ;
-(BOOL)ignoringFullSyncWithID:(id)arg1 ;
-(double)unfinishedSyncTimeout;
-(id)dbPath;
-(void)setFullSyncIDSOptions:(NSDictionary *)arg1 ;
-(BOOL)cachedVersionStale;
-(id)initWithPath:(id)arg1 loggingFacility:(const CFStringRef)arg2 changeTrackingEnabled:(BOOL)arg3 ;
-(void)setVectorClockJSON:(NSString *)arg1 ;
-(int)_getSchemaVersion;
-(BOOL)logSyncCompletionToRemoteVersion:(unsigned long long)arg1 ;
-(void)_cacheTTL;
-(void)setTimeToLive:(double)arg1 ;
-(void)_verifyInTransactionForFullSync;
-(unsigned long long)nextSequenceNumber;
-(void)addMessageIDsToIgnore:(id)arg1 ;
-(BOOL)canStartNewSyncSession;
-(void)enterFullSyncWithID:(id)arg1 ignoring:(BOOL)arg2 ;
-(unsigned long long)cachedChangedSyncIDsVersion;
-(void)_setupSharedDB;
-(void)_fixPeerInfo;
-(void)removeMessageIDFromIgnoreList:(id)arg1 ;
@end
