/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UIClickPresentationTransition.h>

@protocol UIViewControllerTransitioningDelegate;
@class UITargetedPreview, UIViewPropertyAnimator, _PLViewControllerOneToOneTransitionContext, PLViewControllerAnimator, MTMaterialView, NSString;

@interface PLClickPresentationTransition : NSObject <_UIClickPresentationTransition> {

	id<UIViewControllerTransitioningDelegate> _transitionDelegate;
	_PLViewControllerOneToOneTransitionContext* _transitionContext;
	PLViewControllerAnimator* _animator;
	/*^block*/id _completion;
	BOOL _propagatesPresentingViewTransform;
	MTMaterialView* _backgroundView;

}

@property (assign,nonatomic,__weak) MTMaterialView * backgroundView;                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) BOOL propagatesPresentingViewTransform;                 //@synthesize propagatesPresentingViewTransform=_propagatesPresentingViewTransform - In the implementation block
@property (nonatomic,copy) UITargetedPreview * sourcePreview; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_animator;
-(void)setBackgroundView:(MTMaterialView *)arg1 ;
-(UIViewPropertyAnimator *)customAnimator;
-(void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(MTMaterialView *)backgroundView;
-(void)transitionDidEnd:(BOOL)arg1 ;
-(id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setPropagatesPresentingViewTransform:(BOOL)arg1 ;
-(void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)updateBackgroundViewForTransition;
-(id)_newAnimator;
-(BOOL)propagatesPresentingViewTransform;
@end

