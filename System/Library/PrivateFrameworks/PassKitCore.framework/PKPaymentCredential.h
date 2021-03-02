/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKPaymentRequirementsResponse, PKPaymentEligibilityResponse;

@interface PKPaymentCredential : NSObject <NSSecureCoding> {

	BOOL _deletable;
	long long _credentialType;
	NSString* _sanitizedPrimaryAccountNumber;
	NSString* _sanitizedPrimaryAccountName;
	NSString* _expiration;
	NSString* _longDescription;
	long long _cardType;
	PKPaymentRequirementsResponse* _requirementsResponse;
	PKPaymentEligibilityResponse* _eligibilityResponse;

}

@property (assign,nonatomic) long long credentialType;                                          //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,copy) NSString * sanitizedPrimaryAccountNumber;                            //@synthesize sanitizedPrimaryAccountNumber=_sanitizedPrimaryAccountNumber - In the implementation block
@property (nonatomic,copy) NSString * sanitizedPrimaryAccountName;                              //@synthesize sanitizedPrimaryAccountName=_sanitizedPrimaryAccountName - In the implementation block
@property (nonatomic,copy) NSString * expiration;                                               //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSString * longDescription;                                          //@synthesize longDescription=_longDescription - In the implementation block
@property (assign,nonatomic) long long cardType;                                                //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,retain) PKPaymentRequirementsResponse * requirementsResponse;              //@synthesize requirementsResponse=_requirementsResponse - In the implementation block
@property (nonatomic,retain) PKPaymentEligibilityResponse * eligibilityResponse;                //@synthesize eligibilityResponse=_eligibilityResponse - In the implementation block
@property (assign,getter=isDeletable,nonatomic) BOOL deletable;                                 //@synthesize deletable=_deletable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fakeRemoteCredentials;
-(long long)credentialType;
-(id)init;
-(id)remoteCredential;
-(void)setCredentialType:(long long)arg1 ;
-(BOOL)isDeletable;
-(id)initWithCoder:(id)arg1 ;
-(long long)cardType;
-(PKPaymentEligibilityResponse *)eligibilityResponse;
-(PKPaymentRequirementsResponse *)requirementsResponse;
-(void)setDeletable:(BOOL)arg1 ;
-(void)setRequirementsResponse:(PKPaymentRequirementsResponse *)arg1 ;
-(void)setEligibilityResponse:(PKPaymentEligibilityResponse *)arg1 ;
-(NSString *)expiration;
-(void)setLongDescription:(NSString *)arg1 ;
-(void)setExpiration:(NSString *)arg1 ;
-(BOOL)isRemoteCredential;
-(BOOL)isLocalPassCredential;
-(BOOL)isPeerPaymentCredential;
-(BOOL)isContactlessProductCredential;
-(BOOL)isDigitalIssuanceProductCredential;
-(BOOL)isPurchasedProductCredential;
-(BOOL)isAccountCredential;
-(BOOL)isShareableCredential;
-(BOOL)isLocalAppletSubcredentialPassCredential;
-(BOOL)isIssuerProvisioningExtensionCredential;
-(id)localPassCredential;
-(void)setCardType:(long long)arg1 ;
-(id)peerPaymentCredential;
-(id)contactlessProductCredential;
-(id)digitalIssuanceProductCredential;
-(id)purchasedProductCredential;
-(NSString *)sanitizedPrimaryAccountName;
-(NSString *)sanitizedPrimaryAccountNumber;
-(id)accountCredential;
-(id)shareableCredential;
-(id)localAppletSubcredentialPassCredential;
-(id)issuerProvisioningExtensionCredential;
-(void)setSanitizedPrimaryAccountNumber:(NSString *)arg1 ;
-(void)setSanitizedPrimaryAccountName:(NSString *)arg1 ;
-(NSString *)longDescription;
-(void)encodeWithCoder:(id)arg1 ;
@end
