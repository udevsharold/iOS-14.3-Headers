/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRouteSegment, GEOComposedRouteStep;

@interface GEOComposedRouteSection : NSObject {

	unsigned _startPointIndex;
	unsigned _pointCount;
	SCD_Struct_GE189* _points;
	int _transportType;
	GEOComposedRouteSegment* _composedRouteSegment;
	GEOComposedRouteStep* _composedRouteStep;
	unsigned long long _composedRouteSegmentIndex;
	SCD_Struct_GE190 _bounds;
	SCD_Struct_GE36 _overlayBounds;
	unsigned long long _finalStepIndex;
	double _startDistance;
	double _lengthScaleFactor;

}

@property (nonatomic,readonly) unsigned startPointIndex;                                           //@synthesize startPointIndex=_startPointIndex - In the implementation block
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount;                                                //@synthesize pointCount=_pointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE189* points;                                           //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE190 bounds;                                            //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,__weak,readonly) GEOComposedRouteSegment * composedRouteSegment;              //@synthesize composedRouteSegment=_composedRouteSegment - In the implementation block
@property (nonatomic,__weak,readonly) GEOComposedRouteStep * composedRouteStep;                    //@synthesize composedRouteStep=_composedRouteStep - In the implementation block
@property (nonatomic,readonly) unsigned long long composedRouteSegmentIndex;                       //@synthesize composedRouteSegmentIndex=_composedRouteSegmentIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long finalStepIndex;                                  //@synthesize finalStepIndex=_finalStepIndex - In the implementation block
@property (nonatomic,readonly) double startDistance;                                               //@synthesize startDistance=_startDistance - In the implementation block
@property (assign,nonatomic) double lengthScaleFactor;                                             //@synthesize lengthScaleFactor=_lengthScaleFactor - In the implementation block
@property (nonatomic,readonly) int transportType;                                                  //@synthesize transportType=_transportType - In the implementation block
-(id)initWithCoordinates:(id)arg1 segment:(id)arg2 segmentIndex:(unsigned long long)arg3 steps:(id)arg4 startCoordinateIndex:(unsigned)arg5 coordinateCount:(unsigned)arg6 bounds:(SCD_Struct_GE190)arg7 transportType:(int)arg8 finalStepIndex:(unsigned long long)arg9 startDistance:(double)arg10 lengthScaleFactor:(double)arg11 ;
-(id)initWithCoordinates:(id)arg1 segment:(id)arg2 segmentIndex:(unsigned long long)arg3 steps:(id)arg4 startCoordinateIndex:(unsigned)arg5 coordinateCount:(unsigned)arg6 transportType:(int)arg7 finalStepIndex:(unsigned long long)arg8 fallbackStartCoordinate:(GEOCoarseLocationLatLng)arg9 fallbackEndCoordinate:(GEOCoarseLocationLatLng)arg10 startDistance:(double)arg11 lengthScaleFactor:(double)arg12 ;
-(int)transportType;
-(void)dealloc;
-(SCD_Struct_GE190)bounds;
-(unsigned)startPointIndex;
-(unsigned)endPointIndex;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(SCD_Struct_GE189*)points;
-(BOOL)isTransfer;
-(void)_initialStepInSteps:(id)arg1 ;
-(id)stringForPoints;
-(id)stringForCoordinates;
-(GEOComposedRouteSegment *)composedRouteSegment;
-(GEOComposedRouteStep *)composedRouteStep;
-(unsigned long long)composedRouteSegmentIndex;
-(unsigned long long)finalStepIndex;
-(id)description;
-(double)startDistance;
-(double)lengthScaleFactor;
-(void)setLengthScaleFactor:(double)arg1 ;
-(unsigned)pointCount;
@end
