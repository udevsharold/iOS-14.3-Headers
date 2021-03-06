/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WLCardViewDelegate.h>
#import <libobjc.A.dylib/PKPassDeleteHandler.h>
#import <libobjc.A.dylib/PKEditPassesPerformanceTestResponder.h>
#import <libobjc.A.dylib/PKEditPassesDetailsResponder.h>

@class PKGroup, PKPass, PKPassView, UIBarButtonItem, NSString;

@interface PKEditSinglePassViewController : UIViewController <WLCardViewDelegate, PKPassDeleteHandler, PKEditPassesPerformanceTestResponder, PKEditPassesDetailsResponder> {

	PKGroup* _group;
	PKPass* _pass;
	PKPassView* _passView;
	UIBarButtonItem* _deleteBarButton;
	UIBarButtonItem* _flexibleSpace;
	UIBarButtonItem* _infoButton;
	long long _performanceTest;
	NSString* _performanceTestName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_deletePassPressed;
-(void)_moreButtonPressed;
-(void)passViewSetup;
-(void)enableDeleteButton;
-(void)_deletePassConfirmed;
-(void)disableDeleteButton;
-(void)_didPresentDetailViewController;
-(void)passWasUpdated:(id)arg1 ;
-(void)setPerformanceTest:(long long)arg1 ;
-(void)setPerformanceTestName:(id)arg1 ;
-(id)initWithGroup:(id)arg1 pass:(id)arg2 ;
-(BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)group;
-(id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1 ;
-(id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_doneButtonPressed;
-(id)pass;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
@end

