/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKEncryptedPushProvisioningTarget, NSString;

@interface PKPaymentPushProvisioningProvideEncryptedPushProvisioningTargetRequest : PKPaymentWebServiceRequest {

	PKEncryptedPushProvisioningTarget* _encryptedPushProvisioningTarget;
	NSString* _sharingInstanceIdentifier;

}

@property (nonatomic,copy) PKEncryptedPushProvisioningTarget * encryptedPushProvisioningTarget;              //@synthesize encryptedPushProvisioningTarget=_encryptedPushProvisioningTarget - In the implementation block
@property (nonatomic,copy) NSString * sharingInstanceIdentifier;                                             //@synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier - In the implementation block
-(NSString *)sharingInstanceIdentifier;
-(void)setSharingInstanceIdentifier:(NSString *)arg1 ;
-(PKEncryptedPushProvisioningTarget *)encryptedPushProvisioningTarget;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)requestBody;
-(id)initWithEncryptedPushProvisioningTarget:(id)arg1 sharingInstanceIdentifier:(id)arg2 ;
-(void)setEncryptedPushProvisioningTarget:(PKEncryptedPushProvisioningTarget *)arg1 ;
@end
