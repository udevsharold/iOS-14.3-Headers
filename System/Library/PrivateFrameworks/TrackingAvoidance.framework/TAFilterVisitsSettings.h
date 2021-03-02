/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface TAFilterVisitsSettings : NSObject {

	double _maxSuspiciousDuration;
	double _minInterVisitDistance;
	unsigned long long _minNSigmaBetweenVisits;
	double _entryDisplayOnBudget;
	double _exitDisplayOnBudget;
	NSSet* _sensitiveLOITypes;
	double _minObservationInterval;

}

@property (nonatomic,readonly) double maxSuspiciousDuration;                           //@synthesize maxSuspiciousDuration=_maxSuspiciousDuration - In the implementation block
@property (nonatomic,readonly) double minInterVisitDistance;                           //@synthesize minInterVisitDistance=_minInterVisitDistance - In the implementation block
@property (nonatomic,readonly) unsigned long long minNSigmaBetweenVisits;              //@synthesize minNSigmaBetweenVisits=_minNSigmaBetweenVisits - In the implementation block
@property (nonatomic,readonly) double entryDisplayOnBudget;                            //@synthesize entryDisplayOnBudget=_entryDisplayOnBudget - In the implementation block
@property (nonatomic,readonly) double exitDisplayOnBudget;                             //@synthesize exitDisplayOnBudget=_exitDisplayOnBudget - In the implementation block
@property (nonatomic,readonly) NSSet * sensitiveLOITypes;                              //@synthesize sensitiveLOITypes=_sensitiveLOITypes - In the implementation block
@property (nonatomic,readonly) double minObservationInterval;                          //@synthesize minObservationInterval=_minObservationInterval - In the implementation block
+(id)defaultVisitsSensitiveLOITypes;
+(double)_determinDefaultEntryDisplayOnBudget;
+(double)_determinDefaultExitDisplayOnBudget;
+(BOOL)_isLegacyHardware;
-(NSSet *)sensitiveLOITypes;
-(double)minObservationInterval;
-(id)sensitiveLOITypesToString;
-(unsigned long long)minNSigmaBetweenVisits;
-(double)maxSuspiciousDuration;
-(id)initWithMaxSuspiciousDurationOrDefault:(id)arg1 minInterVisitDistanceOrDefault:(id)arg2 minNSigmaBetweenVisitsOrDefault:(id)arg3 entryDisplayOnBudgetOrDefault:(id)arg4 exitDisplayOnBudgetOrDefault:(id)arg5 sensitiveLOITypesOrDefault:(id)arg6 minObservationIntervalOrDefault:(id)arg7 ;
-(id)initWithMaxSuspiciousDuration:(double)arg1 minInterVisitDistance:(double)arg2 minNSigmaBetweenVisits:(unsigned long long)arg3 entryDisplayOnBudget:(double)arg4 exitDisplayOnBudget:(double)arg5 sensitiveLOITypes:(id)arg6 minObservationInterval:(double)arg7 ;
-(double)entryDisplayOnBudget;
-(id)initWithDefaults;
-(double)exitDisplayOnBudget;
-(double)minInterVisitDistance;
@end
