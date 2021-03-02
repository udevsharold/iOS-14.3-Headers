/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKAccountFlowController.h>

@interface PKCreditAccountController : PKAccountFlowController
+(BOOL)_shouldDisplayBalanceForAccount:(id)arg1 ;
+(BOOL)_shouldDisplayBalanceAndTransactionsForTransactionSource:(id)arg1 ;
+(BOOL)_shouldDisplayTransactionsForAccount:(id)arg1 ;
+(id)relevantScheduledPaymentFromScheduledPayments:(id)arg1 account:(id)arg2 ;
+(void)resolutionToReceiveCashbackForAccount:(id)arg1 withPeerPaymentAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)shouldDisplayAccountInformationForTransactionSource:(id)arg1 withAccount:(id)arg2 ;
+(BOOL)shouldDisplayTransactionsForTransactionSource:(id)arg1 withAccount:(id)arg2 ;
+(unsigned long long)paymentEducationStateForAccount:(id)arg1 mostRecentTransactions:(id)arg2 upcomingScheduledPayments:(id)arg3 ;
@end
