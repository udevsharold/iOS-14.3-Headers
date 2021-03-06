/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UIClickPresentationInteractionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContainer.h>
#import <libobjc.A.dylib/CCUISafeAppearancePropagationProvider.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@protocol CCUIContentModuleContentViewController, CCUIContentModuleContainerViewControllerDelegate, CCUIContentModule, CCUIContentModuleBackgroundViewController;
@class NSString, UIViewController, NSArray, CCUIContentModuleContainerPresentationController, UIView, CCUIContentModuleBackgroundView, CCUIContentModuleContentContainerView, UITapGestureRecognizer, _UIClickPresentationInteraction;

@interface CCUIContentModuleContainerViewController : UIViewController <_UIClickPresentationInteractionDelegate, UIGestureRecognizerDelegate, CCUIContentModuleContainer, CCUISafeAppearancePropagationProvider, UIPointerInteractionDelegate> {

	BOOL _expanded;
	BOOL _contentModuleProvidesOwnPlatter;
	BOOL _transitioning;
	NSString* _moduleIdentifier;
	UIViewController*<CCUIContentModuleContentViewController> _contentViewController;
	id<CCUIContentModuleContainerViewControllerDelegate> _delegate;
	NSString* _materialGroupName;
	NSArray* _topLevelBlockingGestureRecognizers;
	id<CCUIContentModule> _contentModule;
	UIViewController*<CCUIContentModuleBackgroundViewController> _backgroundViewController;
	CCUIContentModuleContainerPresentationController* _presentationController;
	UIView* _highlightWrapperView;
	CCUIContentModuleBackgroundView* _backgroundView;
	CCUIContentModuleContentContainerView* _contentContainerView;
	UIView* _contentView;
	UIView* _maskView;
	UITapGestureRecognizer* _tapRecognizer;
	_UIClickPresentationInteraction* _clickPresentationInteraction;
	UITapGestureRecognizer* _expandModuleOnTouchTapRecognizer;
	UIEdgeInsets _expandedContentEdgeInsets;

}

@property (nonatomic,copy) NSString * moduleIdentifier;                                                                          //@synthesize moduleIdentifier=_moduleIdentifier - In the implementation block
@property (nonatomic,retain) id<CCUIContentModule> contentModule;                                                                //@synthesize contentModule=_contentModule - In the implementation block
@property (nonatomic,retain) UIViewController*<CCUIContentModuleContentViewController> contentViewController;                    //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController;              //@synthesize backgroundViewController=_backgroundViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContainerPresentationController * presentationController;                          //@synthesize presentationController=_presentationController - In the implementation block
@property (assign,nonatomic) BOOL contentModuleProvidesOwnPlatter;                                                               //@synthesize contentModuleProvidesOwnPlatter=_contentModuleProvidesOwnPlatter - In the implementation block
@property (nonatomic,retain) UIView * highlightWrapperView;                                                                      //@synthesize highlightWrapperView=_highlightWrapperView - In the implementation block
@property (nonatomic,retain) CCUIContentModuleBackgroundView * backgroundView;                                                   //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContentContainerView * contentContainerView;                                       //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                               //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * maskView;                                                                                  //@synthesize maskView=_maskView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                                                             //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,retain) _UIClickPresentationInteraction * clickPresentationInteraction;                                     //@synthesize clickPresentationInteraction=_clickPresentationInteraction - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                                                          //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * expandModuleOnTouchTapRecognizer;                                          //@synthesize expandModuleOnTouchTapRecognizer=_expandModuleOnTouchTapRecognizer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets expandedContentEdgeInsets;                                                             //@synthesize expandedContentEdgeInsets=_expandedContentEdgeInsets - In the implementation block
@property (nonatomic,readonly) CCUIContentModuleContentContainerView * moduleContentView; 
@property (assign,nonatomic,__weak) id<CCUIContentModuleContainerViewControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * materialGroupName;                                                                         //@synthesize materialGroupName=_materialGroupName - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                                    //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) NSArray * topLevelBlockingGestureRecognizers;                                                     //@synthesize topLevelBlockingGestureRecognizers=_topLevelBlockingGestureRecognizers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * childViewControllersForAppearancePropagation; 
-(void)willResignActive;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(void)displayWillTurnOff;
-(UITapGestureRecognizer *)tapRecognizer;
-(double)_continuousCornerRadiusForExpandedState;
-(void)setBackgroundViewController:(UIViewController*<CCUIContentModuleBackgroundViewController>)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2 ;
-(void)setExpandedContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setPresentationController:(CCUIContentModuleContainerPresentationController *)arg1 ;
-(CGRect)_contentBoundsForExpandedState;
-(void)setBackgroundView:(CCUIContentModuleBackgroundView *)arg1 ;
-(void)setClickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 ;
-(void)setContentViewController:(UIViewController*<CCUIContentModuleContentViewController>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGRect)_backgroundFrameForExpandedState;
-(BOOL)ccui_shouldPropagateAppearanceCalls;
-(UIViewController*<CCUIContentModuleBackgroundViewController>)backgroundViewController;
-(id)init;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)setHighlightWrapperView:(UIView *)arg1 ;
-(_UIClickPresentationInteraction *)clickPresentationInteraction;
-(CCUIContentModuleContainerPresentationController *)presentationController;
-(void)setTransitioning:(BOOL)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(BOOL)isExpanded;
-(id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(BOOL)definesContentModuleContainer;
-(id<CCUIContentModule>)contentModule;
-(void)willDismissViewController:(id)arg1 ;
-(CCUIContentModuleContentContainerView *)contentContainerView;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)_addTopLevelGestureRecognizersFromViewAndSubviews:(id)arg1 toBlockingGestureRecognizers:(id)arg2 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(CGRect)_presentationFrameForExpandedState;
-(CGRect)_contentBoundsForTransitionProgress:(double)arg1 ;
-(CCUIContentModuleBackgroundView *)backgroundView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)dismissModulePresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)moduleIdentifier;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 ;
-(void)setExpandModuleOnTouchTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setContentModule:(id<CCUIContentModule>)arg1 ;
-(CGRect)_contentFrameForRestState;
-(void)_didEndTransitionWithContentModuleContainerTransition:(id)arg1 completed:(BOOL)arg2 ;
-(UIView *)maskView;
-(UIEdgeInsets)expandedContentEdgeInsets;
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;
-(void)_closeExpandedModule:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)activationStyleForClickPresentationInteraction:(id)arg1 ;
-(void)_configureMaskViewIfNecessary;
-(void)expandModule;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg1 ;
-(void)transitionToExpandedMode:(BOOL)arg1 ;
-(void)_loadContentViewController:(id)arg1 ;
-(NSArray *)topLevelBlockingGestureRecognizers;
-(void)_findTopLevelGestureRecognizersForView:(id)arg1 installOnView:(id)arg2 ;
-(CGRect)_backgroundFrameForRestState;
-(UIView *)highlightWrapperView;
-(NSString *)materialGroupName;
-(void)willPresentViewController:(id)arg1 ;
-(BOOL)clickPresentationInteractionShouldBegin:(id)arg1 ;
-(void)_handleExpandModuleForTapGestureRecognizer:(id)arg1 ;
-(CGRect)_containerFrameForExpandedState;
-(void)_loadBackgroundViewController:(id)arg1 ;
-(CGRect)_contentFrameForExpandedState;
-(UITapGestureRecognizer *)expandModuleOnTouchTapRecognizer;
-(void)dismissExpandedModuleAnimated:(BOOL)arg1 ;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setMaskView:(UIView *)arg1 ;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isTransitioning;
-(void)setContentModuleProvidesOwnPlatter:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setMaterialGroupName:(NSString *)arg1 ;
-(void)_setDidExpandModulePreference;
-(void)setDelegate:(id<CCUIContentModuleContainerViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)willBecomeActive;
-(id)initWithModuleIdentifier:(id)arg1 contentModule:(id)arg2 presentationContext:(id)arg3 ;
-(UIView *)contentView;
-(double)_continuousCornerRadiusForCompactState;
-(BOOL)_canShowWhileLocked;
-(BOOL)contentModuleProvidesOwnPlatter;
-(void)setModuleIdentifier:(NSString *)arg1 ;
-(BOOL)_isForceTouchAvailable;
-(void)_configureForContentModuleGroupRenderingIfNecessary;
-(id<CCUIContentModuleContainerViewControllerDelegate>)delegate;
-(CCUIContentModuleContentContainerView *)moduleContentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setContentContainerView:(CCUIContentModuleContentContainerView *)arg1 ;
-(void)viewWillLayoutSubviews;
@end

