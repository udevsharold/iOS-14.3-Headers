/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSArray;

@interface VideosUI.PaginationTemplateController : UIViewController {

	 bottomMarginForPageControl;
	 templateModel;
	 lastContentOffset;
	 lastScrollDirection;
	 currentPage;
	 isAnimationInProgress;
	 impressionsTracker;
	 impressionsCalculator;
	 $__lazy_storage_$_imageProxyQueue;
	 $__lazy_storage_$_animator;
	 $__lazy_storage_$_rightSwipeGestureRecognizer;
	 $__lazy_storage_$_leftSwipeGestureRecognizer;
	 playbackEventSubscriber;
	 currentPageView;
	 $__lazy_storage_$_reusableViews;
	 $__lazy_storage_$_pageControl;

}

@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(void)leftSwipped:(id)arg1 ;
-(void)rightSwipped:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
@end
