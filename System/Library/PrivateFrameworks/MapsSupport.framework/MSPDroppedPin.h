/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng, GEOMapRegion;

@interface MSPDroppedPin : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _timestamp;
	int _floorOrdinal;
	GEOLatLng* _latLng;
	GEOMapRegion* _mapRegion;
	SCD_Struct_MS2 _has;

}

@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng;                             //@synthesize latLng=_latLng - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                       //@synthesize mapRegion=_mapRegion - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFloorOrdinal; 
@property (assign,nonatomic) int floorOrdinal;                               //@synthesize floorOrdinal=_floorOrdinal - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)hasMapRegion;
-(GEOLatLng *)latLng;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasLatLng;
-(BOOL)hasTimestamp;
-(PBUnknownFields *)unknownFields;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFloorOrdinal:(int)arg1 ;
-(void)setHasFloorOrdinal:(BOOL)arg1 ;
-(BOOL)hasFloorOrdinal;
-(int)floorOrdinal;
@end
