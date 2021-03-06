/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CEKBadgeViewDelegate.h>
#import <libobjc.A.dylib/CAMInstructionLabelDelegate.h>
#import <libobjc.A.dylib/CAMControlStatusIndicatorDelegate.h>
#import <libobjc.A.dylib/CAMViewfinderTransitionable.h>

@protocol CAMControlVisibilityDelegate;
@class CAMPreviewView, CAMTopBar, CAMBottomBar, CUShutterButton, CAMFlipButton, NSArray, CAMFlashBadge, CAMHDRBadge, CAMFocusLockBadge, CAMLivePhotoBadge, CAMShallowDepthOfFieldBadge, CAMPortraitModeInstructionLabel, CAMPortraitModeDescriptionOverlayView, CAMQRCodeInstructionLabel, CAMFilterNameBadge, CAMShutterIndicatorView, CAMElapsedTimeView, CAMVideoConfigurationStatusIndicator, CAMBurstIndicatorView, CAMTimerIndicatorView, CAMPanoramaView, CAMZoomSlider, CAMZoomControl, CEKLightingControl, CEKLightingNameBadge, CAMDisabledModeOverlayView, CAMPreviewContainerMaskingView, UIView, CAMViewfinderOpenAndCloseTransition, CAMViewfinderFlipTransition, CAMFullscreenViewfinderLayout, NSString;

@interface CAMViewfinderView : UIView <CEKBadgeViewDelegate, CAMInstructionLabelDelegate, CAMControlStatusIndicatorDelegate, CAMViewfinderTransitionable> {

	BOOL _useCreativeControls;
	BOOL _automaticallyAdjustsTopBarOrientation;
	long long _layoutStyle;
	id<CAMControlVisibilityDelegate> _visibilityDelegate;
	CAMPreviewView* _previewView;
	CAMTopBar* _topBar;
	CAMBottomBar* _bottomBar;
	CUShutterButton* _shutterButton;
	CAMFlipButton* _flipButton;
	NSArray* _visibleTopBadges;
	CAMFlashBadge* _flashBadge;
	CAMHDRBadge* _HDRBadge;
	CAMFocusLockBadge* _focusAndExposureLockBadge;
	CAMLivePhotoBadge* _livePhotoBadge;
	CAMShallowDepthOfFieldBadge* _shallowDepthOfFieldBadge;
	CAMPortraitModeInstructionLabel* _portraitModeInstructionLabel;
	CAMPortraitModeDescriptionOverlayView* _portraitModeDescriptionOverlayView;
	CAMQRCodeInstructionLabel* _qrCodeInstructionLabel;
	CAMFilterNameBadge* _filterNameBadge;
	CAMShutterIndicatorView* _shutterIndicatorView;
	CAMElapsedTimeView* _elapsedTimeView;
	CAMVideoConfigurationStatusIndicator* _videoConfigurationStatusIndicator;
	CAMBurstIndicatorView* _burstIndicatorView;
	CAMTimerIndicatorView* _timerIndicatorView;
	CAMPanoramaView* _panoramaView;
	long long _previewViewOrientation;
	CAMZoomSlider* _zoomSlider;
	CAMZoomControl* _zoomControl;
	CEKLightingControl* _lightingControl;
	CEKLightingNameBadge* _lightingNameBadge;
	CAMDisabledModeOverlayView* _disabledModeOverlayView;
	long long _desiredAspectRatio;
	long long _maskingAspectRatio;
	long long _orientation;
	CAMPreviewContainerMaskingView* __previewContainerMaskingView;
	UIView* __previewContainerView;
	CAMViewfinderOpenAndCloseTransition* __openAndCloseTransition;
	CAMViewfinderFlipTransition* __flipTransition;
	UIView* __topBarExtensionView;
	UIView* __bottomBarExtensionView;
	CAMFullscreenViewfinderLayout* __modernLayout;

}

@property (nonatomic,readonly) CAMPreviewContainerMaskingView * _previewContainerMaskingView;                                               //@synthesize _previewContainerMaskingView=__previewContainerMaskingView - In the implementation block
@property (nonatomic,readonly) UIView * _previewContainerView;                                                                              //@synthesize _previewContainerView=__previewContainerView - In the implementation block
@property (setter=_setOpenAndCloseTransition:,nonatomic,retain) CAMViewfinderOpenAndCloseTransition * _openAndCloseTransition;              //@synthesize _openAndCloseTransition=__openAndCloseTransition - In the implementation block
@property (setter=_setFlipTransition:,nonatomic,retain) CAMViewfinderFlipTransition * _flipTransition;                                      //@synthesize _flipTransition=__flipTransition - In the implementation block
@property (setter=_setTopBarExtensionView:,nonatomic,retain) UIView * _topBarExtensionView;                                                 //@synthesize _topBarExtensionView=__topBarExtensionView - In the implementation block
@property (setter=_setBottomBarExtensionView:,nonatomic,retain) UIView * _bottomBarExtensionView;                                           //@synthesize _bottomBarExtensionView=__bottomBarExtensionView - In the implementation block
@property (setter=_setModernLayout:,nonatomic,retain) CAMFullscreenViewfinderLayout * _modernLayout;                                        //@synthesize _modernLayout=__modernLayout - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                                                         //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) BOOL useCreativeControls;                                                                                      //@synthesize useCreativeControls=_useCreativeControls - In the implementation block
@property (assign,nonatomic,__weak) id<CAMControlVisibilityDelegate> visibilityDelegate;                                                    //@synthesize visibilityDelegate=_visibilityDelegate - In the implementation block
@property (nonatomic,retain) CAMPreviewView * previewView;                                                                                  //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) CAMTopBar * topBar;                                                                                            //@synthesize topBar=_topBar - In the implementation block
@property (nonatomic,retain) CAMBottomBar * bottomBar;                                                                                      //@synthesize bottomBar=_bottomBar - In the implementation block
@property (nonatomic,retain) CUShutterButton * shutterButton;                                                                               //@synthesize shutterButton=_shutterButton - In the implementation block
@property (nonatomic,retain) CAMFlipButton * flipButton;                                                                                    //@synthesize flipButton=_flipButton - In the implementation block
@property (nonatomic,retain) NSArray * visibleTopBadges;                                                                                    //@synthesize visibleTopBadges=_visibleTopBadges - In the implementation block
@property (nonatomic,retain) CAMFlashBadge * flashBadge;                                                                                    //@synthesize flashBadge=_flashBadge - In the implementation block
@property (nonatomic,retain) CAMHDRBadge * HDRBadge;                                                                                        //@synthesize HDRBadge=_HDRBadge - In the implementation block
@property (nonatomic,retain) CAMFocusLockBadge * focusAndExposureLockBadge;                                                                 //@synthesize focusAndExposureLockBadge=_focusAndExposureLockBadge - In the implementation block
@property (nonatomic,retain) CAMLivePhotoBadge * livePhotoBadge;                                                                            //@synthesize livePhotoBadge=_livePhotoBadge - In the implementation block
@property (nonatomic,retain) CAMShallowDepthOfFieldBadge * shallowDepthOfFieldBadge;                                                        //@synthesize shallowDepthOfFieldBadge=_shallowDepthOfFieldBadge - In the implementation block
@property (nonatomic,retain) CAMPortraitModeInstructionLabel * portraitModeInstructionLabel;                                                //@synthesize portraitModeInstructionLabel=_portraitModeInstructionLabel - In the implementation block
@property (nonatomic,retain) CAMPortraitModeDescriptionOverlayView * portraitModeDescriptionOverlayView;                                    //@synthesize portraitModeDescriptionOverlayView=_portraitModeDescriptionOverlayView - In the implementation block
@property (nonatomic,retain) CAMQRCodeInstructionLabel * qrCodeInstructionLabel;                                                            //@synthesize qrCodeInstructionLabel=_qrCodeInstructionLabel - In the implementation block
@property (nonatomic,retain) CAMFilterNameBadge * filterNameBadge;                                                                          //@synthesize filterNameBadge=_filterNameBadge - In the implementation block
@property (nonatomic,retain) CAMShutterIndicatorView * shutterIndicatorView;                                                                //@synthesize shutterIndicatorView=_shutterIndicatorView - In the implementation block
@property (nonatomic,retain) CAMElapsedTimeView * elapsedTimeView;                                                                          //@synthesize elapsedTimeView=_elapsedTimeView - In the implementation block
@property (nonatomic,retain) CAMVideoConfigurationStatusIndicator * videoConfigurationStatusIndicator;                                      //@synthesize videoConfigurationStatusIndicator=_videoConfigurationStatusIndicator - In the implementation block
@property (nonatomic,retain) CAMBurstIndicatorView * burstIndicatorView;                                                                    //@synthesize burstIndicatorView=_burstIndicatorView - In the implementation block
@property (nonatomic,retain) CAMTimerIndicatorView * timerIndicatorView;                                                                    //@synthesize timerIndicatorView=_timerIndicatorView - In the implementation block
@property (nonatomic,retain) CAMPanoramaView * panoramaView;                                                                                //@synthesize panoramaView=_panoramaView - In the implementation block
@property (assign,nonatomic) long long previewViewOrientation;                                                                              //@synthesize previewViewOrientation=_previewViewOrientation - In the implementation block
@property (nonatomic,retain) CAMZoomSlider * zoomSlider;                                                                                    //@synthesize zoomSlider=_zoomSlider - In the implementation block
@property (nonatomic,retain) CAMZoomControl * zoomControl;                                                                                  //@synthesize zoomControl=_zoomControl - In the implementation block
@property (nonatomic,retain) CEKLightingControl * lightingControl;                                                                          //@synthesize lightingControl=_lightingControl - In the implementation block
@property (nonatomic,retain) CEKLightingNameBadge * lightingNameBadge;                                                                      //@synthesize lightingNameBadge=_lightingNameBadge - In the implementation block
@property (nonatomic,retain) CAMDisabledModeOverlayView * disabledModeOverlayView;                                                          //@synthesize disabledModeOverlayView=_disabledModeOverlayView - In the implementation block
@property (assign,nonatomic) long long desiredAspectRatio;                                                                                  //@synthesize desiredAspectRatio=_desiredAspectRatio - In the implementation block
@property (assign,nonatomic) long long maskingAspectRatio;                                                                                  //@synthesize maskingAspectRatio=_maskingAspectRatio - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                                         //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL automaticallyAdjustsTopBarOrientation;                                                                    //@synthesize automaticallyAdjustsTopBarOrientation=_automaticallyAdjustsTopBarOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(void)setElapsedTimeView:(CAMElapsedTimeView *)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(CAMElapsedTimeView *)elapsedTimeView;
-(void)controlStatusIndicatorDidChangeIntrinsicContentSize:(id)arg1 animated:(BOOL)arg2 ;
-(void)_layoutBurstIndicatorForLayoutStyle:(long long)arg1 ;
-(CAMFlipButton *)flipButton;
-(CAMVideoConfigurationStatusIndicator *)videoConfigurationStatusIndicator;
-(CAMTopBar *)topBar;
-(void)_setTopBarExtensionView:(id)arg1 ;
-(void)_layoutQRCodeInstructionLabelForLayoutStyle:(long long)arg1 ;
-(void)_layoutElapsedTimeViewForLayoutStyle:(long long)arg1 ;
-(CGRect)_previewFrameForAspectRatio:(long long)arg1 topBarFrame:(CGRect)arg2 bottomBarFrame:(CGRect)arg3 shouldShiftPreviewForUtilityBar:(BOOL)arg4 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(CAMQRCodeInstructionLabel *)qrCodeInstructionLabel;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)_layoutBadgeTrayWithBadges:(id)arg1 layoutStyle:(long long)arg2 ;
-(void)_createPlaceholderSnapshotAndPerformSingleSidedFadeForView:(id)arg1 fadeOutDuration:(double)arg2 fadeOutDelay:(double)arg3 ;
-(void)setPreviewView:(CAMPreviewView *)arg1 ;
-(void)_layoutTopBadgesForLayoutStyle:(long long)arg1 appearingBadges:(id)arg2 disappearingBadges:(id)arg3 animated:(BOOL)arg4 ;
-(void)_layoutTimerIndicatorViewForLayoutStyle:(long long)arg1 ;
-(void)_layoutPortraitModeInstructionLabelForLayoutStyle:(long long)arg1 ;
-(void)setAutomaticallyAdjustsTopBarOrientation:(BOOL)arg1 ;
-(long long)desiredAspectRatio;
-(void)_layoutBadgeTrayForLayoutStyle:(long long)arg1 appearingBadges:(id)arg2 disappearingBadges:(id)arg3 animated:(BOOL)arg4 ;
-(long long)layoutStyle;
-(UIView *)_topBarExtensionView;
-(void)setZoomSlider:(CAMZoomSlider *)arg1 ;
-(void)setLivePhotoBadge:(CAMLivePhotoBadge *)arg1 ;
-(void)setVisibleTopBadges:(id)arg1 animated:(BOOL)arg2 ;
-(CGSize)_bottomBarSizeForLayoutStyle:(long long)arg1 withProposedSize:(CGSize)arg2 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 forAspectRatio:(long long)arg2 ;
-(UIEdgeInsets)_layoutMarginInsetsForLayoutStyle:(long long)arg1 ;
-(void)_cameraTopBarForLayoutForLayoutStyle:(long long)arg1 shouldAdjustTopBarOrientation:(BOOL)arg2 bounds:(CGRect*)arg3 center:(CGPoint*)arg4 transform:(CGAffineTransform*)arg5 ;
-(CAMTimerIndicatorView *)timerIndicatorView;
-(CAMShutterIndicatorView *)shutterIndicatorView;
-(void)_layoutShutterButtonForLayoutStyle:(long long)arg1 ;
-(CAMViewfinderFlipTransition *)_flipTransition;
-(void)_layoutInstructionLabelOnTop:(id)arg1 forLayoutStyle:(long long)arg2 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)setPortraitModeInstructionLabel:(CAMPortraitModeInstructionLabel *)arg1 ;
-(void)_setFlipTransition:(id)arg1 ;
-(void)setMaskingAspectRatio:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setDesiredAspectRatio:(long long)arg1 ;
-(CGRect)_frameForBadgeTrayForLayoutStyle:(long long)arg1 orientation:(long long)arg2 ;
-(void)_layoutFlipButtonForLayoutStyle:(long long)arg1 ;
-(CAMLivePhotoBadge *)livePhotoBadge;
-(void)_updateModernLayout;
-(void)_layoutSnapshotsOfPreviewView;
-(double)_utilityBarExtensionDistanceForLayoutStyle:(long long)arg1 ;
-(CUShutterButton *)shutterButton;
-(void)setLightingNameBadge:(CEKLightingNameBadge *)arg1 ;
-(double)_interpolatedTopBarHeight;
-(void)setTopBar:(CAMTopBar *)arg1 ;
-(void)setVisibilityDelegate:(id<CAMControlVisibilityDelegate>)arg1 ;
-(CAMBurstIndicatorView *)burstIndicatorView;
-(CAMPortraitModeInstructionLabel *)portraitModeInstructionLabel;
-(void)setMaskingAspectRatio:(long long)arg1 ;
-(CAMPanoramaView *)panoramaView;
-(void)setDisabledModeOverlayView:(CAMDisabledModeOverlayView *)arg1 ;
-(void)_layoutTopBadgesForLayoutStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setFlipButton:(CAMFlipButton *)arg1 ;
-(CEKLightingControl *)lightingControl;
-(CAMShallowDepthOfFieldBadge *)shallowDepthOfFieldBadge;
-(void)setHDRBadge:(CAMHDRBadge *)arg1 ;
-(CAMHDRBadge *)HDRBadge;
-(void)setBurstIndicatorView:(CAMBurstIndicatorView *)arg1 ;
-(void)instructionLabelDidChangeIntrinsicContentSize:(id)arg1 ;
-(CAMPreviewContainerMaskingView *)_previewContainerMaskingView;
-(void)setOrientation:(long long)arg1 ;
-(void)setPreviewViewOrientation:(long long)arg1 ;
-(BOOL)useCreativeControls;
-(double)_badgeTrayHeightForLayoutStyle:(long long)arg1 ;
-(void)prepareForAutorotation;
-(id)_viewToLayoutBadgesBelowForLayoutStyle:(long long)arg1 orientation:(long long)arg2 ;
-(void)_layoutLightingControlForLayoutStyle:(long long)arg1 ;
-(CGSize)_topBarSizeForLayoutStyle:(long long)arg1 ;
-(void)_commonCAMViewfinderViewInitializationWithLayoutStyle:(long long)arg1 ;
-(BOOL)_shouldLayoutPortraitInstructionsAtTop;
-(CAMFullscreenViewfinderLayout *)_modernLayout;
-(CAMFilterNameBadge *)filterNameBadge;
-(BOOL)_wantsFullScreenPreviewRegardlessOfLayoutForLayoutStyle:(long long)arg1 ;
-(void)_topBarForLayoutForLayoutStyle:(long long)arg1 shouldAdjustTopBarOrientation:(BOOL)arg2 bounds:(CGRect*)arg3 center:(CGPoint*)arg4 transform:(CGAffineTransform*)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setZoomControl:(CAMZoomControl *)arg1 ;
-(void)_setBottomBarExtensionView:(id)arg1 ;
-(long long)orientation;
-(double)_interpolatedBottomBarWidthWithProposedWidth:(double)arg1 ;
-(void)_layoutBarExtensionViews;
-(void)_layoutZoomSliderForLayoutStyle:(long long)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)badgeViewDidChangeIntrinsicContentSize:(id)arg1 ;
-(double)_interpolatedBottomBarHeightWithProposedHeight:(double)arg1 ;
-(UIOffset)_previewOffset;
-(void)layoutSubviews;
-(CAMViewfinderOpenAndCloseTransition *)_openAndCloseTransition;
-(CAMZoomControl *)zoomControl;
-(void)_createPlaceholderSnapshotAndPerformDoubleSidedFadeForView:(id)arg1 fadeOutDuration:(double)arg2 fadeOutDelay:(double)arg3 fadeInDuration:(double)arg4 fadeInDelay:(double)arg5 ;
-(void)_layoutVideoConfigurationStatusIndicatorForLayoutStyle:(long long)arg1 ;
-(void)_layoutPanoramaViewForLayoutStyle:(long long)arg1 ;
-(void)setShallowDepthOfFieldBadge:(CAMShallowDepthOfFieldBadge *)arg1 ;
-(void)_layoutShutterIndicatorForLayoutStyle:(long long)arg1 ;
-(void)setFlashBadge:(CAMFlashBadge *)arg1 ;
-(void)setVideoConfigurationStatusIndicator:(CAMVideoConfigurationStatusIndicator *)arg1 ;
-(BOOL)_wantsInterfaceOrientedPreviewForLayoutStyle:(long long)arg1 ;
-(CAMDisabledModeOverlayView *)disabledModeOverlayView;
-(void)setPortraitModeDescriptionOverlayView:(CAMPortraitModeDescriptionOverlayView *)arg1 ;
-(void)_previewLayoutForAspectRatio:(long long)arg1 shouldShiftPreviewForUtilityBar:(BOOL)arg2 outPreviewBounds:(CGRect*)arg3 outPreviewCenter:(CGPoint*)arg4 outFourThreeTopBarFrame:(CGRect*)arg5 outBottomBarFrame:(CGRect*)arg6 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)_interpolatedVerticalOffsetForShutterIndicator;
-(CAMPortraitModeDescriptionOverlayView *)portraitModeDescriptionOverlayView;
-(void)setBottomBar:(CAMBottomBar *)arg1 ;
-(void)prepareForResumingUsingCrossfade;
-(CAMZoomSlider *)zoomSlider;
-(void)_setModernLayout:(id)arg1 ;
-(long long)maskingAspectRatio;
-(double)_multiplierForAspectRatio:(long long)arg1 ;
-(long long)previewViewOrientation;
-(void)setPanoramaView:(CAMPanoramaView *)arg1 ;
-(void)setUseCreativeControls:(BOOL)arg1 ;
-(void)_layoutBottomBadgesForLayoutStyle:(long long)arg1 ;
-(void)_layoutBottomCenteredView:(id)arg1 aboveView:(id)arg2 aboveViewSpacing:(double)arg3 forLayoutStyle:(long long)arg4 ;
-(void)setShutterButton:(CUShutterButton *)arg1 ;
-(void)_setOpenAndCloseTransition:(id)arg1 ;
-(void)setTimerIndicatorView:(CAMTimerIndicatorView *)arg1 ;
-(CAMBottomBar *)bottomBar;
-(void)removeInflightBlurAnimations;
-(BOOL)_isAdjustingTopBarOrientationForLayoutStyle:(long long)arg1 ;
-(void)_cameraAppPreviewLayoutForAspectRatio:(long long)arg1 shouldShiftPreviewForUtilityBar:(BOOL)arg2 outPreviewBounds:(CGRect*)arg3 outPreviewCenter:(CGPoint*)arg4 outFourThreeTopBarFrame:(CGRect*)arg5 outBottomBarFrame:(CGRect*)arg6 ;
-(void)setVisibleTopBadges:(NSArray *)arg1 ;
-(void)_layoutTopBarForLayoutStyle:(long long)arg1 ;
-(NSArray *)visibleTopBadges;
-(void)_layoutBadgeForTinyLayoutStyle:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateBarExtensionViewsIfNecessary;
-(CAMPreviewView *)previewView;
-(void)_layoutDescriptionOverlayView:(id)arg1 ;
-(UIView *)_bottomBarExtensionView;
-(void)_layoutZoomControlForLayoutStyle:(long long)arg1 ;
-(UIView *)_previewContainerView;
-(id<CAMControlVisibilityDelegate>)visibilityDelegate;
-(CGRect)_cameraPreviewFrameForAspectRatio:(long long)arg1 topBarFrame:(CGRect)arg2 bottomBarFrame:(CGRect)arg3 shouldShiftPreviewForUtilityBar:(BOOL)arg4 ;
-(void)setShutterIndicatorView:(CAMShutterIndicatorView *)arg1 ;
-(CEKLightingNameBadge *)lightingNameBadge;
-(void)setFocusAndExposureLockBadge:(CAMFocusLockBadge *)arg1 ;
-(CAMFocusLockBadge *)focusAndExposureLockBadge;
-(CGSize)_previewSizeForAspectRatio:(long long)arg1 ;
-(void)_enforceBadgeSubviewOrderingWithAppearingBadges:(id)arg1 ;
-(CAMFlashBadge *)flashBadge;
-(void)setLightingControl:(CEKLightingControl *)arg1 ;
-(void)setQrCodeInstructionLabel:(CAMQRCodeInstructionLabel *)arg1 ;
-(BOOL)automaticallyAdjustsTopBarOrientation;
-(void)setFilterNameBadge:(CAMFilterNameBadge *)arg1 ;
@end

