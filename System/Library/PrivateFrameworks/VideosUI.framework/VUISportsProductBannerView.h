/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUISportsProductBannerLayout, VUILabel, NSArray, UIView, VUISeparatorView;

@interface VUISportsProductBannerView : UIView {

	VUISportsProductBannerLayout* _layout;
	VUILabel* _titleLabel;
	NSArray* _rowLabels;
	NSArray* _scoreLabels;
	NSArray* _descriptionLabels;
	VUILabel* _footerLabel;
	NSArray* _buttonViews;
	VUILabel* _availabilityTextView;
	UIView* _availabilityImageView;
	double _availabilityImageViewLeftMargin;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUISeparatorView * separatorView;                    //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) VUISportsProductBannerLayout * layout;               //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * rowLabels;                                 //@synthesize rowLabels=_rowLabels - In the implementation block
@property (nonatomic,retain) NSArray * scoreLabels;                               //@synthesize scoreLabels=_scoreLabels - In the implementation block
@property (nonatomic,retain) NSArray * descriptionLabels;                         //@synthesize descriptionLabels=_descriptionLabels - In the implementation block
@property (nonatomic,retain) VUILabel * footerLabel;                              //@synthesize footerLabel=_footerLabel - In the implementation block
@property (nonatomic,retain) NSArray * buttonViews;                               //@synthesize buttonViews=_buttonViews - In the implementation block
@property (nonatomic,retain) VUILabel * availabilityTextView;                     //@synthesize availabilityTextView=_availabilityTextView - In the implementation block
@property (nonatomic,retain) UIView * availabilityImageView;                      //@synthesize availabilityImageView=_availabilityImageView - In the implementation block
@property (assign,nonatomic) double availabilityImageViewLeftMargin;              //@synthesize availabilityImageViewLeftMargin=_availabilityImageViewLeftMargin - In the implementation block
-(VUISeparatorView *)separatorView;
-(void)setLayout:(VUISportsProductBannerLayout *)arg1 ;
-(VUILabel *)footerLabel;
-(NSArray *)buttonViews;
-(void)setButtonViews:(NSArray *)arg1 ;
-(VUILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(VUISportsProductBannerLayout *)layout;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)_iOS_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(double)_totalMaxScoreWidthWithAvailableWidth:(double)arg1 ;
-(double)_maxScoreWidthForColumn:(unsigned long long)arg1 availableWidth:(double)arg2 ;
-(CGSize)_availabilityImageSizeWithSize:(CGSize)arg1 ;
-(double)_availabilityImageViewLeftMargin;
-(void)_layoutLabels:(id)arg1 scoreLabels:(id)arg2 withOrigin:(CGPoint)arg3 maxWidth:(double)arg4 ;
-(void)_layoutLabels:(id)arg1 withOrigin:(CGPoint)arg2 maxWidth:(double)arg3 ;
-(void)_layoutScoresWithOrigin:(CGPoint)arg1 availableWidth:(double)arg2 padding:(double)arg3 ;
-(void)_layoutButtonsWithOrigin:(CGPoint)arg1 buttonHeight:(double)arg2 buttonWidth:(double)arg3 spacing:(double)arg4 ;
-(void)setRowLabels:(NSArray *)arg1 ;
-(void)setScoreLabels:(NSArray *)arg1 ;
-(void)setDescriptionLabels:(NSArray *)arg1 ;
-(void)setFooterLabel:(VUILabel *)arg1 ;
-(void)setAvailabilityTextView:(VUILabel *)arg1 ;
-(void)setAvailabilityImageView:(UIView *)arg1 ;
-(NSArray *)rowLabels;
-(NSArray *)scoreLabels;
-(NSArray *)descriptionLabels;
-(VUILabel *)availabilityTextView;
-(UIView *)availabilityImageView;
-(double)availabilityImageViewLeftMargin;
-(void)setAvailabilityImageViewLeftMargin:(double)arg1 ;
@end

