/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray;

@interface IMCloudKitSyncState : NSObject {

	BOOL _hasExited;
	BOOL _isDisablingDevices;
	BOOL _accountIsEnabled;
	unsigned long long _syncControllerSyncState;
	long long _syncControllerSyncType;
	long long _syncControllerRecordType;
	NSDate* _exitDate;
	long long _changingEnabledState;
	NSDate* _lastSyncDate;
	NSArray* _errors;
	long long _accountStatus;
	long long _syncState;

}

@property (nonatomic,readonly) BOOL accountIsEnabled;                                   //@synthesize accountIsEnabled=_accountIsEnabled - In the implementation block
@property (nonatomic,readonly) long long syncState;                                     //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,readonly) BOOL isSyncing; 
@property (nonatomic,readonly) BOOL isSyncingPaused; 
@property (nonatomic,readonly) unsigned long long syncControllerSyncState;              //@synthesize syncControllerSyncState=_syncControllerSyncState - In the implementation block
@property (nonatomic,readonly) long long syncControllerSyncType;                        //@synthesize syncControllerSyncType=_syncControllerSyncType - In the implementation block
@property (nonatomic,readonly) long long syncControllerRecordType;                      //@synthesize syncControllerRecordType=_syncControllerRecordType - In the implementation block
@property (nonatomic,readonly) BOOL isSyncingAvailable; 
@property (nonatomic,readonly) BOOL hasExited;                                          //@synthesize hasExited=_hasExited - In the implementation block
@property (nonatomic,copy,readonly) NSDate * exitDate;                                  //@synthesize exitDate=_exitDate - In the implementation block
@property (nonatomic,readonly) BOOL isSyncingEnabled; 
@property (nonatomic,readonly) long long changingEnabledState;                          //@synthesize changingEnabledState=_changingEnabledState - In the implementation block
@property (nonatomic,readonly) BOOL isDisablingDevices;                                 //@synthesize isDisablingDevices=_isDisablingDevices - In the implementation block
@property (nonatomic,readonly) BOOL canChangeEnabledSetting; 
@property (nonatomic,readonly) BOOL canStartSyncing; 
@property (nonatomic,readonly) BOOL canEnableSyncing; 
@property (nonatomic,readonly) BOOL isSyncEnabledForDisplayOnly; 
@property (nonatomic,readonly) NSDate * lastSyncDate;                                   //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,readonly) NSArray * errors;                                        //@synthesize errors=_errors - In the implementation block
@property (nonatomic,readonly) BOOL syncingFailed; 
@property (nonatomic,readonly) long long accountStatus;                                 //@synthesize accountStatus=_accountStatus - In the implementation block
+(id)logHandle;
-(id)logHandle;
-(BOOL)isDisablingDevices;
-(BOOL)isSyncingEnabled;
-(long long)syncControllerRecordType;
-(long long)syncState;
-(BOOL)isSyncingAvailable;
-(long long)accountStatus;
-(id)description;
-(NSDate *)exitDate;
-(BOOL)isSyncingPaused;
-(NSDate *)lastSyncDate;
-(NSArray *)errors;
-(unsigned long long)syncControllerSyncState;
-(long long)syncControllerSyncType;
-(BOOL)isSyncing;
-(id)initWithAccountEnabled:(BOOL)arg1 stateDictionary:(id)arg2 ;
-(BOOL)shouldFetchSyncStatistics;
-(id)createSyncProgressWithSyncStatistics:(id)arg1 ;
-(BOOL)shouldRescheduleSyncSyncProgress;
-(BOOL)syncingFailed;
-(BOOL)_isChangingEnabledState;
-(long long)changingEnabledState;
-(id)syncErrorWithDomain:(id)arg1 code:(long long)arg2 ;
-(BOOL)canEnableSyncing;
-(BOOL)canStartSyncing;
-(BOOL)canChangeEnabledSetting;
-(BOOL)isSyncEnabledForDisplayOnly;
-(BOOL)hasExited;
-(BOOL)accountIsEnabled;
-(BOOL)_shouldHideProgressInFirstSevenDays;
@end

