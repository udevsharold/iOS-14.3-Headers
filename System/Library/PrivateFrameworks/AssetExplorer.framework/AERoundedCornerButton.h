/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIControl.h>

@class UILabel, UIImageView;

@interface AERoundedCornerButton : UIControl {

	long long __layoutStyle;
	long long __buttonType;
	UILabel* __label;
	UIImageView* __imageView;

}

@property (assign,setter=_setLayoutStyle:,nonatomic) long long _layoutStyle;              //@synthesize _layoutStyle=__layoutStyle - In the implementation block
@property (nonatomic,readonly) long long _buttonType;                                     //@synthesize _buttonType=__buttonType - In the implementation block
@property (setter=_setLabel:,nonatomic,retain) UILabel * _label;                          //@synthesize _label=__label - In the implementation block
@property (setter=_setImageView:,nonatomic,retain) UIImageView * _imageView;              //@synthesize _imageView=__imageView - In the implementation block
+(id)roundedCornerButtonWithStyle:(long long)arg1 buttonType:(long long)arg2 ;
-(long long)_layoutStyle;
-(UILabel *)_label;
-(UIImageView *)_imageView;
-(long long)_buttonType;
-(void)_setImageView:(id)arg1 ;
-(void)_setLabel:(id)arg1 ;
-(void)layoutSubviews;
-(void)_setLayoutStyle:(long long)arg1 ;
-(void)_commonAERoundedCornerButtonInitializationWithStyle:(long long)arg1 buttonType:(long long)arg2 ;
-(double)_interpolatedGlyphHorizontalInset;
-(double)_interpolatedGlyphTopInset;
@end
