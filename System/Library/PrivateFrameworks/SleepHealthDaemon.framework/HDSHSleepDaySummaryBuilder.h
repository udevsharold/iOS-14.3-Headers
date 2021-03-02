/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateInterval, HKCalendarCache, NSMutableArray;

@interface HDSHSleepDaySummaryBuilder : NSObject {

	NSDateInterval* _dateInterval;
	unsigned long long _weekday;
	HKCalendarCache* _calendarCache;
	NSMutableArray* _sleepAnalysisSamples;
	NSMutableArray* _sleepScheduleSamples;
	NSMutableArray* _sleepDurationGoalSamples;
	long long _morningIndex;

}

@property (nonatomic,readonly) long long morningIndex;              //@synthesize morningIndex=_morningIndex - In the implementation block
-(id)_sleepDurationGoal;
-(id)_sleepPeriods;
-(id)_sleepSchedules;
-(long long)morningIndex;
-(id)createDaySummary;
-(id)initWithMorningIndex:(long long)arg1 weekday:(unsigned long long)arg2 calendarCache:(id)arg3 ;
-(void)addOrderedSample:(id)arg1 ;
@end
