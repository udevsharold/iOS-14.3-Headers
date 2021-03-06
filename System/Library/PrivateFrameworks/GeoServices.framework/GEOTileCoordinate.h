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

@class PBUnknownFields;

@interface GEOTileCoordinate : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _x;
	int _y;
	int _zoom;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,nonatomic) int x; 
@property (assign,nonatomic) BOOL hasY; 
@property (assign,nonatomic) int y; 
@property (assign,nonatomic) BOOL hasZoom; 
@property (assign,nonatomic) int zoom; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(int)y;
-(BOOL)hasX;
-(int)zoom;
-(void)setZoom:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasY:(BOOL)arg1 ;
-(void)setX:(int)arg1 ;
-(void)setY:(int)arg1 ;
-(void)setHasZoom:(BOOL)arg1 ;
-(BOOL)hasZoom;
-(BOOL)readFrom:(id)arg1 ;
-(int)x;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setHasX:(BOOL)arg1 ;
-(BOOL)hasY;
-(void)writeTo:(id)arg1 ;
@end

