/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/Email-Structs.h>
#import <Email/EMRepository.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMAccountRepositoryObserver.h>

@protocol EFScheduler, EFCancelable;
@class NSMutableDictionary, EMRemoteConnection, NSArray, NSString;

@interface EMAccountRepository : EMRepository <EFLoggable, EMAccountRepositoryObserver> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _accounts;
	EMRemoteConnection* _connection;
	id<EFScheduler> _recoveryHandlerScheduler;
	id<EFScheduler> _observerScheduler;
	id<EFCancelable> _cancelable;

}

@property (nonatomic,readonly) NSArray * allAccounts; 
@property (nonatomic,readonly) NSArray * receivingAccounts; 
@property (nonatomic,readonly) NSArray * deliveryAccounts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)remoteInterface;
-(id)initInternal;
-(id)initWithRemoteConnection:(id)arg1 ;
-(void)_postAccountChangedNotification;
-(void)accountsChanged:(id)arg1 ;
-(NSArray *)allAccounts;
-(void)dealloc;
-(id)accountForAccountIdentifier:(id)arg1 ;
-(id)_currentAccountsByObjectIDMap;
-(void)requestAccounts;
-(void)didBeginObserving;
-(void)accountsAdded:(id)arg1 ;
-(void)didEndObserving;
-(void)accountsRemoved:(id)arg1 ;
-(NSArray *)deliveryAccounts;
-(id)accountForIdentifier:(id)arg1 ;
-(void)_fetchAccountsAndObserveChanges;
-(NSArray *)receivingAccounts;
@end
