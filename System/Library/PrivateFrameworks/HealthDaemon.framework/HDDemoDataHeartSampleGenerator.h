/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class HDProfile;

@interface HDDemoDataHeartSampleGenerator : HDDemoDataBaseSampleGenerator {

	BOOL _lastVO2MaxWorkoutWasActive;
	HDProfile* _profile;
	double _nextElectrocardiogramSampleTime;
	unsigned long long _nextElectrocardiogramClassification;
	double _nextRestingHeartRateSampleTime;
	double _nextWalkingHeartRateAverageSampleTime;
	double _lastRestingHeartRate;
	double _lastWalkingHeartRateAverage;
	double _nextVO2MaxSampleTime;
	double _lastVO2MaxValue;
	double _meanVO2MaxValue;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                          //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) double nextElectrocardiogramSampleTime;                              //@synthesize nextElectrocardiogramSampleTime=_nextElectrocardiogramSampleTime - In the implementation block
@property (assign,nonatomic) unsigned long long nextElectrocardiogramClassification;              //@synthesize nextElectrocardiogramClassification=_nextElectrocardiogramClassification - In the implementation block
@property (assign,nonatomic) double nextRestingHeartRateSampleTime;                               //@synthesize nextRestingHeartRateSampleTime=_nextRestingHeartRateSampleTime - In the implementation block
@property (assign,nonatomic) double nextWalkingHeartRateAverageSampleTime;                        //@synthesize nextWalkingHeartRateAverageSampleTime=_nextWalkingHeartRateAverageSampleTime - In the implementation block
@property (assign,nonatomic) double lastRestingHeartRate;                                         //@synthesize lastRestingHeartRate=_lastRestingHeartRate - In the implementation block
@property (assign,nonatomic) double lastWalkingHeartRateAverage;                                  //@synthesize lastWalkingHeartRateAverage=_lastWalkingHeartRateAverage - In the implementation block
@property (assign,nonatomic) double nextVO2MaxSampleTime;                                         //@synthesize nextVO2MaxSampleTime=_nextVO2MaxSampleTime - In the implementation block
@property (assign,nonatomic) double lastVO2MaxValue;                                              //@synthesize lastVO2MaxValue=_lastVO2MaxValue - In the implementation block
@property (assign,nonatomic) double meanVO2MaxValue;                                              //@synthesize meanVO2MaxValue=_meanVO2MaxValue - In the implementation block
@property (assign,nonatomic) BOOL lastVO2MaxWorkoutWasActive;                                     //@synthesize lastVO2MaxWorkoutWasActive=_lastVO2MaxWorkoutWasActive - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)init;
-(HDProfile *)profile;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setProfile:(id)arg1 provenance:(id)arg2 ;
-(double)_meanVO2MaxValueForDemoPerson:(id)arg1 date:(id)arg2 ;
-(void)_completeCardioFitnessOnboardingIfNecessaryForDemoPerson:(id)arg1 date:(id)arg2 ;
-(id)restingHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)walkingHeartRateAverageForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)electrocardiogramForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 ;
-(id)_generateSymptomSamplesForElectrocardiogram:(id)arg1 ;
-(id)vo2MaxValueForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 ;
-(double)_computeRestingHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)_computeWalkingHeartRateAverageForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(BOOL)_isVO2MaxWorkoutActive;
-(double)_computeVO2MaxValueForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)_generateElectrocardiogramForDemoPerson:(id)arg1 atTime:(double)arg2 classification:(unsigned long long)arg3 sampleDate:(id)arg4 ;
-(double)nextElectrocardiogramSampleTime;
-(void)setNextElectrocardiogramSampleTime:(double)arg1 ;
-(unsigned long long)nextElectrocardiogramClassification;
-(void)setNextElectrocardiogramClassification:(unsigned long long)arg1 ;
-(double)nextRestingHeartRateSampleTime;
-(void)setNextRestingHeartRateSampleTime:(double)arg1 ;
-(double)nextWalkingHeartRateAverageSampleTime;
-(void)setNextWalkingHeartRateAverageSampleTime:(double)arg1 ;
-(double)lastRestingHeartRate;
-(void)setLastRestingHeartRate:(double)arg1 ;
-(double)lastWalkingHeartRateAverage;
-(void)setLastWalkingHeartRateAverage:(double)arg1 ;
-(double)nextVO2MaxSampleTime;
-(void)setNextVO2MaxSampleTime:(double)arg1 ;
-(double)lastVO2MaxValue;
-(void)setLastVO2MaxValue:(double)arg1 ;
-(double)meanVO2MaxValue;
-(void)setMeanVO2MaxValue:(double)arg1 ;
-(BOOL)lastVO2MaxWorkoutWasActive;
-(void)setLastVO2MaxWorkoutWasActive:(BOOL)arg1 ;
@end

