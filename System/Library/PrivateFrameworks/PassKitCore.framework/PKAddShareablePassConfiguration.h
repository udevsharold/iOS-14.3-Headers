/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAddSecureElementPassConfiguration.h>

@class NSArray, NSString;

@interface PKAddShareablePassConfiguration : PKAddSecureElementPassConfiguration {

	BOOL _noncesFetched;
	unsigned long long _primaryAction;
	NSArray* _credentialsMetadata;
	NSString* _provisioningPolicyIdentifier;

}

@property (assign,nonatomic) BOOL noncesFetched;                                     //@synthesize noncesFetched=_noncesFetched - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryAction;                     //@synthesize primaryAction=_primaryAction - In the implementation block
@property (nonatomic,readonly) NSArray * credentialsMetadata;                        //@synthesize credentialsMetadata=_credentialsMetadata - In the implementation block
@property (nonatomic,readonly) NSString * provisioningPolicyIdentifier;              //@synthesize provisioningPolicyIdentifier=_provisioningPolicyIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)configurationForPassMetadata:(id)arg1 provisioningPolicyIdentifier:(id)arg2 primaryAction:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPrimaryAction:(unsigned long long)arg1 credentialsMetadata:(id)arg2 provisioningPolicyIdentifier:(id)arg3 ;
-(NSArray *)credentialsMetadata;
-(NSString *)provisioningPolicyIdentifier;
-(id)_PKAddShareablePassConfigurationPrimaryActionToString:(unsigned long long)arg1 ;
-(void)setNoncesFetched:(BOOL)arg1 ;
-(BOOL)hasRequiredDataForProvisioning;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)primaryAction;
-(BOOL)noncesFetched;
-(void)encodeWithCoder:(id)arg1 ;
@end
