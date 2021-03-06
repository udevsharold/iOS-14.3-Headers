/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@class SBFluidSwitcherItemContainerHeaderItem, SBFluidSwitcherIconImageContainerView, UILabel, BSUIEmojiLabelView, MTVisualStyling, NSArray, NSString;

@interface SBFluidSwitcherItemContainerHeaderView : UIView <PTSettingsKeyObserver> {

	SBFluidSwitcherItemContainerHeaderItem* _firstItem;
	SBFluidSwitcherIconImageContainerView* _firstIconImageView;
	UILabel* _firstTitleLabel;
	BSUIEmojiLabelView* _firstSubtitleLabelView;
	SBFluidSwitcherItemContainerHeaderItem* _secondItem;
	SBFluidSwitcherIconImageContainerView* _secondIconImageView;
	UILabel* _secondTitleLabel;
	BSUIEmojiLabelView* _secondSubtitleLabelView;
	long long _subtitleVisualStylingInterfaceStyle;
	MTVisualStyling* _subtitleVisualStyling;
	double _spacingBetweenLeadingEdgeAndIcon;
	double _spacingBetweenTrailingEdgeAndLabels;
	double _iconSideLength;
	double _spacingBetweenSnapshotAndIcon;
	double _spacingBetweenSnapshotAndDescriptionLabelBaseline;
	double _spacingBetweenTitleAndSubtitleBaseline;
	double _spacingBetweenIconAndLabel;
	double _spacingBetweenLabelAndSecondIcon;
	double _spacingBetweenBoundsCenterAndSecondIcon;
	double _textAlpha;
	NSArray* _headerItems;

}

@property (nonatomic,readonly) double preferredHeaderHeight; 
@property (assign,nonatomic) double textAlpha;                            //@synthesize textAlpha=_textAlpha - In the implementation block
@property (nonatomic,copy) NSArray * headerItems;                         //@synthesize headerItems=_headerItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)distanceFromBoundingLeadingEdgeToIconTrailingEdge;
-(void)setHeaderItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_applyPrototypeSettings;
-(void)dealloc;
-(id)_subtitleLabelFont;
-(void)setTextAlpha:(double)arg1 ;
-(NSArray *)headerItems;
-(id)_titleLabelFont;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateTitleAlpha;
-(double)textAlpha;
-(void)_updateVisualStylingWithHeaderItems:(id)arg1 ;
-(void)setHeaderItems:(NSArray *)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(double)preferredHeaderHeight;
@end

