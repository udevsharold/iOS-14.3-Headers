/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, BSUICAPackageView, NSSet, LAUIPearlGlyphView, SBUIFaceIDCoachingView, SBUIFaceIDCameraGlyphView, _UILegibilitySettings, UIColor;

@interface SBUIProudLockIconView : UIView {

	long long _state;
	UIView* _iconContainerView;
	BSUICAPackageView* _lockView;
	NSSet* _imageLayers;
	NSSet* _shadowImageLayers;
	NSSet* _shadowFilterLayers;
	LAUIPearlGlyphView* _lazy_pearlGlyphView;
	id _pearlGlyphViewSharedResources;
	SBUIFaceIDCoachingView* _lazy_faceIDCoachingView;
	BOOL _performingIncomingLayout;
	SBUIFaceIDCameraGlyphView* _cameraCoveredView;
	_UILegibilitySettings* _legibilitySettings;
	double _durationOnCameraCoveredGlyphBeforeCoaching;
	UIColor* _contentColor;

}

@property (nonatomic,retain) UIColor * contentColor;                                         //@synthesize contentColor=_contentColor - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                     //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) double durationOnCameraCoveredGlyphBeforeCoaching;              //@synthesize durationOnCameraCoveredGlyphBeforeCoaching=_durationOnCameraCoveredGlyphBeforeCoaching - In the implementation block
@property (assign,nonatomic) long long state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SBUIFaceIDCameraGlyphView * cameraCoveredView;                //@synthesize cameraCoveredView=_cameraCoveredView - In the implementation block
-(void)setState:(long long)arg1 animated:(BOOL)arg2 ;
-(UIColor *)contentColor;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(long long)state;
-(id)fileNameForCurrentDevice;
-(void)_forEachLayerInHierarchy:(id)arg1 perform:(/*^block*/id)arg2 ;
-(void)_transitionToState:(long long)arg1 animated:(BOOL)arg2 options:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 options:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_configureShadowFromLegibilitySettings:(id)arg1 ;
-(id)_faceIDCoachingView;
-(CGSize)_smallLockSize;
-(double)_lockToCoachingSpacing;
-(void)_resetPearlGlyphView;
-(void)_resetfaceIDCoachingView;
-(void)_resetCameraGlyphView;
-(id)_activeViewsForState:(long long)arg1 ;
-(id)_pearlGlyphView;
-(double)_alphaForActiveViewForState:(long long)arg1 ;
-(CGAffineTransform)_incomingTransformForActiveView:(id)arg1 forState:(long long)arg2 ;
-(id)_alphaAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 forIncomingViews:(BOOL)arg5 ;
-(id)_transformAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 forIncomingViews:(BOOL)arg5 ;
-(CGAffineTransform)_outgoingTransformForView:(id)arg1 fromState:(long long)arg2 ;
-(CGAffineTransform)_transformForActiveView:(id)arg1 forState:(long long)arg2 ;
-(id)_layoutAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 ;
-(CGAffineTransform)_zoomedTransform;
-(id)_defaultAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 ;
-(double)_scaleAmountForZoom;
-(CGSize)_smallLockSizeForTextSize:(id)arg1 ;
-(double)durationOnCameraCoveredGlyphBeforeCoaching;
-(void)setDurationOnCameraCoveredGlyphBeforeCoaching:(double)arg1 ;
-(SBUIFaceIDCameraGlyphView *)cameraCoveredView;
-(void)layoutSubviews;
-(void)setContentColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setState:(long long)arg1 ;
@end

