/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class VUICardView, VUICardViewLayoutFactory, IKViewElement, IKImageElement;

@interface VUICardCollectionViewCell : VUIFocusableCollectionViewCell {

	VUICardView* _cardView;
	VUICardViewLayoutFactory* _layoutFactory;
	IKViewElement* _viewElement;
	IKImageElement* _mainImageViewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;                           //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKImageElement * mainImageViewElement;                 //@synthesize mainImageViewElement=_mainImageViewElement - In the implementation block
@property (nonatomic,retain) VUICardView * cardView;                                //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) VUICardViewLayoutFactory * layoutFactory;              //@synthesize layoutFactory=_layoutFactory - In the implementation block
@property (nonatomic,readonly) double mainImageCornerRadius; 
+(long long)_cardLayoutTypeForElement:(id)arg1 ;
+(id)_imageLayoutForImageElement:(id)arg1 cardLayout:(id)arg2 cardWidth:(double)arg3 ;
+(id)cardCellWithElement:(id)arg1 existingCell:(id)arg2 ;
-(VUICardView *)cardView;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setCardView:(VUICardView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUICardViewLayoutFactory *)layoutFactory;
-(void)setLayoutFactory:(VUICardViewLayoutFactory *)arg1 ;
-(IKImageElement *)mainImageViewElement;
-(void)setMainImageViewElement:(IKImageElement *)arg1 ;
-(void)setCardView:(id)arg1 force:(BOOL)arg2 ;
-(double)mainImageCornerRadius;
@end

