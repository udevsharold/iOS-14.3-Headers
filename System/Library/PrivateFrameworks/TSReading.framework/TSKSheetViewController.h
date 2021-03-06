/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol TSKSheetViewControllerDelegate;
@class UIViewController, NSLayoutConstraint, NSString;

@interface TSKSheetViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate> {

	UIViewController* _contentViewController;
	NSLayoutConstraint* _contentVerticalConstraint;
	BOOL _isContentHidden;
	id<TSKSheetViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<TSKSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationControllerForDismissedController:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(void)setContentHidden:(BOOL)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(double)transitionDuration:(id)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setDelegate:(id<TSKSheetViewControllerDelegate>)arg1 ;
-(id<TSKSheetViewControllerDelegate>)delegate;
-(id)initWithContentViewController:(id)arg1 allowTapsOutsideContentView:(BOOL)arg2 ;
-(void)didTapView;
-(void)dismissSheetAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isShowingForTransitionContext:(id)arg1 ;
-(void)animateShowWithContext:(id)arg1 ;
-(void)animateDismissWithContext:(id)arg1 ;
@end

