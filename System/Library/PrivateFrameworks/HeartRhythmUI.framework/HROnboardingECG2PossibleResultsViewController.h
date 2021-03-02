/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRLinkTextViewDelegate.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>

@class HKElectrocardiogram, UILabel, HROnboardingElectrocardiogramResultView, HRStackedButtonView, NSLayoutAnchor, NSLayoutConstraint;

@interface HROnboardingECG2PossibleResultsViewController : HROnboardingBaseViewController <HRLinkTextViewDelegate, HRStackedButtonViewDelegate> {

	HKElectrocardiogram* _electrocardiogram;
	UILabel* _titleLabel;
	HROnboardingElectrocardiogramResultView* _sinusRhythmResultReview;
	HROnboardingElectrocardiogramResultView* _atrialFibrillationResultView;
	HROnboardingElectrocardiogramResultView* _highOrLowHeartRateResultView;
	HROnboardingElectrocardiogramResultView* _poorRecordingResultView;
	HROnboardingElectrocardiogramResultView* _inconclusiveResultView;
	HROnboardingElectrocardiogramResultView* _onlyResultView;
	HROnboardingElectrocardiogramResultView* _bottomResultView;
	UILabel* _disclaimerLabel;
	HRStackedButtonView* _stackedButtonView;
	NSLayoutAnchor* _viewTopAnchor;
	NSLayoutConstraint* _contentViewBottomConstraint;
	NSLayoutConstraint* _disclaimerLabelTopConstraint;

}

@property (nonatomic,retain) HKElectrocardiogram * electrocardiogram;                                             //@synthesize electrocardiogram=_electrocardiogram - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) HROnboardingElectrocardiogramResultView * sinusRhythmResultReview;                   //@synthesize sinusRhythmResultReview=_sinusRhythmResultReview - In the implementation block
@property (nonatomic,retain) HROnboardingElectrocardiogramResultView * atrialFibrillationResultView;              //@synthesize atrialFibrillationResultView=_atrialFibrillationResultView - In the implementation block
@property (nonatomic,retain) HROnboardingElectrocardiogramResultView * highOrLowHeartRateResultView;              //@synthesize highOrLowHeartRateResultView=_highOrLowHeartRateResultView - In the implementation block
@property (nonatomic,retain) HROnboardingElectrocardiogramResultView * poorRecordingResultView;                   //@synthesize poorRecordingResultView=_poorRecordingResultView - In the implementation block
@property (nonatomic,retain) HROnboardingElectrocardiogramResultView * inconclusiveResultView;                    //@synthesize inconclusiveResultView=_inconclusiveResultView - In the implementation block
@property (nonatomic,retain) HROnboardingElectrocardiogramResultView * onlyResultView;                            //@synthesize onlyResultView=_onlyResultView - In the implementation block
@property (nonatomic,retain) HROnboardingElectrocardiogramResultView * bottomResultView;                          //@synthesize bottomResultView=_bottomResultView - In the implementation block
@property (nonatomic,retain) UILabel * disclaimerLabel;                                                           //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                                             //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) NSLayoutAnchor * viewTopAnchor;                                                      //@synthesize viewTopAnchor=_viewTopAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;                                    //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * disclaimerLabelTopConstraint;                                   //@synthesize disclaimerLabelTopConstraint=_disclaimerLabelTopConstraint - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setUpConstraints;
-(void)_updateForCurrentSizeCategory;
-(UILabel *)titleLabel;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setUpUI;
-(void)viewDidLoad;
-(id)initWithSample:(id)arg1 ;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(UILabel *)disclaimerLabel;
-(void)setDisclaimerLabel:(UILabel *)arg1 ;
-(id)initForOnboarding:(BOOL)arg1 upgradingFromAlgorithmVersion:(long long)arg2 ;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(void)_setStackedButtonViewAsFooterView;
-(void)_playResultViewVideos;
-(void)_pauseResultViewVideos;
-(void)_adjustStackedButtonViewLocationForViewContentHeight;
-(HKElectrocardiogram *)electrocardiogram;
-(void)_setUpTitle;
-(void)setViewTopAnchor:(NSLayoutAnchor *)arg1 ;
-(void)_setUpOnlyResultView;
-(HROnboardingElectrocardiogramResultView *)onlyResultView;
-(void)_setUpAllResultViews;
-(void)_setUpStackedButtonView;
-(void)_setUpDisclaimerLabel;
-(void)_setUpTitleConstraints;
-(void)_setUpOnlyResultViewConstraints;
-(void)_setUpAllResultViewConstraints;
-(void)_setUpBottomResultViewConstraint;
-(void)_adjustDisclaimerLabelConstraints;
-(id)_resultViewForSample:(id)arg1 activeAlgorithmVersion:(long long)arg2 ;
-(void)setOnlyResultView:(HROnboardingElectrocardiogramResultView *)arg1 ;
-(void)setBottomResultView:(HROnboardingElectrocardiogramResultView *)arg1 ;
-(NSLayoutAnchor *)viewTopAnchor;
-(void)setSinusRhythmResultReview:(HROnboardingElectrocardiogramResultView *)arg1 ;
-(HROnboardingElectrocardiogramResultView *)sinusRhythmResultReview;
-(void)setAtrialFibrillationResultView:(HROnboardingElectrocardiogramResultView *)arg1 ;
-(HROnboardingElectrocardiogramResultView *)atrialFibrillationResultView;
-(void)setHighOrLowHeartRateResultView:(HROnboardingElectrocardiogramResultView *)arg1 ;
-(HROnboardingElectrocardiogramResultView *)highOrLowHeartRateResultView;
-(void)setInconclusiveResultView:(HROnboardingElectrocardiogramResultView *)arg1 ;
-(HROnboardingElectrocardiogramResultView *)inconclusiveResultView;
-(void)setPoorRecordingResultView:(HROnboardingElectrocardiogramResultView *)arg1 ;
-(HROnboardingElectrocardiogramResultView *)poorRecordingResultView;
-(HROnboardingElectrocardiogramResultView *)bottomResultView;
-(void)setDisclaimerLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)disclaimerLabelTopConstraint;
-(void)linkTextView:(id)arg1 didTapOnLinkInRange:(NSRange)arg2 ;
-(void)setElectrocardiogram:(HKElectrocardiogram *)arg1 ;
@end
