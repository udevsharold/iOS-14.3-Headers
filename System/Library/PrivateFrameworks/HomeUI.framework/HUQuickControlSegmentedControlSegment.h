/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface HUQuickControlSegmentedControlSegment : UIView {

	BOOL _highlighted;
	BOOL _selected;
	unsigned long long _roundedCorners;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) unsigned long long roundedCorners;                  //@synthesize roundedCorners=_roundedCorners - In the implementation block
+(id)selectedColor;
+(id)highlightedColor;
+(double)borderInset;
-(void)_updateBackgroundColor;
-(BOOL)isSelected;
-(BOOL)isHighlighted;
-(UILabel *)titleLabel;
-(void)setRoundedCorners:(unsigned long long)arg1 ;
-(unsigned long long)roundedCorners;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSString *)title;
-(void)_setupConstraints;
@end

