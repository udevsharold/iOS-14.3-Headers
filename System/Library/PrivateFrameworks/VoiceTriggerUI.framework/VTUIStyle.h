/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
@class NSArray, NSString, UIFontMetrics, MGWrapper;

@interface VTUIStyle : NSObject {

	NSArray* _deviceStringSuffixes;
	NSString* _deviceClass;
	BOOL _isIpad;
	BOOL _isLargeIpad;
	BOOL _needMoreLineSpacing;
	BOOL _supportsSideButtonActivation;
	UIFontMetrics* _bodyMetricsForScaling;
	MGWrapper* _mgWrapper;
	BOOL _isBuddyOrFollowUp;
	BOOL _isHeySiriAlwaysOn;
	BOOL _bluetoothDeviceSupportsHeySiri;
	BOOL _supportSideButtonActivation;
	BOOL _isFloatingWithReducedWidth;
	long long _enrollmentMode;
	long long _audioProductID;

}

@property (assign,nonatomic) long long enrollmentMode;                         //@synthesize enrollmentMode=_enrollmentMode - In the implementation block
@property (assign,nonatomic) BOOL isBuddyOrFollowUp;                           //@synthesize isBuddyOrFollowUp=_isBuddyOrFollowUp - In the implementation block
@property (assign,nonatomic) BOOL isHeySiriAlwaysOn;                           //@synthesize isHeySiriAlwaysOn=_isHeySiriAlwaysOn - In the implementation block
@property (assign,nonatomic) BOOL bluetoothDeviceSupportsHeySiri;              //@synthesize bluetoothDeviceSupportsHeySiri=_bluetoothDeviceSupportsHeySiri - In the implementation block
@property (assign,nonatomic) BOOL supportSideButtonActivation;                 //@synthesize supportSideButtonActivation=_supportSideButtonActivation - In the implementation block
@property (assign,nonatomic) BOOL isFloatingWithReducedWidth;                  //@synthesize isFloatingWithReducedWidth=_isFloatingWithReducedWidth - In the implementation block
@property (assign,nonatomic) long long audioProductID;                         //@synthesize audioProductID=_audioProductID - In the implementation block
+(id)sharedStyle;
-(id)subtitleFont;
-(id)init;
-(double)horizontalPadding;
-(void)dealloc;
-(id)buttonTextColor;
-(BOOL)isHeySiriAlwaysOn;
-(id)dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 ;
-(id)footerFont;
-(double)primaryButtonHeight;
-(void)setIsBuddyOrFollowUp:(BOOL)arg1 ;
-(void)setEnrollmentMode:(long long)arg1 ;
-(BOOL)isBuddyOrFollowUp;
-(long long)enrollmentMode;
-(void)setIsFloatingWithReducedWidth:(BOOL)arg1 ;
-(id)VTUIDeviceSpecificString:(id)arg1 ;
-(id)educationViewTitleText;
-(id)educationViewDetailText;
-(BOOL)shouldPresentEducationView;
-(double)continueButtonOffset;
-(double)footerButtonMaximumWidth;
-(double)continueButtonFromBottom;
-(id)educationAssetNameForTraitCollection:(id)arg1 ;
-(CGSize)educationAssetSize;
-(float)educationAssetTopPadding;
-(id)proxHeaderFont;
-(id)proxHeaderColor;
-(double)orbLength;
-(id)proxSubtitleFont;
-(id)proxSubtitleColor;
-(id)proxHSDescription:(id)arg1 ;
-(id)proxCancelFont;
-(BOOL)isGreenTeaCapableDevice;
-(id)footerTextColor;
-(double)proxViewMaxWidthPhoneLandscape;
-(double)proxViewHeightPhoneLandscape;
-(double)proxContainerHorizontalVerticalPadding;
-(double)proxIntroOrbFromTopLandscape;
-(double)proxIntroTitleFromTopLandscape;
-(double)proxLeadingLandscape;
-(double)proxTrailingLandscape;
-(double)proxTrainingDismissButtonVerticalPaddingTop;
-(double)proxTrainingDismissButtonHorizontalPadding;
-(double)proxTrainingDismissButtonWidthOrHeight;
-(double)proxPaddingFootnoteButton;
-(double)proxPrimaryButtonHeight;
-(double)proxTrainingDismissButtonVerticalPaddingBottom;
-(double)proxViewMaxWidth;
-(double)proxViewHeight;
-(double)proxIntroTitleFromTop;
-(double)proxLeading;
-(double)proxTrailing;
-(double)proxPaddingIntroSubtitle;
-(double)horizontalPaddingLandscape;
-(double)horizontalPaddingPortrait;
-(id)instructionLabelFont;
-(double)orbOffsetFromTopEnrollment;
-(double)titleOffsetFromOrb;
-(double)subtitle1BaselineOffset;
-(double)subtitle2BaselineOffset;
-(id)footerLabelFont;
-(double)proxContainerCornerRadius;
-(BOOL)supportsSideButtonActivation;
-(double)proxPaddingTryAgainTitleLandscape;
-(BOOL)bluetoothDeviceSupportsHeySiri;
-(double)laterButtonBaselinePadding;
-(double)footerSkipButtonBaselineFromBottom;
-(id)turnOnSiriContinueButtonFont;
-(double)bottomOfContinueToNotNowFirstBaseline;
-(double)continueButtonPaddingTop;
-(double)skipButtonBaselineBottomMarginPortrait;
-(double)turnOnSiriContinueButtonWidth;
-(double)turnOnSiriContinueButtonHeight;
-(id)proxFooterFont;
-(double)proxTitleTrailingLandscape;
-(double)proxTitleFirstBaselineFromTop;
-(double)proxViewLanguageOptionsHeightPhoneLandscape;
-(double)proxViewLanguageOptionsHeight;
-(double)proxPaddingFromBottom;
-(double)proxSettingsLabelBottomMargin;
-(double)proxPaddingFromTop;
-(double)titleBaselineOffsetFromTop;
-(double)headerTitleLinespacing;
-(double)proxPaddingSuccessSubtitle;
-(double)proxPaddingSuccessFromBottom;
-(double)proxPaddingSuccessTitleLandscape;
-(double)proxPaddingSuccessFromBottomLandscape;
-(id)primaryButtonFont;
-(id)proxPrimaryButtonFont;
-(id)secondaryButtonFont;
-(id)VTUIDeviceSpecificAudioHintFileName:(id)arg1 ;
-(double)orbOffsetFromTopTraining;
-(double)radarBtnHorizontalPadding;
-(double)radarBtnVerticalPadding;
-(double)proxPaddingDataSharingSubtitle;
-(double)proxAboutLinkFirstBaselineFromTop;
-(void)_createStringSuffixesForDevice;
-(long long)audioProductID;
-(double)imageViewTopOffsetPortrait;
-(id)paneBackgroundColor;
-(double)textOverlayOffsetFromTop;
-(double)imageViewTopOffsetLandscape;
-(double)horizontalTextPadding;
-(double)primaryButtonHorizontalInset;
-(double)textOverlayLabelWidth;
-(double)minimumImageViewHeight;
-(double)statusLabelMinHeight;
-(double)statusLabelVerticalOffsetFromCenter;
-(double)proxSkipButtonBaselineBottomMargin;
-(double)skipButtonBaselineBottomMarginLandscape;
-(double)footerTextBaselineFromTop;
-(double)footerTextBottomPadding;
-(double)paddingFromTop;
-(double)finishEnrollmentFromBottom;
-(double)footerHorizontalPadding;
-(id)footerButtonFont;
-(id)proxPageLabelColor;
-(id)proxPrimaryButtonColor;
-(double)proxPaddingIntroSubtitleLandscape;
-(double)proxPaddingTrainingTitle;
-(double)proxPaddingTrainingTitleLandscape;
-(double)proxPaddingSkipButtonPageLabel;
-(id)proxPageFont;
-(double)proxStatusLabelMaxHeight;
-(double)proxPageFirstBaselineBottom;
-(double)proxSiriLogoHeightWidth;
-(double)proxSiriLogoHeightWidthSmall;
-(double)proxTrainingInstructionLabelHoriztonalOffset;
-(double)proxTrainingDismissButtonPhoneLandscapeHorizontalPadding;
-(double)turnOnSiriImageViewTopOffset;
-(double)turnOnSiriHorizontalPaddingPortrait;
-(double)turnOnSiriHorizontalPaddingLandscape;
-(double)turnOnSiriImageOffsetFromTopPortrait;
-(double)turnOnSiriImageOffsetFromTopLandscape;
-(double)turnOnSiriSubtitle1BaselineOffset;
-(double)turnOnSiriSubtitle2BaselineOffset;
-(double)turnOnSiriFooterOffset;
-(BOOL)isSmallestOnboardingDeviceInBuddy;
-(id)smallestDeviceOnboardingAsset;
-(void)setIsHeySiriAlwaysOn:(BOOL)arg1 ;
-(void)setBluetoothDeviceSupportsHeySiri:(BOOL)arg1 ;
-(BOOL)supportSideButtonActivation;
-(void)setSupportSideButtonActivation:(BOOL)arg1 ;
-(BOOL)isFloatingWithReducedWidth;
-(void)setAudioProductID:(long long)arg1 ;
@end
