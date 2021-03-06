/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDatePickerMode.h>

@class NSString;

@interface _UIDatePickerMode_Time : _UIDatePickerMode {

	double _timeHourWidth;
	double _timeMinuteWidth;
	double _timeAMPMWidth;
	NSString* _hourFormat;
	NSString* _minuteFormat;

}
+(unsigned long long)extractableCalendarUnits;
+(long long)datePickerMode;
-(id)font;
-(void)_shouldReset:(id)arg1 ;
-(void)noteCalendarChanged;
-(void)resetComponentWidths;
-(id)dateFormatForCalendarUnit:(unsigned long long)arg1 ;
-(double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(id)localizedFormatString;
-(long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1 ;
-(long long)displayedCalendarUnits;
-(BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3 ;
-(double)rowHeight;
@end

