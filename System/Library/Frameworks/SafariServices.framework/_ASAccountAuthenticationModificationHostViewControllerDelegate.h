/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _ASAccountAuthenticationModificationHostViewControllerDelegate <NSObject>
@optional
-(void)accountModificationHostViewControllerDidCompleteUpgradeToSignInWithApple:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)accountModificationHostViewController:(id)arg1 didFinishWithCredential:(id)arg2 userInfo:(id)arg3 completion:(/*^block*/id)arg4;
-(void)presentUIForAccountModificationHostViewController:(id)arg1;
-(void)dismissUIForAccountModificationHostViewController:(id)arg1;
-(void)accountModificationHostViewController:(id)arg1 requestCanceledWithError:(id)arg2 completion:(/*^block*/id)arg3;

@end
