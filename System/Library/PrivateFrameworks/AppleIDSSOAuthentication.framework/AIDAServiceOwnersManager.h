/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleIDSSOAuthentication/AppleIDSSOAuthentication-Structs.h>
#import <libobjc.A.dylib/AIDAServiceOwnerProtocol.h>

@class ACAccountStore, NSDictionary, NSString;

@interface AIDAServiceOwnersManager : NSObject <AIDAServiceOwnerProtocol> {

	os_unfair_lock_s _serviceOwnersLock;
	ACAccountStore* _accountStore;
	NSDictionary* _serviceOwners;

}

@property (nonatomic,copy) NSDictionary * serviceOwners;              //@synthesize serviceOwners=_serviceOwners - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceOwnerBundles;
+(id)supportedServices;
-(id)initWithAccountStore:(id)arg1 ;
-(id)init;
-(void)signInToAllServicesInBackgroundUsingContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)DSIDForAccount:(id)arg1 service:(id)arg2 ;
-(id)_postCloudSupportedServicesForAltDSID:(id)arg1 ;
-(id)accountForService:(id)arg1 ;
-(void)signOutOfServices:(id)arg1 usingContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signInToServices:(id)arg1 usingContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)altDSIDForAccount:(id)arg1 service:(id)arg2 ;
-(void)signInToAllServicesInBackground:(BOOL)arg1 usingContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signOutService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDictionary *)serviceOwners;
-(id)nameComponentsForAccount:(id)arg1 service:(id)arg2 ;
-(void)signOutOfAllServicesUsingContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signInService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_buildServiceOwnerMapping;
-(void)setServiceOwners:(NSDictionary *)arg1 ;
@end

