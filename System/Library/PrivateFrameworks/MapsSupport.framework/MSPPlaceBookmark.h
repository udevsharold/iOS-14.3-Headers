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

@class PBUnknownFields, GEOLatLng, GEOMapItemStorage, NSString;

@interface MSPPlaceBookmark : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLatLng* _droppedPinCoordinate;
	int _droppedPinFloorOrdinal;
	GEOMapItemStorage* _mapItemStorage;
	int _origin;
	NSString* _title;
	SCD_Struct_MS2 _has;

}

@property (nonatomic,readonly) BOOL hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage;              //@synthesize mapItemStorage=_mapItemStorage - In the implementation block
@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin;                                      //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasDroppedPinCoordinate; 
@property (nonatomic,retain) GEOLatLng * droppedPinCoordinate;                //@synthesize droppedPinCoordinate=_droppedPinCoordinate - In the implementation block
@property (assign,nonatomic) BOOL hasDroppedPinFloorOrdinal; 
@property (assign,nonatomic) int droppedPinFloorOrdinal;                      //@synthesize droppedPinFloorOrdinal=_droppedPinFloorOrdinal - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)hasTitle;
-(BOOL)hasOrigin;
-(BOOL)hasMapItemStorage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)origin;
-(void)setOrigin:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOMapItemStorage *)mapItemStorage;
-(void)copyTo:(id)arg1 ;
-(GEOLatLng *)droppedPinCoordinate;
-(void)setDroppedPinCoordinate:(GEOLatLng *)arg1 ;
-(int)droppedPinFloorOrdinal;
-(void)setDroppedPinFloorOrdinal:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHasOrigin:(BOOL)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)title;
-(BOOL)hasDroppedPinCoordinate;
-(BOOL)hasDroppedPinFloorOrdinal;
-(void)setHasDroppedPinFloorOrdinal:(BOOL)arg1 ;
@end
