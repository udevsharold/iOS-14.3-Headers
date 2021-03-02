/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCPaymentTransactionObserverDelegate.h>
#import <libobjc.A.dylib/FCPaymentTransactionManager.h>

@protocol FCPaymentTransactionManagerDelegate;
@class FCPaymentTransactionObserver, NSMutableDictionary, NSString;

@interface FCPaymentTransactionManager : NSObject <FCPaymentTransactionObserverDelegate, FCPaymentTransactionManager> {

	id<FCPaymentTransactionManagerDelegate> delegate;
	FCPaymentTransactionObserver* _paymentTransactionObserver;
	NSMutableDictionary* _paymentQueueByProductID;

}

@property (nonatomic,retain) FCPaymentTransactionObserver * paymentTransactionObserver;              //@synthesize paymentTransactionObserver=_paymentTransactionObserver - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * paymentQueueByProductID;                          //@synthesize paymentQueueByProductID=_paymentQueueByProductID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FCPaymentTransactionManagerDelegate> delegate; 
-(void)setPaymentQueueByProductID:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)registerOngoingPurchaseTransactionsWithEntry:(id)arg1 ;
-(void)paymentTransactionObserver:(id)arg1 didFinishPurchaseTransactionWithProductID:(id)arg2 ;
-(NSMutableDictionary *)paymentQueueByProductID;
-(void)setPaymentTransactionObserver:(FCPaymentTransactionObserver *)arg1 ;
-(void)paymentTransactionObserver:(id)arg1 didFailPurchaseTransactionWithTransaction:(id)arg2 ;
-(void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(BOOL)arg7 payment:(id)arg8 ;
-(FCPaymentTransactionObserver *)paymentTransactionObserver;
-(BOOL)canMakePayments;
-(void)setDelegate:(id<FCPaymentTransactionManagerDelegate>)arg1 ;
-(id)createPaymentQueueWithProductID:(id)arg1 purchaseID:(id)arg2 webAccessOptIn:(BOOL)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 ;
-(id<FCPaymentTransactionManagerDelegate>)delegate;
@end
