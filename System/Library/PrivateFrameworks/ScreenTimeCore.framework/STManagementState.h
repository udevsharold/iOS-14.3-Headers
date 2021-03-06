/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface STManagementState : NSObject {

	BOOL _cachedShouldRequestMoreTime;
	BOOL _cachedIsRestrictionsPasscodeSet;
	BOOL _contactsEditable;
	NSXPCConnection* _connection;

}

@property (assign) BOOL cachedShouldRequestMoreTime;                        //@synthesize cachedShouldRequestMoreTime=_cachedShouldRequestMoreTime - In the implementation block
@property (assign) BOOL cachedIsRestrictionsPasscodeSet;                    //@synthesize cachedIsRestrictionsPasscodeSet=_cachedIsRestrictionsPasscodeSet - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                  //@synthesize connection=_connection - In the implementation block
@property (readonly) BOOL contactsEditable;                                 //@synthesize contactsEditable=_contactsEditable - In the implementation block
@property (readonly) BOOL needsToSetRestrictionsPasscode; 
@property (nonatomic,readonly) BOOL isRestrictionsPasscodeSet; 
@property (nonatomic,readonly) BOOL shouldRequestMoreTime; 
-(void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)isExplicitContentRestricted:(/*^block*/id)arg1 ;
-(BOOL)enableScreenTimeForDSID:(id)arg1 error:(id*)arg2 ;
-(void)setManageContactsEnabled:(BOOL)arg1 forDSID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)performMigrationFromMCXSettings:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)screenTimeSyncStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)cachedShouldRequestMoreTime;
-(BOOL)clearRestrictionsPasscodeWithError:(id*)arg1 ;
-(void)communicationPoliciesForDSID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)contactManagementStateForDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)cachedIsRestrictionsPasscodeSet;
-(void)dealloc;
-(BOOL)needsToSetRestrictionsPasscode;
-(id)communicationPoliciesWithError:(id*)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)requestToManageContactsForDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isRestrictionsPasscodeSet;
-(id)shouldAllowOneMoreMinuteForWebDomain:(id)arg1 error:(id*)arg2 ;
-(void)isRestrictionsPasscodeSet:(/*^block*/id)arg1 ;
-(BOOL)shouldRequestMoreTime;
-(void)shouldRequestMoreTime:(/*^block*/id)arg1 ;
-(void)communicationPoliciesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)primaryiCloudCardDAVAccountIdentifierWithError:(id*)arg1 ;
-(BOOL)contactsEditable;
-(void)setCachedIsRestrictionsPasscodeSet:(BOOL)arg1 ;
-(BOOL)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 error:(id*)arg3 ;
-(void)setCachedShouldRequestMoreTime:(BOOL)arg1 ;
-(BOOL)setScreenTimeEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(NSXPCConnection *)connection;
-(void)screenTimeStateWithCompletionHandler:(/*^block*/id)arg1 ;
@end

