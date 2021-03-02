/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol SUPaymentSetupViewControllerDelegate;
@class PKPaymentSetupRequest, PKPaymentSetupViewController;

@interface SUPaymentSetupViewController : UIViewController {

	id<SUPaymentSetupViewControllerDelegate> _delegate;
	PKPaymentSetupRequest* _paymentSetupRequest;
	PKPaymentSetupViewController* _childViewController;

}

@property (nonatomic,retain) PKPaymentSetupViewController * childViewController;                    //@synthesize childViewController=_childViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SUPaymentSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupRequest * paymentSetupRequest;                         //@synthesize paymentSetupRequest=_paymentSetupRequest - In the implementation block
-(void)_setup;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPaymentSetupRequest:(id)arg1 ;
-(PKPaymentSetupViewController *)childViewController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<SUPaymentSetupViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)setChildViewController:(PKPaymentSetupViewController *)arg1 ;
-(id<SUPaymentSetupViewControllerDelegate>)delegate;
-(PKPaymentSetupRequest *)paymentSetupRequest;
@end
