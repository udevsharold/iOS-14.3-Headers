/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HKSelectedRangeLabel, UIColor;

@interface HKInteractiveChartAnnotationViewKeyValueLabel : UIView {

	long long _orientation;
	HKSelectedRangeLabel* _keyLabel;
	HKSelectedRangeLabel* _valueLabel;
	UIColor* _textColor;

}

@property (assign,nonatomic) long long orientation;                            //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) HKSelectedRangeLabel * keyLabel;                //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,readonly) HKSelectedRangeLabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                              //@synthesize textColor=_textColor - In the implementation block
-(HKSelectedRangeLabel *)keyLabel;
-(CGSize)intrinsicContentSize;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(void)layoutSubviews;
-(HKSelectedRangeLabel *)valueLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_layoutSubviewsVertically;
-(void)_layoutSubviewsHorizontally;
@end

