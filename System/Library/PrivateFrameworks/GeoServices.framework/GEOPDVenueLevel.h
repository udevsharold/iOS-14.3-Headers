/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDVenueLabel;

@interface GEOPDVenueLevel : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDVenueLabel* _label;
	unsigned long long _levelId;
	int _ordinal;
	struct {
		unsigned has_levelId : 1;
		unsigned has_ordinal : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLevelId; 
@property (assign,nonatomic) unsigned long long levelId; 
@property (assign,nonatomic) BOOL hasOrdinal; 
@property (assign,nonatomic) int ordinal; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasLabel;
-(void)setLevelId:(unsigned long long)arg1 ;
-(void)setOrdinal:(int)arg1 ;
-(void)setHasLevelId:(BOOL)arg1 ;
-(void)setHasOrdinal:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)levelId;
-(int)ordinal;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(GEOPDVenueLabel *)label;
-(BOOL)hasLevelId;
-(BOOL)hasOrdinal;
-(void)writeTo:(id)arg1 ;
@end

