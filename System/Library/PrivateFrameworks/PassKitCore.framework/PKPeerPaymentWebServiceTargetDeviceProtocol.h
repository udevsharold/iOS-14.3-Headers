/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPeerPaymentWebServiceTargetDeviceProtocol <NSObject>
@optional
-(id)preferences;
-(id)deviceClass;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(/*^block*/id)arg3;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 peerPaymentWebService:(id)arg2 credential:(id)arg3 completion:(/*^block*/id)arg4;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 peerPaymentWebService:(id)arg3 completion:(/*^block*/id)arg4;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1;
-(id)deviceRegion;
-(void)setPreferences:(id)arg1 completion:(/*^block*/id)arg2;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1;
-(id)appleAccountInformation;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1;

@required
-(id)account;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3;
-(void)updateAccountWithCompletion:(/*^block*/id)arg1;
-(BOOL)userHasDisabledPeerPayment;
-(void)setUserHasDisabledPeerPayment:(BOOL)arg1;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1;
-(id)bridgedClientInfo;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1;
-(id)secureElementIdentifiers;

@end
