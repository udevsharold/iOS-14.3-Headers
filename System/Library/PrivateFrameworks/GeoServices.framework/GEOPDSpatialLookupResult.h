/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDBounds, GEOLatLng;

@interface GEOPDSpatialLookupResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _mappedCategorys;
	GEOPDBounds* _bounds;
	GEOLatLng* _center;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_mappedCategorys : 1;
		unsigned read_bounds : 1;
		unsigned read_center : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (nonatomic,readonly) BOOL hasBounds; 
@property (nonatomic,retain) GEOPDBounds * bounds; 
@property (nonatomic,readonly) unsigned long long mappedCategorysCount; 
@property (nonatomic,readonly) int* mappedCategorys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)spatialLookupResultForPlaceData:(id)arg1 ;
-(BOOL)hasCenter;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(GEOPDBounds *)bounds;
-(BOOL)readFrom:(id)arg1 ;
-(int*)mappedCategorys;
-(void)addMappedCategory:(int)arg1 ;
-(unsigned long long)mappedCategorysCount;
-(void)clearMappedCategorys;
-(int)mappedCategoryAtIndex:(unsigned long long)arg1 ;
-(void)setMappedCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)mappedCategorysAsString:(int)arg1 ;
-(int)StringAsMappedCategorys:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)hasBounds;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBounds:(GEOPDBounds *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end
