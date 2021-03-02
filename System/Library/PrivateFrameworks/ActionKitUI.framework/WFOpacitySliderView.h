/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIControl.h>

@class WFOpacitySlider, UILabel;

@interface WFOpacitySliderView : UIControl {

	WFOpacitySlider* _slider;
	UILabel* _opacityLabel;

}

@property (nonatomic,__weak,readonly) WFOpacitySlider * slider;              //@synthesize slider=_slider - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * opacityLabel;                //@synthesize opacityLabel=_opacityLabel - In the implementation block
@property (nonatomic,readonly) double opacity; 
-(WFOpacitySlider *)slider;
-(id)init;
-(double)opacity;
-(void)reset;
-(void)layoutSubviews;
-(UILabel *)opacityLabel;
-(void)didChangeOpacityValue:(id)arg1 ;
@end
