/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol FPUIAuthenticationDelegate;
@class NSURL, FPUIAuthenticationLandingViewController;

@interface FPUIAuthenticationViewController : UIViewController {

	id<FPUIAuthenticationDelegate> _authenticationDelegate;
	NSURL* _initialConnectionURL;
	FPUIAuthenticationLandingViewController* _landingViewController;

}

@property (__weak) FPUIAuthenticationLandingViewController * landingViewController;                     //@synthesize landingViewController=_landingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<FPUIAuthenticationDelegate> authenticationDelegate;              //@synthesize authenticationDelegate=_authenticationDelegate - In the implementation block
@property (nonatomic,copy) NSURL * initialConnectionURL;                                                //@synthesize initialConnectionURL=_initialConnectionURL - In the implementation block
-(void)viewDidLoad;
-(void)setAuthenticationDelegate:(id<FPUIAuthenticationDelegate>)arg1 ;
-(id<FPUIAuthenticationDelegate>)authenticationDelegate;
-(void)setInitialConnectionURL:(NSURL *)arg1 ;
-(id)initWithServerURL:(id)arg1 ;
-(NSURL *)initialConnectionURL;
-(FPUIAuthenticationLandingViewController *)landingViewController;
-(void)setLandingViewController:(FPUIAuthenticationLandingViewController *)arg1 ;
@end
