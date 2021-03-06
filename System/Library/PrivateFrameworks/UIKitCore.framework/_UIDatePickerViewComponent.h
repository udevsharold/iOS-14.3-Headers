/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIDatePicker, _UIDatePickerDataModel, UIColor;


@protocol _UIDatePickerViewComponent
@property (assign,nonatomic,__weak) UIDatePicker * datePicker; 
@property (nonatomic,retain) _UIDatePickerDataModel * data; 
@property (nonatomic,readonly) long long datePickerStyle; 
@property (assign,setter=_setAllowsZeroCountDownDuration:,getter=_allowsZeroCountDownDuration,nonatomic) BOOL allowsZeroCountDownDuration; 
@property (assign,setter=_setAllowsZeroTimeInterval:,getter=_allowsZeroTimeInterval,nonatomic) BOOL allowsZeroTimeInterval; 
@property (getter=_isTimeIntervalMode,nonatomic,readonly) BOOL isTimeIntervalMode; 
@property (assign,nonatomic) double timeInterval; 
@property (nonatomic,readonly) double contentWidth; 
@property (setter=_setHighlightColor:,getter=_highlightColor,nonatomic,retain) UIColor * highlightColor; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * textColor; 
@property (setter=_setTextShadowColor:,getter=_textShadowColor,nonatomic,retain) UIColor * textShadowColor; 
@property (setter=_setMagnifierLineColor:,getter=_magnifierLineColor,nonatomic,retain) UIColor * magnifierLineColor; 
@optional
-(double)contentWidth;
-(id)_textColor;
-(id)dateComponents;
-(void)_setTextColor:(id)arg1;
-(void)_workaround66574039_datePickerDidUpdateLayoutMargins;
-(double)timeInterval;
-(void)setTimeInterval:(double)arg1;
-(id)_highlightColor;
-(BOOL)usesAutoLayout;
-(id)_textShadowColor;
-(void)didChangeCustomFontDesign;
-(void)setStaggerTimeIntervals:(BOOL)arg1;
-(id)primaryFirstResponder;
-(void)_updateDateOrTime;
-(void)_setMagnifierLineColor:(id)arg1;
-(void)setHighlightsToday:(BOOL)arg1;
-(void)_setHighlightColor:(id)arg1;
-(void)_setTextShadowColor:(id)arg1;
-(id)_magnifierLineColor;
-(void)setDateComponents:(id)arg1;

@required
-(void)didReset;
-(_UIDatePickerDataModel *)data;
-(void)_setEnabled:(BOOL)arg1;
-(UIDatePicker *)datePicker;
-(void)_setAllowsZeroCountDownDuration:(BOOL)arg1;
-(void)setData:(id)arg1;
-(void)didChangeMode;
-(void)didChangeDateFrom:(id)arg1 animated:(BOOL)arg2;
-(void)_setAllowsZeroTimeInterval:(BOOL)arg1;
-(void)didChangeLocale;
-(long long)datePickerStyle;
-(void)didChangeToday;
-(BOOL)hasDefaultSize;
-(CGSize*)_sizeThatFits:(CGSize)arg1;
-(void)setDatePicker:(id)arg1;
-(BOOL)_allowsZeroCountDownDuration;
-(CGSize*)defaultSize;
-(void)_setHidesLabels:(BOOL)arg1;
-(void)didChangeTimeZone;
-(void)didChangeCalendar;
-(void)didChangeMinuteInterval;
-(BOOL)_allowsZeroTimeInterval;
-(void)didChangeMinimumDate;
-(void)didChangeMaximumDate;
-(BOOL)_isTimeIntervalMode;

@end

