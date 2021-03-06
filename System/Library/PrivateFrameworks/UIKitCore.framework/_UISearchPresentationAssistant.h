/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDimmingViewDelegate.h>

@protocol _UISearchControllerPresenting, UIViewControllerTransitionCoordinator;
@class UIPresentationController, UIView, UIDimmingView, NSString;

@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate> {

	UIPresentationController* _searchPresentationController;
	UIView* _searchBarContainerView;
	UIDimmingView* _dimmingView;
	BOOL _isFormSheetPresentation;
	BOOL _presentationWasAnimated;
	UIPresentationController*<_UISearchControllerPresenting> _adaptivePresentationController;
	id<UIViewControllerTransitionCoordinator> _transitioningToSizeCoordinator;

}

@property (assign,nonatomic) BOOL presentationWasAnimated;                                                                         //@synthesize presentationWasAnimated=_presentationWasAnimated - In the implementation block
@property (assign,nonatomic) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController;              //@synthesize adaptivePresentationController=_adaptivePresentationController - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator;                             //@synthesize transitioningToSizeCoordinator=_transitioningToSizeCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)statusBarAdjustment;
-(id)dimmingView;
-(id)searchBarContainerView;
-(BOOL)shouldAccountForStatusBar;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(BOOL)searchBarToBecomeTopAttached;
-(double)resultsControllerContentOffset;
-(CGSize)updateSearchBarContainerFrame;
-(id)locateNavigationController;
-(BOOL)presentationWasAnimated;
-(void)setAdaptivePresentationController:(UIPresentationController*<_UISearchControllerPresenting>)arg1 ;
-(double)_statusBarHeightChangeDueToRotation;
-(CGRect)optimalFrameForSearchBar:(id)arg1 ;
-(void)dealloc;
-(CGRect)_containerFrame;
-(id<UIViewControllerTransitionCoordinator>)transitioningToSizeCoordinator;
-(void)removeContainerViewFromSuperview;
-(BOOL)presentationIsPopoverToOverFullScreenAdaptation;
-(BOOL)_statusBarPreferredHiddenForInterfaceOrientation:(long long)arg1 ;
-(void)setTransitioningToSizeCoordinator:(id<UIViewControllerTransitionCoordinator>)arg1 ;
-(BOOL)_currentTransitionIsRotating;
-(id)_searchControllerPresenting;
-(id)initWithSearchPresentationController:(id)arg1 ;
-(BOOL)searchBarWillResizeForScopeBar;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(void)setPresentationWasAnimated:(BOOL)arg1 ;
-(BOOL)_statusBarPreferredHidden;
-(void)ensureAppropriatelySizedSearchBar:(id)arg1 ;
-(id)_searchBarContainerSuperview;
@end

