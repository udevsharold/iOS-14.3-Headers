/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, ENRegion, NSNumber;

@interface ENExposureClassification : NSObject <NSSecureCoding> {

	unsigned char _index;
	NSString* _name;
	NSDate* _date;
	ENRegion* _region;
	NSNumber* _confirmedTestPerDaySumERVAboveThreshold;
	NSNumber* _clinicalDiagnosisPerDaySumERVAboveThreshold;
	NSNumber* _selfReportPerDaySumERVAboveThreshold;
	NSNumber* _recursivePerDaySumERVAboveThreshold;
	NSNumber* _perDayMaxERVAboveThreshold;
	NSNumber* _perDaySumERVAboveThreshold;
	NSNumber* _weightedDurationAtAttenuationAboveThreshold;

}

@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDate * date;                                                       //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned char index;                                               //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) ENRegion * region;                                                   //@synthesize region=_region - In the implementation block
@property (nonatomic,copy) NSNumber * confirmedTestPerDaySumERVAboveThreshold;                  //@synthesize confirmedTestPerDaySumERVAboveThreshold=_confirmedTestPerDaySumERVAboveThreshold - In the implementation block
@property (nonatomic,copy) NSNumber * clinicalDiagnosisPerDaySumERVAboveThreshold;              //@synthesize clinicalDiagnosisPerDaySumERVAboveThreshold=_clinicalDiagnosisPerDaySumERVAboveThreshold - In the implementation block
@property (nonatomic,copy) NSNumber * selfReportPerDaySumERVAboveThreshold;                     //@synthesize selfReportPerDaySumERVAboveThreshold=_selfReportPerDaySumERVAboveThreshold - In the implementation block
@property (nonatomic,copy) NSNumber * recursivePerDaySumERVAboveThreshold;                      //@synthesize recursivePerDaySumERVAboveThreshold=_recursivePerDaySumERVAboveThreshold - In the implementation block
@property (nonatomic,copy) NSNumber * perDayMaxERVAboveThreshold;                               //@synthesize perDayMaxERVAboveThreshold=_perDayMaxERVAboveThreshold - In the implementation block
@property (nonatomic,copy) NSNumber * perDaySumERVAboveThreshold;                               //@synthesize perDaySumERVAboveThreshold=_perDaySumERVAboveThreshold - In the implementation block
@property (nonatomic,copy) NSNumber * weightedDurationAtAttenuationAboveThreshold;              //@synthesize weightedDurationAtAttenuationAboveThreshold=_weightedDurationAtAttenuationAboveThreshold - In the implementation block
@property (nonatomic,readonly) BOOL anyThresholdsExceeded; 
+(BOOL)supportsSecureCoding;
-(void)setRegion:(ENRegion *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(ENRegion *)region;
-(void)setIndex:(unsigned char)arg1 ;
-(NSDate *)date;
-(unsigned char)index;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)anyThresholdsExceeded;
-(NSNumber *)confirmedTestPerDaySumERVAboveThreshold;
-(void)setConfirmedTestPerDaySumERVAboveThreshold:(NSNumber *)arg1 ;
-(NSNumber *)clinicalDiagnosisPerDaySumERVAboveThreshold;
-(void)setClinicalDiagnosisPerDaySumERVAboveThreshold:(NSNumber *)arg1 ;
-(NSNumber *)selfReportPerDaySumERVAboveThreshold;
-(void)setSelfReportPerDaySumERVAboveThreshold:(NSNumber *)arg1 ;
-(NSNumber *)recursivePerDaySumERVAboveThreshold;
-(void)setRecursivePerDaySumERVAboveThreshold:(NSNumber *)arg1 ;
-(NSNumber *)perDayMaxERVAboveThreshold;
-(void)setPerDayMaxERVAboveThreshold:(NSNumber *)arg1 ;
-(NSNumber *)perDaySumERVAboveThreshold;
-(void)setPerDaySumERVAboveThreshold:(NSNumber *)arg1 ;
-(NSNumber *)weightedDurationAtAttenuationAboveThreshold;
-(void)setWeightedDurationAtAttenuationAboveThreshold:(NSNumber *)arg1 ;
@end
