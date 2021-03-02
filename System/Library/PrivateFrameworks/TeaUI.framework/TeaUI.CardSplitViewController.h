/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class NSArray, UIViewController;

@interface TeaUI.CardSplitViewController : UISplitViewController <UISplitViewControllerDelegate> {

	 primaryCardContainerController;
	 commands;
	 preservedItems;
	 eventManager;

}

@property (readonly,nonatomic) NSArray * keyCommands; 
@property (copy,nonatomic) NSArray * viewControllers; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(NSArray *)keyCommands;
-(BOOL)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3 ;
-(void)presentationTransitionDidEndWithNotification:(id)arg1 ;
-(void)dismissalTransitionDidEndWithNotification:(id)arg1 ;
-(BOOL)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3 ;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2 ;
-(void)toggleResponderPane;
-(void)setViewControllers:(NSArray *)arg1 ;
-(NSArray *)viewControllers;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
@end
