/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIViewPropertyAnimator, CAContext, CALayer, SBRecordingIndicatorView, UIColor;

@interface SBRecordingIndicatorViewController : UIViewController {

	UIViewPropertyAnimator* _animatorScaleToOverscale;
	UIViewPropertyAnimator* _animatorScaleToNormal;
	UIViewPropertyAnimator* _animatorScaleToRest;
	UIViewPropertyAnimator* _animatorScaleToZero;
	UIViewPropertyAnimator* _animatorFastFade;
	double _size;
	double _sideOffset;
	double _topOffset;
	CGPoint _center;
	CAContext* _context;
	CALayer* _rootLayer;
	CALayer* _contentLayer;
	BOOL _isStatusBarPortal;
	SBRecordingIndicatorView* _indicatorView;
	UIColor* _indicatorColor;
	unsigned long long _indicatorAnimationState;
	long long _activeInterfaceOrientation;

}

@property (assign,nonatomic) BOOL isStatusBarPortal;                                                              //@synthesize isStatusBarPortal=_isStatusBarPortal - In the implementation block
@property (getter=indicatorView,nonatomic,readonly) SBRecordingIndicatorView * indicatorView;                     //@synthesize indicatorView=_indicatorView - In the implementation block
@property (getter=indicatorColor,nonatomic,retain) UIColor * indicatorColor;                                      //@synthesize indicatorColor=_indicatorColor - In the implementation block
@property (nonatomic,readonly) unsigned long long indicatorAnimationState;                                        //@synthesize indicatorAnimationState=_indicatorAnimationState - In the implementation block
@property (assign,getter=activeInterfaceOrientation,nonatomic) long long activeInterfaceOrientation;              //@synthesize activeInterfaceOrientation=_activeInterfaceOrientation - In the implementation block
-(long long)activeInterfaceOrientation;
-(SBRecordingIndicatorView *)indicatorView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_stopAllAnimations;
-(BOOL)_canShowWhileLocked;
-(void)setActiveInterfaceOrientation:(long long)arg1 ;
-(id)initForPortalView:(BOOL)arg1 ;
-(void)updateIndicatorVisibility:(BOOL)arg1 ;
-(void)updateIndicatorVisibility:(BOOL)arg1 skipFadeOutAnimation:(BOOL)arg2 ;
-(unsigned long long)indicatorAnimationState;
-(void)updateIndicatorVisibilityWithFastFadeAnimation:(BOOL)arg1 ;
-(void)setIndicatorColor:(UIColor *)arg1 ;
-(void)updateIndicatorShape:(unsigned long long)arg1 ;
-(void)_configureRootLayer;
-(void)calculateInitialIndicatorPositionAndSize;
-(void)_updateToOrientation:(long long)arg1 ;
-(BOOL)isStatusBarPortal;
-(void)_updateIndicatorLayerWithBounds:(CGRect)arg1 andCenter:(CGPoint)arg2 ;
-(void)_updateIndicatorLayerSize:(double)arg1 opacity:(double)arg2 ;
-(void)_updateIndicatorViewSize:(double)arg1 alpha:(double)arg2 ;
-(UIColor *)indicatorColor;
-(void)setIsStatusBarPortal:(BOOL)arg1 ;
@end

