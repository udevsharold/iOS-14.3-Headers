/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSTimeZone;

@interface REMDisplayDate : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allDay;
	NSDate* _date;
	NSTimeZone* _timeZone;

}

@property (nonatomic,copy,readonly) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (getter=isAllDay,nonatomic,readonly) BOOL allDay;              //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;                    //@synthesize timeZone=_timeZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSTimeZone *)timeZone;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(BOOL)isAllDay;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDueDateComponents:(id)arg1 alarms:(id)arg2 ;
-(id)initWithDate:(id)arg1 allDay:(BOOL)arg2 timeZone:(id)arg3 ;
-(id)initWithFloatingDateComponents:(id)arg1 nonFloatingDateComponents:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

