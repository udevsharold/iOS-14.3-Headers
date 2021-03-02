/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKPaymentQueueClient, SKStorefront, NSArray;

@interface SKPaymentQueue : NSObject {

	id _internal;

}

@property (nonatomic,readonly) SKPaymentQueueClient * paymentQueueClient; 
@property (assign,nonatomic,__weak) id<SKPaymentQueueDelegate> delegate; 
@property (nonatomic,readonly) SKStorefront * storefront; 
@property (nonatomic,readonly) NSArray * transactionObservers; 
@property (nonatomic,readonly) NSArray * transactions; 
+(id)defaultQueue;
+(BOOL)canMakePayments;
-(void)removedEntitlementsForProductIdentifiers:(id)arg1 ;
-(void)shouldContinueTransaction:(id)arg1 withNewStorefront:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)handleEngagementRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)removedTransactions:(id)arg1 ;
-(NSArray *)transactions;
-(id)init;
-(void)askToShowMessageWithReplyBlock:(/*^block*/id)arg1 ;
-(void)pauseDownloads:(id)arg1 ;
-(void)finishTransaction:(id)arg1 ;
-(void)dealloc;
-(void)_establishConnectionIfNeeded;
-(void)downloadStatusChanged:(id)arg1 ;
-(void)_establishConnection;
-(void)downloadAdded:(id)arg1 ;
-(void)removeTransactionObserver:(id)arg1 ;
-(void)addTransactionObserver:(id)arg1 ;
-(void)storefrontChanged:(id)arg1 ;
-(void)updatedTransactions:(id)arg1 ;
-(void)addPayment:(id)arg1 ;
-(id)initWithPaymentQueueClient:(id)arg1 ;
-(void)resumeDownloads:(id)arg1 ;
-(SKStorefront *)storefront;
-(void)cancelDownloads:(id)arg1 ;
-(void)setDelegate:(id<SKPaymentQueueDelegate>)arg1 ;
-(void)downloadRemoved:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(id<SKPaymentQueueDelegate>)delegate;
-(void)presentCodeRedemptionSheet;
-(void)forceSandboxForBundleIdentifier:(id)arg1 untilDate:(id)arg2 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(SKPaymentQueueClient *)paymentQueueClient;
-(id)_initSKPaymentQueue;
-(void)_notifyObserversAboutChanges:(id)arg1 sendUpdatedDownloads:(BOOL)arg2 ;
-(void)_processTransaction:(id)arg1 ;
-(void)_checkServerQueue;
-(void)_checkForMessages;
-(void)_sendCommand:(long long)arg1 forDownloads:(id)arg2 ;
-(void)_removeLocalTransaction:(id)arg1 ;
-(void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1 ;
-(void)_updatedTransactions:(id)arg1 restored:(BOOL)arg2 ;
-(void)_presentCodeRedemptionSheet;
-(void)_sendAppEnteredForegroundMessage;
-(void)_refreshPaymentsWithPolicy:(long long)arg1 ;
-(void)_notifyObserversAboutPurchaseIntentsForProducts:(id)arg1 ;
-(void)_notifyObserversRestoreTransactionsFinished;
-(void)_notifyObserversRestoreTransactionsFailedWithError:(id)arg1 ;
-(void)_handleConnectionDisconnect;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 ;
-(void)_setTransactionsWithReply:(id)arg1 ;
-(void)_notifyObserversAboutRemovals:(id)arg1 ;
-(void)_updateDownloadsForMessage:(id)arg1 ;
-(void)_updatePaymentsForMessage:(id)arg1 ;
-(void)_removePaymentsForMessage:(id)arg1 ;
-(void)_completeRestoreWithMessage:(id)arg1 ;
-(void)_sendAppStorePendingPaymentsRequestForMessage:(id)arg1 ;
-(BOOL)_shouldContinueTransactionForMessage:(id)arg1 ;
-(void)_removeNilTransactionObservers;
-(void)_processTransactionDict:(id)arg1 forTransaction:(id)arg2 error:(id)arg3 ;
-(id)_copyRemovalsFromUnmergedIndexSet:(id)arg1 ;
-(void)_finishRefreshPayments;
-(id)_copyDownloadIDsForDownloads:(id)arg1 ;
-(void)_processUpdates:(id)arg1 trimUnmatched:(BOOL)arg2 sendUpdatedDownloads:(BOOL)arg3 ;
-(id)_copyTransactionsFromXPCArray:(id)arg1 ;
-(id)_applyDownloadChangeset:(id)arg1 ;
-(void)_notifyObserversAboutDownloadChanges:(id)arg1 ;
-(NSArray *)transactionObservers;
-(void)restoreCompletedTransactions;
-(void)showPriceConsentIfNeeded;
-(void)startDownloads:(id)arg1 ;
-(void)_daemonLaunchedNotification;
@end
