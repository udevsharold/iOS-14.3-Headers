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

@class PBUnknownFields, GEOPDSRawAttribute;

@interface GEOPDSInferredValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDSRawAttribute* _attribute;
	int _priceRange;
	int _tradingHours;
	BOOL _negateInferredValue;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasPriceRange; 
@property (assign,nonatomic) int priceRange; 
@property (assign,nonatomic) BOOL hasTradingHours; 
@property (assign,nonatomic) int tradingHours; 
@property (nonatomic,readonly) BOOL hasAttribute; 
@property (nonatomic,retain) GEOPDSRawAttribute * attribute; 
@property (assign,nonatomic) BOOL hasNegateInferredValue; 
@property (assign,nonatomic) BOOL negateInferredValue; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(GEOPDSRawAttribute *)attribute;
-(int)tradingHours;
-(void)setTradingHours:(int)arg1 ;
-(void)setNegateInferredValue:(BOOL)arg1 ;
-(void)setHasPriceRange:(BOOL)arg1 ;
-(id)priceRangeAsString:(int)arg1 ;
-(int)StringAsPriceRange:(id)arg1 ;
-(void)setHasTradingHours:(BOOL)arg1 ;
-(BOOL)hasTradingHours;
-(id)tradingHoursAsString:(int)arg1 ;
-(int)StringAsTradingHours:(id)arg1 ;
-(BOOL)hasAttribute;
-(BOOL)negateInferredValue;
-(void)setHasNegateInferredValue:(BOOL)arg1 ;
-(BOOL)hasNegateInferredValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPriceRange;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setAttribute:(GEOPDSRawAttribute *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setPriceRange:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(int)priceRange;
-(void)writeTo:(id)arg1 ;
@end

