/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapRegion, NSString, NSMutableArray;

@interface GEORPResolution : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOMapRegion* _displayRegion;
	NSString* _localizedAlertText;
	NSMutableArray* _localizedChangeLists;
	NSString* _localizedDescription;
	double _resolutionDate;
	unsigned long long _transitLineMuid;
	NSMutableArray* _updatedPlaces;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _displayStyle;
	struct {
		unsigned has_resolutionDate : 1;
		unsigned has_transitLineMuid : 1;
		unsigned has_displayStyle : 1;
		unsigned read_displayRegion : 1;
		unsigned read_localizedAlertText : 1;
		unsigned read_localizedChangeLists : 1;
		unsigned read_localizedDescription : 1;
		unsigned read_updatedPlaces : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResolutionDate; 
@property (assign,nonatomic) double resolutionDate; 
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) GEOMapRegion * displayRegion; 
@property (nonatomic,retain) NSMutableArray * localizedChangeLists; 
@property (nonatomic,retain) NSMutableArray * updatedPlaces; 
@property (assign,nonatomic) BOOL hasTransitLineMuid; 
@property (assign,nonatomic) unsigned long long transitLineMuid; 
@property (nonatomic,readonly) BOOL hasLocalizedDescription; 
@property (nonatomic,retain) NSString * localizedDescription; 
@property (nonatomic,readonly) BOOL hasLocalizedAlertText; 
@property (nonatomic,retain) NSString * localizedAlertText; 
@property (assign,nonatomic) BOOL hasDisplayStyle; 
@property (assign,nonatomic) int displayStyle; 
+(Class)updatedPlaceType;
+(Class)localizedChangeListType;
+(BOOL)isValid:(id)arg1 ;
-(GEOMapRegion *)displayRegion;
-(BOOL)hasDisplayRegion;
-(NSString *)localizedDescription;
-(id)init;
-(NSString *)localizedAlertText;
-(NSMutableArray *)localizedChangeLists;
-(void)setResolutionDate:(double)arg1 ;
-(void)addLocalizedChangeList:(id)arg1 ;
-(void)addUpdatedPlace:(id)arg1 ;
-(void)setLocalizedAlertText:(NSString *)arg1 ;
-(unsigned long long)localizedChangeListsCount;
-(void)clearLocalizedChangeLists;
-(id)localizedChangeListAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)updatedPlacesCount;
-(void)clearUpdatedPlaces;
-(id)updatedPlaceAtIndex:(unsigned long long)arg1 ;
-(double)resolutionDate;
-(void)setHasResolutionDate:(BOOL)arg1 ;
-(BOOL)hasResolutionDate;
-(NSMutableArray *)updatedPlaces;
-(void)setLocalizedChangeLists:(NSMutableArray *)arg1 ;
-(void)setUpdatedPlaces:(NSMutableArray *)arg1 ;
-(void)setHasTransitLineMuid:(BOOL)arg1 ;
-(BOOL)hasLocalizedAlertText;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDisplayRegion:(GEOMapRegion *)arg1 ;
-(void)setHasDisplayStyle:(BOOL)arg1 ;
-(int)displayStyle;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(unsigned long long)hash;
-(int)StringAsDisplayStyle:(id)arg1 ;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)transitLineMuid;
-(void)setTransitLineMuid:(unsigned long long)arg1 ;
-(BOOL)hasTransitLineMuid;
-(id)displayStyleAsString:(int)arg1 ;
-(BOOL)hasDisplayStyle;
-(void)writeTo:(id)arg1 ;
-(void)setDisplayStyle:(int)arg1 ;
-(BOOL)hasLocalizedDescription;
@end

