/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXMMAppPredictionExpert : NSObject
+(id)notificationIdentifier;
+(Class)supportedAnchorClass;
+(unsigned)predictionReasonForExpert;
+(id)anchorTypeForExpert;
+(BOOL)shouldPredicateOnStartDateForTrigger;
+(long long)dateBufferForTriggerEvent;
+(void)tagEventWithLOIForEvent:(id)arg1 ;
+(id)trainSubExpertWithCorrelatedEvents:(id)arg1 appLaunchCountedSet:(id)arg2 ;
+(id)pathToPredictionTable;
+(void)trainSubExpertWithCorrelatedEvents:(id)arg1 indices:(id)arg2 predicates:(id)arg3 appLaunchCountedSet:(id)arg4 predictionTable:(id)arg5 ;
+(void)serializeAndWritePredictionTable:(id)arg1 ;
+(id)fetchAnchorOccurrences;
+(id)correlateTriggerEvents:(id)arg1 withAppLaunches:(id)arg2 ;
+(id)createTrainingDataForSubExpertsWithCorrelatedEvents:(id)arg1 ;
+(void)trainSubExpertsWithTrainingData:(id)arg1 correlatedEvents:(id)arg2 appLaunchCountedSet:(id)arg3 ;
+(id)predictionTableFromCache;
+(BOOL)isExpertEnabledForPredictions;
+(void)logTriggeredMMMetricsEntryForAnchorType:(long long)arg1 ;
+(BOOL)shouldHandleTriggerEventWithRateLimiter:(id)arg1 ;
+(void)fetchAndHandleTriggerEvent;
+(id)predictionTable;
+(id)fetchPredictionsForTriggerEvent:(id)arg1 ;
+(void)logPredictedScoreMMMetricsEntryForBundle:(id)arg1 anchorType:(long long)arg2 score:(double)arg3 ;
+(void)logPredictedCountMMMetricsEntryForAnchorType:(long long)arg1 numPredictions:(int)arg2 ;
+(void)broadcastMMPredictionsForEvent:(id)arg1 predictions:(id)arg2 ;
+(int)mmAnchorTypeToMMProtobufAnchor:(long long)arg1 ;
+(id)sampleEventForExpert;
+(void)trainExpertWithAppLaunchEvents:(id)arg1 appLaunchCountedSet:(id)arg2 ;
+(void)setupEventListenerForInferenceWithContext:(id)arg1 rateLimiter:(id)arg2 ;
-(id)init;
@end

