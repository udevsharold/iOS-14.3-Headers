/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView;

@interface CPUIShadowImageView : UIView {

	UIImage* _image;
	UIImage* _placeholderImage;
	UIImageView* _imageView;
	UIImageView* _placeholderView;

}

@property (nonatomic,readonly) UIImageView * imageView;                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIImageView * placeholderView;              //@synthesize placeholderView=_placeholderView - In the implementation block
@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                   //@synthesize placeholderImage=_placeholderImage - In the implementation block
-(UIImage *)placeholderImage;
-(UIImageView *)placeholderView;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)contentMode;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIImageView *)imageView;
-(void)setContentMode:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setupEffects;
-(BOOL)_isDarkMode;
@end
