/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSDate : NSObject <NSCopying, NSSecureCoding>

@property (readonly) double timeIntervalSinceReferenceDate; 
+(id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2 ;
+(id)dateWithNaturalLanguageString:(id)arg1 ;
+(id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dateWithString:(id)arg1 ;
+(id)dateWithDate:(id)arg1 ;
+(id)dateWithTimeIntervalSinceReferenceDate:(double)arg1 ;
+(id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
+(id)dateWithTimeIntervalSince1970:(double)arg1 ;
+(id)dateWithTimeIntervalSinceNow:(double)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)distantFuture;
+(id)date;
+(id)now;
+(double)timeIntervalSinceReferenceDate;
+(id)distantPast;
-(id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3 ;
-(id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2 ;
-(BOOL)_web_isToday;
-(id)initWithCoder:(id)arg1 ;
-(long long)_web_compareDay:(id)arg1 ;
-(id)_web_RFC1123DateString;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)bucketToRoundingFactor:(unsigned)arg1 ;
-(double)timeIntervalSince1970WithBucket:(unsigned)arg1 ;
-(id)initWithString:(id)arg1 ;
-(BOOL)isNSDate__;
-(BOOL)isInToday;
-(BOOL)isInTomorrow;
-(BOOL)isEqualToDate:(id)arg1 ;
-(BOOL)isInYesterday;
-(id)addTimeInterval:(double)arg1 ;
-(double)timeIntervalSinceDate:(id)arg1 ;
-(BOOL)isInSameDayAsDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 toUnitGranularity:(unsigned long long)arg2 ;
-(id)dateByAddingTimeInterval:(double)arg1 ;
-(long long)compare:(id)arg1 toUnitGranularity:(unsigned long long)arg2 ;
-(id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
-(id)initWithTimeIntervalSince1970:(double)arg1 ;
-(id)initWithTimeIntervalSinceNow:(double)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timeIntervalSinceNow;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(double)timeIntervalSinceReferenceDate;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)earlierDate:(id)arg1 ;
-(id)laterDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)timeIntervalSince1970;
@end
