/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, IMAccount;

@interface IMAccountController : NSObject {

	NSMutableDictionary* _accountMap;
	BOOL _isReadOnly;
	BOOL _cachesEnabled;
	NSArray* _operationalAccountsCache;
	NSMutableDictionary* _serviceToActiveAccountsMap;
	NSMutableDictionary* _serviceToAccountsMap;
	NSMutableDictionary* _serviceToConnectedAccountsMap;
	NSMutableDictionary* _serviceToOperationalAccountsMap;
	BOOL _networkDataAvailable;
	NSArray* _accounts;

}

@property (copy) NSArray * accounts;                                           //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,readonly) id bestAccountForStatus; 
@property (nonatomic,readonly) int numberOfAccounts; 
@property (nonatomic,readonly) IMAccount * activeIMessageAccount; 
@property (nonatomic,readonly) IMAccount * activeSMSAccount; 
@property (nonatomic,readonly) NSArray * activeAccounts; 
@property (nonatomic,readonly) NSArray * connectedAccounts; 
@property (nonatomic,readonly) NSArray * operationalAccounts; 
@property (assign,nonatomic) BOOL networkDataAvailable;                        //@synthesize networkDataAvailable=_networkDataAvailable - In the implementation block
+(id)sharedInstance;
+(id)bestAccountFromAccounts:(id)arg1 ;
-(id)__ck_bestAccountForAddresses:(id)arg1 withFallbackService:(id)arg2 ;
-(id)__ck_defaultAccountForService:(id)arg1 ;
-(id)__ck_bestAccountForAddresses:(id)arg1 ;
-(id)__ck_bestAccountForAddress:(id)arg1 ;
-(void)autoLogin;
-(BOOL)addAccount:(id)arg1 ;
-(void)setAccounts:(NSArray *)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(id)connectedAccountsWithCapability:(unsigned long long)arg1 ;
-(NSArray *)accounts;
-(long long)activeAccountsAreEligibleForAppleSMSFilter;
-(id)operationalAccountsForService:(id)arg1 ;
-(BOOL)activateAndHandleReconnectAccount:(id)arg1 ;
-(BOOL)accountConnected:(id)arg1 ;
-(id)init;
-(id)bestConnectedAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)accountsForService:(id)arg1 ;
-(BOOL)activateAccounts:(id)arg1 ;
-(BOOL)addAccount:(id)arg1 locally:(BOOL)arg2 ;
-(BOOL)canActivateAccounts:(id)arg1 ;
-(BOOL)readOnly;
-(BOOL)accountConnecting:(id)arg1 ;
-(BOOL)deleteAccount:(id)arg1 ;
-(id)accountForUniqueID:(id)arg1 ;
-(void)dealloc;
-(id)aimAccount;
-(id)bestAccountForService:(id)arg1 login:(id)arg2 guid:(id)arg3 ;
-(BOOL)activateAccount:(id)arg1 locally:(BOOL)arg2 ;
-(BOOL)addAccount:(id)arg1 atIndex:(int)arg2 ;
-(IMAccount *)activeSMSAccount;
-(id)__iCloudSystemAccountForService:(id)arg1 ;
-(id)bestAccountWithCapability:(unsigned long long)arg1 ;
-(BOOL)activateAccount:(id)arg1 force:(BOOL)arg2 ;
-(id)bestAccountForStatus;
-(BOOL)deactivateAccount:(id)arg1 ;
-(void)_requestNetworkDataAvailability;
-(void)setNetworkDataAvailable:(BOOL)arg1 ;
-(NSArray *)activeAccounts;
-(id)bestActiveAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)activeAccountsForService:(id)arg1 ;
-(void)_accountRegistrationStatusChanged:(id)arg1 ;
-(id)connectedAccountsForService:(id)arg1 ;
-(BOOL)_shouldPerformDeferredSetup;
-(id)mostLoggedInAccount;
-(id)iMessageAccountForLastAddressedHandle:(id)arg1 simID:(id)arg2 ;
-(id)accountsWithCapability:(unsigned long long)arg1 ;
-(BOOL)metionedHandleMatchesMeCard:(id)arg1 ;
-(long long)activeAccountsAreEligibleForUnknownSendersFiltering;
-(id)bestAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(BOOL)accountActive:(id)arg1 ;
-(BOOL)deactivateAccount:(id)arg1 withDisable:(BOOL)arg2 ;
-(long long)activeAccountsAreEligibleForHawking;
-(NSArray *)connectedAccounts;
-(BOOL)activateAccount:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3 ;
-(BOOL)_deactivateAccount:(id)arg1 ;
-(BOOL)activateAccounts:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3 ;
-(BOOL)deactivateAccounts:(id)arg1 ;
-(void)deferredSetup;
-(BOOL)networkDataAvailable;
-(void)_enableCache;
-(id)bestOperationalAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(BOOL)addAccount:(id)arg1 atIndex:(int)arg2 locally:(BOOL)arg3 ;
-(BOOL)deleteAccount:(id)arg1 locally:(BOOL)arg2 ;
-(BOOL)canDeleteAccount:(id)arg1 ;
-(BOOL)deactivateAccounts:(id)arg1 withDisable:(BOOL)arg2 ;
-(BOOL)activateAccount:(id)arg1 ;
-(IMAccount *)activeIMessageAccount;
-(BOOL)receiverIsMyMention:(id)arg1 ;
-(id)bestConnectedAccountForService:(id)arg1 ;
-(id)accountAtIndex:(int)arg1 ;
-(id)operationalAccountsWithCapability:(unsigned long long)arg1 ;
-(BOOL)_deactivateAccounts:(id)arg1 ;
-(NSArray *)operationalAccounts;
-(BOOL)activateAndHandleReconnectAccounts:(id)arg1 ;
-(id)bestAccountForService:(id)arg1 ;
-(id)jabberAccount;
-(id)bestActiveAccountForService:(id)arg1 ;
-(BOOL)canActivateAccount:(id)arg1 ;
-(id)_bestAccountForAddresses:(id)arg1 ;
-(id)_bestOperationalAccountForSendingForService:(id)arg1 ;
-(int)numberOfAccounts;
-(void)_rebuildOperationalAccountsCache:(BOOL)arg1 ;
-(void)_activeAccountChanged:(id)arg1 ;
-(void)_disableCache;
-(id)bestOperationalAccountForService:(id)arg1 ;
@end
