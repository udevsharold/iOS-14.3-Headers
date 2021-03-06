/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPeerPaymentAccount, PKPaymentPass, NSSet;

@interface PKTransactionSource : NSObject <NSSecureCoding> {

	unsigned long long _type;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKPaymentPass* _paymentPass;

}

@property (nonatomic,readonly) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSSet * transactionSourceIdentifiers; 
@property (nonatomic,readonly) PKPeerPaymentAccount * peerPaymentAccount;              //@synthesize peerPaymentAccount=_peerPaymentAccount - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass;                            //@synthesize paymentPass=_paymentPass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPaymentPass:(id)arg1 ;
-(id)initWithPeerPaymentAccount:(id)arg1 ;
-(NSSet *)transactionSourceIdentifiers;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(PKPaymentPass *)paymentPass;
-(PKPeerPaymentAccount *)peerPaymentAccount;
-(id)description;
-(unsigned long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

