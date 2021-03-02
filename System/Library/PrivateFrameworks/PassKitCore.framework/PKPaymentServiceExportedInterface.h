/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentServiceExportedInterface
@required
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
-(void)didRecieveCredentialInvitation:(id)arg1;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
-(void)featureApplicationChanged:(id)arg1;
-(void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;
-(void)featureApplicationRemoved:(id)arg1;
-(void)featureApplicationAdded:(id)arg1;
-(void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
-(void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2;
-(void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalanceWithIdentifier:(id)arg3;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCredential:(id)arg2;
-(void)paymentDeviceDidExitField;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
-(void)transactionBatch:(id)arg1 moreComing:(BOOL)arg2 readyForNextBatch:(/*^block*/id)arg3;

@end
