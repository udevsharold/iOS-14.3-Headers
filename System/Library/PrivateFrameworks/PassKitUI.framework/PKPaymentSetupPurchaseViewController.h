/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupPurchaseAmountViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorPrivateDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupDelegate.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentSetupProduct, PKPaymentSetupPurchaseController, PKPaymentProvisioningController, PKPaymentProvisioningMethodMetadata, UIImageView, UILabel, PKPaymentSetupPurchaseAmountView, NSLayoutConstraint, NSDecimalNumber, PKPaymentAuthorizationCoordinator, PKServiceProviderPurchase, RemoteUIController, UIImage, UIActivityIndicatorView, NSString;

@interface PKPaymentSetupPurchaseViewController : UIViewController <PKPaymentSetupPurchaseAmountViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupViewControllerDelegate, RemoteUIControllerDelegate, PKPaymentSetupDelegate, PKViewControllerPreflightable> {

	BOOL _snapshotNeedsCorners;
	unsigned char _visibility;
	BOOL _fieldsVerified;
	BOOL _acceptedTerms;
	PKPaymentSetupProduct* _product;
	PKPaymentSetupPurchaseController* _purchaseController;
	PKPaymentProvisioningController* _provisioningController;
	long long _setupContext;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKPaymentProvisioningMethodMetadata* _provisioningMethodMetadata;
	UIImageView* _passView;
	UILabel* _titleLabel;
	PKPaymentSetupPurchaseAmountView* _amountView;
	NSLayoutConstraint* _amountViewBottomHeightConstraint;
	NSDecimalNumber* _currentAmount;
	PKPaymentAuthorizationCoordinator* _authorizationCoordinator;
	PKServiceProviderPurchase* _purchase;
	RemoteUIController* _termsController;
	UIImage* _cardImage;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) PKPaymentProvisioningController * provisioningController;                      //@synthesize provisioningController=_provisioningController - In the implementation block
@property (assign,nonatomic) long long setupContext;                                                        //@synthesize setupContext=_setupContext - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;                 //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningMethodMetadata * provisioningMethodMetadata;              //@synthesize provisioningMethodMetadata=_provisioningMethodMetadata - In the implementation block
@property (nonatomic,retain) UIImageView * passView;                                                        //@synthesize passView=_passView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) PKPaymentSetupPurchaseAmountView * amountView;                                 //@synthesize amountView=_amountView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * amountViewBottomHeightConstraint;                         //@synthesize amountViewBottomHeightConstraint=_amountViewBottomHeightConstraint - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * currentAmount;                                                 //@synthesize currentAmount=_currentAmount - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationCoordinator * authorizationCoordinator;                  //@synthesize authorizationCoordinator=_authorizationCoordinator - In the implementation block
@property (nonatomic,retain) PKServiceProviderPurchase * purchase;                                          //@synthesize purchase=_purchase - In the implementation block
@property (assign,nonatomic) BOOL fieldsVerified;                                                           //@synthesize fieldsVerified=_fieldsVerified - In the implementation block
@property (nonatomic,retain) RemoteUIController * termsController;                                          //@synthesize termsController=_termsController - In the implementation block
@property (assign,nonatomic) BOOL acceptedTerms;                                                            //@synthesize acceptedTerms=_acceptedTerms - In the implementation block
@property (nonatomic,retain) UIImage * cardImage;                                                           //@synthesize cardImage=_cardImage - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                                   //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupProduct * product;                                             //@synthesize product=_product - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupPurchaseController * purchaseController;                       //@synthesize purchaseController=_purchaseController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)paymentSetupDidFinish:(id)arg1 ;
-(void)_createSubviews;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setCurrentAmount:(NSDecimalNumber *)arg1 ;
-(UIImageView *)passView;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(PKPaymentSetupPurchaseController *)purchaseController;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIImage *)cardImage;
-(PKPaymentProvisioningMethodMetadata *)provisioningMethodMetadata;
-(void)setCardImage:(UIImage *)arg1 ;
-(PKPaymentProvisioningController *)provisioningController;
-(UILabel *)titleLabel;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(long long)setupContext;
-(PKServiceProviderPurchase *)purchase;
-(PKPaymentSetupProduct *)product;
-(void)setProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(id)_rightBarButton;
-(void)_updateBottomHeightConstraint;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4 ;
-(BOOL)_isCompactHeight;
-(BOOL)_readerModeIsSupported;
-(BOOL)_shouldHideImage;
-(CGSize)_imageSizeShowingTransferButton:(BOOL)arg1 ;
-(void)_rightBarButtonPressed:(id)arg1 ;
-(id)_spinnerBarButton;
-(void)shakeCard;
-(id)_paymentRequestForAmount:(id)arg1 ;
-(void)_presetPaymentRequest:(id)arg1 forResultType:(long long)arg2 ;
-(void)_presentAddCardAlert:(id)arg1 ;
-(PKPaymentAuthorizationCoordinator *)authorizationCoordinator;
-(void)setAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 ;
-(void)_presentTermsAndConditionsWithCompletion:(/*^block*/id)arg1 ;
-(void)setAcceptedTerms:(BOOL)arg1 ;
-(void)didUpdateAmount:(id)arg1 isValid:(BOOL)arg2 ;
-(void)transferBalanceFromExistingCard;
-(void)paymentSetupPurchaseAmountViewDidLayoutKeyboard:(id)arg1 ;
-(void)setSetupContext:(long long)arg1 ;
-(void)setProvisioningMethodMetadata:(PKPaymentProvisioningMethodMetadata *)arg1 ;
-(void)setPassView:(UIImageView *)arg1 ;
-(PKPaymentSetupPurchaseAmountView *)amountView;
-(void)setPurchase:(PKServiceProviderPurchase *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg1 ;
-(void)_showSpinner:(BOOL)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_createConstraints;
-(NSDecimalNumber *)currentAmount;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setAmountView:(PKPaymentSetupPurchaseAmountView *)arg1 ;
-(NSLayoutConstraint *)amountViewBottomHeightConstraint;
-(void)setAmountViewBottomHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)fieldsVerified;
-(void)setFieldsVerified:(BOOL)arg1 ;
-(RemoteUIController *)termsController;
-(void)setTermsController:(RemoteUIController *)arg1 ;
-(BOOL)acceptedTerms;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)viewDidLoad;
@end
