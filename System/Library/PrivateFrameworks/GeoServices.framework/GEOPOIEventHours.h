/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval, NSArray;

@interface GEOPOIEventHours : NSObject <NSSecureCoding> {

	NSDateInterval* _dateInterval;
	NSArray* _hours;

}

@property (nonatomic,retain) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,retain) NSArray * hours;                            //@synthesize hours=_hours - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventHoursForDateTimeRanges:(id)arg1 ;
-(void)setHours:(NSArray *)arg1 ;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(id)init;
-(NSDateInterval *)dateInterval;
-(NSArray *)hours;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDateTimeRange:(id)arg1 ;
-(id)initWithDateInterval:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
