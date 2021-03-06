/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ACAccount, NSNumber, NSDictionary, AMSBuyParams, AMSProcessInfo;

@interface AMSPurchase : NSObject <NSCopying> {

	BOOL _ignoreRequirePasswordRestriction;
	BOOL _requiresAccount;
	BOOL _userInitiated;
	BOOL _useJSONContentType;
	NSString* _logUUID;
	ACAccount* _account;
	NSNumber* _accountId;
	NSDictionary* _additionalHeaders;
	AMSBuyParams* _buyParams;
	NSString* _callerBundleId;
	NSString* _clientId;
	AMSProcessInfo* _clientInfo;
	NSNumber* _ownerAccountId;
	NSDictionary* _metricsOverlay;
	long long _purchaseType;
	NSString* _storefront;
	NSNumber* _uniqueIdentifier;

}

@property (nonatomic,retain) ACAccount * account;                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSNumber * accountId;                                     //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalHeaders;                         //@synthesize additionalHeaders=_additionalHeaders - In the implementation block
@property (nonatomic,readonly) AMSBuyParams * buyParams;                             //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,copy) NSString * callerBundleId;                                //@synthesize callerBundleId=_callerBundleId - In the implementation block
@property (nonatomic,copy) NSString * clientId;                                      //@synthesize clientId=_clientId - In the implementation block
@property (nonatomic,copy) AMSProcessInfo * clientInfo;                              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) BOOL ignoreRequirePasswordRestriction;                  //@synthesize ignoreRequirePasswordRestriction=_ignoreRequirePasswordRestriction - In the implementation block
@property (nonatomic,copy) NSString * logUUID;                                       //@synthesize logUUID=_logUUID - In the implementation block
@property (nonatomic,copy) NSNumber * ownerAccountId;                                //@synthesize ownerAccountId=_ownerAccountId - In the implementation block
@property (nonatomic,copy) NSDictionary * metricsOverlay;                            //@synthesize metricsOverlay=_metricsOverlay - In the implementation block
@property (readonly) long long purchaseType;                                         //@synthesize purchaseType=_purchaseType - In the implementation block
@property (assign,nonatomic) BOOL requiresAccount;                                   //@synthesize requiresAccount=_requiresAccount - In the implementation block
@property (nonatomic,copy) NSString * storefront;                                    //@synthesize storefront=_storefront - In the implementation block
@property (nonatomic,readonly) NSNumber * uniqueIdentifier;                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,getter=isUserInitiated,nonatomic) BOOL userInitiated;              //@synthesize userInitiated=_userInitiated - In the implementation block
@property (assign,nonatomic) BOOL useJSONContentType;                                //@synthesize useJSONContentType=_useJSONContentType - In the implementation block
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(ACAccount *)account;
-(NSDictionary *)metricsOverlay;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AMSBuyParams *)buyParams;
-(void)setUserInitiated:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setStorefront:(NSString *)arg1 ;
-(NSNumber *)uniqueIdentifier;
-(id)description;
-(long long)purchaseType;
-(NSDictionary *)additionalHeaders;
-(NSString *)callerBundleId;
-(BOOL)ignoreRequirePasswordRestriction;
-(NSNumber *)ownerAccountId;
-(BOOL)requiresAccount;
-(id)initWithPurchaseType:(long long)arg1 buyParams:(id)arg2 ;
-(void)setAdditionalHeaders:(NSDictionary *)arg1 ;
-(void)setCallerBundleId:(NSString *)arg1 ;
-(void)setIgnoreRequirePasswordRestriction:(BOOL)arg1 ;
-(void)setOwnerAccountId:(NSNumber *)arg1 ;
-(void)setRequiresAccount:(BOOL)arg1 ;
-(BOOL)useJSONContentType;
-(void)setUseJSONContentType:(BOOL)arg1 ;
-(NSNumber *)accountId;
-(NSString *)logUUID;
-(NSString *)clientId;
-(NSString *)storefront;
-(void)setClientId:(NSString *)arg1 ;
-(void)setLogUUID:(NSString *)arg1 ;
-(BOOL)isUserInitiated;
-(void)setAccountId:(NSNumber *)arg1 ;
-(id)_generateIdentifier;
@end

