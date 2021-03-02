/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, PKCurrencyAmount, UILabel;

@interface PKDashboardCurrencyAmountCell : PKDashboardCollectionViewCell {

	NSString* _titleString;
	PKCurrencyAmount* _currencyAmount;
	UILabel* _titleLabel;
	UILabel* _currencyLabel;
	BOOL _showsPositivePrefix;
	NSString* _detailString;
	PKCurrencyAmount* _amount;

}

@property (nonatomic,copy) NSString * titleString;                  //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,copy) NSString * detailString;                 //@synthesize detailString=_detailString - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * amount;               //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) BOOL showsPositivePrefix;              //@synthesize showsPositivePrefix=_showsPositivePrefix - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)resetFonts;
-(void)setDetailString:(NSString *)arg1 ;
-(PKCurrencyAmount *)amount;
-(void)layoutSubviews;
-(void)setShowsPositivePrefix:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitleString:(NSString *)arg1 ;
-(NSString *)titleString;
-(id)defaultPrimaryColor;
-(id)defaultSecondaryColor;
-(void)_updateCurrencyLabel;
-(BOOL)_shouldUseStackedLayoutWithBounds:(CGRect)arg1 ;
-(BOOL)showsPositivePrefix;
-(NSString *)detailString;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
