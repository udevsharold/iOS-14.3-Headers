/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AKAppleIDAuthenticationContext.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationUIProvider.h>

@protocol AKAppleIDAuthenticationInAppContextDelegate, AKInAppAuthenticationUIProvider, AKAppleIDAuthenticationInAppContextAlertDelegate, CDPStateUIProvider, AKAppleIDAuthenticationInAppContextPasswordDelegate;
@class AKNativeAccountRecoveryController, UIViewController, NSString;

@interface AKAppleIDAuthenticationInAppContext : AKAppleIDAuthenticationContext <RemoteUIControllerDelegate, AKAppleIDAuthenticationUIProvider> {

	AKNativeAccountRecoveryController* _nativeRecoveryController;
	BOOL _forceInlinePresentation;
	BOOL _presentingServerUI;
	UIViewController* _presentingViewController;
	id<AKAppleIDAuthenticationInAppContextDelegate> _delegate;
	id<AKInAppAuthenticationUIProvider> _inAppAuthUIProvider;
	id<AKAppleIDAuthenticationInAppContextAlertDelegate> _alertDelegate;
	id<CDPStateUIProvider> _cdpUiProvider;
	id<AKAppleIDAuthenticationInAppContextPasswordDelegate> __passwordDelegate;

}

@property (nonatomic,retain) id<AKInAppAuthenticationUIProvider> inAppAuthUIProvider;                                                                    //@synthesize inAppAuthUIProvider=_inAppAuthUIProvider - In the implementation block
@property (assign,getter=isPresentingServerUI,nonatomic) BOOL presentingServerUI;                                                                        //@synthesize presentingServerUI=_presentingServerUI - In the implementation block
@property (assign,nonatomic,__weak) id<AKAppleIDAuthenticationInAppContextAlertDelegate> alertDelegate;                                                  //@synthesize alertDelegate=_alertDelegate - In the implementation block
@property (setter=_setCdpUiProvider:,nonatomic,retain) id<CDPStateUIProvider> cdpUiProvider;                                                             //@synthesize cdpUiProvider=_cdpUiProvider - In the implementation block
@property (assign,setter=_setPasswordDelegate:,nonatomic,__weak) id<AKAppleIDAuthenticationInAppContextPasswordDelegate> _passwordDelegate;              //@synthesize _passwordDelegate=__passwordDelegate - In the implementation block
@property (assign,nonatomic) BOOL forceInlinePresentation;                                                                                               //@synthesize forceInlinePresentation=_forceInlinePresentation - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                                                                         //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<AKAppleIDAuthenticationInAppContextDelegate> delegate;                                                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setCdpUiProvider:(id)arg1 ;
-(void)_setPasswordDelegate:(id)arg1 ;
-(void)dismissKeepUsingUIWithCompletion:(/*^block*/id)arg1 ;
-(void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2 ;
-(void)completeWithError:(id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_assertValidPresentingViewController;
-(void)_dismissServerProvidedUIWithCompletion:(/*^block*/id)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(id<AKInAppAuthenticationUIProvider>)inAppAuthUIProvider;
-(void)dismissSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)setForceInlinePresentation:(BOOL)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 forRequest:(id)arg3 ;
-(void)setPresentingServerUI:(BOOL)arg1 ;
-(id)serverDataHarvester;
-(UIViewController *)presentingViewController;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)setInAppAuthUIProvider:(id<AKInAppAuthenticationUIProvider>)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_presentTooManyLoginAttemptsViewWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 waitForInteraction:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)remoteUIStyle;
-(void)willPresentModalNavigationController:(id)arg1 ;
-(void)presentSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<AKAppleIDAuthenticationInAppContextPasswordDelegate>)_passwordDelegate;
-(id)_remoteUIControllerDelegate;
-(void)dismissServerProvidedUIWithCompletion:(/*^block*/id)arg1 ;
-(id<AKAppleIDAuthenticationInAppContextAlertDelegate>)alertDelegate;
-(BOOL)forceInlinePresentation;
-(void)_contextWillBeginPresentingSecondaryUI;
-(void)_handleBackButtonTap:(id)arg1 ;
-(void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2 ;
-(void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cleanUpBasicLoginWithCompletion:(/*^block*/id)arg1 ;
-(void)_contextDidEndPresentingSecondaryUI;
-(void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 forRequest:(id)arg3 ;
-(void)setDelegate:(id<AKAppleIDAuthenticationInAppContextDelegate>)arg1 ;
-(void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)remoteUIController:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<CDPStateUIProvider>)cdpUiProvider;
-(void)dismissNativeRecoveryUIWithCompletion:(/*^block*/id)arg1 ;
-(void)setAlertDelegate:(id<AKAppleIDAuthenticationInAppContextAlertDelegate>)arg1 ;
-(BOOL)isPresentingServerUI;
-(void)presentKeepUsingUIForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<AKAppleIDAuthenticationInAppContextDelegate>)delegate;
-(void)presentNativeRecoveryUIWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

