/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol WFTriggerPercentageSliderCellDelegate;
@class UISlider, UILabel;

@interface WFTriggerPercentageSliderCell : UITableViewCell {

	id<WFTriggerPercentageSliderCellDelegate> _delegate;
	UISlider* _slider;
	UILabel* _label;
	double _stepValue;

}

@property (nonatomic,readonly) UISlider * slider;                                                    //@synthesize slider=_slider - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                                      //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) double stepValue;                                                       //@synthesize stepValue=_stepValue - In the implementation block
@property (assign,nonatomic) double sliderValue; 
@property (assign,nonatomic,__weak) id<WFTriggerPercentageSliderCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(double)sliderValue;
-(UISlider *)slider;
-(double)stepValue;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setStepValue:(double)arg1 ;
-(void)sliderValueChanged:(id)arg1 ;
-(void)setDelegate:(id<WFTriggerPercentageSliderCellDelegate>)arg1 ;
-(void)setSliderValue:(double)arg1 ;
-(UILabel *)label;
-(id<WFTriggerPercentageSliderCellDelegate>)delegate;
-(void)configureWithInitialValue:(double)arg1 maximumValue:(double)arg2 minimumValue:(double)arg3 stepValue:(double)arg4 ;
-(double)roundValue:(double)arg1 toNearestStep:(double)arg2 ;
@end
