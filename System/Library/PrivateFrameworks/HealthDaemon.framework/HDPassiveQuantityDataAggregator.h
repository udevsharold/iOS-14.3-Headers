/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDPassiveDataAggregator.h>

@class HKQuantityType;

@interface HDPassiveQuantityDataAggregator : HDPassiveDataAggregator {

	HKQuantityType* _quantityType;

}

@property (nonatomic,copy,readonly) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
-(HKQuantityType *)quantityType;
-(Class)sensorDatumClass;
-(id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2 ;
-(id)dataObjectsFromSensorDatum:(id)arg1 error:(id*)arg2 ;
-(id)objectType;
@end
