/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CAShapeLayer, UIView, UIImageView, UILabel, UIVisualEffectView, UIVibrancyEffect;

@interface CKEffectSelectionCollectionViewCell : UICollectionViewCell {

	CAShapeLayer* _selectionLayer;
	UIView* _shadowView;
	UIImageView* _imageView;
	UILabel* _label;
	UIVisualEffectView* _titleContainerView;
	UIVibrancyEffect* _titleVibrancyEffect;

}

@property (nonatomic,retain) CAShapeLayer * selectionLayer;                        //@synthesize selectionLayer=_selectionLayer - In the implementation block
@property (nonatomic,retain) UIView * shadowView;                                  //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * titleContainerView;              //@synthesize titleContainerView=_titleContainerView - In the implementation block
@property (nonatomic,retain) UIVibrancyEffect * titleVibrancyEffect;               //@synthesize titleVibrancyEffect=_titleVibrancyEffect - In the implementation block
-(void)setImage:(id)arg1 ;
-(CAShapeLayer *)selectionLayer;
-(void)setSelectionLayer:(CAShapeLayer *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleVibrancyEffect:(UIVibrancyEffect *)arg1 ;
-(void)setTitleContainerView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)titleContainerView;
-(UIVibrancyEffect *)titleVibrancyEffect;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(void)configureForEffectIsDark:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setShadowView:(UIView *)arg1 ;
-(void)setTitle:(id)arg1 ;
-(UIView *)shadowView;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel *)label;
@end

