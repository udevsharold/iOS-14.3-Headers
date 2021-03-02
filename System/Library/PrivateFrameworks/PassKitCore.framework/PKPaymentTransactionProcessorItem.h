/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class PKPaymentTransaction, NSString;

@interface PKPaymentTransactionProcessorItem : NSObject {

	os_unfair_lock_s _transactionLock;
	BOOL _foundOptimalLocation;
	BOOL _useBackgroundLocation;
	BOOL _isClearingAttempt;
	PKPaymentTransaction* _paymentTransaction;
	NSString* _transactionSourceIdentifier;

}

@property (nonatomic,retain) PKPaymentTransaction * paymentTransaction;              //@synthesize paymentTransaction=_paymentTransaction - In the implementation block
@property (nonatomic,retain) NSString * transactionSourceIdentifier;                 //@synthesize transactionSourceIdentifier=_transactionSourceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL foundOptimalLocation;                              //@synthesize foundOptimalLocation=_foundOptimalLocation - In the implementation block
@property (assign,nonatomic) BOOL useBackgroundLocation;                             //@synthesize useBackgroundLocation=_useBackgroundLocation - In the implementation block
@property (assign,nonatomic) BOOL isClearingAttempt;                                 //@synthesize isClearingAttempt=_isClearingAttempt - In the implementation block
-(id)init;
-(BOOL)isClearingAttempt;
-(NSString *)transactionSourceIdentifier;
-(PKPaymentTransaction *)paymentTransaction;
-(void)setPaymentTransaction:(PKPaymentTransaction *)arg1 ;
-(BOOL)foundOptimalLocation;
-(void)setFoundOptimalLocation:(BOOL)arg1 ;
-(BOOL)useBackgroundLocation;
-(void)setUseBackgroundLocation:(BOOL)arg1 ;
-(void)setIsClearingAttempt:(BOOL)arg1 ;
-(void)setTransactionSourceIdentifier:(NSString *)arg1 ;
@end
