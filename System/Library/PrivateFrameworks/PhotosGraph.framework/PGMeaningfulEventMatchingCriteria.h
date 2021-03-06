/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMeaningfulEventCriteria.h>

@class PGGraphMomentNode;

@interface PGMeaningfulEventMatchingCriteria : PGMeaningfulEventCriteria {

	BOOL _interestingForMeaningInference;
	PGGraphMomentNode* _momentNode;

}

@property (assign,nonatomic) BOOL interestingForMeaningInference;              //@synthesize interestingForMeaningInference=_interestingForMeaningInference - In the implementation block
@property (nonatomic,readonly) PGGraphMomentNode * momentNode;                 //@synthesize momentNode=_momentNode - In the implementation block
-(double)_calculateMatchingScoreForPartOfDayWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 requiresStrictMatching:(BOOL)arg3 ;
-(id)initWithMoment:(id)arg1 ;
-(BOOL)interestingForMeaningInference;
-(void)_calculateMatchingScoreForScenesWithRequiredCriteria:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)_calculateMatchingScoreForLocationsWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(/*^block*/id)arg3 ;
-(PGGraphMomentNode *)momentNode;
-(void)setInterestingForMeaningInference:(BOOL)arg1 ;
-(id)debugDescription;
-(double)matchingScoreWithCriteria:(id)arg1 failed:(BOOL*)arg2 isReliable:(BOOL*)arg3 ;
-(void)_calculateMatchingScoreForPOIROIWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(/*^block*/id)arg3 ;
-(id)matchingResultWithCriteria:(id)arg1 ;
@end

