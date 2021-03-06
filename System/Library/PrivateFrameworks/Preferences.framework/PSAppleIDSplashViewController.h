/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextPasswordDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class AKAppleIDAuthenticationController, UIActivityIndicatorView, UIBarButtonItem, PSSpecifier, NSString, NSTimer, RemoteUIController;

@interface PSAppleIDSplashViewController : PSListController <AKAppleIDAuthenticationInAppContextPasswordDelegate, RemoteUIControllerDelegate> {

	AKAppleIDAuthenticationController* _authController;
	/*^block*/id _passwordHandler;
	UIActivityIndicatorView* _spinner;
	UIBarButtonItem* _spinnerBarItem;
	UIBarButtonItem* _nextButtonBarItem;
	UIBarButtonItem* _cancelButtonBarItem;
	PSSpecifier* _createNewAccountButtonSpecifier;
	PSSpecifier* _createNewAccountGroupSpecifier;
	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _passwordSpecifier;
	PSSpecifier* _userSpecifier;
	NSString* _username;
	NSString* _password;
	id _textFieldTextDidChangeObserver;
	BOOL _isPasswordDirty;
	BOOL _shouldHideBackButton;
	void* _powerAssertion;
	NSTimer* _idleJiggleTimer;
	RemoteUIController* _remoteUIController;
	/*^block*/id _remoteUICompletion;
	BOOL _isPresentedModally;
	BOOL _shouldShowCreateAppleIDButton;

}

@property (assign,setter=setPresentedModally:,nonatomic) BOOL isPresentedModally;                         //@synthesize isPresentedModally=_isPresentedModally - In the implementation block
@property (nonatomic,readonly) AKAppleIDAuthenticationController * authenticationController; 
@property (assign,nonatomic) BOOL shouldShowCreateAppleIDButton;                                          //@synthesize shouldShowCreateAppleIDButton=_shouldShowCreateAppleIDButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(void)_cancelPasswordDelegateIfNecessary;
-(void)returnPressedAtEnd;
-(id)serviceName;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)serviceDescription;
-(void)showBusyUI;
-(id)_silhouetteMonogram;
-(id)_specifierForGroupWithiForgotLink;
-(BOOL)_runningInMail;
-(id)_specifierForLoginUserForm;
-(id)_specifierForLoginPasswordForm;
-(id)_usernameForSpecifier:(id)arg1 ;
-(id)_specifiersForSignInButton;
-(id)_specifiersForCreateNewAccount;
-(id)_passwordForSpecifier:(id)arg1 ;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_signInButtonWasTapped:(id)arg1 ;
-(void)_presentAppleIDPrivacyInformationPane;
-(void)_updateSignInButton;
-(void)_createNewAppleIDButtonWasTapped:(id)arg1 ;
-(void)_iForgotButtonWasTapped:(id)arg1 ;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(BOOL)_shouldAnchorCreateAccountButton;
-(void)_reloadPasswordSpecifier;
-(double)_heightForCreateNewAccountSpecifierWithWidth:(double)arg1 ;
-(void)willBeginAuthWithContext:(id)arg1 ;
-(double)_heightForCreateNewAccountFooterWithWidth:(double)arg1 ;
-(void)handleAuthCompletionWithResults:(id)arg1 ;
-(void)didFinishAuthWithContext:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(void)_signInWithUsername:(id)arg1 password:(id)arg2 ;
-(id)serviceIcon;
-(void)_beginiCloudCreationFlowWithContinuationData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_openWebBasedCredentialRecoveryFlow;
-(void)createNewAppleIDWithCompletion:(/*^block*/id)arg1 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)_setInteractionEnabled:(BOOL)arg1 ;
-(BOOL)isPresentedModally;
-(BOOL)_shouldShowCancelDone;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)setPresentedModally:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)shouldShowCreateAppleIDButton;
-(void)setUsernameEnabled:(BOOL)arg1 ;
-(void)_presentInvalidUsernameAlert;
-(void)setShouldShowCreateAppleIDButton:(BOOL)arg1 ;
-(AKAppleIDAuthenticationController *)authenticationController;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)context:(id)arg1 needsPasswordWithCompletion:(/*^block*/id)arg2 ;
-(void)hideBusyUI;
-(id)title;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
@end

