/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class HKHeartRhythmAvailability, NSNumber, UIView, UILabel, HRStackedButtonView, NSLayoutConstraint, UIButton, NSArray, NSString;

@interface HROnboardingAtrialFibrillationIntroViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate, UITextFieldDelegate> {

	BOOL _learnMoreContentExpanded;
	HKHeartRhythmAvailability* _availability;
	NSNumber* _activeWatchNeedsLocationCheck;
	UIView* _heroView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UILabel* _footnoteLabel;
	HRStackedButtonView* _stackedButtonView;
	NSLayoutConstraint* _contentViewBottomConstraint;
	UIButton* _learnMoreButton;
	UIView* _learnMoreContentView;
	NSArray* _learnMoreCollapsedConstraints;
	NSArray* _learnMoreExpandedConstraints;

}

@property (nonatomic,retain) HKHeartRhythmAvailability * availability;                      //@synthesize availability=_availability - In the implementation block
@property (nonatomic,retain) NSNumber * activeWatchNeedsLocationCheck;                      //@synthesize activeWatchNeedsLocationCheck=_activeWatchNeedsLocationCheck - In the implementation block
@property (nonatomic,retain) UIView * heroView;                                             //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                           //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UILabel * footnoteLabel;                                       //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                       //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;              //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,retain) UIButton * learnMoreButton;                                    //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (assign,nonatomic) BOOL learnMoreContentExpanded;                                 //@synthesize learnMoreContentExpanded=_learnMoreContentExpanded - In the implementation block
@property (nonatomic,retain) UIView * learnMoreContentView;                                 //@synthesize learnMoreContentView=_learnMoreContentView - In the implementation block
@property (nonatomic,retain) NSArray * learnMoreCollapsedConstraints;                       //@synthesize learnMoreCollapsedConstraints=_learnMoreCollapsedConstraints - In the implementation block
@property (nonatomic,retain) NSArray * learnMoreExpandedConstraints;                        //@synthesize learnMoreExpandedConstraints=_learnMoreExpandedConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKHeartRhythmAvailability *)availability;
-(id)_titleFont;
-(void)setFootnoteLabel:(UILabel *)arg1 ;
-(void)setUpConstraints;
-(void)setAvailability:(HKHeartRhythmAvailability *)arg1 ;
-(UILabel *)titleLabel;
-(void)setHeroView:(UIView *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)footnoteLabel;
-(UIButton *)learnMoreButton;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(id)titleString;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(UIView *)heroView;
-(void)setUpUI;
-(id)bodyString;
-(id)_titleFontTextStyle;
-(void)learnMoreButtonTapped:(id)arg1 ;
-(id)_bodyFont;
-(id)buttonTitleString;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(id)initForOnboarding:(BOOL)arg1 upgradingFromAlgorithmVersion:(long long)arg2 ;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(id)_bodyFontTextStyle;
-(void)_setStackedButtonViewAsFooterView;
-(void)_setUpStackedButtonView;
-(id)_footnoteFont;
-(id)_createHeroView;
-(id)footnoteString;
-(void)_setUpLearnMoreViews;
-(double)_assetImageBottomToTitleFirstBaseline;
-(double)_titleLastBaselineToBodyFirstBaseline;
-(void)_setUpLearnMoreConstraints;
-(id)learnMoreString;
-(id)_createLearnMoreExpandedView;
-(void)setLearnMoreContentView:(UIView *)arg1 ;
-(UIView *)learnMoreContentView;
-(double)_footnoteLeading;
-(double)_viewLastBaselineToContinueButton;
-(void)setLearnMoreCollapsedConstraints:(NSArray *)arg1 ;
-(void)setLearnMoreExpandedConstraints:(NSArray *)arg1 ;
-(void)_updateViewsForContentExpansionState:(BOOL)arg1 ;
-(NSArray *)learnMoreCollapsedConstraints;
-(NSArray *)learnMoreExpandedConstraints;
-(id)locationFeatureAlertAckButtonString;
-(id)featureDisabledBodyString;
-(id)locationNotFoundPromptBodyString;
-(id)watchOSVersionTooLowBodyString;
-(id)deviceNotSupportedBodyString;
-(id)locationFeatureIneligiblePromptBodyString;
-(id)_footnoteTextStyle;
-(void)_presentFeatureAlertWithMessage:(id)arg1 ;
-(double)_learnMoreContentViewLastBaselineToContinueButton;
-(NSNumber *)activeWatchNeedsLocationCheck;
-(void)setActiveWatchNeedsLocationCheck:(NSNumber *)arg1 ;
-(BOOL)learnMoreContentExpanded;
-(void)setLearnMoreContentExpanded:(BOOL)arg1 ;
@end

