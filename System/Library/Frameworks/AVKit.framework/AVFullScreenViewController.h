/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol AVFullScreenViewControllerDelegate;
@class UIViewController, UIView;

@interface AVFullScreenViewController : UIViewController {

	UIViewController*<AVFullScreenViewControllerDelegate> _delegate;
	AVFullScreenViewController* _associatedFullScreenViewController;
	AVFullScreenViewController* _sourceFullScreenViewController;
	UIView* _contentView;

}

@property (assign,nonatomic,__weak) UIView * contentView;                                                         //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<AVFullScreenViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) AVFullScreenViewController * associatedFullScreenViewController;              //@synthesize associatedFullScreenViewController=_associatedFullScreenViewController - In the implementation block
@property (assign,nonatomic,__weak) AVFullScreenViewController * sourceFullScreenViewController;                  //@synthesize sourceFullScreenViewController=_sourceFullScreenViewController - In the implementation block
-(long long)preferredStatusBarStyle;
-(long long)preferredWhitePointAdaptivityStyle;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)shouldAutorotate;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)keyCommands;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)attachContentView;
-(AVFullScreenViewController *)associatedFullScreenViewController;
-(void)setAssociatedFullScreenViewController:(AVFullScreenViewController *)arg1 ;
-(AVFullScreenViewController *)sourceFullScreenViewController;
-(void)setSourceFullScreenViewController:(AVFullScreenViewController *)arg1 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)modalPresentationCapturesStatusBarAppearance;
-(BOOL)_requiresCustomPresentationController;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setDelegate:(UIViewController*<AVFullScreenViewControllerDelegate>)arg1 ;
-(BOOL)avkit_isEffectivelyFullScreen;
-(void)loadView;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(UIView *)contentView;
-(BOOL)_canShowWhileLocked;
-(UIViewController*<AVFullScreenViewControllerDelegate>)delegate;
-(void)setContentView:(UIView *)arg1 ;
@end

