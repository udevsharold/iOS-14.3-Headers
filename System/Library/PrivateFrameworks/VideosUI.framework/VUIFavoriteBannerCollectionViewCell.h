/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class VUIFavoriteBannerView, VUIFavoriteBannerLayout;

@interface VUIFavoriteBannerCollectionViewCell : VUIFocusableCollectionViewCell {

	VUIFavoriteBannerView* _bannerView;
	VUIFavoriteBannerLayout* _bannerLayout;
	double _width;

}

@property (assign,nonatomic) double width;                                        //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) VUIFavoriteBannerView * bannerView;                  //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) VUIFavoriteBannerLayout * bannerLayout;              //@synthesize bannerLayout=_bannerLayout - In the implementation block
+(id)configureCellWithElement:(id)arg1 existingCell:(id)arg2 ;
-(void)setWidth:(double)arg1 ;
-(double)width;
-(void)setBannerView:(VUIFavoriteBannerView *)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(VUIFavoriteBannerView *)bannerView;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBannerLayout:(VUIFavoriteBannerLayout *)arg1 ;
-(void)registerForInAppMessaging:(BOOL)arg1 ;
-(VUIFavoriteBannerLayout *)bannerLayout;
@end

