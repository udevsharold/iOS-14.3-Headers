/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChatService/BCSMeasurement.h>

@class NSDate, NSArray;

@interface BCSTimingMeasurement : BCSMeasurement {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _realTimeMeasurementHandlers;
	long long _timingMeasurementType;

}

@property (retain) NSDate * startDate;                                             //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSArray * realTimeMeasurementHandlers;              //@synthesize realTimeMeasurementHandlers=_realTimeMeasurementHandlers - In the implementation block
@property (nonatomic,readonly) long long timingMeasurementType;                    //@synthesize timingMeasurementType=_timingMeasurementType - In the implementation block
@property (nonatomic,readonly) double duration; 
+(id)newTimingMeasurement:(long long)arg1 withHandlers:(id)arg2 ;
-(void)begin;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)end;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(double)duration;
-(long long)timingMeasurementType;
-(id)_initWithType:(long long)arg1 handlers:(id)arg2 ;
-(NSArray *)realTimeMeasurementHandlers;
@end

