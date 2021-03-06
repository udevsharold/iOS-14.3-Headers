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

@class PBDataReader, PBUnknownFields, GEORPAddressCorrections, GEORPPersonalizedMapsContext, GEOPDPlaceRequest, GEOPDPlace;

@interface GEORPAddressFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPAddressCorrections* _address;
	GEORPPersonalizedMapsContext* _personalizedMaps;
	GEOPDPlaceRequest* _placeRequest;
	GEOPDPlace* _place;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _type;
	struct {
		unsigned has_type : 1;
		unsigned read_unknownFields : 1;
		unsigned read_address : 1;
		unsigned read_personalizedMaps : 1;
		unsigned read_placeRequest : 1;
		unsigned read_place : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEORPAddressCorrections * address; 
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasPersonalizedMaps; 
@property (nonatomic,retain) GEORPPersonalizedMapsContext * personalizedMaps; 
@property (nonatomic,readonly) BOOL hasPlaceRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeRequest; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setAddress:(GEORPAddressCorrections *)arg1 ;
-(GEOPDPlace *)place;
-(id)init;
-(BOOL)hasPlaceRequest;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEORPPersonalizedMapsContext *)personalizedMaps;
-(void)setPersonalizedMaps:(GEORPPersonalizedMapsContext *)arg1 ;
-(BOOL)hasPersonalizedMaps;
-(void)mergeFrom:(id)arg1 ;
-(GEORPAddressCorrections *)address;
-(BOOL)hasAddress;
-(void)setType:(int)arg1 ;
-(void)setPlaceRequest:(GEOPDPlaceRequest *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasPlace;
-(id)description;
-(int)type;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDPlaceRequest *)placeRequest;
-(id)jsonRepresentation;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
@end

