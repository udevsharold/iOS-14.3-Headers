/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBIconAnimatorDelegate.h>
#import <libobjc.A.dylib/SBViewControllerInteractiveAnimatedTransitioning.h>

@protocol SBViewControllerContextTransitioning, SBHomeScreenIconTransitionAnimatorDelegate;
@class SBHIconAnimationSettings, SBIconAnimator, SBNestingViewController, NSString;

@interface SBHomeScreenIconTransitionAnimator : NSObject <SBIconAnimatorDelegate, SBViewControllerInteractiveAnimatedTransitioning> {

	id<SBViewControllerContextTransitioning> _transitionContext;
	unsigned long long _transitionToken;
	SBHIconAnimationSettings* _currentSettings;
	unsigned long long _currentOperation;
	BOOL _receivedFirstInteractiveUpdate;
	BOOL _needsTransitionTokenIncrementOnNextUpdate;
	SBIconAnimator* _iconAnimator;
	SBNestingViewController* _childViewController;
	unsigned long long _operation;
	double _initialDelay;
	id<SBHomeScreenIconTransitionAnimatorDelegate> _delegate;

}

@property (nonatomic,readonly) SBHIconAnimationSettings * currentSettings; 
@property (nonatomic,readonly) SBIconAnimator * iconAnimator;                                             //@synthesize iconAnimator=_iconAnimator - In the implementation block
@property (nonatomic,readonly) SBNestingViewController * childViewController;                             //@synthesize childViewController=_childViewController - In the implementation block
@property (nonatomic,readonly) unsigned long long operation;                                              //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) double initialDelay;                                                         //@synthesize initialDelay=_initialDelay - In the implementation block
@property (nonatomic,readonly) unsigned long long currentOperation; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (getter=wasRestarted,nonatomic,readonly) BOOL restarted; 
@property (assign,nonatomic,__weak) id<SBHomeScreenIconTransitionAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)operation;
-(id)transitionAnimationFactory:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)supportsRestarting;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)updateTransition:(id)arg1 withPercentComplete:(double)arg2 ;
-(void)animationEnded:(BOOL)arg1 ;
-(unsigned long long)currentOperation;
-(double)transitionDuration:(id)arg1 ;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)restart;
-(BOOL)iconAnimator:(id)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(/*^block*/id)arg2 ;
-(SBNestingViewController *)childViewController;
-(BOOL)isCancelled;
-(double)percentComplete;
-(void)cancel;
-(double)initialDelay;
-(void)completeImmediately;
-(void)reverse;
-(SBHIconAnimationSettings *)currentSettings;
-(void)iconAnimatorWasInvalidated:(id)arg1 ;
-(void)setDelegate:(id<SBHomeScreenIconTransitionAnimatorDelegate>)arg1 ;
-(void)setInitialDelay:(double)arg1 ;
-(SBIconAnimator *)iconAnimator;
-(BOOL)wasRestarted;
-(id)initWithIconAnimator:(id)arg1 childViewController:(id)arg2 operation:(unsigned long long)arg3 ;
-(id<SBHomeScreenIconTransitionAnimatorDelegate>)delegate;
@end

