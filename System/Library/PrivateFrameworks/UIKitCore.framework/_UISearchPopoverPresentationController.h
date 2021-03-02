/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPopoverPresentationController.h>
#import <UIKitCore/_UISearchControllerPresenting.h>

@class _UISearchPresentationAssistant, UIView, NSString;

@interface _UISearchPopoverPresentationController : UIPopoverPresentationController <_UISearchControllerPresenting> {

	_UISearchPresentationAssistant* _assistant;
	CGRect finalFrameForContainerView;

}

@property (nonatomic,retain,readonly) UIView * searchBarContainerView; 
@property (nonatomic,readonly) BOOL shouldAccountForStatusBar; 
@property (nonatomic,readonly) double statusBarAdjustment; 
@property (nonatomic,readonly) BOOL searchBarToBecomeTopAttached; 
@property (nonatomic,readonly) BOOL resultsUnderlapsSearchBar; 
@property (nonatomic,readonly) BOOL searchBarCanContainScopeBar; 
@property (nonatomic,readonly) BOOL searchBarShouldClipToBounds; 
@property (nonatomic,readonly) double resultsControllerContentOffset; 
@property (nonatomic,readonly) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController; 
@property (nonatomic,readonly) CGRect finalFrameForContainerView; 
@property (nonatomic,readonly) BOOL animatorShouldLayoutPresentationViews; 
@property (nonatomic,readonly) BOOL forceObeyNavigationBarInsets; 
@property (nonatomic,readonly) unsigned long long edgeForHidingNavigationBar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)statusBarAdjustment;
-(void)_transitionToDidEnd;
-(void)presentationTransitionWillBegin;
-(UIView *)searchBarContainerView;
-(void)_transitionToWillBegin;
-(CGRect)finalFrameForContainerView;
-(void)_transitionFromWillBegin;
-(BOOL)animatorShouldLayoutPresentationViews;
-(BOOL)searchBarCanContainScopeBar;
-(void)setContentVisible:(BOOL)arg1 ;
-(BOOL)shouldAccountForStatusBar;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(void)_transitionFromDidEnd;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)forceObeyNavigationBarInsets;
-(BOOL)searchBarToBecomeTopAttached;
-(double)resultsControllerContentOffset;
-(BOOL)searchBarShouldClipToBounds;
-(long long)adaptivePresentationStyle;
-(unsigned long long)edgeForHidingNavigationBar;
-(BOOL)resultsUnderlapsSearchBar;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(BOOL)_forcePresentationInPresenterScene;
-(id)_presentedViewControllerForSizeClassPair:(SCD_Struct_UI9)arg1 ;
-(id)_popoverHostingWindow;
@end
