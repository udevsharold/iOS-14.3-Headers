/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PRXTextContainer, PRXCardContentViewDelegate;
@class NSArray, NSLayoutConstraint, UIView, PRXLabel, UILayoutGuide, PRXButton, PRXTextView;

@interface PRXCardContentView : UIView {

	NSArray* _titleViewConstraints;
	NSArray* _subtitleLabelConstraints;
	NSArray* _actionButtonConstraints;
	NSArray* _mainContentConstraints;
	NSLayoutConstraint* _titleViewHeightConstraint;
	long long _cardStyle;
	UIView*<PRXTextContainer> _titleView;
	PRXLabel* _subtitleLabel;
	UIView* _activityIndicator;
	UILayoutGuide* _mainContentGuide;
	id<PRXCardContentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PRXCardContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long cardStyle;                                       //@synthesize cardStyle=_cardStyle - In the implementation block
@property (nonatomic,retain) UIView*<PRXTextContainer> titleView;                         //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) PRXLabel * subtitleLabel;                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) PRXButton * dismissButton; 
@property (nonatomic,copy) NSArray * actionButtons; 
@property (nonatomic,retain) UIView * activityIndicator;                                  //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * mainContentGuide;                          //@synthesize mainContentGuide=_mainContentGuide - In the implementation block
@property (nonatomic,readonly) PRXTextView * titleTextView; 
@property (nonatomic,readonly) PRXLabel * titleLabel; 
-(void)updateConstraints;
-(void)setActionButtons:(NSArray *)arg1 ;
-(NSArray *)actionButtons;
-(void)setSubtitleLabel:(PRXLabel *)arg1 ;
-(id)init;
-(long long)cardStyle;
-(UIView *)activityIndicator;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleView:(UIView*<PRXTextContainer>)arg1 ;
-(PRXLabel *)titleLabel;
-(UIView*<PRXTextContainer>)titleView;
-(PRXButton *)dismissButton;
-(void)setDismissButton:(PRXButton *)arg1 ;
-(PRXLabel *)subtitleLabel;
-(PRXTextView *)titleTextView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PRXCardContentViewDelegate>)arg1 ;
-(void)setActivityIndicator:(UIView *)arg1 ;
-(id<PRXCardContentViewDelegate>)delegate;
-(UILayoutGuide *)mainContentGuide;
-(id)initWithCardStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 cardStyle:(long long)arg2 ;
-(void)_invalidateMainContentConstraints;
-(void)updateTitleTextViewExclusionPathsForCardWidth:(double)arg1 ;
@end

