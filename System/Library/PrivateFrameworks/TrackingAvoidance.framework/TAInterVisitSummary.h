/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateInterval, NSArray, TASPAdvertisement;

@interface TAInterVisitSummary : NSObject {

	NSDateInterval* _deviceObservationInterval;
	NSArray* _deviceLocationHistory;
	TASPAdvertisement* _latestObservation;

}

@property (nonatomic,readonly) NSDateInterval * deviceObservationInterval;              //@synthesize deviceObservationInterval=_deviceObservationInterval - In the implementation block
@property (nonatomic,readonly) NSArray * deviceLocationHistory;                         //@synthesize deviceLocationHistory=_deviceLocationHistory - In the implementation block
@property (nonatomic,readonly) TASPAdvertisement * latestObservation;                   //@synthesize latestObservation=_latestObservation - In the implementation block
-(TASPAdvertisement *)latestObservation;
-(NSArray *)deviceLocationHistory;
-(NSDateInterval *)deviceObservationInterval;
-(id)initWithObservationInterval:(id)arg1 andLocationHistory:(id)arg2 andLastObservation:(id)arg3 ;
@end
