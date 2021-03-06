/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface GEORouteRestrictionZoneInfo : NSObject <NSSecureCoding> {

	NSArray* _zoneIDs;
	int _restrictionZoneImpact;

}

@property (nonatomic,readonly) NSArray * zoneIDs;                      //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,readonly) int restrictionZoneImpact;              //@synthesize restrictionZoneImpact=_restrictionZoneImpact - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(int)restrictionZoneImpact;
-(NSArray *)zoneIDs;
-(id)initWithGeoRoute:(id)arg1 ;
-(id)initWithGeoWaypointRoute:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

