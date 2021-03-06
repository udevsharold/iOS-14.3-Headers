/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface _SKUICounterTimeFieldView : UIView {

	UILabel* _labelLabel;
	UILabel* _valueLabel;
	unsigned long long _visibilityField;

}

@property (nonatomic,readonly) UILabel * labelLabel;                          //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;                          //@synthesize valueLabel=_valueLabel - In the implementation block
@property (assign,nonatomic) unsigned long long visibilityField;              //@synthesize visibilityField=_visibilityField - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(UILabel *)labelLabel;
-(void)layoutSubviews;
-(UILabel *)valueLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setVisibilityField:(unsigned long long)arg1 ;
-(unsigned long long)visibilityField;
@end

