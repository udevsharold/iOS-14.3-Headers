/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UIImageView, SKUIGiftItemView, UILabel, UIImage, NSString;

@interface SKUIGiftResultView : UIView {

	UIButton* _giftAgainButton;
	UIImageView* _imageView;
	SKUIGiftItemView* _itemView;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UIButton * giftAgainButton;              //@synthesize giftAgainButton=_giftAgainButton - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) SKUIGiftItemView * itemView;               //@synthesize itemView=_itemView - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(SKUIGiftItemView *)itemView;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setItemView:(SKUIGiftItemView *)arg1 ;
-(UIButton *)giftAgainButton;
@end
