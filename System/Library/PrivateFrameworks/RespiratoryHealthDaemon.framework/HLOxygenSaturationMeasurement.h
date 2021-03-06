/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateInterval, NSNumber, HLHeartRateData;

@interface HLOxygenSaturationMeasurement : NSObject {

	NSDateInterval* _dateInterval;
	NSNumber* _oxygenSaturationPercentage;
	HLHeartRateData* _averageHeartRateData;
	NSNumber* _pressureInKilopascals;

}

@property (nonatomic,retain) NSDateInterval * dateInterval;                       //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,retain) NSNumber * oxygenSaturationPercentage;               //@synthesize oxygenSaturationPercentage=_oxygenSaturationPercentage - In the implementation block
@property (nonatomic,retain) HLHeartRateData * averageHeartRateData;              //@synthesize averageHeartRateData=_averageHeartRateData - In the implementation block
@property (nonatomic,retain) NSNumber * pressureInKilopascals;                    //@synthesize pressureInKilopascals=_pressureInKilopascals - In the implementation block
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(NSDateInterval *)dateInterval;
-(NSNumber *)oxygenSaturationPercentage;
-(void)setOxygenSaturationPercentage:(NSNumber *)arg1 ;
-(HLHeartRateData *)averageHeartRateData;
-(void)setAverageHeartRateData:(HLHeartRateData *)arg1 ;
-(NSNumber *)pressureInKilopascals;
-(void)setPressureInKilopascals:(NSNumber *)arg1 ;
@end

