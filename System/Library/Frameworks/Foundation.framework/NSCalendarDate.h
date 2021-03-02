/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDate.h>

@class NSTimeZone, NSString;

@interface NSCalendarDate : NSDate {

	unsigned long long refCount;
	double _timeIntervalSinceReferenceDate;
	NSTimeZone* _timeZone;
	NSString* _formatString;
	void* _reserved;

}
+(id)dateWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7 ;
+(BOOL)supportsSecureCoding;
+(id)calendarDate;
+(id)distantFuture;
+(id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3 ;
+(id)dateWithString:(id)arg1 calendarFormat:(id)arg2 ;
+(id)distantPast;
+(id)dateWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3 ;
-(id)initWithString:(id)arg1 ;
-(id)addTimeInterval:(double)arg1 ;
-(id)timeZone;
-(void)setTimeZone:(id)arg1 ;
-(long long)dayOfWeek;
-(id)dateByAddingYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6 ;
-(id)initWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7 ;
-(void)years:(long long*)arg1 months:(long long*)arg2 days:(long long*)arg3 hours:(long long*)arg4 minutes:(long long*)arg5 seconds:(long long*)arg6 sinceDate:(id)arg7 ;
-(id)init;
-(long long)dayOfMonth;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)monthOfYear;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)descriptionWithCalendarFormat:(id)arg1 locale:(id)arg2 ;
-(id)initWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3 ;
-(long long)minuteOfHour;
-(void)dealloc;
-(long long)hourOfDay;
-(id)descriptionWithCalendarFormat:(id)arg1 ;
-(id)initWithString:(id)arg1 calendarFormat:(id)arg2 ;
-(long long)yearOfCommonEra;
-(id)calendarFormat;
-(id)timeZoneDetail;
-(long long)dayOfYear;
-(long long)dayOfCommonEra;
-(long long)secondOfMinute;
-(id)initWithCoder:(id)arg1 ;
-(void)setCalendarFormat:(id)arg1 ;
-(id)description;
-(long long)microsecondOfSecond;
-(double)timeIntervalSinceReferenceDate;
-(oneway void)release;
-(id)descriptionWithLocale:(id)arg1 ;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
