/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCPaymentTransactionManager.h>

@protocol FCPaymentTransactionManagerDelegate;
@class NSString, NSError;

@interface FCMockPaymentTransactionManager : NSObject <FCPaymentTransactionManager> {

	id<FCPaymentTransactionManagerDelegate> delegate;
	NSString* _productID;
	long long _transactionState;
	NSError* _transactionError;
	unsigned long long _transactionExpectation;

}

@property (nonatomic,copy) NSString * productID;                                                   //@synthesize productID=_productID - In the implementation block
@property (assign,nonatomic) long long transactionState;                                           //@synthesize transactionState=_transactionState - In the implementation block
@property (nonatomic,copy) NSError * transactionError;                                             //@synthesize transactionError=_transactionError - In the implementation block
@property (assign,nonatomic) unsigned long long transactionExpectation;                            //@synthesize transactionExpectation=_transactionExpectation - In the implementation block
@property (assign,nonatomic,__weak) id<FCPaymentTransactionManagerDelegate> delegate; 
+(id)mockPaymentTransactionWithSuccessForProductID:(id)arg1 ;
+(id)mockPaymentTransactionWithFailForProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ;
-(NSString *)productID;
-(void)registerOngoingPurchaseTransactionsWithEntry:(id)arg1 ;
-(void)setTransactionExpectation:(unsigned long long)arg1 ;
-(void)setTransactionState:(long long)arg1 ;
-(void)setTransactionError:(NSError *)arg1 ;
-(unsigned long long)transactionExpectation;
-(long long)transactionState;
-(NSError *)transactionError;
-(void)setProductID:(NSString *)arg1 ;
-(void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(BOOL)arg7 payment:(id)arg8 ;
-(BOOL)canMakePayments;
-(void)setDelegate:(id<FCPaymentTransactionManagerDelegate>)arg1 ;
-(id<FCPaymentTransactionManagerDelegate>)delegate;
@end
