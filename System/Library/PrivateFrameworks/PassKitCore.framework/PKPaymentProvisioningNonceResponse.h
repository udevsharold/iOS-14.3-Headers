/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString;

@interface PKPaymentProvisioningNonceResponse : PKPaymentWebServiceResponse {

	NSString* _nonce;

}

@property (nonatomic,copy,readonly) NSString * nonce;              //@synthesize nonce=_nonce - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)nonce;
@end
