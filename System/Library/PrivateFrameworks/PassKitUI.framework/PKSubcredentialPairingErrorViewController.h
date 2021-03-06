/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialPairingFlowControllerOperation.h>

@protocol PKSubcredentialPairingFlowControllerProtocol;
@class PKExplanationView, PKSubcredentialPairingFlowControllerContext, NSString;

@interface PKSubcredentialPairingErrorViewController : UIViewController <PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation> {

	PKExplanationView* _explainationView;
	BOOL _isAdvancing;
	id<PKSubcredentialPairingFlowControllerProtocol> _flowController;
	PKSubcredentialPairingFlowControllerContext* _provisioningContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PKSubcredentialPairingFlowControllerContext * provisioningContext;              //@synthesize provisioningContext=_provisioningContext - In the implementation block
@property (nonatomic,readonly) id<PKSubcredentialPairingFlowControllerProtocol> flowController;              //@synthesize flowController=_flowController - In the implementation block
@property (nonatomic,readonly) unsigned long long operation; 
@property (nonatomic,readonly) BOOL suppressFieldDetect; 
-(unsigned long long)operation;
-(id)initWithFlowController:(id)arg1 context:(id)arg2 ;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(PKSubcredentialPairingFlowControllerContext *)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(BOOL)suppressFieldDetect;
-(void)cancelButtonPressed;
-(void)configureExplanationViewWithError:(id)arg1 ;
-(id<PKSubcredentialPairingFlowControllerProtocol>)flowController;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
@end

