/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UILayoutGuide, NSLayoutConstraint;

@interface CKPinningOnboardingTitleCell : UICollectionViewCell {

	BOOL _isInCollapsedState;
	long long _pinnedConversationViewLayoutStyle;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILayoutGuide* _labelMarginGuide;
	NSLayoutConstraint* _leadingMarginLayoutConstraint;
	NSLayoutConstraint* _trailingMarginLayoutConstraint;
	NSLayoutConstraint* _subtitleSpacingConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILayoutGuide * labelMarginGuide;                                 //@synthesize labelMarginGuide=_labelMarginGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingMarginLayoutConstraint;               //@synthesize leadingMarginLayoutConstraint=_leadingMarginLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingMarginLayoutConstraint;              //@synthesize trailingMarginLayoutConstraint=_trailingMarginLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subtitleSpacingConstraint;                   //@synthesize subtitleSpacingConstraint=_subtitleSpacingConstraint - In the implementation block
@property (assign,nonatomic) long long pinnedConversationViewLayoutStyle;                      //@synthesize pinnedConversationViewLayoutStyle=_pinnedConversationViewLayoutStyle - In the implementation block
@property (assign,nonatomic) BOOL isInCollapsedState;                                          //@synthesize isInCollapsedState=_isInCollapsedState - In the implementation block
+(id)reuseIdentifier;
-(void)updateConstraints;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setPinnedConversationViewLayoutStyle:(long long)arg1 collapsedState:(BOOL)arg2 ;
-(long long)pinnedConversationViewLayoutStyle;
-(void)setPinnedConversationViewLayoutStyle:(long long)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setIsInCollapsedState:(BOOL)arg1 ;
-(BOOL)isInCollapsedState;
-(id)pinningOnboardingTitleLabelFontForPinnedConversationViewLayoutStyle:(long long)arg1 inCollapsedState:(BOOL)arg2 ;
-(void)setLabelMarginGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)labelMarginGuide;
-(double)pinningOnboardingMarginForPinnedConversationViewLayoutStyle:(long long)arg1 ;
-(void)setLeadingMarginLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTrailingMarginLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leadingMarginLayoutConstraint;
-(double)pinningOnboardingSubtitleSpacingForPinnedConversationViewLayoutStyle:(long long)arg1 ;
-(void)setSubtitleSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)trailingMarginLayoutConstraint;
-(NSLayoutConstraint *)subtitleSpacingConstraint;
-(UILabel *)subtitleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
@end
