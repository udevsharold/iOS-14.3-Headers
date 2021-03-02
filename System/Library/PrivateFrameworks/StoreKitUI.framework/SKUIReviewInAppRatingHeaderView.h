/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIImageView, UILabel, SKUIStarRatingControl;

@interface SKUIReviewInAppRatingHeaderView : UIView {

	BOOL _completed;
	NSString* _title;
	NSString* _message;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	SKUIStarRatingControl* _ratingView;
	CGSize _contentSize;

}

@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                          //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) SKUIStarRatingControl * ratingView;              //@synthesize ratingView=_ratingView - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                              //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) BOOL completed;                                  //@synthesize completed=_completed - In the implementation block
-(NSString *)message;
-(CGSize)intrinsicContentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)contentSize;
-(void)setMessage:(NSString *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)completed;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(UIImageView *)imageView;
-(id)_titleLabelFont;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(id)_messageLabelFont;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setRatingView:(SKUIStarRatingControl *)arg1 ;
-(SKUIStarRatingControl *)ratingView;
-(id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3 ;
-(void)setCompletedWithRating:(long long)arg1 ;
@end
