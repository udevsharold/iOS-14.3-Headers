/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollViewDelegate.h>

@class PRXPurelyInteractiveTransition, PRXPullDismissalScrollView, UIViewController, NSString;

@interface PRXPullDismissalInteractionDriver : NSObject <UIScrollViewDelegate> {

	PRXPurelyInteractiveTransition* _interactiveTransition;
	PRXPullDismissalScrollView* _scrollView;
	UIViewController* _presentedViewController;

}

@property (nonatomic,__weak,readonly) PRXPullDismissalScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentedViewController;                               //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,readonly) id<UIViewControllerAnimatedTransitioning> animationController; 
@property (nonatomic,readonly) id<UIViewControllerInteractiveTransitioning> interactionController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PRXPullDismissalScrollView *)scrollView;
-(id<UIViewControllerAnimatedTransitioning>)animationController;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(UIViewController *)presentedViewController;
-(id<UIViewControllerInteractiveTransitioning>)interactionController;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 scrollView:(id)arg2 ;
-(void)_finishPullToDismiss;
@end

