/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKHeartRateSummaryStatistics.h>

@class NSDictionary;

@interface HKHeartRateSummaryWorkoutRecoveryStatistics : HKHeartRateSummaryStatistics {

	unsigned long long _workoutActivityType;
	NSDictionary* _perMinuteReadings;

}

@property (setter=_setPerMinuteReadings:,nonatomic,retain) NSDictionary * perMinuteReadings;              //@synthesize perMinuteReadings=_perMinuteReadings - In the implementation block
@property (nonatomic,readonly) unsigned long long workoutActivityType;                                    //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 workoutUUID:(id)arg3 workoutActivityType:(unsigned long long)arg4 ;
-(NSDictionary *)perMinuteReadings;
-(void)_setPerMinuteReadings:(id)arg1 ;
-(unsigned long long)workoutActivityType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

