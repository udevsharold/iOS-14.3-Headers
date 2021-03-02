/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDNearestTransitParameters, GEOLatLng, NSString, GEOPDViewportInfo;

@interface GEOPDLocationDirectedSearchParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDNearestTransitParameters* _nearestTransitParameters;
	GEOLatLng* _searchLocation;
	NSString* _searchString;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _maxResults;
	int _searchType;
	int _sortOrder;
	struct {
		unsigned has_maxResults : 1;
		unsigned has_searchType : 1;
		unsigned has_sortOrder : 1;
		unsigned read_unknownFields : 1;
		unsigned read_nearestTransitParameters : 1;
		unsigned read_searchLocation : 1;
		unsigned read_searchString : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSortOrder; 
@property (assign,nonatomic) int sortOrder; 
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults; 
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,readonly) BOOL hasSearchLocation; 
@property (nonatomic,retain) GEOLatLng * searchLocation; 
@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType; 
@property (nonatomic,readonly) BOOL hasNearestTransitParameters; 
@property (nonatomic,retain) GEOPDNearestTransitParameters * nearestTransitParameters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasViewportInfo;
-(void)setSearchString:(NSString *)arg1 ;
-(NSString *)searchString;
-(GEOPDViewportInfo *)viewportInfo;
-(int)sortOrder;
-(id)init;
-(void)setSortOrder:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)maxResults;
-(void)mergeFrom:(id)arg1 ;
-(int)searchType;
-(BOOL)readFrom:(id)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(GEOCoarseLocationLatLng)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(unsigned long long)hash;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSearchType;
-(id)dictionaryRepresentation;
-(void)setHasSearchType:(BOOL)arg1 ;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOLatLng *)searchLocation;
-(GEOPDNearestTransitParameters *)nearestTransitParameters;
-(void)setSearchLocation:(GEOLatLng *)arg1 ;
-(void)setNearestTransitParameters:(GEOPDNearestTransitParameters *)arg1 ;
-(void)setHasSortOrder:(BOOL)arg1 ;
-(BOOL)hasSortOrder;
-(id)sortOrderAsString:(int)arg1 ;
-(int)StringAsSortOrder:(id)arg1 ;
-(BOOL)hasSearchString;
-(BOOL)hasSearchLocation;
-(BOOL)hasNearestTransitParameters;
-(BOOL)hasMaxResults;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMaxResults:(unsigned)arg1 ;
-(id)jsonRepresentation;
-(void)setSearchType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
