/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, CAGradientLayer, UIVisualEffectView;

@interface VUIProductUberBackgroundView : UIView {

	BOOL _isChannelBanner;
	UIView* _imageView;
	long long _configuredBlurInterfaceStyle;
	CAGradientLayer* _maskGradientLayer;
	UIVisualEffectView* _blurEffectView;
	double _contentOffset;
	CGSize _imageSize;

}

@property (assign,nonatomic) long long configuredBlurInterfaceStyle;              //@synthesize configuredBlurInterfaceStyle=_configuredBlurInterfaceStyle - In the implementation block
@property (nonatomic,retain) CAGradientLayer * maskGradientLayer;                 //@synthesize maskGradientLayer=_maskGradientLayer - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurEffectView;                 //@synthesize blurEffectView=_blurEffectView - In the implementation block
@property (assign,nonatomic) double contentOffset;                                //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic) BOOL isChannelBanner;                                //@synthesize isChannelBanner=_isChannelBanner - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                    //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) UIView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
-(void)setContentOffset:(double)arg1 ;
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImageView:(UIView *)arg1 ;
-(UIView *)imageView;
-(void)layoutSubviews;
-(void)setBlurEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurEffectView;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)contentOffset;
-(void)setImageOffset:(double)arg1 ;
-(void)setIsChannelBanner:(BOOL)arg1 ;
-(void)configureBlurWithInterfaceStyle:(long long)arg1 ;
-(BOOL)isChannelBanner;
-(long long)configuredBlurInterfaceStyle;
-(void)setConfiguredBlurInterfaceStyle:(long long)arg1 ;
-(CAGradientLayer *)maskGradientLayer;
-(void)setMaskGradientLayer:(CAGradientLayer *)arg1 ;
@end
