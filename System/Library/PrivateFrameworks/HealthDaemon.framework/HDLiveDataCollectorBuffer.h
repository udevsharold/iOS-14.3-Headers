/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDSensorDatum;
@class NSMutableArray;

@interface HDLiveDataCollectorBuffer : NSObject {

	NSMutableArray* _buffer;
	id<HDSensorDatum> _lastProcessedDatum;
	/*^block*/id _objectCreationBlock;
	/*^block*/id _sensorDatumComparisonBlock;
	double _bufferAggregationInterval;

}

@property (nonatomic,copy) id objectCreationBlock;                          //@synthesize objectCreationBlock=_objectCreationBlock - In the implementation block
@property (nonatomic,copy) id sensorDatumComparisonBlock;                   //@synthesize sensorDatumComparisonBlock=_sensorDatumComparisonBlock - In the implementation block
@property (assign,nonatomic) double bufferAggregationInterval;              //@synthesize bufferAggregationInterval=_bufferAggregationInterval - In the implementation block
-(id)init;
-(id)_processBufferIfSensorDatumInvalid:(id)arg1 ;
-(BOOL)_bufferLengthAchieved:(double)arg1 buffer:(id)arg2 lastProcessedDatum:(id)arg3 ;
-(id)_createObjectsFromBuffer:(id)arg1 lastProcessedDatum:(id)arg2 ;
-(void)_resetBuffer;
-(long long)_bufferStateForSensorDatum:(id)arg1 ;
-(id)addSensorDatum:(id)arg1 ;
-(id)objectCreationBlock;
-(void)setObjectCreationBlock:(id)arg1 ;
-(id)sensorDatumComparisonBlock;
-(void)setSensorDatumComparisonBlock:(id)arg1 ;
-(double)bufferAggregationInterval;
-(void)setBufferAggregationInterval:(double)arg1 ;
@end
