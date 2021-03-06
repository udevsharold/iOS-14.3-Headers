/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIRedeemStepViewController.h>
#import <libobjc.A.dylib/CRCodeRedeemerControllerDelegate.h>
#import <libobjc.A.dylib/SKUIRedeemCameraViewDelegate.h>
#import <libobjc.A.dylib/SKUIRedeemCameraViewControllerDelegate.h>

@protocol SKUIRedeemCameraViewControllerDelegate, SKUIRedeemViewCameraOverrideDelegate;
@class CRCodeRedeemerController, UIBarButtonItem, NSString, SKUIRedeem;

@interface SKUIRedeemCameraViewController : SKUIRedeemStepViewController <CRCodeRedeemerControllerDelegate, SKUIRedeemCameraViewDelegate, SKUIRedeemCameraViewControllerDelegate> {

	BOOL _alreadyPushed;
	CRCodeRedeemerController* _camera;
	long long _category;
	UIBarButtonItem* _redeemButton;
	UIBarButtonItem* _flipButton;
	UIBarButtonItem* _activityBarButtonItem;
	NSString* _initialCode;
	SKUIRedeem* _successfulRedeem;
	BOOL _fullscreen;
	id<SKUIRedeemCameraViewControllerDelegate> _delegate;
	id<SKUIRedeemViewCameraOverrideDelegate> _cameraOverrideDelegate;

}

@property (nonatomic,readonly) long long category;                                                                //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * initialCode;                                                                //@synthesize initialCode=_initialCode - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemCameraViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemViewCameraOverrideDelegate> cameraOverrideDelegate;              //@synthesize cameraOverrideDelegate=_cameraOverrideDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_enabled;
-(long long)category;
-(void)_cancelAction:(id)arg1 ;
-(void)dealloc;
-(void)_setEnabled:(BOOL)arg1 ;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(void)setDelegate:(id<SKUIRedeemCameraViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)contentScrollView;
-(id<SKUIRedeemCameraViewControllerDelegate>)delegate;
-(void)performRedeemOperationWithCode:(id)arg1 cameraRecognized:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithRedeemCategory:(long long)arg1 ;
-(void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2 ;
-(NSString *)initialCode;
-(id)initWithRedeemCategoryFullscreen:(long long)arg1 ;
-(void)setCameraOverrideDelegate:(id<SKUIRedeemViewCameraOverrideDelegate>)arg1 ;
-(void)setInitialCode:(NSString *)arg1 ;
-(void)_redeemAction:(id)arg1 ;
-(void)_performRedeemOperationWithCode:(id)arg1 cameraRecognized:(BOOL)arg2 allowOverride:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_flipAction:(id)arg1 ;
-(void)_updateRightBarButtonItemsForRedeemInputState:(long long)arg1 ;
-(void)SKUIRedeemPreflightImagesDidLoad:(id)arg1 ;
-(void)_redeemDidFinish:(id)arg1 error:(id)arg2 ;
-(id<SKUIRedeemViewCameraOverrideDelegate>)cameraOverrideDelegate;
-(void)_cameraRedeemDidFinish:(id)arg1 error:(id)arg2 ;
-(void)codeRedeemerControllerDidCancel:(id)arg1 ;
-(void)codeRedeemerController:(id)arg1 didEndWithInfo:(id)arg2 ;
-(void)codeRedeemerControllerDidDisplayMessage:(id)arg1 ;
-(id)redeemerViewForSKUIRedeemCameraView:(id)arg1 ;
-(void)SKUIRedeemCameraView:(id)arg1 textFieldDidChange:(id)arg2 ;
-(void)SKUIRedeemCameraView:(id)arg1 textFieldDidRedeem:(id)arg2 ;
-(void)cancelRedeemerViewForSKUIRedeemCameraView:(id)arg1 ;
-(void)startRedeemerViewForSKUIRedeemCameraView:(id)arg1 ;
-(void)presentFullScreenCameraViewForSKUIRedeemCameraView:(id)arg1 ;
-(void)showITunesPassLearnMoreForSKUIRedeemCameraView:(id)arg1 ;
@end

