/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIProximityView.h>

@class VTUIProximityContainerView, UILabel, VTUIButton, UIButton;

@interface VTUIProximityDataSharingOptInView : VTUIProximityView {

	VTUIProximityContainerView* _containerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	VTUIButton* _shareButton;
	VTUIButton* _notNowButton;
	UIButton* _dismissButton;
	UIButton* _aboutLink;

}

@property (nonatomic,retain) VTUIButton * shareButton;               //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,retain) VTUIButton * notNowButton;              //@synthesize notNowButton=_notNowButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;               //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIButton * aboutLink;                   //@synthesize aboutLink=_aboutLink - In the implementation block
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(VTUIButton *)notNowButton;
-(void)setNotNowButton:(VTUIButton *)arg1 ;
-(VTUIButton *)shareButton;
-(void)setShareButton:(VTUIButton *)arg1 ;
-(void)_setupContent;
-(void)_setupPortraitConstraints;
-(UIButton *)aboutLink;
-(void)setAboutLink:(UIButton *)arg1 ;
@end

