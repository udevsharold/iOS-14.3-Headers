/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOMapRegion : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _eastLng;
	double _northLat;
	double _southLat;
	NSMutableArray* _vertexs;
	double _westLng;
	int _mapRegionSourceType;
	struct {
		unsigned has_eastLng : 1;
		unsigned has_northLat : 1;
		unsigned has_southLat : 1;
		unsigned has_westLng : 1;
		unsigned has_mapRegionSourceType : 1;
	}  _flags;

}

@property (nonatomic,readonly) double centerLat; 
@property (nonatomic,readonly) double centerLng; 
@property (nonatomic,readonly) double spanLat; 
@property (nonatomic,readonly) double spanLng; 
@property (nonatomic,readonly) BOOL hasRectangleVertices; 
@property (assign,nonatomic) BOOL hasSouthLat; 
@property (assign,nonatomic) double southLat; 
@property (assign,nonatomic) BOOL hasWestLng; 
@property (assign,nonatomic) double westLng; 
@property (assign,nonatomic) BOOL hasNorthLat; 
@property (assign,nonatomic) double northLat; 
@property (assign,nonatomic) BOOL hasEastLng; 
@property (assign,nonatomic) double eastLng; 
@property (nonatomic,retain) NSMutableArray * vertexs; 
@property (assign,nonatomic) BOOL hasMapRegionSourceType; 
@property (assign,nonatomic) int mapRegionSourceType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)vertexType;
+(id)_geo_mapRegionForGEOCoordinateRegion:(SCD_Struct_GE36)arg1 ;
+(BOOL)isValid:(id)arg1 ;
-(id)_initWithCLRegion:(id)arg1 ;
-(void)setMapRegionSourceType:(int)arg1 ;
-(void)clearVertexs;
-(void)setHasSouthLat:(BOOL)arg1 ;
-(void)setHasWestLng:(BOOL)arg1 ;
-(void)setHasNorthLat:(BOOL)arg1 ;
-(void)setHasEastLng:(BOOL)arg1 ;
-(void)setVertexs:(NSMutableArray *)arg1 ;
-(int)mapRegionSourceType;
-(void)setHasMapRegionSourceType:(BOOL)arg1 ;
-(BOOL)hasMapRegionSourceType;
-(id)mapRegionSourceTypeAsString:(int)arg1 ;
-(int)StringAsMapRegionSourceType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)westLng;
-(double)southLat;
-(double)northLat;
-(double)eastLng;
-(NSMutableArray *)vertexs;
-(double)spanLat;
-(double)spanLng;
-(BOOL)hasEastLng;
-(void)setMapRect:(SCD_Struct_GE36)arg1 ;
-(BOOL)hasWestLng;
-(BOOL)readFrom:(id)arg1 ;
-(double)centerLat;
-(void)setSouthLat:(double)arg1 ;
-(void)setWestLng:(double)arg1 ;
-(void)setNorthLat:(double)arg1 ;
-(void)setEastLng:(double)arg1 ;
-(BOOL)hasRectangleVertices;
-(unsigned long long)vertexsCount;
-(BOOL)hasNorthLat;
-(BOOL)hasSouthLat;
-(id)initWithRadialPlace:(id)arg1 ;
-(id)coordinates;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid;
-(void)addVertex:(id)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)intersectsMapRect:(SCD_Struct_GE36)arg1 ;
-(BOOL)containsCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 ;
-(BOOL)containsMapRect:(SCD_Struct_GE36)arg1 ;
-(id)intersectionsOnPolyline:(id)arg1 ;
-(double)centerLng;
-(BOOL)containsCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithCoordinateRegion:(SCD_Struct_GE36)arg1 ;
-(id)vertexAtIndex:(unsigned long long)arg1 ;
-(BOOL)intersectsRegion:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)containsRegion:(id)arg1 ;
-(id)initWithMapRect:(SCD_Struct_GE36)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
