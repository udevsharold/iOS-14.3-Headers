/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIViewController;

@interface NewsUI2.DockContainerViewController : UIViewController <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate> {

	 rootViewController;
	 lazyDockableViewController;
	 presentationMode;
	 dockView;
	 $__lazy_storage_$_longPressGestureRecognizer;
	 $__lazy_storage_$_dockHeightConstraint;
	 $__lazy_storage_$_dockedView;
	 $__lazy_storage_$_expandedViewController;

}

@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) BOOL shouldAutorotate; 
@property (readonly,nonatomic) BOOL canBecomeFirstResponder; 
-(id)animationControllerForDismissedController:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)accessibilityPerformMagicTap;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(BOOL)shouldAutorotate;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)dockedViewTapped;
-(void)dockedViewLongPressed;
@end

