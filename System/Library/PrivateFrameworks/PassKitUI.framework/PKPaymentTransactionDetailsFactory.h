/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentDataProvider;
@class PKPeerPaymentContactResolver, PKPeerPaymentWebService;

@interface PKPaymentTransactionDetailsFactory : NSObject {

	PKPeerPaymentContactResolver* _contactResolver;
	PKPeerPaymentWebService* _peerPaymentWebService;
	id<PKPaymentDataProvider> _paymentServiceDataProvider;
	long long _detailViewStyle;

}
-(id)detailViewControllerForTransaction:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 ;
-(id)historyViewControllerForTransaction:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 ;
-(void)historyViewControllerForTransaction:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_transactionFetcherWithTransactionSource:(id)arg1 transaction:(id)arg2 ;
-(id)initWithContactResolver:(id)arg1 peerPaymentWebService:(id)arg2 paymentServiceDataProvider:(id)arg3 detailViewStyle:(long long)arg4 ;
-(BOOL)canShowTransactionHistoryForTransaction:(id)arg1 transactionSource:(id)arg2 ;
@end

