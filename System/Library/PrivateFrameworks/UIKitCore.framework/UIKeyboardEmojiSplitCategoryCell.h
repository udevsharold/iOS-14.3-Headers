/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell {

	UIImageView* _symbol;
	UILabel* _title;
	UIView* _selectedCircle;

}

@property (nonatomic,retain) UIImageView * symbol;                 //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,retain) UILabel * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIView * selectedCircle;              //@synthesize selectedCircle=_selectedCircle - In the implementation block
-(id)titleFont;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(UIImageView *)symbol;
-(void)setTitleText:(id)arg1 ;
-(id)symbolFont;
-(void)setSymbol:(UIImageView *)arg1 ;
-(void)setPressIndicatorHidden:(BOOL)arg1 ;
-(void)setSelectedCircleBlendMode:(BOOL)arg1 ;
-(UIView *)selectedCircle;
-(void)setSelectedCircle:(UIView *)arg1 ;
-(void)setTitle:(UILabel *)arg1 ;
-(UILabel *)title;
@end
