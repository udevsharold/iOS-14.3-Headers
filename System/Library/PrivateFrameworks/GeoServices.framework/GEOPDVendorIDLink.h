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

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDVendorIDLink : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _reservationTypes;
	NSString* _externalItemId;
	NSString* _vendorId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_reservationTypes : 1;
		unsigned read_externalItemId : 1;
		unsigned read_vendorId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVendorId; 
@property (nonatomic,retain) NSString * vendorId; 
@property (nonatomic,readonly) BOOL hasExternalItemId; 
@property (nonatomic,retain) NSString * externalItemId; 
@property (nonatomic,readonly) unsigned long long reservationTypesCount; 
@property (nonatomic,readonly) int* reservationTypes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasVendorId;
-(void)readAll:(BOOL)arg1 ;
-(void)addReservationType:(int)arg1 ;
-(void)clearReservationTypes;
-(int*)reservationTypes;
-(void)setReservationTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)reservationTypesAsString:(int)arg1 ;
-(int)StringAsReservationTypes:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)externalItemId;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)reservationTypesCount;
-(int)reservationTypeAtIndex:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)vendorId;
-(id)initWithDictionary:(id)arg1 ;
-(void)setExternalItemId:(NSString *)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasExternalItemId;
-(void)setVendorId:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
