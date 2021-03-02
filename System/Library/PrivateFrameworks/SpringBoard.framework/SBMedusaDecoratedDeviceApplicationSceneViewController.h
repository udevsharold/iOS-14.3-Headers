/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBSceneViewStatusBarAssertionObserver.h>
#import <libobjc.A.dylib/SBInlineAppExposeContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/SBSystemPointerInteractionDelegate.h>
#import <libobjc.A.dylib/SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal.h>
#import <libobjc.A.dylib/SBMedusaDecoratedDeviceApplicationSceneViewControlling.h>

@class SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneViewController, UIView, SBInlineAppExposeContainerViewController, SBAsymmetricalCornerRadiusWrapperView, SBNubView, SBApplicationBlurContentView, NSHashTable, SBSceneViewStatusBarAssertion, NSMutableSet, SBMedusaSettings, BSCornerRadiusConfiguration, UIDropInteraction, NSString, MTLumaDodgePillSettings, SBHomeGrabberView;

@interface SBMedusaDecoratedDeviceApplicationSceneViewController : UIViewController <SBSceneViewStatusBarAssertionObserver, SBInlineAppExposeContainerViewControllerDelegate, SBSystemPointerInteractionDelegate, SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal, SBMedusaDecoratedDeviceApplicationSceneViewControlling> {

	SBDeviceApplicationSceneHandle* _deviceApplicationSceneHandle;
	SBDeviceApplicationSceneViewController* _deviceApplicationSceneViewController;
	UIView* _inlineAppExposeContainerView;
	SBInlineAppExposeContainerViewController* _inlineContainerViewController;
	BOOL _nubViewHidden;
	BOOL _nubViewHighlighted;
	UIView* _rimShadowView;
	UIView* _containerView;
	SBAsymmetricalCornerRadiusWrapperView* _asymmetricalCornerRadiusWrapperView;
	UIView* _blurViewContainerView;
	SBNubView* _nubView;
	UIView* _darkenView;
	BOOL _isBlurred;
	SBApplicationBlurContentView* _blurView;
	NSHashTable* _statusBarAssertions;
	SBSceneViewStatusBarAssertion* _inlineAppExposeStatusBarAssertion;
	NSMutableSet* _matchMoveAnimationRequiringReasons;
	SBMedusaSettings* _medusaSettings;
	BOOL _clipsToBounds;
	double _shadowOpacity;
	double _shadowOffset;
	BSCornerRadiusConfiguration* _cornerRadiusConfiguration;
	unsigned long long _maskedCorners;
	double _darkenViewAlpha;
	UIDropInteraction* _dropInteraction;

}

@property (nonatomic,readonly) UIView * _blurViewContainerView; 
@property (getter=isBlurred,nonatomic,readonly) BOOL blurred; 
@property (assign,nonatomic) double shadowOpacity;                                                                                         //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) double shadowOffset;                                                                                          //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,retain) BSCornerRadiusConfiguration * cornerRadiusConfiguration;                                                      //@synthesize cornerRadiusConfiguration=_cornerRadiusConfiguration - In the implementation block
@property (assign,nonatomic) unsigned long long maskedCorners;                                                                             //@synthesize maskedCorners=_maskedCorners - In the implementation block
@property (assign,nonatomic) BOOL clipsToBounds;                                                                                           //@synthesize clipsToBounds=_clipsToBounds - In the implementation block
@property (assign,nonatomic) double darkenViewAlpha;                                                                                       //@synthesize darkenViewAlpha=_darkenViewAlpha - In the implementation block
@property (assign,nonatomic) long long layoutRole; 
@property (assign,nonatomic) BOOL shouldRasterizeSceneHostView; 
@property (nonatomic,copy) NSString * sceneHostViewMinificationFilter; 
@property (nonatomic,retain) MTLumaDodgePillSettings * homeGrabberPillSettings; 
@property (nonatomic,retain) UIDropInteraction * dropInteraction;                                                                          //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isNubViewHidden,nonatomic) BOOL nubViewHidden; 
@property (assign,getter=isNubViewHighlighted,nonatomic) BOOL nubViewHighlighted; 
@property (nonatomic,retain) UIView*<SBApplicationSceneBackgroundView> backgroundView; 
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * sceneHandle; 
@property (nonatomic,readonly) SBHomeGrabberView * homeGrabberView; 
@property (assign,nonatomic) long long homeGrabberDisplayMode; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long overrideStatusBarStyle; 
@property (assign,nonatomic,__weak) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext; 
@property (nonatomic,retain) UIView * customContentView; 
@property (nonatomic,readonly) CGSize contentReferenceSize; 
@property (nonatomic,readonly) long long contentInterfaceOrientation; 
-(long long)displayMode;
-(void)willMoveToParentViewController:(id)arg1 ;
-(unsigned long long)maskedCorners;
-(void)setHomeGrabberDisplayMode:(long long)arg1 ;
-(id)newSnapshotView;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 ;
-(BOOL)shouldRasterizeSceneHostView;
-(long long)homeGrabberDisplayMode;
-(void)setApplicationSceneStatusBarDelegate:(id<SBApplicationSceneViewControllingStatusBarDelegate>)arg1 ;
-(SBHomeGrabberView *)homeGrabberView;
-(void)setCustomContentView:(UIView *)arg1 ;
-(long long)layoutRole;
-(MTLumaDodgePillSettings *)homeGrabberPillSettings;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(long long)contentInterfaceOrientation;
-(void)setShouldRasterizeSceneHostView:(BOOL)arg1 ;
-(CGSize)contentReferenceSize;
-(id)newSnapshot;
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(void)setBackgroundView:(UIView*<SBApplicationSceneBackgroundView>)arg1 ;
-(UIView *)customContentView;
-(NSString *)sceneHostViewMinificationFilter;
-(void)setPlaceholderContentContext:(id<SBScenePlaceholderContentContext>)arg1 ;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2 ;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(BOOL)clipsToBounds;
-(void)setSceneHostViewMinificationFilter:(NSString *)arg1 ;
-(void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)overrideStatusBarStyle;
-(BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(id<SBApplicationSceneViewControllingStatusBarDelegate>)applicationSceneStatusBarDelegate;
-(UIDropInteraction *)dropInteraction;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(void)statusBarAssertionDidUpdate:(id)arg1 ;
-(double)shadowOpacity;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(void)_endRequiringSceneViewMatchMoveAnimationForReason:(id)arg1 ;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3 ;
-(void)blurApplicationContent:(BOOL)arg1 withAnimationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setLayoutRole:(long long)arg1 ;
-(void)statusBarAssertionDidInvalidate:(id)arg1 ;
-(double)statusBarAlpha;
-(BOOL)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
-(void)dealloc;
-(UIView*<SBApplicationSceneBackgroundView>)backgroundView;
-(double)effectiveCornerRadius;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(double)shadowOffset;
-(void)_beginRequiringSceneViewMatchMoveAnimationForReason:(id)arg1 ;
-(BOOL)shouldBeginPointerInteractionAtLocation:(CGPoint)arg1 forView:(id)arg2 ;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setShadowOffset:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(BOOL)SB_conformsToMedusaDecoratedDeviceApplicationSceneViewControlling;
-(void)setHomeGrabberPillSettings:(MTLumaDodgePillSettings *)arg1 ;
-(double)darkenViewAlpha;
-(void)setNubViewHighlighted:(BOOL)arg1 ;
-(BOOL)isBlurred;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)styleForRegion:(id)arg1 forView:(id)arg2 ;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isNubViewHidden;
-(UIEdgeInsets)pointerInteractionHitTestInsetsForView:(id)arg1 ;
-(void)loadView;
-(void)setInlineAppExposeContainerViewController:(id)arg1 ;
-(void)inlineContainerViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 ;
-(void)invalidate;
-(BOOL)isNubViewHighlighted;
-(void)setDarkenViewAlpha:(double)arg1 ;
-(void)setNubViewHidden:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)initWithDeviceApplicationSceneHandle:(id)arg1 inlineContainerViewController:(id)arg2 layoutRole:(long long)arg3 ;
-(UIView *)_blurViewContainerView;
-(id)_blurContentView;
-(void)_setBlurContentView:(id)arg1 ;
-(void)_updateNubViewAlpha;
-(BOOL)_sceneViewHasMatchMoveAnimation;
-(void)_handleNubTapGestureRecognizerAction:(id)arg1 ;
-(void)_addSceneViewMatchMoveAnimation;
-(void)_removeSceneViewMatchMoveAnimation;
-(void)_setAbsoluteDiffuseShadowOpacity:(double)arg1 ;
-(void)_setAbsoluteShadowOffset:(CGSize)arg1 ;
-(void)_setAbsoluteShadowRadius:(double)arg1 ;
@end
