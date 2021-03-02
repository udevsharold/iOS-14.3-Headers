/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@class RTStateModelEarliestLatestEl, NSObject, RTMetricManager, NSMutableDictionary;

@interface RTStateModel : NSObject {

	RTStateModelEarliestLatestEl* _earliestLatestStateModelEl;
	NSObject*<OS_dispatch_queue> _queue;
	RTMetricManager* _metricManager;
	NSMutableDictionary* _stateModelLut;

}

@property (nonatomic,retain) RTStateModelEarliestLatestEl * earliestLatestStateModelEl;              //@synthesize earliestLatestStateModelEl=_earliestLatestStateModelEl - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                        //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stateModelLut;                                    //@synthesize stateModelLut=_stateModelLut - In the implementation block
+(double)getOutOfStateConfidenceWithOneStatePred:(id)arg1 ;
+(double)getDistfromLat:(double)arg1 fromLon:(double)arg2 toLat:(double)arg3 toLon:(double)arg4 ;
+(double)deriveClusterThresholdFromUncClustAplha:(double)arg1 andUncClustBeta:(double)arg2 ;
-(RTMetricManager *)metricManager;
-(RTStateModelEarliestLatestEl *)earliestLatestStateModelEl;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(unsigned long long)calculateNumberOfNearbyLOIs;
-(id)init;
-(double)calculateConfidenceWithNearbyLOIs:(unsigned long long)arg1 impossibleTransitions:(unsigned long long)arg2 ;
-(void)logStateModelEntryExitsStandardDeviations;
-(NSMutableDictionary *)stateModelLut;
-(void)setStateModelLut:(NSMutableDictionary *)arg1 ;
-(CLLocationCoordinate2D)getEndingCoordinateWithStartingLocation:(id)arg1 distance:(double)arg2 ;
-(BOOL)anyClusterOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 andEnteredEarlierThan:(double)arg3 ;
-(unsigned long long)calculateDominantLocationsWithOptions:(id)arg1 ;
-(id)_getNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 ;
-(void)logStateModelAvailabilityMetricWithAvailability:(unsigned long long)arg1 precisionRecall:(unsigned)arg2 ;
-(unsigned)calculateStateModelAvailabilityPrecisionRecallOnDate:(id)arg1 predictedLocations:(id)arg2 isHighConfidenceOnly:(BOOL)arg3 ;
-(void)logStateModelAvailabilityMetricWithIntervalSinceLastUpdate:(double)arg1 untilNow:(id)arg2 ;
-(void)setEarliestLatestStateModelEl:(RTStateModelEarliestLatestEl *)arg1 ;
-(double)getMaxDistFromInterval:(double)arg1 withVelocity:(double)arg2 ;
-(id)getAllLOIsWithinDistance:(double)arg1 ofLocation:(id)arg2 ;
-(id)getOOStClusterData:(double)arg1 predictionWindow:(double)arg2 numOfWeeks:(int)arg3 refLoc:(id)arg4 ;
-(id)getPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 ;
-(id)getPredictedLocationsOfInterestWithCriteria:(id)arg1 ;
-(void)logStateModelLengthMetric;
-(id)findClusterWithLocation:(id)arg1 ;
-(void)updateInternalState;
-(unsigned long long)calculateNumberOfImpossibleTransitions;
-(void)logStateModelConfidenceMetric;
-(double)getNumberOfWeeksInStateModel;
-(id)getPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_getRecursivelyAllLOIsWithinDistance:(double)arg1 ofLocation:(id)arg2 previouslyFoundLocationsOfInterest:(id)arg3 ;
-(id)getNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 ;
-(id)initWithLearnedLocationsOfInterest:(id)arg1 metricManager:(id)arg2 queue:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)collectMetricsWithIntervalSinceLastUpdate:(double)arg1 ;
-(id)getMostRecentLocationForDate:(id)arg1 ;
-(void)logStateModelDominantPlacesMetric;
-(id)getLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 ;
@end
