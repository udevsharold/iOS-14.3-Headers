/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface EKRecurrenceDayOfWeek : NSObject <NSCopying, NSSecureCoding> {

	long long _dayOfTheWeek;
	long long _weekNumber;

}

@property (nonatomic,readonly) long long dayOfTheWeek;              //@synthesize dayOfTheWeek=_dayOfTheWeek - In the implementation block
@property (nonatomic,readonly) long long weekNumber;                //@synthesize weekNumber=_weekNumber - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)icsWeekDayFromDayOfTheWeek:(long long)arg1 ;
+(id)dayOfWeek:(long long)arg1 ;
+(id)dayOfWeek:(long long)arg1 weekNumber:(long long)arg2 ;
-(long long)dayOfTheWeek;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)iCalendarValueFromDayOfTheWeek:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDayOfTheWeek:(long long)arg1 weekNumber:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)weekNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(id)iCalendarDescription;
@end
