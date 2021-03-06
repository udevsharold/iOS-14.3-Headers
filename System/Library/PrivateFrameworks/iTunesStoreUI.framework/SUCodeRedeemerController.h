/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CRCodeRedeemerControllerDelegate.h>

@protocol SUCodeRedeemerControllerDelegate;
@class UIVisualEffectView, CRCodeRedeemerController, NSString;

@interface SUCodeRedeemerController : UIViewController <CRCodeRedeemerControllerDelegate> {

	BOOL _cameraflipDirection;
	id<SUCodeRedeemerControllerDelegate> _delegate;
	UIVisualEffectView* _visualEffectView;
	CRCodeRedeemerController* _codeRedeemerController;

}

@property (assign,nonatomic) BOOL cameraflipDirection;                                          //@synthesize cameraflipDirection=_cameraflipDirection - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;                           //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) CRCodeRedeemerController * codeRedeemerController;                 //@synthesize codeRedeemerController=_codeRedeemerController - In the implementation block
@property (assign,nonatomic,__weak) id<SUCodeRedeemerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)cameraSupported;
-(id)init;
-(void)_setup;
-(void)startSession;
-(UIVisualEffectView *)visualEffectView;
-(void)cancel;
-(void)_setChildViewController:(id)arg1 ;
-(void)setDelegate:(id<SUCodeRedeemerControllerDelegate>)arg1 ;
-(id<SUCodeRedeemerControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)codeRedeemerControllerDidCancel:(id)arg1 ;
-(void)codeRedeemerController:(id)arg1 didEndWithInfo:(id)arg2 ;
-(void)recognitionError;
-(void)recognitionSuccess;
-(void)toggleCameraWithCompletion:(/*^block*/id)arg1 ;
-(CRCodeRedeemerController *)codeRedeemerController;
-(void)_enableBlur;
-(void)_disableBlur;
-(BOOL)cameraflipDirection;
-(void)setCameraflipDirection:(BOOL)arg1 ;
-(void)_setupCodeRedeemerController;
-(void)_setupFlipVisualEffectView;
-(void)setCodeRedeemerController:(CRCodeRedeemerController *)arg1 ;
@end

