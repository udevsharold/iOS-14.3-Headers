/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIShapeView, UIImageView, UILabel, UIColor, UIImage, NSString;

@interface SKUIOnboardingProgressView : UIView {

	SKUIShapeView* _borderView;
	UIImageView* _imageView;
	double _progress;
	SKUIShapeView* _progressView;
	UILabel* _titleLabel;

}

@property (assign,nonatomic) double progress;                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) UIColor * fillColor; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) CGSize preferredImageSize; 
+(CGSize)preferredImageSizeForViewSize:(CGSize)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)tintColorDidChange;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_borderColor;
-(double)progress;
-(void)setTitle:(NSString *)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(CGSize)preferredImageSize;
@end

