/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACMonitoredAccountStoreDelegateProtocol.h>
#import <libobjc.A.dylib/RCManagedConfigurationHelperDelegate.h>

@protocol RCCloudSyncAccessManagerDelegate;
@class ACMonitoredAccountStore, RCManagedConfigurationHelper, NSString;

@interface RCCloudSyncAccessManager : NSObject <ACMonitoredAccountStoreDelegateProtocol, RCManagedConfigurationHelperDelegate> {

	ACMonitoredAccountStore* _accountStore;
	long long _startMonitoringOnceToken;
	RCManagedConfigurationHelper* _managedConfigurationHelper;
	int _tccNotifyToken;
	id<RCCloudSyncAccessManagerDelegate> _delegate;

}

@property (readonly) ACMonitoredAccountStore * accountStore; 
@property (assign,nonatomic,__weak) id<RCCloudSyncAccessManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL cloudSyncIsAvailable; 
@property (assign,nonatomic) int tccCloudAccess; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ACMonitoredAccountStore *)accountStore;
-(int)tccCloudAccess;
-(BOOL)cloudSyncIsAvailable;
-(void)managedConfigurationUpdated:(BOOL)arg1 ;
-(void)startMonitoringAccountChanges;
-(void)setTccCloudAccess:(int)arg1 ;
-(void)dealloc;
-(void)_availabilityChanged;
-(void)setDelegate:(id<RCCloudSyncAccessManagerDelegate>)arg1 ;
-(void)accountWasRemoved:(id)arg1 ;
-(void)accountWasAdded:(id)arg1 ;
-(id<RCCloudSyncAccessManagerDelegate>)delegate;
@end

