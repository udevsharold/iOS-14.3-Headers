/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class IKViewElement, VUILabel, VUIFocusableTextView, VUIRoomBannerLayout, _TVImageView, VUISeparatorView;

@interface VUIRoomBannerView : UIView {

	IKViewElement* _viewElement;
	VUILabel* _titleLabel;
	VUIFocusableTextView* _descriptionLabel;
	VUIRoomBannerLayout* _layout;
	_TVImageView* _backgroundImage;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUISeparatorView * separatorView;                     //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                          //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUIFocusableTextView * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) VUIRoomBannerLayout * layout;                         //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * backgroundImage;                       //@synthesize backgroundImage=_backgroundImage - In the implementation block
-(VUISeparatorView *)separatorView;
-(void)setLayout:(VUIRoomBannerLayout *)arg1 ;
-(void)setBackgroundImage:(_TVImageView *)arg1 ;
-(_TVImageView *)backgroundImage;
-(VUILabel *)titleLabel;
-(VUIFocusableTextView *)descriptionLabel;
-(void)setDescriptionLabel:(VUIFocusableTextView *)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(VUIRoomBannerLayout *)layout;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
@end

