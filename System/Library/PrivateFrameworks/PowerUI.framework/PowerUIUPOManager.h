/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDContext, OS_os_log, OS_dispatch_queue;
@class NSBundle, UNUserNotificationCenter, NSUserDefaults, NSDate, NSObject;

@interface PowerUIUPOManager : NSObject {

	BOOL _dataProviderLoaded;
	int _unlockToken;
	int _mitigationsDisabledToken;
	NSBundle* _bundle;
	UNUserNotificationCenter* _userNotificationCenter;
	NSUserDefaults* _defaults;
	id<_CDContext> _contextStore;
	NSDate* _lastTimeLocked;
	NSDate* _upoTime;
	NSObject*<OS_os_log> _log;
	NSObject*<OS_dispatch_queue> _lockNotificationQueue;
	NSObject*<OS_dispatch_queue> _notificationResponseQueue;

}

@property (nonatomic,retain) NSBundle * bundle;                                                   //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) UNUserNotificationCenter * userNotificationCenter;                   //@synthesize userNotificationCenter=_userNotificationCenter - In the implementation block
@property (assign,nonatomic) BOOL dataProviderLoaded;                                             //@synthesize dataProviderLoaded=_dataProviderLoaded - In the implementation block
@property (nonatomic,retain) NSUserDefaults * defaults;                                           //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) id<_CDContext> contextStore;                                         //@synthesize contextStore=_contextStore - In the implementation block
@property (assign,nonatomic) int unlockToken;                                                     //@synthesize unlockToken=_unlockToken - In the implementation block
@property (assign,nonatomic) int mitigationsDisabledToken;                                        //@synthesize mitigationsDisabledToken=_mitigationsDisabledToken - In the implementation block
@property (nonatomic,retain) NSDate * lastTimeLocked;                                             //@synthesize lastTimeLocked=_lastTimeLocked - In the implementation block
@property (retain) NSDate * upoTime;                                                              //@synthesize upoTime=_upoTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                            //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lockNotificationQueue;                  //@synthesize lockNotificationQueue=_lockNotificationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationResponseQueue;              //@synthesize notificationResponseQueue=_notificationResponseQueue - In the implementation block
+(id)sharedInstance;
-(NSUserDefaults *)defaults;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSBundle *)bundle;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id<_CDContext>)contextStore;
-(NSObject*<OS_dispatch_queue>)notificationResponseQueue;
-(NSObject*<OS_os_log>)log;
-(id)init;
-(NSObject*<OS_dispatch_queue>)lockNotificationQueue;
-(void)setLockNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUnlockToken:(int)arg1 ;
-(NSDate *)upoTime;
-(void)setUpoTime:(NSDate *)arg1 ;
-(void)displayPostUPONotification;
-(void)setLastTimeLocked:(NSDate *)arg1 ;
-(id)sortDescriptors;
-(void)registerForWithdrawalNotifications;
-(void)setDataProviderLoaded:(BOOL)arg1 ;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSDate *)lastTimeLocked;
-(void)clearMitigationsEnabledNotificationRequestIfNecessary;
-(int)unlockToken;
-(UNUserNotificationCenter *)userNotificationCenter;
-(void)requestBulletin;
-(void)removeMitigationsEnabledNotification;
-(BOOL)dataProviderLoaded;
-(void)setMitigationsDisabledToken:(int)arg1 ;
-(int)mitigationsDisabledToken;
-(void)setNotificationResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dataProviderDidLoad;
-(void)displayBatteryServiceNotification;
-(void)displayMitigationsEnabledNotification;
-(void)setContextStore:(id<_CDContext>)arg1 ;
-(id)mitigationsEnabledNotificationRequest;
-(void)setUserNotificationCenter:(UNUserNotificationCenter *)arg1 ;
@end

