/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>

@interface StocksUI.ForYouFeedViewController : UIViewController <UICollectionViewDelegate, TSTabBarSplitViewAutoObserver> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 cardViewScrollViewCoordinator;
	 statusBarView;
	 collapsingAnimator;
	 sharingActivityProviderFactory;
	 eventManager;
	 keyboardInputMonitor;
	 toolbarManager;
	 toolbarTitleIsHidden;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
-(long long)preferredStatusBarStyle;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tabBarSplitViewWillObsureView;
-(void)tabBarSplitViewDidUnobsureView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end
