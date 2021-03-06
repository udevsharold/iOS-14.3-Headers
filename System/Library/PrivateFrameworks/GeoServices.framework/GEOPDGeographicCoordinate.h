/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDGeographicCoordinate : PBCodable <NSCopying> {

	double _altitude;
	double _latitude;
	double _longitude;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) double altitude; 
+(BOOL)isValid:(id)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(double)altitude;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)longitude;
-(BOOL)hasLatitude;
-(void)setHasAltitude:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasLongitude;
-(BOOL)hasAltitude;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLongitude:(double)arg1 ;
-(double)latitude;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setLatitude:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

