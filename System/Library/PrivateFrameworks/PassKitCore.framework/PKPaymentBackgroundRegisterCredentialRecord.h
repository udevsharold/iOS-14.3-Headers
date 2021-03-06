/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>

@class NSString, NSData;

@interface PKPaymentBackgroundRegisterCredentialRecord : PKPaymentBackgroundDownloadRecord {

	NSString* _credentialIdentifier;
	NSData* _responseData;

}

@property (nonatomic,copy) NSString * credentialIdentifier;              //@synthesize credentialIdentifier=_credentialIdentifier - In the implementation block
@property (nonatomic,copy) NSData * responseData;                        //@synthesize responseData=_responseData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)responseData;
-(void)setResponseData:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCredentialIdentifier:(id)arg1 ;
-(NSString *)credentialIdentifier;
-(void)setCredentialIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

