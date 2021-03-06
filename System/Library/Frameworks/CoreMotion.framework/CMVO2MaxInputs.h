/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CMVO2MaxInputs : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long fRecordId;
	NSDate* fStartDate;
	double fMets;
	long long fMetSource;
	double fHeartRate;
	double fHeartRateConfidence;
	double fGrade;
	long long fGradeType;
	double fCadence;
	double fPace;
	BOOL fHasGPS;
	BOOL fHasStrideCal;
	long long fWorkoutType;

}

@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) double mets; 
@property (nonatomic,readonly) long long metSource; 
@property (nonatomic,readonly) double heartRate; 
@property (nonatomic,readonly) double heartRateConfidence; 
@property (nonatomic,readonly) double grade; 
@property (nonatomic,readonly) long long gradeType; 
@property (nonatomic,readonly) double cadence; 
@property (nonatomic,readonly) double pace; 
@property (nonatomic,readonly) BOOL hasGPS; 
@property (nonatomic,readonly) BOOL hasStrideCal; 
@property (nonatomic,readonly) long long workoutType; 
+(BOOL)supportsSecureCoding;
+(VO2MaxInput)VO2MaxInputFromCMVO2MaxInputs:(id)arg1 ;
-(double)heartRate;
-(double)mets;
-(double)pace;
-(double)grade;
-(id)initWithRecordId:(unsigned long long)arg1 startDate:(id)arg2 mets:(double)arg3 metSource:(long long)arg4 heartRate:(double)arg5 heartRateConfidence:(double)arg6 grade:(double)arg7 gradeType:(long long)arg8 cadence:(double)arg9 pace:(double)arg10 hasGPS:(BOOL)arg11 hasStrideCal:(BOOL)arg12 workoutType:(long long)arg13 ;
-(unsigned long long)recordId;
-(BOOL)hasGPS;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)cadence;
-(long long)workoutType;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)startDate;
-(long long)gradeType;
-(long long)metSource;
-(BOOL)hasStrideCal;
-(id)initWithSample:(VO2MaxInput)arg1 ;
-(double)heartRateConfidence;
-(void)encodeWithCoder:(id)arg1 ;
@end

