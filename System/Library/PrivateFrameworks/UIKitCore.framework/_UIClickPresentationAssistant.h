/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKitCore/_UIClickPresentationAssisting.h>

@protocol UIViewControllerContextTransitioning;
@class UIViewPropertyAnimator, _UIClickPresentation, _UIPortalView, UITargetedPreview, UIViewController, UIView, NSString;

@interface _UIClickPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, _UIClickPresentationAssisting> {

	id<UIViewControllerContextTransitioning> _currentContext;
	unsigned long long _currentState;
	UIViewPropertyAnimator* _presentationAnimator;
	/*^block*/id lifecycleCompletion;
	_UIClickPresentation* presentation;
	_UIPortalView* _presentationSourcePortalView;
	UITargetedPreview* _sourcePreview;
	UIViewController* _stashedParentViewController;
	UIView* _stashedSuperView;
	/*^block*/id _transitionCompletion;

}

@property (nonatomic,retain) _UIPortalView * presentationSourcePortalView;                 //@synthesize presentationSourcePortalView=_presentationSourcePortalView - In the implementation block
@property (nonatomic,retain) UITargetedPreview * sourcePreview;                            //@synthesize sourcePreview=_sourcePreview - In the implementation block
@property (nonatomic,retain) UIViewController * stashedParentViewController;               //@synthesize stashedParentViewController=_stashedParentViewController - In the implementation block
@property (nonatomic,retain) UIView * stashedSuperView;                                    //@synthesize stashedSuperView=_stashedSuperView - In the implementation block
@property (nonatomic,copy) id transitionCompletion;                                        //@synthesize transitionCompletion=_transitionCompletion - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * presentationAnimator;              //@synthesize presentationAnimator=_presentationAnimator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UIClickPresentation * presentation; 
@property (nonatomic,copy) id lifecycleCompletion; 
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(_UIClickPresentation *)presentation;
-(void)_applyStashedParentViewControllerIfNecessary;
-(double)transitionDuration:(id)arg1 ;
-(id)transitionCompletion;
-(void)setTransitionCompletion:(id)arg1 ;
-(void)_animateDismissalIsInterruption:(BOOL)arg1 ;
-(void)_postInteractionCleanup;
-(void)_didTransitionToPresenting;
-(void)_didTransitionToPresented;
-(void)_didTransitionToDismissingFromState:(unsigned long long)arg1 ;
-(void)_didTransitionToPossibleEndingTransition:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)presentationAnimator;
-(_UIPortalView *)presentationSourcePortalView;
-(void)setPresentationSourcePortalView:(_UIPortalView *)arg1 ;
-(void)_createPropertyAnimatorIfNecessaryForTransition:(id)arg1 isAppearing:(BOOL)arg2 ;
-(id)_sourcePreviewPortal;
-(void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(/*^block*/id)arg2 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)setPresentation:(_UIClickPresentation *)arg1 ;
-(void)_animatePresentation;
-(void)_stashParentViewControllerIfNecessary;
-(UITargetedPreview *)sourcePreview;
-(void)setStashedParentViewController:(UIViewController *)arg1 ;
-(UIViewController *)stashedParentViewController;
-(id)initWithClickPresentation:(id)arg1 ;
-(UIView *)stashedSuperView;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
-(void)setStashedSuperView:(UIView *)arg1 ;
-(id)lifecycleCompletion;
-(void)setLifecycleCompletion:(id)arg1 ;
@end

