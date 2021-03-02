/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIButton, NSString, UILabel;

@interface UITableViewIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell {

	UIButton* _button;
	double _rightMargin;
	BOOL _rightMarginAdjusted;
	id _tapTarget;
	SEL _tapAction;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) double rightMargin; 
@property (readonly) UILabel * label; 
@property (readonly) UIButton * button;                            //@synthesize button=_button - In the implementation block
-(long long)textAlignment;
-(void)tintColorDidChange;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(double)rightMargin;
-(UIButton *)button;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setRightMargin:(double)arg1 ;
-(UILabel *)label;
@end
