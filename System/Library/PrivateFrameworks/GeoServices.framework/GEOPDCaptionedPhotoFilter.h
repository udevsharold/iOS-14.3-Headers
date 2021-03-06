/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDCaptionedPhotoFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDPhotoSizeFilterValue* _photoSizeFilters;
	unsigned long long _photoSizeFiltersCount;
	unsigned long long _photoSizeFiltersSpace;
	NSString* _vendorId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_photoSizeFilters : 1;
		unsigned read_vendorId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long photoSizeFiltersCount; 
@property (nonatomic,readonly) GEOPDPhotoSizeFilterValue* photoSizeFilters; 
@property (nonatomic,readonly) BOOL hasVendorId; 
@property (nonatomic,retain) NSString * vendorId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)addPhotoSizeFilter:(GEOPDPhotoSizeFilterValue)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasVendorId;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(GEOPDPhotoSizeFilterValue*)photoSizeFilters;
-(void)setPhotoSizeFilters:(GEOPDPhotoSizeFilterValue*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)photoSizeFiltersCount;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(NSString *)vendorId;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(GEOPDPhotoSizeFilterValue)photoSizeFilterAtIndex:(unsigned long long)arg1 ;
-(void)setVendorId:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearPhotoSizeFilters;
@end

