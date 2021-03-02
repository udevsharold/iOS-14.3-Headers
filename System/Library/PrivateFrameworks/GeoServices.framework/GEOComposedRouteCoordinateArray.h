/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface GEOComposedRouteCoordinateArray : NSObject <NSSecureCoding> {

	NSArray* _paths;
	unsigned long long _coordinateCount;
	BOOL _usesZilch;

}

@property (nonatomic,readonly) BOOL usesZilch; 
@property (nonatomic,readonly) unsigned long long pathsCount; 
@property (nonatomic,readonly) unsigned long long coordinateCount;              //@synthesize coordinateCount=_coordinateCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)_length;
-(id)init;
-(BOOL)usesZilch;
-(SCD_Struct_GE98)coordinateOnRouteAt:(unsigned long long)arg1 ;
-(PolylineCoordinate)routeCoordinateForDistanceAfterStart:(double)arg1 ;
-(SCD_Struct_GE98)coordinateForRouteCoordinate:(PolylineCoordinate)arg1 ;
-(PolylineCoordinate)routeCoordinateForDistance:(double)arg1 afterRouteCoordinate:(PolylineCoordinate)arg2 ;
-(double)distanceBetweenRouteCoordinate:(PolylineCoordinate)arg1 andRouteCoordinate:(PolylineCoordinate)arg2 ;
-(ControlPoint)zilchControlPointAt:(unsigned long long)arg1 ;
-(id)compressedZilchDataToEndOfPathFromIndex:(unsigned long long)arg1 ;
-(unsigned long long)pathsCount;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)coordinateCount;
-(double)distanceToEndFromIndex:(unsigned long long)arg1 ;
-(unsigned long long)routeIndexForLocalIndex:(unsigned long long)arg1 onPath:(unsigned long long)arg2 ;
-(PolylineCoordinate)routeCoordinateForDistance:(double)arg1 beforeRouteCoordinate:(PolylineCoordinate)arg2 ;
-(double)distanceToEndFromRouteCoordinate:(PolylineCoordinate)arg1 ;
-(void)_buildZilchCoordinatesForPointData:(id)arg1 ;
-(void)_buildBasicCoordinatesForPointData:(id)arg1 ;
-(void)_buildPointLengthsWithMarkers:(id)arg1 ;
-(PolylineCoordinate)_canonicalRouteCoordinate:(PolylineCoordinate)arg1 ;
-(void)_calibratePointLengths:(double*)arg1 startIndex:(unsigned long long)arg2 endIndex:(unsigned long long)arg3 lengthMarker:(id)arg4 ;
-(id)initWithPointData:(id)arg1 usesZilch:(BOOL)arg2 ;
-(id)initWithPointData:(id)arg1 lengthMarkers:(id)arg2 usesZilch:(BOOL)arg3 ;
-(unsigned long long)_localCoordinateIndexForRouteIndex:(unsigned long long)arg1 ;
-(void)buildPointLengthsWithSteps:(id)arg1 assignDistanceToSteps:(BOOL)arg2 ;
-(unsigned long long)coordinateCountForPathAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_pathIndexForRouteIndex:(unsigned long long)arg1 ;
-(double)distanceFromStartToIndex:(unsigned long long)arg1 ;
-(double)distanceFromStartToRouteCoordinate:(PolylineCoordinate)arg1 ;
-(double)distanceBetweenIndex:(unsigned long long)arg1 andIndex:(unsigned long long)arg2 ;
-(PolylineCoordinate)routeCoordinateForDistanceBeforeEnd:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
