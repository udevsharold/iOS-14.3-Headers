/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentSetupDelegate <NSObject>
@optional
-(void)paymentSetupDidShowError:(id)arg1;
-(void)paymentSetupDidShowEligibilityIssue;
-(void)paymentSetupRequestPasscodeUpgradeWithVisibleViewController:(id)arg1 completion:(/*^block*/id)arg2;
-(void)paymentSetupRequestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withVisibleViewController:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentSetupDidExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withShouldContinue:(BOOL)arg2 error:(id)arg3;
-(void)paymentSetupDidExitPasscodeUpgradeWithShouldContinue:(BOOL)arg1 error:(id)arg2;

@required
-(void)paymentSetupDidFinish:(id)arg1;

@end

