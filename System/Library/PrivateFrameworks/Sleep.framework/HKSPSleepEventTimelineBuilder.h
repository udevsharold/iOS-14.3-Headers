/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKSPSleepEventTimelineResults, HKSPSleepScheduleModel, NSDate, NSCalendar;

@interface HKSPSleepEventTimelineBuilder : NSObject {

	HKSPSleepEventTimelineResults* _results;
	HKSPSleepScheduleModel* _sleepScheduleModel;
	NSDate* _date;
	NSCalendar* _calendar;
	unsigned long long _options;

}

@property (nonatomic,readonly) HKSPSleepEventTimelineResults * results;                  //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel;              //@synthesize sleepScheduleModel=_sleepScheduleModel - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                            //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                                    //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                               //@synthesize options=_options - In the implementation block
+(id)builderWithSleepScheduleModel:(id)arg1 date:(id)arg2 ;
-(NSCalendar *)calendar;
-(void)_validateSessionAdjustments;
-(HKSPSleepEventTimelineResults *)results;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(NSDate *)date;
-(void)_validateSessionAdjustmentForSnoozedWakeUpAlarm;
-(id)initWithSleepScheduleModel:(id)arg1 date:(id)arg2 ;
-(void)_adjustSessionForSkippedBedtime;
-(void)_adjustSessionForConfirmedWakeUp;
-(void)_gatherSessionsForValidationForOccurrence:(id)arg1 overrideOccurrence:(id)arg2 ;
-(void)_adjustSessionForSkippedWindDown;
-(void)_adjustSessions;
-(void)_adjustSessionForSnoozedWakeUpAlarm;
-(void)_gatherSessions;
-(void)_adjustSessionForDelayedBedtime;
-(void)_gatherSessionsForOccurrence:(id)arg1 overrideOccurrence:(id)arg2 ;
-(void)_addSessionToTimelineWithWakeUpDate:(id)arg1 bedtimeDate:(id)arg2 windDownDate:(id)arg3 occurrence:(id)arg4 ;
-(id)_windDownDateForBedtimeDate:(id)arg1 ;
-(void)_adjustSessionForDismissedWakeUpAlarm;
-(id)buildTimelineWithOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
@end
