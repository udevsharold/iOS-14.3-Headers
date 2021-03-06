/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIView;

@interface PKMonthDayCollectionViewCell : UICollectionViewCell {

	UILabel* _dayLabel;
	UIView* _topLine;
	UIView* _leftLine;
	UIView* _bottomLine;
	BOOL _enabled;
	long long _dayNumber;

}

@property (assign,nonatomic) long long dayNumber;                        //@synthesize dayNumber=_dayNumber - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(BOOL)isEnabled;
-(void)setDayNumber:(long long)arg1 withTitle:(id)arg2 ;
-(void)layoutSubviews;
-(long long)dayNumber;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDayNumber:(long long)arg1 ;
@end

