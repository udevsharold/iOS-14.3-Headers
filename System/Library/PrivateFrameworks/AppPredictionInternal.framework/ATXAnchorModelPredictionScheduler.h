/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATXAnchorModelPredictionForwarderProtocol, ATXPETEventTracker2Protocol;
@class _PASLock, ATXAnchorModelHyperParameters, NSDate, NSUserDefaults;

@interface ATXAnchorModelPredictionScheduler : NSObject {

	_PASLock* _schedulerLock;
	id<ATXAnchorModelPredictionForwarderProtocol> _predictionForwarder;
	ATXAnchorModelHyperParameters* _hyperParameters;
	id<ATXPETEventTracker2Protocol> _tracker;
	NSDate* _now;
	NSUserDefaults* _defaults;

}
-(id)predictionsValidNow;
-(id)earlierDateInFuture:(id)arg1 earliestDateSoFar:(id)arg2 now:(id)arg3 ;
-(id)init;
-(void)readPredictionsFromUserDefaultsOrInitialize;
-(void)scheduleExistingPredictions;
-(BOOL)dateIsInFuture:(id)arg1 now:(id)arg2 ;
-(id)deduplicatedPredictions:(id)arg1 ;
-(id)predictions;
-(id)criteriaForJobOnDate:(id)arg1 ;
-(void)forwardPredictionUpdates;
-(void)clearPredictionsForAnchor:(id)arg1 ;
-(void)persistPredictions:(id)arg1 anchor:(id)arg2 ;
-(void)logPredictionsGeneratedMetricsWithAnchorModelPredictions:(id)arg1 ;
-(id)deserializePredictionsDataOrInitializeDictionary:(id)arg1 ;
-(void)registerXPCActivityForPredictionUpdateWithCriteria:(id)arg1 ;
-(id)now;
-(void)writePredictionsToUserDefaults;
-(void)forwardPredictionUpdatesOnDate:(id)arg1 ;
-(id)predictionsWithTimeIntervalOverlappingWithCurrentTime;
-(id)predictionsAfterFilteringInactiveAnchors:(id)arg1 ;
-(id)initWithPredictionForwarder:(id)arg1 hyperParameters:(id)arg2 tracker:(id)arg3 now:(id)arg4 ;
-(void)scheduleNextPredictionUpdate;
-(void)schedulePredictions:(id)arg1 anchor:(id)arg2 ;
-(void)initializeLock;
-(id)serializePredictions;
-(id)dateOfSoonestUpcomingPredictionChange;
@end

