/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKComparisonFilter.h>

@interface _HKWorkoutComparisonFilter : _HKComparisonFilter
+(BOOL)isSupportedKeyPath:(id)arg1 ;
+(id)allowedValueClassesForKeyPath:(id)arg1 ;
+(BOOL)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2 ;
+(long long)enumRepresentationForKeyPath:(id)arg1 ;
+(BOOL)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
+(BOOL)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithDuration:(double)arg1 ;
-(BOOL)_acceptsWorkoutWithTotalDistance:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithTotalEnergyBurned:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithTotalFlightsClimbed:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithTotalSwimmingStrokeCount:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithActivityType:(unsigned long long)arg1 ;
-(BOOL)_acceptsWorkoutWithGoal:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithGoalType:(unsigned long long)arg1 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
@end

