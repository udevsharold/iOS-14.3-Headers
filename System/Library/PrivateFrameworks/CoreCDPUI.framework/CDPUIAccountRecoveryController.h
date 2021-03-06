/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPUI/CDPUIController.h>

@interface CDPUIAccountRecoveryController : CDPUIController
-(void)_presentRemoteSecretControllerWithNewestDevice:(id)arg1 ;
-(void)_setupDevicePickerController:(/*^block*/id)arg1 ;
-(void)devicePicker:(id)arg1 didSelectDevice:(id)arg2 ;
-(id)devicePicker:(id)arg1 escapeOffersForDevices:(id)arg2 ;
-(BOOL)performingAccountRecovery;
-(id)_accountRecoveryEscapeOfferForDevice:(id)arg1 ;
-(id)_accountRecoveryDevicePickerEscapeOffer;
@end

