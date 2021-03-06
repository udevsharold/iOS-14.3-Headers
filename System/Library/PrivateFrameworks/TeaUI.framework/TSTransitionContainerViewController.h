/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>
#import <libobjc.A.dylib/TSSearchResultsPanable.h>

@class UIViewController, NSArray, UITabBarItem, NSString;

@interface TSTransitionContainerViewController : UIViewController <TSTabBarSplitViewAutoObserver, TSSearchResultsPanable> {

	 identifier;
	 disableSidebarBarButtonItem;
	 rootViewController;
	 backBarButtonItem;
	 $__lazy_storage_$_sidebarBarButtonItem;
	 doneBarButtonItem;
	 transition;

}

@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForHomeIndicatorAutoHidden; 
@property (readonly,nonatomic) NSArray * leftBarButtonItems; 
@property (readonly,nonatomic) NSArray * rightBarButtonItems; 
@property (assign,nonatomic) BOOL hidesBottomBarWhenPushed; 
@property (retain,nonatomic) UITabBarItem * tabBarItem; 
@property (readonly,nonatomic) BOOL isSearchResultsPane; 
@property (readonly,nonatomic) NSString * description; 
-(UIViewController *)childViewControllerForHomeIndicatorAutoHidden;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(UITabBarItem *)tabBarItem;
-(void)setTabBarItem:(UITabBarItem *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)hidesBottomBarWhenPushed;
-(BOOL)isSearchResultsPane;
-(void)tabBarSplitViewDidChangeTraitCollectionToTraitCollection:(id)arg1 ;
-(void)tabBarSplitViewDidChangeCollapseStateToCollapseState:(BOOL)arg1 ;
-(void)handleSidebarWithSender:(id)arg1 ;
-(void)handleDismiss;
-(void)setHidesBottomBarWhenPushed:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSArray *)leftBarButtonItems;
-(NSArray *)rightBarButtonItems;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithRootViewController:(id)arg1 identifier:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

