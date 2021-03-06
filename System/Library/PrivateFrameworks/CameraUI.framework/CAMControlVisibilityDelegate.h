/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMControlVisibilityDelegate <NSObject>
@property (nonatomic,readonly) BOOL shouldHideTopBar; 
@property (nonatomic,readonly) BOOL shouldHideFlashButton; 
@property (nonatomic,readonly) BOOL shouldHideHDRButton; 
@property (nonatomic,readonly) BOOL shouldHideTimerButton; 
@property (nonatomic,readonly) BOOL shouldHideFlipButton; 
@property (nonatomic,readonly) BOOL shouldHideElapsedTimeView; 
@property (nonatomic,readonly) BOOL shouldHideLivePhotoButton; 
@property (nonatomic,readonly) BOOL shouldHidePortraitModeInstructionLabel; 
@property (nonatomic,readonly) BOOL shouldHideQRCodeInstructionLabel; 
@property (nonatomic,readonly) BOOL shouldHideFilterNameBadge; 
@property (nonatomic,readonly) BOOL shouldHideLightingControl; 
@property (nonatomic,readonly) BOOL shouldLayoutLightingNameBadgeAtBottom; 
@property (nonatomic,readonly) BOOL shouldShiftPreviewForUtilityBar; 
@required
-(BOOL)shouldHideHDRButton;
-(BOOL)shouldHideFlashButton;
-(BOOL)shouldLayoutLightingNameBadgeAtBottom;
-(BOOL)shouldHideQRCodeInstructionLabel;
-(BOOL)shouldHideFlipButton;
-(BOOL)shouldHideLivePhotoButton;
-(BOOL)shouldHideFilterNameBadge;
-(BOOL)shouldShiftPreviewForUtilityBar;
-(BOOL)shouldHideTimerButton;
-(BOOL)shouldHideElapsedTimeView;
-(BOOL)shouldHideLightingNameBadgeForOrientation:(long long)arg1;
-(BOOL)shouldHideTopBar;
-(BOOL)shouldHideLightingControl;
-(BOOL)shouldHidePortraitModeInstructionLabel;

@end

