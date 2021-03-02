/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKObjectType.h>

@interface HKSampleType : HKObjectType

@property (nonatomic,readonly) BOOL isMaximumDurationRestricted; 
@property (nonatomic,readonly) double maximumAllowedDuration; 
@property (nonatomic,readonly) BOOL isMinimumDurationRestricted; 
@property (nonatomic,readonly) double minimumAllowedDuration; 
+(id)_sampleTypeWithCode:(long long)arg1 ;
+(id)medicalRecordTypesWithOptions:(unsigned long long)arg1 ;
+(id)medicalRecordTypes;
-(double)maximumAllowedDuration;
-(BOOL)isMaximumDurationRestricted;
-(double)_maximumAllowedDuration;
-(double)_minimumAllowedDuration;
-(BOOL)_validateStartDate:(double)arg1 endDate:(double)arg2 error:(id*)arg3 ;
-(BOOL)isMinimumDurationRestricted;
-(double)minimumAllowedDuration;
-(id)_earliestAllowedStartDateForSampleOverlappingDate:(id)arg1 ;
-(BOOL)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id*)arg3 ;
@end
