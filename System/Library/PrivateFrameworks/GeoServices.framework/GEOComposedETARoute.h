/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEORouteHypothesisMonitorETAProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray, GEOETARoute, GEOETATrafficUpdateWaypointRoute;

@interface GEOComposedETARoute : NSObject <_GEORouteHypothesisMonitorETAProvider, NSSecureCoding> {

	NSUUID* _uniqueRouteID;
	NSUUID* _etauResponseID;
	NSArray* _legs;
	BOOL _hasValidTravelDurations;
	double _travelDuration;
	double _historicTravelDuration;
	double _travelDurationAggressiveEstimate;
	double _travelDurationConservativeEstimate;
	double _length;
	GEOETARoute* _geoETARoute;
	GEOETATrafficUpdateWaypointRoute* _geoETAWaypointRoute;

}

@property (nonatomic,readonly) double _hypothesis_travelDuration; 
@property (nonatomic,readonly) double _hypothesis_travelDurationAggressiveEstimate; 
@property (nonatomic,readonly) double _hypothesis_travelDurationConservativeEstimate; 
@property (nonatomic,readonly) NSUUID * uniqueRouteID;                                             //@synthesize uniqueRouteID=_uniqueRouteID - In the implementation block
@property (nonatomic,readonly) NSUUID * etauResponseID;                                            //@synthesize etauResponseID=_etauResponseID - In the implementation block
@property (nonatomic,readonly) BOOL hasValidTravelDurations;                                       //@synthesize hasValidTravelDurations=_hasValidTravelDurations - In the implementation block
@property (nonatomic,readonly) double travelDuration;                                              //@synthesize travelDuration=_travelDuration - In the implementation block
@property (nonatomic,readonly) double historicTravelDuration;                                      //@synthesize historicTravelDuration=_historicTravelDuration - In the implementation block
@property (nonatomic,readonly) double travelDurationAggressiveEstimate;                            //@synthesize travelDurationAggressiveEstimate=_travelDurationAggressiveEstimate - In the implementation block
@property (nonatomic,readonly) double travelDurationConservativeEstimate;                          //@synthesize travelDurationConservativeEstimate=_travelDurationConservativeEstimate - In the implementation block
@property (nonatomic,readonly) double length;                                                      //@synthesize length=_length - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)length;
-(NSUUID *)uniqueRouteID;
-(NSUUID *)etauResponseID;
-(id)geoTrafficBannerText;
-(double)_hypothesis_travelDuration;
-(double)_hypothesis_travelDurationAggressiveEstimate;
-(double)_hypothesis_travelDurationConservativeEstimate;
-(double)travelDurationConservativeEstimate;
-(double)_hypothesis_travelDurationFromStep:(id)arg1 stepRemainingDistance:(double)arg2 ;
-(double)travelDurationAggressiveEstimate;
-(double)travelDurationToEndOfRouteFromStepID:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(BOOL)hasValidTravelDurations;
-(id)initWithCoder:(id)arg1 ;
-(id)evStepInfos;
-(id)description;
-(double)travelDuration;
-(BOOL)_prepareForOldRequest:(id)arg1 route:(id)arg2 startRouteCoordinate:(SCD_Struct_GE87)arg3 ;
-(BOOL)_updateForOldResponse:(id)arg1 route:(id)arg2 ;
-(double)_travelDurationFromStepID:(unsigned long long)arg1 toStepID:(unsigned long long)arg2 currentStepRemainingDistance:(double)arg3 ;
-(id)navigabilityInfo;
-(double)travelDurationToEndOfLegFromStepID:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(double)historicTravelDuration;
-(id)initWithRouteForTesting:(id)arg1 ;
-(id)geoETARoute;
-(id)geoETAWaypointRoute;
-(BOOL)prepareForRequest:(id)arg1 route:(id)arg2 startRouteCoordinate:(SCD_Struct_GE87)arg3 ;
-(BOOL)updateForResponse:(id)arg1 route:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
