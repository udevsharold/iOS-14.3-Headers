/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIGiftDashView, UILabel, NSString;

@interface SKUIGiftConfirmLabeledValue : UIView {

	SKUIGiftDashView* _dashView;
	UILabel* _labelLabel;
	long long _style;
	UILabel* _valueLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,readonly) long long giftConfirmLabelStyle;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * subtitleLabel; 
@property (nonatomic,copy) NSString * value; 
-(NSString *)value;
-(void)setSubtitleLabel:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)subtitleLabel;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithGiftConfirmLabelStyle:(long long)arg1 ;
-(long long)giftConfirmLabelStyle;
@end
