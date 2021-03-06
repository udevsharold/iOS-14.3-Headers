/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UILabel, UIImageView;

@interface NUArticleNextButton : UIButton {

	UILabel* _nextTitleLabel;
	UIImageView* _nextArrowImageView;

}

@property (nonatomic,readonly) UILabel * nextTitleLabel;                      //@synthesize nextTitleLabel=_nextTitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * nextArrowImageView;              //@synthesize nextArrowImageView=_nextArrowImageView - In the implementation block
+(id)titleLabelFont;
+(id)nextArrowImage;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)nextArrowImageView;
-(UILabel *)nextTitleLabel;
-(void)setNextLabelTitle:(id)arg1 animated:(BOOL)arg2 ;
@end

