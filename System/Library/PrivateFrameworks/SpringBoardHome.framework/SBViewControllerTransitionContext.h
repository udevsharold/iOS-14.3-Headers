/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBViewControllerContextTransitioning.h>
#import <libobjc.A.dylib/SBViewControllerTransitionCoordinator.h>

@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, SBViewControllerTransitionContextDelegate;
@class NSMutableDictionary, NSMapTable, BSUIAnimationFactory, NSMutableArray, NSMutableSet, UIView, NSString;

@interface SBViewControllerTransitionContext : NSObject <SBViewControllerContextTransitioning, SBViewControllerTransitionCoordinator> {

	long long _presentationStyle;
	CGAffineTransform _targetTransform;
	NSMutableDictionary* _viewControllersByKey;
	NSMutableDictionary* _viewsByKey;
	NSMapTable* _initialFramesByViewController;
	NSMapTable* _finalFramesByViewController;
	BOOL _transitionStarted;
	BOOL _animationFinished;
	BOOL _transitionFinished;
	BOOL _transitionIsCancelled;
	BOOL _transitionWasEverCancelled;
	BOOL _transitionBeganInteractively;
	BOOL _transitionWasInteractive;
	BOOL _wantsAnimation;
	BOOL _transitionDidBeginCalled;
	double _transitionPercentComplete;
	unsigned long long _transitionAnimationOptions;
	BSUIAnimationFactory* _transitionAnimationFactory;
	id<UIViewControllerAnimatedTransitioning> _animator;
	id<UIViewControllerInteractiveTransitioning> _interactor;
	NSMutableArray* _alongsideAnimations;
	NSMutableArray* _alongsideCompletions;
	NSMutableArray* _alongsideInteractionEndedHandlers;
	NSMutableSet* _alongsideAnimationViews;
	NSMutableArray* _transitionContinuations;
	unsigned long long _outstandingClientCompletionCount;
	id<SBViewControllerTransitionContextDelegate> _delegate;
	UIView* _containerView;
	id _userInfo;

}

@property (nonatomic,readonly) id<SBHWidgetConfigurationAnimationContext> widgetConfigurationAnimationContext; 
@property (assign,nonatomic,__weak) id<SBViewControllerTransitionContextDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                                        //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) id<UIViewControllerAnimatedTransitioning> animator; 
@property (nonatomic,retain) id<UIViewControllerInteractiveTransitioning> interactor; 
@property (assign,nonatomic) long long presentationStyle;                                                                   //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic) CGAffineTransform targetTransform;                                                             //@synthesize targetTransform=_targetTransform - In the implementation block
@property (nonatomic,readonly) BOOL isTransitioning; 
@property (assign,nonatomic) BOOL wantsAnimation;                                                                           //@synthesize wantsAnimation=_wantsAnimation - In the implementation block
@property (nonatomic,retain) id userInfo;                                                                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL initiallyInteractive; 
@property (nonatomic,readonly) BOOL isInterruptible; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) double completionVelocity; 
@property (nonatomic,readonly) long long completionCurve; 
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(id<UIViewControllerInteractiveTransitioning>)interactor;
-(BOOL)transitionWasCancelled;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(BOOL)isInteractive;
-(id<UIViewControllerAnimatedTransitioning>)animator;
-(void)setView:(id)arg1 forKey:(id)arg2 ;
-(void)setTargetTransform:(CGAffineTransform)arg1 ;
-(double)transitionDuration;
-(void)setUserInfo:(id)arg1 ;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(CGAffineTransform)targetTransform;
-(void)_completeTransition;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isAnimated;
-(void)setAnimator:(id<UIViewControllerAnimatedTransitioning>)arg1 ;
-(id)viewControllerForKey:(id)arg1 ;
-(double)completionVelocity;
-(void)cancelTransition;
-(BOOL)supportsRestarting;
-(void)startTransition;
-(void)_runInteractionEndedHandlers;
-(BOOL)isInterruptible;
-(BOOL)initiallyInteractive;
-(id)init;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)viewForKey:(id)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(long long)presentationStyle;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(void)setWantsAnimation:(BOOL)arg1 ;
-(void)setPresentationStyle:(long long)arg1 ;
-(BOOL)wasPreviousPhaseInteractive;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(BOOL)supportsCancelling;
-(void)completeTransition:(BOOL)arg1 ;
-(UIView *)containerView;
-(void)dealloc;
-(void)finishInteractiveTransition;
-(id)_interactiveAnimator;
-(id)_reversibleAnimator;
-(BOOL)requiresInteractiveAnimations;
-(void)updateInteractiveTransition:(double)arg1 ;
-(id)succinctDescription;
-(id)transitionAnimationFactory;
-(id)userInfo;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)_animatorIsInteractive;
-(BOOL)isCancelled;
-(double)percentComplete;
-(BOOL)_interactorSupportsRestarting;
-(BOOL)_objectSupportsRestarting:(id)arg1 ;
-(BOOL)requiresCancellableAnimations;
-(void)_runAlongsideAnimationBlocksWithFactory:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setFinalFrame:(CGRect)arg1 forViewController:(id)arg2 ;
-(NSString *)description;
-(/*^block*/id)_acquireTransitionCompletion;
-(id)succinctDescriptionBuilder;
-(long long)completionCurve;
-(void)addTransitionContinuation:(/*^block*/id)arg1 ;
-(BOOL)wantsAnimation;
-(BOOL)requiresRestartableAnimations;
-(void)setInitialFrame:(CGRect)arg1 forViewController:(id)arg2 ;
-(BOOL)isTransitioning;
-(void)setDelegate:(id<SBViewControllerTransitionContextDelegate>)arg1 ;
-(unsigned long long)transitionAnimationOptions;
-(void)pauseInteractiveTransition;
-(void)_completeTransitionIfPossible;
-(BOOL)transitionWasRestarted;
-(BOOL)_animatorSupportsRestarting;
-(void)_startInteractiveTransition;
-(void)setInteractor:(id<UIViewControllerInteractiveTransitioning>)arg1 ;
-(BOOL)_animatorIsReversible;
-(void)restartTransition;
-(id<SBViewControllerTransitionContextDelegate>)delegate;
-(void)_updateTransitionAnimationFactoryAndOptions;
-(void)setViewController:(id)arg1 forKey:(id)arg2 ;
-(void)_runAlongsideAnimationBlocksInEnclosingAnimationContext;
-(id<SBHWidgetConfigurationAnimationContext>)widgetConfigurationAnimationContext;
@end
