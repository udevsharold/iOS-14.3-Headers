/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapRegion;

@interface GEOLogMsgStateMapView : PBCodable <NSCopying> {

	GEOMapRegion* _mapRegion;
	double _zoomLevel;
	int _mapType;
	SCD_Struct_GE123 _flags;

}

@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (assign,nonatomic) BOOL hasZoomLevel; 
@property (assign,nonatomic) double zoomLevel; 
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasMapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)zoomLevel;
-(int)StringAsMapType:(id)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setZoomLevel:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasZoomLevel;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasMapType;
-(id)mapTypeAsString:(int)arg1 ;
-(void)setHasMapType:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
