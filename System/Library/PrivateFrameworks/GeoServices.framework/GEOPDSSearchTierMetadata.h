/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSSearchTierMetadata : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _endIndex;
	unsigned _startIndex;
	int _tierType;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasTierType; 
@property (assign,nonatomic) int tierType; 
@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) unsigned startIndex; 
@property (assign,nonatomic) BOOL hasEndIndex; 
@property (assign,nonatomic) unsigned endIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasEndIndex;
-(void)setHasEndIndex:(BOOL)arg1 ;
-(int)tierType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTierType:(int)arg1 ;
-(void)setHasTierType:(BOOL)arg1 ;
-(BOOL)hasTierType;
-(id)tierTypeAsString:(int)arg1 ;
-(int)StringAsTierType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned)endIndex;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setEndIndex:(unsigned)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned)startIndex;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasStartIndex;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(void)setStartIndex:(unsigned)arg1 ;
@end

