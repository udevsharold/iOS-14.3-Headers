/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Accounts/Notification/DAAccountNotifier.bundle/DAAccountNotifier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAAccountNotifier/DAAccountNotifier-Structs.h>
#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSMutableDictionary, NSString;

@interface DAAccountNotifier : NSObject <ACDAccountNotificationPlugin> {

	os_unfair_lock_s _stopMonitoringAgentsTokensLock;
	NSMutableDictionary* _stopMonitoringAgentsTokens;

}

@property (nonatomic,readonly) NSMutableDictionary * stopMonitoringAgentsTokens;              //@synthesize stopMonitoringAgentsTokens=_stopMonitoringAgentsTokens - In the implementation block
@property (nonatomic,readonly) BOOL shouldProcessAccountChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dataclassesWeCareAbout;
+(BOOL)_isStoreFromRemindd:(id)arg1 ;
+(BOOL)_daAccountChangeType:(unsigned long long*)arg1 forACAccountChangeType:(int)arg2 ;
+(BOOL)_isStoreFromDataAccess:(id)arg1 ;
+(BOOL)_isStore:(id)arg1 fromClient:(id)arg2 ;
+(id)_propertiesThatTriggerRefresh;
+(id)_accountPropertiesThatTriggerRefresh;
-(id)init;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(NSMutableDictionary *)stopMonitoringAgentsTokens;
-(id)_popMonitoringAgentsTokenForAccountWithIdentifier:(id)arg1 ;
-(BOOL)shouldProcessAccountChanges;
-(BOOL)_shouldRefreshForChangeOfType:(int)arg1 forAccount:(id)arg2 oldAccount:(id)arg3 ;
-(void)_stopMonitoringAgentsForAccountWithIdentifier:(id)arg1 ;
-(id)_modifiedDataclassesForAccount:(id)arg1 oldAccount:(id)arg2 ;
-(void)_disableLocalStoreIfNeedForAccount:(id)arg1 ;
-(void)_startMonitoringAgentsIfNeededForAccountWithIdentifier:(id)arg1 ;
@end
