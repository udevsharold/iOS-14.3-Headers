/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UIImage;

@interface HUNamedWallpaperCell : UICollectionViewCell {

	long long _contentMode;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) UIImage * image; 
@property (assign,nonatomic) long long contentMode;                //@synthesize contentMode=_contentMode - In the implementation block
-(long long)contentMode;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(void)setContentMode:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end
