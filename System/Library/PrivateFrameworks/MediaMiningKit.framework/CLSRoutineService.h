/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class CLSLocationOfInterestCache, NSDateInterval, NSMutableSet;

@interface CLSRoutineService : NSObject {

	CLSLocationOfInterestCache* _visitsCache;
	BOOL _routineIsAvailable;
	NSDateInterval* _fetchDateInterval;
	NSMutableSet* _pendingPinningVisitIdentifiers;
	CLSRoutineServiceStatisticsStruct _statistics;

}

@property (nonatomic,retain) NSDateInterval * fetchDateInterval;                         //@synthesize fetchDateInterval=_fetchDateInterval - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingPinningVisitIdentifiers;              //@synthesize pendingPinningVisitIdentifiers=_pendingPinningVisitIdentifiers - In the implementation block
@property (nonatomic,readonly) CLSLocationOfInterestCache * visitsCache;                 //@synthesize visitsCache=_visitsCache - In the implementation block
@property (assign,nonatomic) BOOL routineIsAvailable;                                    //@synthesize routineIsAvailable=_routineIsAvailable - In the implementation block
@property (readonly) CLSRoutineServiceStatisticsStruct statistics;                       //@synthesize statistics=_statistics - In the implementation block
-(CLSRoutineServiceStatisticsStruct)statistics;
-(NSDateInterval *)fetchDateInterval;
-(id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg1 ;
-(id)initWithFetchDateInterval:(id)arg1 ;
-(id)_placemarksFromLocationsOfInterest:(id)arg1 ;
-(double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)arg1 ;
-(id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(CLSLocationOfInterestCache *)visitsCache;
-(void)_pinPendingVisits;
-(id)_fetchLocationOfInterestTransitionsWithinDateInterval:(id)arg1 routineManager:(id)arg2 ;
-(id)_fetchLocationsOfInterestWithinDateInterval:(id)arg1 routineManager:(id)arg2 ;
-(void)setFetchDateInterval:(NSDateInterval *)arg1 ;
-(BOOL)hasLocationsOfInterestInformation;
-(id)locationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(id)placemarksOfInterestOfType:(long long)arg1 ;
-(id)locationsOfInterestOfType:(long long)arg1 ;
-(void)postProcessLocationsOfInterest;
-(void)setPendingPinningVisitIdentifiers:(NSMutableSet *)arg1 ;
-(void)setRoutineIsAvailable:(BOOL)arg1 ;
-(id)locationOfInterestAtLocation:(id)arg1 ;
-(void)invalidateLocationsOfInterest;
-(BOOL)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(BOOL)routineIsAvailable;
-(unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)arg1 ;
-(void)_buildLocationsOfInterestCache;
-(long long)predominantTransportationModeForDateInterval:(id)arg1 confidence:(double*)arg2 ;
-(NSMutableSet *)pendingPinningVisitIdentifiers;
@end

