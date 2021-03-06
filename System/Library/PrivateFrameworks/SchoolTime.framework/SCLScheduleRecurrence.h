/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCLTimeInterval;

@interface SCLScheduleRecurrence : NSObject <NSCopying, NSSecureCoding> {

	SCLTimeInterval* _timeInterval;
	long long _day;

}

@property (nonatomic,copy,readonly) SCLTimeInterval * timeInterval;              //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,readonly) long long day;                                    //@synthesize day=_day - In the implementation block
+(BOOL)supportsSecureCoding;
+(/*^block*/id)dayOfWeekAndStartTimeComparator;
-(long long)day;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCLTimeInterval *)timeInterval;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTimeInterval:(id)arg1 day:(long long)arg2 ;
-(id)dateIntervalForActiveScheduleOnOrAfterDate:(id)arg1 calendar:(id)arg2 ;
-(BOOL)isActiveAtDate:(id)arg1 calendar:(id)arg2 ;
-(BOOL)intersectsRecurrence:(id)arg1 ;
-(BOOL)isContiguousWithRecurrence:(id)arg1 ;
@end

