/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FANavigationControllerDelegate.h>

@protocol FACreateChildControllerDelegate;
@class UIViewController, ACAccount, FANavigationController;

@interface FACreateChildController : NSObject <FANavigationControllerDelegate> {

	id<FACreateChildControllerDelegate> _delegate;
	UIViewController* _presentingViewController;
	ACAccount* _appleAccount;
	FANavigationController* _navController;

}

@property (nonatomic,retain) ACAccount * appleAccount;                                         //@synthesize appleAccount=_appleAccount - In the implementation block
@property (nonatomic,retain) FANavigationController * navController;                           //@synthesize navController=_navController - In the implementation block
@property (assign,nonatomic,__weak) id<FACreateChildControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;               //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(UIViewController *)presentingViewController;
-(FANavigationController *)navController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(ACAccount *)appleAccount;
-(void)setDelegate:(id<FACreateChildControllerDelegate>)arg1 ;
-(id<FACreateChildControllerDelegate>)delegate;
-(void)setNavController:(FANavigationController *)arg1 ;
-(void)_dismissPresentedViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithAppleAccount:(id)arg1 ;
-(void)createChildAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupPresentedViewController;
-(id)_createChildAuthContext;
-(void)repairChildAccountWithAuthenticationResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_repairFAContextWithAuthResults:(id)arg1 ;
-(id)_repairParametersFromAuthResults:(id)arg1 ;
-(id)_repairAuthContextWithAuthResults:(id)arg1 ;
-(void)navigationController:(id)arg1 didPresentInitialViewController:(id)arg2 ;
-(void)navigationController:(id)arg1 presentViewController:(id)arg2 ;
-(void)setAppleAccount:(ACAccount *)arg1 ;
@end

