/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSCalendar, NSDateFormatter;

@interface CNVCardDateComponentsFormatter : NSFormatter {

	NSCalendar* _gregorianCalendar;
	NSDateFormatter* _compactYearMonthDayDateFormatter;
	NSDateFormatter* _compactYearMonthDayDateHourMinuteSecondZFormatter;
	NSDateFormatter* _monthDayDateFormatter;
	NSDateFormatter* _yearMonthDayDateFormatter;
	NSDateFormatter* _yearMonthDayDateHourMinuteSecondZFormatter;

}
+(id)dateComponentsFromALTBDAYString:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)dateComponentsFromString:(id)arg1 ;
-(id)stringFromDateComponents:(id)arg1 ;
-(id)gregorianCalendar;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)dateComponentsFromALTBDAYString:(id)arg1 ;
-(id)altBDAYStringFromDateComponents:(id)arg1 ;
-(id)yearMonthDayStringFromDateComponents:(id)arg1 ;
-(id)monthDayStringFromDateComponents:(id)arg1 ;
-(id)yearMonthDayDateFormatter;
-(id)yearMonthDayDateHourMinuteSecondZFormatter;
-(id)compactYearMonthDayDateFormatter;
-(id)compactYearMonthDayDateHourMinuteSecondZFormatter;
-(id)monthDayDateFormatter;
-(id)stringForComponentValue:(long long)arg1 format:(id)arg2 ;
@end
