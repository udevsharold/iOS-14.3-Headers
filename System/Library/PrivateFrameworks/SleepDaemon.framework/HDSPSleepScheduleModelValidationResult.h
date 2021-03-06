/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, HKSPSleepEventTimelineResults;

@interface HDSPSleepScheduleModelValidationResult : NSObject {

	BOOL _success;
	NSError* _error;
	HKSPSleepEventTimelineResults* _timelineResults;

}

@property (nonatomic,readonly) BOOL success;                                                 //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) HKSPSleepEventTimelineResults * timelineResults;              //@synthesize timelineResults=_timelineResults - In the implementation block
-(NSError *)error;
-(BOOL)success;
-(HKSPSleepEventTimelineResults *)timelineResults;
-(id)initWithSuccess:(BOOL)arg1 timelineResults:(id)arg2 error:(id)arg3 ;
@end

