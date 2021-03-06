/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIProximityView.h>

@class NSString, SUICOrbView, UILabel, VTUIProximityContainerView, VTUIStyle, VTUIButton, UIButton;

@interface VTUIProximityEnrollmentSuccessView : VTUIProximityView {

	NSString* _languageCode;
	SUICOrbView* _orbView;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;
	VTUIProximityContainerView* _containerView;
	VTUIStyle* _vtStyle;
	VTUIButton* _continueButton;
	UIButton* _dismissButton;

}

@property (nonatomic,readonly) VTUIButton * continueButton;              //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                   //@synthesize dismissButton=_dismissButton - In the implementation block
-(void)dealloc;
-(VTUIButton *)continueButton;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setupContent;
-(void)_setupConstraintsToSize:(CGSize)arg1 ;
-(void)_setupPhoneLandscapeConstraints;
-(void)_setupPortraitConstraints;
@end

