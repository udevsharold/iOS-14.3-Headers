/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEORouteIncident;

@interface GEOComposedRouteTrafficIncidentInfo : NSObject <NSSecureCoding> {

	GEORouteIncident* _incident;
	double _offsetMeters;
	SCD_Struct_GE87 _routeCoordinate;

}

@property (nonatomic,retain) GEORouteIncident * incident;                  //@synthesize incident=_incident - In the implementation block
@property (assign,nonatomic) double offsetMeters;                          //@synthesize offsetMeters=_offsetMeters - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE87 routeCoordinate;              //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
+(BOOL)supportsSecureCoding;
-(GEORouteIncident *)incident;
-(void)setRouteCoordinate:(SCD_Struct_GE87)arg1 ;
-(double)offsetMeters;
-(id)initWithCoder:(id)arg1 ;
-(void)setOffsetMeters:(double)arg1 ;
-(id)description;
-(void)setIncident:(GEORouteIncident *)arg1 ;
-(SCD_Struct_GE87)routeCoordinate;
-(void)encodeWithCoder:(id)arg1 ;
@end
