/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountUI/AppleAccountUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextPasswordDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol AAUISignInViewControllerDelegate;
@class UITableView, UITableViewCell, UITableViewHeaderFooterView, AAUIHeaderView, NSArray, UMUserPersona, UMUserPersonaContext, NSString, AAUIBuddyView, UILabel;

@interface AAUISignInViewController : UIViewController <AKAppleIDAuthenticationInAppContextPasswordDelegate, RemoteUIControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {

	UITableView* _tableView;
	UITableViewCell* _usernameCell;
	UITableViewCell* _passwordCell;
	UITableViewHeaderFooterView* _tableHeaderView;
	AAUIHeaderView* _accountsHeaderView;
	UITableViewHeaderFooterView* _tableFooterView;
	NSArray* _compactConstraints;
	NSArray* _expandedConstraints;
	/*^block*/id _passwordHandler;
	UMUserPersona* _originalPersona;
	UMUserPersonaContext* _originalPersonaContext;
	BOOL _shouldAnticipatePiggybacking;
	BOOL _allowsAccountCreation;
	BOOL _showServiceIcons;
	BOOL _canEditUsername;
	BOOL _showingPasswordCell;
	long long _akServiceType;
	id<AAUISignInViewControllerDelegate> _delegate;
	NSString* _username;

}

@property (nonatomic,retain) AAUIBuddyView * view; 
@property (assign,nonatomic) BOOL showingPasswordCell;                                                                 //@synthesize showingPasswordCell=_showingPasswordCell - In the implementation block
@property (assign,setter=_setShouldAnticipatePiggybacking:,nonatomic) BOOL _shouldAnticipatePiggybacking;              //@synthesize shouldAnticipatePiggybacking=_shouldAnticipatePiggybacking - In the implementation block
@property (assign,setter=_setAkServiceType:,nonatomic) long long _akServiceType;                                       //@synthesize akServiceType=_akServiceType - In the implementation block
@property (assign,nonatomic,__weak) id<AAUISignInViewControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsAccountCreation;                                                               //@synthesize allowsAccountCreation=_allowsAccountCreation - In the implementation block
@property (assign,nonatomic) BOOL showServiceIcons;                                                                    //@synthesize showServiceIcons=_showServiceIcons - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UILabel * messageLabel; 
@property (nonatomic,copy) NSString * username;                                                                        //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL canEditUsername;                                                                     //@synthesize canEditUsername=_canEditUsername - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)phoneNumberSupportedWithCompletion:(/*^block*/id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)_tableHeaderView;
-(NSString *)username;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(id)_stringForFooter;
-(void)_cancelPasswordDelegateIfNecessary;
-(void)setCanEditUsername:(BOOL)arg1 ;
-(id)_tableFooterView;
-(void)_updateConstraintsForTraitCollection:(id)arg1 ;
-(BOOL)_isPasswordFieldVisible;
-(void)_actionButtonSelected:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_setShouldAnticipatePiggybacking:(BOOL)arg1 ;
-(void)_beginObservingSizeCategoryNotification;
-(BOOL)_showOnlyPassword;
-(void)dealloc;
-(void)sizeCategoryDidChange:(id)arg1 ;
-(void)_endObservingTextFieldDidChangeNotifications;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)_tableView;
-(id)_authorizationValueForAuthenticationResults:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_setPasswordFieldHidden:(BOOL)arg1 ;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)setAllowsAccountCreation:(BOOL)arg1 ;
-(BOOL)_shouldAnticipatePiggybacking;
-(void)_prewarmSignInFlowIfApplicable;
-(void)setShowServiceIcons:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(BOOL)_isGreenTeaCapable;
-(void)_endObservingKeyboardWillShowNotifications;
-(UILabel *)messageLabel;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_nextBarButtonItem;
-(void)setShowingPasswordCell:(BOOL)arg1 ;
-(BOOL)canEditUsername;
-(BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)_cancelButtonSelected:(id)arg1 ;
-(void)_delegate_signInViewControllerDidCompleteWithAuthenticationResults:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_accountsHeaderView;
-(BOOL)showingPasswordCell;
-(id)_passwordFieldIndexPath;
-(void)_presentCreateAppleIDPane;
-(id)authenticationContext;
-(void)_presentForgotAppleIDPane;
-(void)_attemptAuthenticationWithContext:(id)arg1 ;
-(void)_delegate_signInViewControllerDidCancel;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_repairCloudAccountWithAuthenticationResults:(id)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)showServiceIcons;
-(void)setDelegate:(id<AAUISignInViewControllerDelegate>)arg1 ;
-(id)_passwordCell;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)_akServiceType;
-(void)_beginObservingTextFieldDidChangeNotifications;
-(BOOL)_hasValidCredentials;
-(void)_beginObservingKeyboardWillShowNotifications;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)context:(id)arg1 needsPasswordWithCompletion:(/*^block*/id)arg2 ;
-(void)loadView;
-(id)_cancelBarButtonItem;
-(BOOL)allowsAccountCreation;
-(void)_setAkServiceType:(long long)arg1 ;
-(void)_updateContentInsetWithHeight:(double)arg1 ;
-(id)_usernameCell;
-(void)_nextButtonSelected:(id)arg1 ;
-(void)constrainView:(id)arg1 toFillHeaderFooterView:(id)arg2 ;
-(void)_setUsernameCellWaiting:(BOOL)arg1 ;
-(void)_endObservingSizeCategoryNotification;
-(id<AAUISignInViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)_attemptAuthentication;
-(void)_textFieldDidChange:(id)arg1 ;
@end

