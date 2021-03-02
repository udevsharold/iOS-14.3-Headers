/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSArray, NSDate, NSDictionary;

@interface ENExposureInfo : NSObject <CUXPCCodable> {

	unsigned char _attenuationValue;
	unsigned char _totalRiskScore;
	unsigned char _transmissionRiskLevel;
	unsigned _diagnosisReportType;
	NSArray* _attenuationDurations;
	NSDate* _date;
	long long _daysSinceOnsetOfSymptoms;
	double _duration;
	NSDictionary* _metadata;
	double _totalRiskScoreFullRange;

}

@property (assign,nonatomic) long long daysSinceOnsetOfSymptoms;               //@synthesize daysSinceOnsetOfSymptoms=_daysSinceOnsetOfSymptoms - In the implementation block
@property (assign,nonatomic) unsigned diagnosisReportType;                     //@synthesize diagnosisReportType=_diagnosisReportType - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                            //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSArray * attenuationDurations;                     //@synthesize attenuationDurations=_attenuationDurations - In the implementation block
@property (assign,nonatomic) unsigned char attenuationValue;                   //@synthesize attenuationValue=_attenuationValue - In the implementation block
@property (nonatomic,copy) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned char totalRiskScore;                     //@synthesize totalRiskScore=_totalRiskScore - In the implementation block
@property (assign,nonatomic) double totalRiskScoreFullRange;                   //@synthesize totalRiskScoreFullRange=_totalRiskScoreFullRange - In the implementation block
@property (assign,nonatomic) unsigned char transmissionRiskLevel;              //@synthesize transmissionRiskLevel=_transmissionRiskLevel - In the implementation block
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)init;
-(NSDictionary *)metadata;
-(void)setDuration:(double)arg1 ;
-(NSDate *)date;
-(void)encodeWithXPCObject:(id)arg1 ;
-(id)description;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(double)duration;
-(unsigned char)transmissionRiskLevel;
-(long long)daysSinceOnsetOfSymptoms;
-(unsigned)diagnosisReportType;
-(void)setTransmissionRiskLevel:(unsigned char)arg1 ;
-(void)setDaysSinceOnsetOfSymptoms:(long long)arg1 ;
-(void)setDiagnosisReportType:(unsigned)arg1 ;
-(unsigned char)attenuationValue;
-(NSArray *)attenuationDurations;
-(void)setAttenuationDurations:(NSArray *)arg1 ;
-(void)setAttenuationValue:(unsigned char)arg1 ;
-(unsigned char)totalRiskScore;
-(void)setTotalRiskScore:(unsigned char)arg1 ;
-(double)totalRiskScoreFullRange;
-(void)setTotalRiskScoreFullRange:(double)arg1 ;
@end
