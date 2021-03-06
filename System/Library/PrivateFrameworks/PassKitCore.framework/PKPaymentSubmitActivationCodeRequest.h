/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, NSString, NSData;

@interface PKPaymentSubmitActivationCodeRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	NSString* _verificationCode;
	NSData* _verificationData;

}

@property (nonatomic,retain) PKPaymentPass * pass;                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,copy) NSString * verificationCode;              //@synthesize verificationCode=_verificationCode - In the implementation block
@property (nonatomic,copy) NSData * verificationData;                //@synthesize verificationData=_verificationData - In the implementation block
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(NSString *)verificationCode;
-(void)setVerificationCode:(NSString *)arg1 ;
-(NSData *)verificationData;
-(void)setVerificationData:(NSData *)arg1 ;
-(PKPaymentPass *)pass;
@end

