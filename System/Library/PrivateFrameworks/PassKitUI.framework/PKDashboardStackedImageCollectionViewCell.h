/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface PKDashboardStackedImageCollectionViewCell : PKDashboardCollectionViewCell {

	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _tertiaryLabel;
	UIImage* _icon;
	NSString* _title;
	NSString* _subtitle;
	NSString* _tertiaryText;

}

@property (nonatomic,retain) UIImage * icon;                     //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * tertiaryText;              //@synthesize tertiaryText=_tertiaryText - In the implementation block
-(NSString *)subtitle;
-(NSString *)tertiaryText;
-(void)setTertiaryText:(NSString *)arg1 ;
-(double)_maxWidthForTransactionCellInWidth:(double)arg1 ;
-(double)_contentHeightWithWidth:(double)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
@end

