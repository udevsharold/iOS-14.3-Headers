/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, _TVMonogramView, TVImageLayout, VUILabel, VUIFocusableTextView, VUISeparatorView;

@interface VUIListLockupCollectionViewCellView : UIView {

	UIView* _imageView;
	_TVMonogramView* _monogramView;
	TVImageLayout* _imageLayout;
	VUILabel* _titleLabel;
	VUILabel* _subTitleLabel;
	VUIFocusableTextView* _descriptionTextView;
	UIView* _primaryButton;
	UIView* _secondaryButton;
	long long _imagePosition;
	TVImageLayout* _monogramImageLayout;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUISeparatorView * separatorView;                        //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) _TVMonogramView * monogramView;                          //@synthesize monogramView=_monogramView - In the implementation block
@property (nonatomic,retain) TVImageLayout * imageLayout;                             //@synthesize imageLayout=_imageLayout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * subTitleLabel;                                //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
@property (nonatomic,retain) VUIFocusableTextView * descriptionTextView;              //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) UIView * primaryButton;                                  //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) UIView * secondaryButton;                                //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (assign,nonatomic) long long imagePosition;                                 //@synthesize imagePosition=_imagePosition - In the implementation block
@property (nonatomic,retain) TVImageLayout * monogramImageLayout;                     //@synthesize monogramImageLayout=_monogramImageLayout - In the implementation block
-(VUISeparatorView *)separatorView;
-(long long)imagePosition;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setImageView:(UIView *)arg1 ;
-(void)setImagePosition:(long long)arg1 ;
-(VUILabel *)titleLabel;
-(void)setPrimaryButton:(UIView *)arg1 ;
-(void)setSecondaryButton:(UIView *)arg1 ;
-(VUILabel *)subTitleLabel;
-(void)setSubTitleLabel:(VUILabel *)arg1 ;
-(UIView *)primaryButton;
-(UIView *)secondaryButton;
-(UIView *)imageView;
-(void)layoutSubviews;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDescriptionTextView:(VUIFocusableTextView *)arg1 ;
-(VUIFocusableTextView *)descriptionTextView;
-(TVImageLayout *)imageLayout;
-(void)prepareForCellReuse;
-(void)setImageLayout:(TVImageLayout *)arg1 ;
-(_TVMonogramView *)monogramView;
-(void)setMonogramView:(_TVMonogramView *)arg1 ;
-(TVImageLayout *)monogramImageLayout;
-(void)setMonogramImageLayout:(TVImageLayout *)arg1 ;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
@end

