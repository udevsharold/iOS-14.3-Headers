/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIViewPropertyAnimator, NSString;

@interface _UIPreviewInteractionPresentationTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {

	id<UIViewControllerContextTransitioning> _transitionContext;
	UIViewPropertyAnimator* _presentationAnimator;
	double _interactiveTransitionFraction;
	BOOL _shouldPerformAsDismissTransition;
	BOOL _didScheduleFinishTransition;
	BOOL _didScheduleCancelTransition;

}

@property (nonatomic,readonly) double interactiveTransitionFraction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(void)animateTransition:(id)arg1 ;
-(void)cancelTransition;
-(void)startInteractiveTransition:(id)arg1 ;
-(id)init;
-(void)animationEnded:(BOOL)arg1 ;
-(id)_newPushDecayAnimator;
-(id)_preparedPresentationAnimator;
-(id)_previewPresentationControllerForViewController:(id)arg1 ;
-(void)_performFinishTransition;
-(void)_performCancelTransition;
-(id)_newReducedMotionTimingCurveProviderForPreviewTransition;
-(id)_newTimingCurveProviderForPreviewTransition;
-(id)_previewPresentationControllerForTransitionContext:(id)arg1 ;
-(void)_applyPushDecayEffectTransformToView:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(BOOL)wantsInteractiveStart;
-(void)updateInteractiveTransition:(double)arg1 ;
-(id)interruptibleAnimatorForTransition:(id)arg1 ;
-(BOOL)_shouldReduceMotion;
-(double)interactiveTransitionFraction;
-(void)finishTransition;
@end
