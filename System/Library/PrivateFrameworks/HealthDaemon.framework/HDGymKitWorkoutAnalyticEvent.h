/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HDGymKitWorkoutAnalyticEvent : NSObject {

	unsigned long long _fitnessMachineType;
	NSString* _manufacturer;
	long long _timeToBeginExperience;
	long long _workoutEndErrorCode;

}

@property (assign,nonatomic) unsigned long long fitnessMachineType;              //@synthesize fitnessMachineType=_fitnessMachineType - In the implementation block
@property (nonatomic,retain) NSString * manufacturer;                            //@synthesize manufacturer=_manufacturer - In the implementation block
@property (assign,nonatomic) long long timeToBeginExperience;                    //@synthesize timeToBeginExperience=_timeToBeginExperience - In the implementation block
@property (assign,nonatomic) long long workoutEndErrorCode;                      //@synthesize workoutEndErrorCode=_workoutEndErrorCode - In the implementation block
-(void)setManufacturer:(NSString *)arg1 ;
-(NSString *)manufacturer;
-(unsigned long long)fitnessMachineType;
-(void)setFitnessMachineType:(unsigned long long)arg1 ;
-(long long)timeToBeginExperience;
-(void)setTimeToBeginExperience:(long long)arg1 ;
-(long long)workoutEndErrorCode;
-(void)setWorkoutEndErrorCode:(long long)arg1 ;
@end

