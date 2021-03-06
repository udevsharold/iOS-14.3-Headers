/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPeerPaymentWebServiceTargetDeviceProtocol.h>

@protocol PKPeerPaymentTargetDeviceDelegate;
@class PKPeerPaymentService, NSString;

@interface PKPeerPaymentWebServiceTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {

	PKPeerPaymentService* _peerPaymentService;
	id<PKPeerPaymentTargetDeviceDelegate> _targetDeviceDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)preferences;
-(id)account;
-(id)deviceClass;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 peerPaymentWebService:(id)arg2 credential:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 peerPaymentWebService:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(id)deviceRegion;
-(void)setPreferences:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleAccountChangedNotification:(id)arg1 ;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)userHasDisabledPeerPayment;
-(void)_handlePreferencesChangedNotification:(id)arg1 ;
-(id)initWithTargetDeviceDelegate:(id)arg1 ;
-(void)setUserHasDisabledPeerPayment:(BOOL)arg1 ;
-(id)appleAccountInformation;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)bridgedClientInfo;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(id)secureElementIdentifiers;
@end

