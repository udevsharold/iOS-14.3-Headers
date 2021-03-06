/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDateInterval, NSArray, NSString;

@interface HKSleepPeriod : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSDateInterval* _dateInterval;
	long long _type;
	double _duration;
	double _inBedDuration;
	double _asleepDuration;
	NSArray* _segments;
	NSString* _timeZoneName;

}

@property (nonatomic,copy,readonly) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double inBedDuration;                            //@synthesize inBedDuration=_inBedDuration - In the implementation block
@property (nonatomic,readonly) double asleepDuration;                           //@synthesize asleepDuration=_asleepDuration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * segments;                         //@synthesize segments=_segments - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeZoneName;                    //@synthesize timeZoneName=_timeZoneName - In the implementation block
-(NSDate *)endDate;
-(NSArray *)segments;
-(NSDateInterval *)dateInterval;
-(NSString *)timeZoneName;
-(long long)type;
-(NSDate *)startDate;
-(void)_setType:(long long)arg1 ;
-(double)inBedDuration;
-(double)asleepDuration;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 segments:(id)arg3 ;
-(double)duration;
-(void)enumerateDateIntervalsForCategoryValue:(long long)arg1 intersectedWithDateInterval:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)segmentsForCategory:(long long)arg1 ;
-(id)segmentDateIntervalsForCategoryValue:(long long)arg1 intersectedWithDateInterval:(id)arg2 ;
@end

