/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol APUIIntentHandlingViewControllerDelegate <NSObject>
@required
-(void)intentHandlingViewController:(id)arg1 wantsPreferredSize:(CGSize)arg2;
-(void)intentHandlingViewController:(id)arg1 requiresConfirmationWithResponse:(id)arg2 confirmationActionTitle:(id)arg3;
-(void)intentHandlingViewController:(id)arg1 willContinueInAppForIntent:(id)arg2 completion:(/*^block*/id)arg3;
-(void)intentHandlingViewControllerDidFailAuthorizationCheck:(id)arg1;
-(void)intentHandlingViewController:(id)arg1 didComplete:(BOOL)arg2;

@end

