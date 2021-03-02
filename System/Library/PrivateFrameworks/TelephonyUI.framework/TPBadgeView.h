/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TPView.h>

@class NSString, UILabel, NSLayoutConstraint;

@interface TPBadgeView : TPView {

	unsigned long long _sizeCategory;
	unsigned long long _theme;
	NSString* _title;
	UILabel* _titleLabel;
	double _titleLabelFontSize;
	double _layerCornerRadius;
	NSLayoutConstraint* _heightAnchorLayoutConstraint;
	NSLayoutConstraint* _widthAnchorLayoutConstraint;
	NSLayoutConstraint* _titleLabelLeadingAnchorLayoutConstraint;
	NSLayoutConstraint* _titleLabelTrailingAnchorLayoutConstraint;
	double _heightAnchorLayoutConstraintConstantFontMultiplier;
	double _titleLabelLeadingAnchorLayoutConstraintConstant;
	double _titleLabelTrailingAnchorLayoutConstraintConstant;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) double titleLabelFontSize;                                                  //@synthesize titleLabelFontSize=_titleLabelFontSize - In the implementation block
@property (assign,nonatomic) double layerCornerRadius;                                                   //@synthesize layerCornerRadius=_layerCornerRadius - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightAnchorLayoutConstraint;                          //@synthesize heightAnchorLayoutConstraint=_heightAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthAnchorLayoutConstraint;                           //@synthesize widthAnchorLayoutConstraint=_widthAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelLeadingAnchorLayoutConstraint;               //@synthesize titleLabelLeadingAnchorLayoutConstraint=_titleLabelLeadingAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelTrailingAnchorLayoutConstraint;              //@synthesize titleLabelTrailingAnchorLayoutConstraint=_titleLabelTrailingAnchorLayoutConstraint - In the implementation block
@property (assign,nonatomic) double heightAnchorLayoutConstraintConstantFontMultiplier;                  //@synthesize heightAnchorLayoutConstraintConstantFontMultiplier=_heightAnchorLayoutConstraintConstantFontMultiplier - In the implementation block
@property (assign,nonatomic) double titleLabelLeadingAnchorLayoutConstraintConstant;                     //@synthesize titleLabelLeadingAnchorLayoutConstraintConstant=_titleLabelLeadingAnchorLayoutConstraintConstant - In the implementation block
@property (assign,nonatomic) double titleLabelTrailingAnchorLayoutConstraintConstant;                    //@synthesize titleLabelTrailingAnchorLayoutConstraintConstant=_titleLabelTrailingAnchorLayoutConstraintConstant - In the implementation block
@property (assign,nonatomic) unsigned long long sizeCategory;                                            //@synthesize sizeCategory=_sizeCategory - In the implementation block
@property (assign,nonatomic) unsigned long long theme;                                                   //@synthesize theme=_theme - In the implementation block
@property (nonatomic,copy) NSString * title;                                                             //@synthesize title=_title - In the implementation block
-(void)commonInit;
-(unsigned long long)theme;
-(BOOL)_hasBaseline;
-(NSLayoutConstraint *)titleLabelTrailingAnchorLayoutConstraint;
-(id)initWithTitle:(id)arg1 ;
-(unsigned long long)sizeCategory;
-(void)setHeightAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleLabelLeadingAnchorLayoutConstraint;
-(void)setSizeCategory:(unsigned long long)arg1 ;
-(id)lastBaselineAnchor;
-(double)heightAnchorLayoutConstraintConstantFontMultiplier;
-(double)titleLabelFontSize;
-(void)setTheme:(unsigned long long)arg1 ;
-(void)loadConstraints;
-(UILabel *)titleLabel;
-(void)setTitleLabelTrailingAnchorLayoutConstraintConstant:(double)arg1 ;
-(void)setTitleLabelLeadingAnchorLayoutConstraintConstant:(double)arg1 ;
-(void)unloadConstraints;
-(double)layerCornerRadius;
-(void)setHeightAnchorLayoutConstraintConstantFontMultiplier:(double)arg1 ;
-(double)titleLabelTrailingAnchorLayoutConstraintConstant;
-(id)initWithTitle:(id)arg1 theme:(unsigned long long)arg2 ;
-(void)updateActiveHorizontalConstraints;
-(void)setTitleLabelTrailingAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabelLeadingAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateTheme;
-(double)scaledLayoutValueForBaseValue:(double)arg1 shouldLowerBound:(BOOL)arg2 ;
-(void)updateSizeCategory;
-(NSLayoutConstraint *)widthAnchorLayoutConstraint;
-(void)updateFonts;
-(double)titleLabelLeadingAnchorLayoutConstraintConstant;
-(void)setTitleLabelFontSize:(double)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLayerCornerRadius:(double)arg1 ;
-(void)setWidthAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(double)scaledLayoutValueForBaseValue:(double)arg1 ;
-(NSLayoutConstraint *)heightAnchorLayoutConstraint;
-(id)firstBaselineAnchor;
-(NSString *)title;
-(void)updateConstraintsConstants;
@end
