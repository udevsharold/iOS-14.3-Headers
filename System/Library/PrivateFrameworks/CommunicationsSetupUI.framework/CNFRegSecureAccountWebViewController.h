/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegAuthorizedAccountWebViewController.h>

@class IMAccount;

@interface CNFRegSecureAccountWebViewController : CNFRegAuthorizedAccountWebViewController {

	IMAccount* _account;
	BOOL _triedGettingNewCredentials;
	BOOL _gotNewCredential;
	unsigned long long _signinFailureCount;

}

@property (nonatomic,retain) IMAccount * account;              //@synthesize account=_account - In the implementation block
-(void)setAccount:(IMAccount *)arg1 ;
-(IMAccount *)account;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_handleTimeout;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_setupAccountHandlers;
-(id)initWithRegController:(id)arg1 account:(id)arg2 ;
-(void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(id)authIdHeaderValue;
-(id)authTokenHeaderValue;
-(void)_showRequestPasswordAlert;
-(void)_showForgotPasswordAlert;
-(void)_showBadPasswordAlert;
-(void)_launchForgotPasswordUrl;
-(void)_resetSigninFailureCount;
-(void)_incrementSigninFailureCount;
-(void)_showRegistrationFailureWithError:(id)arg1 ;
@end
