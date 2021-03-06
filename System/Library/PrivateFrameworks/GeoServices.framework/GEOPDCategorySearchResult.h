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

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDSCategorySearchResultSection, GEOPDRelatedSearchSuggestion, GEOMapRegion, GEOPDSearchClientBehavior;

@interface GEOPDCategorySearchResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _browseCategorys;
	GEOPDSCategorySearchResultSection* _categorySearchResultSection;
	GEOPDRelatedSearchSuggestion* _defaultRelatedSearchSuggestion;
	GEOMapRegion* _displayMapRegion;
	NSMutableArray* _relatedEntitySections;
	NSMutableArray* _relatedSearchSuggestions;
	NSMutableArray* _resultDetourInfos;
	GEOPDSearchClientBehavior* _searchClientBehavior;
	NSMutableArray* _searchTierMetadatas;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _enablePartialClientization;
	BOOL _isChainResultSet;
	struct {
		unsigned has_enablePartialClientization : 1;
		unsigned has_isChainResultSet : 1;
		unsigned read_unknownFields : 1;
		unsigned read_browseCategorys : 1;
		unsigned read_categorySearchResultSection : 1;
		unsigned read_defaultRelatedSearchSuggestion : 1;
		unsigned read_displayMapRegion : 1;
		unsigned read_relatedEntitySections : 1;
		unsigned read_relatedSearchSuggestions : 1;
		unsigned read_resultDetourInfos : 1;
		unsigned read_searchClientBehavior : 1;
		unsigned read_searchTierMetadatas : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion; 
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet; 
@property (nonatomic,retain) NSMutableArray * relatedSearchSuggestions; 
@property (nonatomic,retain) NSMutableArray * resultDetourInfos; 
@property (nonatomic,readonly) BOOL hasDefaultRelatedSearchSuggestion; 
@property (nonatomic,retain) GEOPDRelatedSearchSuggestion * defaultRelatedSearchSuggestion; 
@property (nonatomic,readonly) BOOL hasSearchClientBehavior; 
@property (nonatomic,retain) GEOPDSearchClientBehavior * searchClientBehavior; 
@property (assign,nonatomic) BOOL hasEnablePartialClientization; 
@property (assign,nonatomic) BOOL enablePartialClientization; 
@property (nonatomic,retain) NSMutableArray * browseCategorys; 
@property (nonatomic,readonly) BOOL hasCategorySearchResultSection; 
@property (nonatomic,retain) GEOPDSCategorySearchResultSection * categorySearchResultSection; 
@property (nonatomic,retain) NSMutableArray * relatedEntitySections; 
@property (nonatomic,retain) NSMutableArray * searchTierMetadatas; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)browseCategoryType;
+(Class)relatedSearchSuggestionType;
+(Class)resultDetourInfoType;
+(Class)relatedEntitySectionType;
+(Class)searchTierMetadataType;
-(BOOL)hasDisplayMapRegion;
-(id)init;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(BOOL)isChainResultSet;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOMapRegion *)displayMapRegion;
-(BOOL)hasIsChainResultSet;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)relatedSearchSuggestions;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(GEOPDRelatedSearchSuggestion *)defaultRelatedSearchSuggestion;
-(GEOPDSearchClientBehavior *)searchClientBehavior;
-(void)addRelatedSearchSuggestion:(id)arg1 ;
-(void)addResultDetourInfo:(id)arg1 ;
-(void)setDefaultRelatedSearchSuggestion:(GEOPDRelatedSearchSuggestion *)arg1 ;
-(void)setSearchClientBehavior:(GEOPDSearchClientBehavior *)arg1 ;
-(void)setEnablePartialClientization:(BOOL)arg1 ;
-(void)addBrowseCategory:(id)arg1 ;
-(void)setCategorySearchResultSection:(GEOPDSCategorySearchResultSection *)arg1 ;
-(void)addRelatedEntitySection:(id)arg1 ;
-(void)addSearchTierMetadata:(id)arg1 ;
-(unsigned long long)relatedSearchSuggestionsCount;
-(void)clearRelatedSearchSuggestions;
-(id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)resultDetourInfosCount;
-(void)clearResultDetourInfos;
-(id)resultDetourInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)browseCategorysCount;
-(void)clearBrowseCategorys;
-(id)browseCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)relatedEntitySectionsCount;
-(NSMutableArray *)resultDetourInfos;
-(void)clearRelatedEntitySections;
-(id)relatedEntitySectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)searchTierMetadatasCount;
-(void)clearSearchTierMetadatas;
-(id)searchTierMetadataAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)browseCategorys;
-(void)setRelatedSearchSuggestions:(NSMutableArray *)arg1 ;
-(void)setResultDetourInfos:(NSMutableArray *)arg1 ;
-(BOOL)hasDefaultRelatedSearchSuggestion;
-(BOOL)hasSearchClientBehavior;
-(BOOL)enablePartialClientization;
-(void)setHasEnablePartialClientization:(BOOL)arg1 ;
-(BOOL)hasEnablePartialClientization;
-(void)setBrowseCategorys:(NSMutableArray *)arg1 ;
-(BOOL)hasCategorySearchResultSection;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setRelatedEntitySections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)searchTierMetadatas;
-(void)setSearchTierMetadatas:(NSMutableArray *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(GEOPDSCategorySearchResultSection *)categorySearchResultSection;
-(NSMutableArray *)relatedEntitySections;
-(void)writeTo:(id)arg1 ;
@end

