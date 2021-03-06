/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOLocationShiftFunctionResponse : NSObject <NSSecureCoding> {

	GEOCoarseLocationLatLng _originalCoordinate;
	double _params[9];
	double _radius;
	BOOL _shouldUsePolyShiftFunction;
	unsigned _version;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng originalCoordinate;              //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                           //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) unsigned version;                                        //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)radius;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)version;
-(BOOL)isValidForCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(GEOCoarseLocationLatLng)shiftedCoordinateForCoordinate:(GEOCoarseLocationLatLng)arg1 accuracy:(double*)arg2 ;
-(GEOCoarseLocationLatLng)originalCoordinate;
-(id)contractFunctionTo:(id)arg1 withRadius:(double)arg2 ;
-(id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(GEOCoarseLocationLatLng)arg2 version:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

