/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UIScrollViewLayoutObserver.h>
#import <libobjc.A.dylib/SFAutomaticPasswordScrollViewContentViewLayoutObserver.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, SFAutomaticPasswordScrollViewContentView, UIImageView, NSLayoutConstraint, NSArray, UILayoutGuide, UILabel, UIButton, NSString;

@interface SFAutomaticPasswordExplanationView : UIView <_UIScrollViewLayoutObserver, SFAutomaticPasswordScrollViewContentViewLayoutObserver, UIScrollViewDelegate> {

	BOOL _isPad;
	long long _keyboardType;
	UIScrollView* _scrollView;
	SFAutomaticPasswordScrollViewContentView* _scrollableContentView;
	UIImageView* _shadowImageView;
	NSLayoutConstraint* _strongPasswordButtonWidthConstraint;
	NSLayoutConstraint* _strongPasswordButtonHeightConstraint;
	NSLayoutConstraint* _useCustomPasswordButtonWidthConstraint;
	NSLayoutConstraint* _useCustomPasswordBaselineToBottomConstraint;
	NSArray* _wideShadowImageViewConstraints;
	NSArray* _narrowShadowImageViewConstraints;
	UILayoutGuide* _contentLayoutGuide;
	NSLayoutConstraint* _contentLayoutGuideBottomConstraint;
	UILayoutGuide* _scrollableContentCenterLayoutGuide;
	BOOL _requiresWideAppearance;
	double _wideContentMaximumPadding;
	NSLayoutConstraint* _wideContentLeadingConstraint;
	NSLayoutConstraint* _wideContentTrailingConstraint;
	NSLayoutConstraint* _narrowContentLeadingConstraint;
	NSLayoutConstraint* _narrowContentTrailingConstraint;
	NSLayoutConstraint* _iPadWidthConstraint;
	BOOL _scrollViewNeedsShadowCachedValue;
	UILabel* _explanationLabel;
	UILabel* _passwordRetrievalExpalantionLabel;
	UIButton* _useStrongPasswordButton;
	UIButton* _useOtherPasswordButton;
	long long _keyboardAppearance;

}

@property (nonatomic,readonly) UILabel * explanationLabel;                               //@synthesize explanationLabel=_explanationLabel - In the implementation block
@property (nonatomic,readonly) UILabel * passwordRetrievalExpalantionLabel;              //@synthesize passwordRetrievalExpalantionLabel=_passwordRetrievalExpalantionLabel - In the implementation block
@property (nonatomic,readonly) UIButton * useStrongPasswordButton;                       //@synthesize useStrongPasswordButton=_useStrongPasswordButton - In the implementation block
@property (nonatomic,readonly) UIButton * useOtherPasswordButton;                        //@synthesize useOtherPasswordButton=_useOtherPasswordButton - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance;                               //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateConstraints;
-(void)_createSubviews;
-(long long)keyboardAppearance;
-(void)scrollViewDidScroll:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(UIButton *)useStrongPasswordButton;
-(UIButton *)useOtherPasswordButton;
-(void)automaticPasswordScrollContentViewDidLayout:(id)arg1 ;
-(void)_createLayoutConstraints;
-(void)_updateTextAndButtonColor;
-(void)_updateStrongPasswordHeightConstraint;
-(void)_updateWideAppearanceRequirement;
-(void)_updateMaximumPadding;
-(void)_updateContentLayoutGuideBottomConstraint;
-(void)_updateUseCustomPasswordBaselineToBottomConstraint;
-(BOOL)_scrollViewNeedsShadow:(BOOL)arg1 ;
-(void)_updateShadowViewAlpha;
-(UILabel *)explanationLabel;
-(UILabel *)passwordRetrievalExpalantionLabel;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(id)initWithKeyboardType:(long long)arg1 ;
-(void)_scrollViewDidLayoutSubviews:(id)arg1 ;
@end
