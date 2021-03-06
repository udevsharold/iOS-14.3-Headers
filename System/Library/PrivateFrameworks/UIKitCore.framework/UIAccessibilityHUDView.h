/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIAccessibilityHUDItem, UIView, UIVisualEffectView, UIBlurEffect, UIImageView, UILabel;

@interface UIAccessibilityHUDView : UIView {

	UIAccessibilityHUDItem* _item;
	UIView* _transformContainer;
	UIVisualEffectView* _effectView;
	UIBlurEffect* _blurEffect;
	UIVisualEffectView* _itemEffectView;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UIView* _customView;

}

@property (nonatomic,copy) UIAccessibilityHUDItem * item;              //@synthesize item=_item - In the implementation block
+(CGSize)preferredHUDSize;
-(UIAccessibilityHUDItem *)item;
-(void)setItem:(UIAccessibilityHUDItem *)arg1 ;
-(id)layoutManager;
-(id)titleLabel;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)imageView;
-(void)layoutSubviews;
-(void)_show:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)customView;
-(id)itemContainerViewForLayout;
-(void)showAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithHUDItem:(id)arg1 ;
-(id)containerViewForLayout;
-(UIEdgeInsets)imageInsetsForLayout;
-(id)_contentEffectsForItem:(id)arg1 ;
-(void)_updateLabelForItem;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

