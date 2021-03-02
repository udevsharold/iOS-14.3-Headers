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

@class PBDataReader, PBUnknownFields, GEOPDPoiIconCategoryFilter;

@interface GEOPDAutocompleteFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _placeTypeFilters;
	SCD_Struct_GE90* _requestedEntryTypes;
	GEOPDPoiIconCategoryFilter* _poiIconCategoryFilter;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_placeTypeFilters : 1;
		unsigned read_requestedEntryTypes : 1;
		unsigned read_poiIconCategoryFilter : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long requestedEntryTypesCount; 
@property (nonatomic,readonly) int* requestedEntryTypes; 
@property (nonatomic,readonly) BOOL hasPoiIconCategoryFilter; 
@property (nonatomic,retain) GEOPDPoiIconCategoryFilter * poiIconCategoryFilter; 
@property (nonatomic,readonly) unsigned long long placeTypeFiltersCount; 
@property (nonatomic,readonly) int* placeTypeFilters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(GEOPDPoiIconCategoryFilter *)poiIconCategoryFilter;
-(void)addRequestedEntryType:(int)arg1 ;
-(void)setPoiIconCategoryFilter:(GEOPDPoiIconCategoryFilter *)arg1 ;
-(void)addPlaceTypeFilter:(int)arg1 ;
-(unsigned long long)requestedEntryTypesCount;
-(int*)placeTypeFilters;
-(void)clearRequestedEntryTypes;
-(int)requestedEntryTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)placeTypeFiltersCount;
-(void)clearPlaceTypeFilters;
-(int)placeTypeFilterAtIndex:(unsigned long long)arg1 ;
-(int*)requestedEntryTypes;
-(void)setRequestedEntryTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)requestedEntryTypesAsString:(int)arg1 ;
-(int)StringAsRequestedEntryTypes:(id)arg1 ;
-(BOOL)hasPoiIconCategoryFilter;
-(void)setPlaceTypeFilters:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)placeTypeFiltersAsString:(int)arg1 ;
-(int)StringAsPlaceTypeFilters:(id)arg1 ;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end
