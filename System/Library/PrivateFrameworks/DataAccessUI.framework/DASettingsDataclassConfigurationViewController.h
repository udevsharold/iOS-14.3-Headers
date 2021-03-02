/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

@class DAAccount;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController {

	DAAccount* _daAccount;
	BOOL _haveRegisteredForAccountsChanged;

}

@property (nonatomic,retain) DAAccount * daAccount;              //@synthesize daAccount=_daAccount - In the implementation block
-(id)specifiers;
-(DAAccount *)daAccount;
-(id)_navTitle;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(void)reloadAccount;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(BOOL)shouldVerifyBeforeAccountSave;
-(id)otherSpecifiers;
-(Class)accountInfoControllerClass;
-(id)accountDescriptionForFirstTimeSetup;
-(void)_listenForAccountsChangedNotifications;
-(id)accountFromSpecifier;
-(void)setDaAccount:(DAAccount *)arg1 ;
@end
