/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <QuartzCore/CALayer.h>

@class HKDateCache, CALayer, UIColor, UIFont, NSDate;

@interface HKCalendarDayCell : CALayer {

	long long _dayOfMonth;
	BOOL _selected;
	BOOL _representsToday;
	HKDateCache* _dateCache;
	CALayer* _circle;
	CALayer* _dayLabel;
	UIColor* _textColor;
	UIFont* _font;
	UIFont* _boldFont;
	double _dayDiameter;
	NSDate* _date;

}

@property (nonatomic,readonly) HKDateCache * dateCache;                    //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,readonly) CALayer * circle;                           //@synthesize circle=_circle - In the implementation block
@property (nonatomic,readonly) CALayer * dayLabel;                         //@synthesize dayLabel=_dayLabel - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                          //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIFont * boldFont;                            //@synthesize boldFont=_boldFont - In the implementation block
@property (assign,nonatomic) double dayDiameter;                           //@synthesize dayDiameter=_dayDiameter - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long dayOfMonth;                       //@synthesize dayOfMonth=_dayOfMonth - In the implementation block
@property (nonatomic,readonly) BOOL representsToday;                       //@synthesize representsToday=_representsToday - In the implementation block
+(void)clearImageCache;
-(id)init;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(BOOL)isSelected;
-(CALayer *)circle;
-(long long)dayOfMonth;
-(HKDateCache *)dateCache;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(NSDate *)date;
-(id)debugDescription;
-(CALayer *)dayLabel;
-(UIFont *)boldFont;
-(void)setSelected:(BOOL)arg1 ;
-(CGSize)circleSize;
-(double)_roundedRectCornerRadius;
-(id)_integerNumberFormatter;
-(double)dayDiameter;
-(id)_reusedImageForDateIndex:(long long)arg1 color:(id)arg2 ;
-(void)layoutOnce;
-(CGSize)_roundedRectSizeForDayNumberString:(id)arg1 ;
-(void)updateDateTextForDayNumber:(long long)arg1 textColor:(id)arg2 ;
-(id)initWithDateCache:(id)arg1 ;
-(void)updateWithDate:(id)arg1 dayOfMonth:(long long)arg2 ;
-(void)setDayDiameter:(double)arg1 ;
-(void)setBoldFont:(UIFont *)arg1 ;
-(BOOL)representsToday;
@end

