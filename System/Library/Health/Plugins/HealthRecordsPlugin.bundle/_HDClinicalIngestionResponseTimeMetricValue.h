/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSMutableArray, NSArray;

@interface _HDClinicalIngestionResponseTimeMetricValue : NSObject {

	NSNumber* _min;
	NSNumber* _max;
	NSNumber* _median;
	NSMutableArray* _mutableResponseTimes;

}

@property (nonatomic,retain) NSMutableArray * mutableResponseTimes;              //@synthesize mutableResponseTimes=_mutableResponseTimes - In the implementation block
@property (nonatomic,readonly) NSArray * responseTimes; 
@property (nonatomic,copy,readonly) NSNumber * min;                              //@synthesize min=_min - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * median;                           //@synthesize median=_median - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * max;                              //@synthesize max=_max - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * analyticsString; 
-(id)init;
-(NSNumber *)median;
-(NSNumber *)min;
-(id)debugDescription;
-(void)_calculate;
-(NSArray *)responseTimes;
-(NSNumber *)max;
-(NSNumber *)analyticsString;
-(id)initWithResponseTime:(unsigned long long)arg1 ;
-(void)addResponseTime:(unsigned long long)arg1 ;
-(void)addResponseTimesFromMetricValue:(id)arg1 ;
-(NSMutableArray *)mutableResponseTimes;
-(void)setMutableResponseTimes:(NSMutableArray *)arg1 ;
@end

