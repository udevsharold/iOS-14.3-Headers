/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, GEOComposedWaypoint, NSDate, GEOLocation, GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions, GEOCyclingOptions, NSArray;

@interface GEOQuickETARequest : NSObject {

	NSString* _requestingAppIdentifier;
	GEOComposedWaypoint* _sourceWaypoint;
	GEOComposedWaypoint* _destinationWaypoint;
	NSDate* _departureDate;
	NSDate* _arrivalDate;
	int _transportType;
	GEOLocation* _currentLocation;
	BOOL _includeDistance;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	GEOWalkingOptions* _walkingOptions;
	GEOCyclingOptions* _cyclingOptions;
	NSArray* _additionalTransportTypesRequested;

}

@property (nonatomic,retain) NSString * requestingAppIdentifier;                         //@synthesize requestingAppIdentifier=_requestingAppIdentifier - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * sourceWaypoint;                     //@synthesize sourceWaypoint=_sourceWaypoint - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destinationWaypoint;                //@synthesize destinationWaypoint=_destinationWaypoint - In the implementation block
@property (nonatomic,readonly) NSDate * departureDate;                                   //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) NSDate * arrivalDate;                                     //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) int transportType;                                        //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) GEOLocation * currentLocation;                            //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) BOOL includeDistance;                                     //@synthesize includeDistance=_includeDistance - In the implementation block
@property (nonatomic,readonly) GEOAutomobileOptions * automobileOptions;                 //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) GEOCyclingOptions * cyclingOptions;                       //@synthesize cyclingOptions=_cyclingOptions - In the implementation block
@property (nonatomic,readonly) GEOTransitOptions * transitOptions;                       //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,readonly) GEOWalkingOptions * walkingOptions;                       //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (nonatomic,readonly) NSArray * additionalTransportTypesRequested;              //@synthesize additionalTransportTypesRequested=_additionalTransportTypesRequested - In the implementation block
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 currentLocation:(id)arg4 includeDistance:(BOOL)arg5 automobileOptions:(id)arg6 transitOptions:(id)arg7 walkingOptions:(id)arg8 cyclingOptions:(id)arg9 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 currentLocation:(id)arg4 includeDistance:(BOOL)arg5 automobileOptions:(id)arg6 transitOptions:(id)arg7 walkingOptions:(id)arg8 cyclingOptions:(id)arg9 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(BOOL)arg6 additionalTransportTypesRequested:(id)arg7 automobileOptions:(id)arg8 transitOptions:(id)arg9 walkingOptions:(id)arg10 cyclingOptions:(id)arg11 ;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(BOOL)arg6 additionalTransportTypesRequested:(id)arg7 automobileOptions:(id)arg8 transitOptions:(id)arg9 walkingOptions:(id)arg10 cyclingOptions:(id)arg11 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(BOOL)arg6 additionalTransportTypesRequested:(id)arg7 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(BOOL)arg6 additionalTransportTypesRequested:(id)arg7 ;
-(int)transportType;
-(GEOCyclingOptions *)cyclingOptions;
-(NSString *)requestingAppIdentifier;
-(GEOLocation *)currentLocation;
-(GEOWalkingOptions *)walkingOptions;
-(NSDate *)arrivalDate;
-(id)description;
-(NSDate *)departureDate;
-(id)_defaultRequestingAppIdentifier;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(BOOL)arg6 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(BOOL)arg6 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 ;
-(GEOComposedWaypoint *)sourceWaypoint;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 ;
-(GEOComposedWaypoint *)destinationWaypoint;
-(NSArray *)additionalTransportTypesRequested;
-(BOOL)includeDistance;
-(void)setRequestingAppIdentifier:(NSString *)arg1 ;
@end

