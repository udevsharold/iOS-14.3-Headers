/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ATXAnchorModelHyperParameters : NSObject {

	NSDictionary* _parameters;

}
-(double)maxDurationForAnchorModelPredictionInSecondsForPhase3;
-(id)abGroup;
-(id)init;
-(double)minPosteriorProbabilityToIgnoreClassConditionalProbabilityForCandidateForPhase1;
-(double)minPosteriorProbabilityForCandidateForPhase1;
-(double)minClassConditionalProbabilityForMediumConfidencePredictionForAnchor:(id)arg1 ;
-(double)minPosteriorProbabilityForHighConfidencePredictionForAnchor:(id)arg1 ;
-(double)secondsBeforeHistoricalStartDateToPredictCandidate;
-(double)mediumBlendingConfidenceScoreThreshold;
-(double)highBlendingConfidenceScoreThreshold;
-(double)maxSecondsSinceCandidateOccurrenceToConsiderCandidateForPrediction;
-(double)percentileForStartOffsetFromAnchorForPhase3;
-(double)minClassConditionalProbabilityForCandidateForPhase1;
-(double)minPosteriorProbabilityForMediumConfidencePredictionForAnchor:(id)arg1 ;
-(double)ratioForLeafNodeDecision;
-(id)enabledAnchors;
-(long long)minUniqueAnchorOccurrencesForAnchorForPhase1;
-(double)minDurationForAnchorModelPredictionInSecondsForPhase3;
-(double)percentileForEndOffsetFromAnchorForPhase3;
-(long long)candidateClassifierTypeForPhase2;
-(double)minClassConditionalProbabilityForHighConfidencePredictionForAnchor:(id)arg1 ;
-(double)idleTimeEndAnchorMinimumSecondsForBeingIdle;
-(double)maxTrainingAgeInSecondsToConsiderForRetraining;
-(long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForHighConfidencePredictionForAnchor:(id)arg1 ;
-(long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForMediumConfidencePredictionForAnchor:(id)arg1 ;
@end
