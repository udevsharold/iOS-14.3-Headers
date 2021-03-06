/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKPaymentTransactionObserver <NSObject>
@optional
-(void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
-(void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
-(void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
-(void)paymentQueue:(id)arg1 updatedDownloads:(id)arg2;
-(BOOL)paymentQueue:(id)arg1 shouldAddStorePayment:(id)arg2 forProduct:(id)arg3;
-(void)paymentQueueDidChangeStorefront:(id)arg1;
-(void)paymentQueue:(id)arg1 didRevokeEntitlementsForProductIdentifiers:(id)arg2;

@required
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;

@end

