/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentStatementRequest : PKPeerPaymentWebServiceRequest {

	NSString* _emailAddress;
	NSString* _accountIdentifier;

}

@property (nonatomic,copy) NSString * emailAddress;                   //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(NSString *)emailAddress;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
@end

