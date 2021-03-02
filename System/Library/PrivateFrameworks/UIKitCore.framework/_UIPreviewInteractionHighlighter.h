/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIInteractionEffect.h>

@protocol _UIInteractiveHighlighting, UIInteraction;
@class UIView, UIControl, _UIInteractiveHighlightEffect, NSArray, NSUUID, NSString;

@interface _UIPreviewInteractionHighlighter : NSObject <UIInteractionEffect> {

	UIView* _view;
	id<_UIInteractiveHighlighting> _interactiveHighlightView;
	UIControl* _compatibilityHighlightView;
	_UIInteractiveHighlightEffect* _interactiveHighlightEffect;
	NSArray* _accessoryHighlightEffects;
	_UIInteractiveHighlightEffect* _presentationControllerHighlightEffect;
	id<UIInteraction> _interaction;
	BOOL _active;
	BOOL _animatesContentEffects;
	NSUUID* _contentAnimationIdentifier;
	BOOL _animatesBackgroundEffects;
	long long _preferredAnimationStyle;
	double _preferredMinimumScale;
	double _preferredMaximumScale;
	BOOL _shouldApplyEffectsOnProxyView;
	BOOL _shouldApplyContentEffects;
	BOOL _shouldApplyBackgroundEffects;
	BOOL _shouldEndWithCancelAnimation;
	BOOL _shouldTransferViewOwnership;
	BOOL _cancelsInteractionWhenScrolling;
	/*^block*/id _completionBlock;
	unsigned long long _clickEffectPhase;
	/*^block*/id _privateCompletionBlock;
	UIView* _customContainerView;
	UIView* _customBackgroundEffectView;
	/*^block*/id _backgroundEffectApplyBlock;

}

@property (assign,nonatomic) BOOL shouldApplyEffectsOnProxyView;                                        //@synthesize shouldApplyEffectsOnProxyView=_shouldApplyEffectsOnProxyView - In the implementation block
@property (assign,nonatomic) BOOL shouldEndWithCancelAnimation;                                         //@synthesize shouldEndWithCancelAnimation=_shouldEndWithCancelAnimation - In the implementation block
@property (assign,nonatomic) unsigned long long clickEffectPhase;                                       //@synthesize clickEffectPhase=_clickEffectPhase - In the implementation block
@property (nonatomic,readonly) _UIInteractiveHighlightEffect * interactiveHighlightEffect; 
@property (nonatomic,copy) id privateCompletionBlock;                                                   //@synthesize privateCompletionBlock=_privateCompletionBlock - In the implementation block
@property (assign,nonatomic,__weak) UIView * customContainerView;                                       //@synthesize customContainerView=_customContainerView - In the implementation block
@property (nonatomic,retain) UIView * customBackgroundEffectView;                                       //@synthesize customBackgroundEffectView=_customBackgroundEffectView - In the implementation block
@property (assign,nonatomic) BOOL shouldTransferViewOwnership;                                          //@synthesize shouldTransferViewOwnership=_shouldTransferViewOwnership - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyContentEffects;                                            //@synthesize shouldApplyContentEffects=_shouldApplyContentEffects - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyBackgroundEffects;                                         //@synthesize shouldApplyBackgroundEffects=_shouldApplyBackgroundEffects - In the implementation block
@property (assign,nonatomic) BOOL cancelsInteractionWhenScrolling;                                      //@synthesize cancelsInteractionWhenScrolling=_cancelsInteractionWhenScrolling - In the implementation block
@property (nonatomic,copy) id backgroundEffectApplyBlock;                                               //@synthesize backgroundEffectApplyBlock=_backgroundEffectApplyBlock - In the implementation block
@property (nonatomic,__weak,readonly) UIView * view;                                                    //@synthesize view=_view - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                          //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithView:(id)arg1 ;
-(void)setClickEffectPhase:(unsigned long long)arg1 ;
-(unsigned long long)clickEffectPhase;
-(UIView *)view;
-(void)_prepareForInteraction:(id)arg1 ;
-(void)_updateFromInteraction:(id)arg1 fractionComplete:(double)arg2 ended:(BOOL)arg3 ;
-(BOOL)shouldApplyEffectsOnProxyView;
-(BOOL)shouldApplyContentEffects;
-(void)_prepareAccessoryViewsForScrollView:(id)arg1 environment:(id)arg2 ;
-(void)_prepareContentEffectsForInteraction:(id)arg1 ;
-(BOOL)shouldEndWithCancelAnimation;
-(void)_setHighlighted:(BOOL)arg1 forViewIfNeeded:(id)arg2 ;
-(void)_finalizeAfterInteractionIfNeeded;
-(BOOL)shouldApplyBackgroundEffects;
-(void)_finalizeAfterInteraction;
-(id)completionBlock;
-(void)_applyHighlightEffectsToViewControllerDuringCancellation:(id)arg1 ;
-(void)setShouldApplyEffectsOnProxyView:(BOOL)arg1 ;
-(void)setShouldApplyContentEffects:(BOOL)arg1 ;
-(void)setShouldApplyBackgroundEffects:(BOOL)arg1 ;
-(void)setShouldEndWithCancelAnimation:(BOOL)arg1 ;
-(id)privateCompletionBlock;
-(void)setPrivateCompletionBlock:(id)arg1 ;
-(BOOL)shouldTransferViewOwnership;
-(void)setShouldTransferViewOwnership:(BOOL)arg1 ;
-(BOOL)cancelsInteractionWhenScrolling;
-(void)setCancelsInteractionWhenScrolling:(BOOL)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(UIView *)customContainerView;
-(void)setCustomContainerView:(UIView *)arg1 ;
-(UIView *)customBackgroundEffectView;
-(void)setCustomBackgroundEffectView:(UIView *)arg1 ;
-(id)backgroundEffectApplyBlock;
-(void)setBackgroundEffectApplyBlock:(id)arg1 ;
-(void)_animateForDelayedViewControllerPresentation;
-(_UIInteractiveHighlightEffect *)interactiveHighlightEffect;
-(void)_delayedViewControllerPresentationDidCancel;
-(void)_animateAlongsideViewControllerPresentationDismiss;
-(void)_viewControllerPresentationDidEnd;
-(void)_prepareForViewControllerPresentation:(id)arg1 ;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
@end
