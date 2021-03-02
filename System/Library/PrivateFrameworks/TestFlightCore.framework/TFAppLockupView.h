/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TFImageView.h>

@class UIImageView, UILabel, TFAppLockupViewSpecification, NSString;

@interface TFAppLockupView : UIView <TFImageView> {

	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _primarySubtitleLabel;
	UILabel* _secondarySubtitleLabel;
	TFAppLockupViewSpecification* _specification;

}

@property (nonatomic,retain) TFAppLockupViewSpecification * specification;              //@synthesize specification=_specification - In the implementation block
@property (nonatomic,readonly) UIImageView * iconView;                                  //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * primarySubtitleLabel;                          //@synthesize primarySubtitleLabel=_primarySubtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondarySubtitleLabel;                        //@synthesize secondarySubtitleLabel=_secondarySubtitleLabel - In the implementation block
@property (nonatomic,readonly) CGSize displayedIconSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImageView *)iconView;
-(TFAppLockupViewSpecification *)specification;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSpecification:(TFAppLockupViewSpecification *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_prepareForDisplayWithTraitCollection:(id)arg1 ;
-(UILabel *)primarySubtitleLabel;
-(UILabel *)secondarySubtitleLabel;
-(void)_styleSubviews;
-(void)_layoutLabelsInLayoutBounds:(CGRect)arg1 ;
-(CGSize)displayedIconSize;
@end
