/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOURLCamera;

@interface GEOStorageCameraView : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOURLCamera* _camera;
	int _mapType;
	struct {
		unsigned has_mapType : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCamera; 
@property (nonatomic,retain) GEOURLCamera * camera; 
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(GEOURLCamera *)camera;
-(void)setCamera:(GEOURLCamera *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)StringAsMapType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasCamera;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasMapType;
-(id)mapTypeAsString:(int)arg1 ;
-(void)setHasMapType:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
