/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCLSchedule, NSError;

@interface SCLScheduleAttributes : NSObject {

	BOOL _valid;
	BOOL _hasUniformIntervals;
	BOOL _hasSingleIntervalPerDay;
	SCLSchedule* _schedule;
	unsigned long long _validationOptions;
	NSError* _validationError;
	long long _scheduledDays;

}

@property (nonatomic,readonly) SCLSchedule * schedule;                            //@synthesize schedule=_schedule - In the implementation block
@property (nonatomic,readonly) unsigned long long validationOptions;              //@synthesize validationOptions=_validationOptions - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                         //@synthesize valid=_valid - In the implementation block
@property (nonatomic,readonly) NSError * validationError;                         //@synthesize validationError=_validationError - In the implementation block
@property (nonatomic,readonly) long long scheduledDays;                           //@synthesize scheduledDays=_scheduledDays - In the implementation block
@property (nonatomic,readonly) BOOL hasUniformIntervals;                          //@synthesize hasUniformIntervals=_hasUniformIntervals - In the implementation block
@property (nonatomic,readonly) BOOL hasSingleIntervalPerDay;                      //@synthesize hasSingleIntervalPerDay=_hasSingleIntervalPerDay - In the implementation block
-(SCLSchedule *)schedule;
-(BOOL)isValid;
-(NSError *)validationError;
-(long long)scheduledDays;
-(id)initWithSchedule:(id)arg1 ;
-(id)initWithSchedule:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_prepareWithRecurrences:(id)arg1 ;
-(unsigned long long)validationOptions;
-(BOOL)hasUniformIntervals;
-(BOOL)hasSingleIntervalPerDay;
@end
