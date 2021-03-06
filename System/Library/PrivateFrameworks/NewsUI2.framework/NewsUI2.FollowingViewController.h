/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TUViewController.h>
#import <libobjc.A.dylib/TSFollowingViewControllerType.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/TSViewControllerTabbable.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>

@class UIView;

@interface NewsUI2.FollowingViewController : TUViewController <TSFollowingViewControllerType, UISearchBarDelegate, TSViewControllerTabbable, TSTabBarSplitViewAutoObserver> {

	 searchProvider;
	 lazySearchViewController;
	 lazySearchResultsViewController;
	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 purchaseController;
	 bundleSubscriptionManager;
	 alertPresenter;
	??? previousSelectedIndexPath;
	 featureAvailability;
	 commands;
	 newsActivityManager;

}

@property (readonly,nonatomic) UIView * contentView; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)editButtonTapped;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)tabBarControllerDidDoubleTapBarButtonItem:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(UIView *)contentView;
-(id)contentScrollView;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)delete:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

