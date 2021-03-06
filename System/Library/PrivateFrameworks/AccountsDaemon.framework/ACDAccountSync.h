/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSTimer, NSObject, ACAccountStore;

@interface ACDAccountSync : NSObject {

	int _circleToken;
	int _keychainToken;
	NSTimer* _timer;
	NSObject*<OS_dispatch_queue> _syncQueue;
	BOOL _enabled;
	BOOL _duchessEnabled;
	ACAccountStore* _store;

}
+(id)sharedAccountSyncServer;
+(id)accountSyncUnsupportedTypes;
+(id)accountSyncSupportedTypes;
+(id)accountSyncPropertiesForAccount:(id)arg1 ;
+(id)duchessHostnames;
-(void)devices;
-(void)sync;
-(void)kvsChanges:(id)arg1 ;
-(id)accountPropertiesFromDictionary:(id)arg1 forType:(id)arg2 ;
-(void)fixLDAP;
-(id)init;
-(void)createAccounts:(id)arg1 ;
-(BOOL)migrate;
-(BOOL)isDataclassActionRequired:(id)arg1 ;
-(id)remoteHostnameAccounts;
-(id)primaryiCloudAccount;
-(void)dealloc;
-(void)deleteAccounts:(id)arg1 ;
-(id)processAdds;
-(void)registerForNotifications;
-(void)scheduleSync;
-(BOOL)detectDuchess;
-(id)processHostnameDeletes;
-(BOOL)isMigrated;
-(id)getAccountsOfType:(id)arg1 ;
-(void)setiOSVersion;
-(BOOL)unsupportedType:(id)arg1 ;
-(void)markMigrated;
-(void)queueSync;
-(void)waitForBuddy;
-(id)processDeletes;
-(BOOL)locallyMigrated;
-(void)createKeychainItems:(id)arg1 ;
-(id)getiOSVersion;
-(void)postNotificationFor:(id)arg1 ;
-(id)localHostnameAccounts;
-(id)ldapAccounts;
-(void)accountChanges:(id)arg1 ;
-(id)remoteAccounts;
-(id)smtpAccounts;
-(BOOL)checkCircleState;
-(void)fixSMTP;
-(void)setupAccountSync;
-(id)localAccounts;
-(id)processHostnameAdds;
-(BOOL)supportedType:(id)arg1 ;
@end

