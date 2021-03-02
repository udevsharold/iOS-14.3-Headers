/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIListCollectionViewCell.h>

@class VUILabel, _TVImageView, VUISeparatorView;

@interface VUISeasonPickerCollectionViewCell : VUIListCollectionViewCell {

	VUILabel* _titleLabel;
	VUILabel* _subtitleLabel;
	VUILabel* _secondSubtitleLabel;
	_TVImageView* _seasonImageView;
	VUISeparatorView* _topSeparatorView;
	VUISeparatorView* _bottomSeparatorView;

}

@property (nonatomic,retain) VUILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleLabel;                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * secondSubtitleLabel;                      //@synthesize secondSubtitleLabel=_secondSubtitleLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * seasonImageView;                      //@synthesize seasonImageView=_seasonImageView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * topSeparatorView;                 //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * bottomSeparatorView;              //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
+(void)configureSeasonPickerCell:(id)arg1 withMedia:(id)arg2 traitCollection:(id)arg3 ;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(VUILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(void)setBottomSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(VUILabel *)subtitleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TVImageView *)seasonImageView;
-(void)setSeasonImageView:(_TVImageView *)arg1 ;
-(VUILabel *)secondSubtitleLabel;
-(void)setSecondSubtitleLabel:(VUILabel *)arg1 ;
@end
