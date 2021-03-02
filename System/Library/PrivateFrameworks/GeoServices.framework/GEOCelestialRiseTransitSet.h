/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDate;

@interface GEOCelestialRiseTransitSet : NSObject {

	double _julianDay;
	CAARiseTransitSetDetails _riseTransitSet;
	NSDate* _rise;
	NSDate* _transit;
	NSDate* _set;

}

@property (nonatomic,readonly) double julianDay;                                     //@synthesize julianDay=_julianDay - In the implementation block
@property (nonatomic,readonly) CAARiseTransitSetDetails riseTransitSet;              //@synthesize riseTransitSet=_riseTransitSet - In the implementation block
@property (nonatomic,readonly) BOOL isTransitAboveHorizon; 
@property (nonatomic,readonly) NSDate * rise; 
@property (nonatomic,readonly) NSDate * transit; 
@property (nonatomic,readonly) NSDate * set; 
-(NSDate *)set;
-(NSDate *)rise;
-(id)description;
-(double)julianDay;
-(NSDate *)transit;
-(id)_dateFromOffset:(double)arg1 ;
-(int)_numberOfEvents;
-(id)initWithJulianDay:(double)arg1 riseTransitSet:(CAARiseTransitSetDetails)arg2 ;
-(BOOL)isTransitAboveHorizon;
-(double)_oldestEventInJulianDay;
-(CAARiseTransitSetDetails)riseTransitSet;
@end
