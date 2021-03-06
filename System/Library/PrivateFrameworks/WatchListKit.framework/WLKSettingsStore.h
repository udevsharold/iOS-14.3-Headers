/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSNumber, NSMutableArray, NSUserDefaults, NSXPCConnection, NSDate;

@interface WLKSettingsStore : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _readWriteQueue;
	NSString* _pushToken;
	NSString* _accountID;
	NSNumber* _optedInVal;
	BOOL _optedIn;
	BOOL _migratediOS;
	BOOL _migratedtvOS;
	NSMutableArray* _apps;
	NSUserDefaults* _defaultsAccessor;
	int _didChangeNotificationToken;
	NSXPCConnection* _connection;
	BOOL _hasOutstandingChanges;
	int _ignoreChangesCount;
	NSDate* _lastSyncDate;
	NSDate* _lastSyncToCloudDate;

}

@property (assign) int ignoreChangesCount;                                     //@synthesize ignoreChangesCount=_ignoreChangesCount - In the implementation block
@property (assign) BOOL hasOutstandingChanges;                                 //@synthesize hasOutstandingChanges=_hasOutstandingChanges - In the implementation block
@property (assign,nonatomic) BOOL privateModeEnabled; 
@property (assign,nonatomic) BOOL sportsScoreSpoilersAllowed; 
@property (assign,nonatomic) BOOL optedIn; 
@property (nonatomic,copy) NSNumber * optedInVal;                              //@synthesize optedInVal=_optedInVal - In the implementation block
@property (assign,nonatomic) BOOL migratediOS; 
@property (assign,nonatomic) BOOL migratedtvOS; 
@property (nonatomic,copy) NSString * pushToken; 
@property (nonatomic,copy,readonly) NSDate * lastSyncDate;                     //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastSyncToCloudDate;              //@synthesize lastSyncToCloudDate=_lastSyncToCloudDate - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)sharedSettings;
+(void)synchronizeSettingsDefaultsForKeys:(id)arg1 ;
-(NSString *)pushToken;
-(void)setIgnoreChangesCount:(int)arg1 ;
-(id)_connection;
-(id)_dictionaryRepresentationDataOnly;
-(void)refresh;
-(void)beginIgnoringChanges;
-(id)settingsForChannelID:(id)arg1 externalID:(id)arg2 ;
-(void)setHasOutstandingChanges:(BOOL)arg1 ;
-(BOOL)sportsScoreSpoilersAllowed;
-(void)_dictionaryOnDisk:(/*^block*/id)arg1 ;
-(void)setPushToken:(NSString *)arg1 ;
-(id)init;
-(BOOL)hasOutstandingChanges;
-(id)_dictionaryOnDisk;
-(void)setPrivateModeEnabled:(BOOL)arg1 ;
-(id)deniedBrands;
-(void)forceUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activeAccountChangedNotification:(id)arg1 ;
-(void)dealloc;
-(void)setMigratedtvOS:(BOOL)arg1 ;
-(BOOL)migratediOS;
-(BOOL)migratedtvOS;
-(BOOL)optedIn;
-(void)setOptedInVal:(NSNumber *)arg1 ;
-(void)setOptedIn:(BOOL)arg1 ;
-(void)synchronize:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateDisplayNamesForUI:(/*^block*/id)arg1 ;
-(id)_appsForChannelID:(id)arg1 ;
-(id)_watchListAppsFiltered;
-(void)_writeToDisk;
-(void)_writeToDisk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(id)watchListApps;
-(id)description;
-(id)_dictionaryRepresentationCopyingItems:(BOOL)arg1 ;
-(int)ignoreChangesCount;
-(BOOL)synchronize:(unsigned long long)arg1 ;
-(NSNumber *)optedInVal;
-(void)setMigratediOS:(BOOL)arg1 ;
-(id)consentedBrands;
-(void)setName:(id)arg1 forChannelID:(id)arg2 externalID:(id)arg3 ;
-(BOOL)privateModeEnabled;
-(id)_dictionaryRepresentation;
-(id)_supportPath;
-(void)setSportsScoreSpoilersAllowed:(BOOL)arg1 ;
-(NSDate *)lastSyncToCloudDate;
-(void)setLastSyncToCloudDate:(NSDate *)arg1 ;
-(void)_readFromDisk;
-(NSDate *)lastSyncDate;
-(void)endIgnoringChanges;
-(id)watchListAppsFiltered;
-(void)_tickleKVO;
-(void)_attemptCullingOfObsoleteApp:(id)arg1 ;
-(void)setStatus:(unsigned long long)arg1 forChannelID:(id)arg2 externalID:(id)arg3 ;
-(void)_removeWatchListApp:(id)arg1 ;
@end

