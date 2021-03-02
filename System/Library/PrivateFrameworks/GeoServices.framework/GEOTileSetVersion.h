/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOTileSetVersion : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _availableTiles;
	unsigned long long _availableTilesCount;
	unsigned long long _availableTilesSpace;
	GEOGenericTile* _genericTiles;
	unsigned long long _genericTilesCount;
	unsigned long long _genericTilesSpace;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _identifier;
	unsigned _supportedLanguagesVersion;
	unsigned _timeToLiveSeconds;
	struct {
		unsigned has_supportedLanguagesVersion : 1;
		unsigned has_timeToLiveSeconds : 1;
		unsigned read_unknownFields : 1;
		unsigned read_availableTiles : 1;
		unsigned read_genericTiles : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,readonly) unsigned long long availableTilesCount; 
@property (nonatomic,readonly) GEOTileSetRegion* availableTiles; 
@property (assign,nonatomic) BOOL hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds; 
@property (nonatomic,readonly) unsigned long long genericTilesCount; 
@property (nonatomic,readonly) GEOGenericTile* genericTiles; 
@property (assign,nonatomic) BOOL hasSupportedLanguagesVersion; 
@property (assign,nonatomic) unsigned supportedLanguagesVersion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasTimeToLiveSeconds;
-(void)setHasTimeToLiveSeconds:(BOOL)arg1 ;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1 ;
-(void)addAvailableTiles:(GEOTileSetRegion)arg1 ;
-(GEOGenericTile*)genericTiles;
-(id)init;
-(unsigned long long)availableTilesCount;
-(void)clearAvailableTiles;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSupportedLanguagesVersion:(unsigned)arg1 ;
-(unsigned long long)genericTilesCount;
-(GEOTileSetRegion*)availableTiles;
-(void)dealloc;
-(unsigned)timeToLiveSeconds;
-(void)setAvailableTiles:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasSupportedLanguagesVersion:(BOOL)arg1 ;
-(unsigned)identifier;
-(id)description;
-(BOOL)hasSupportedLanguagesVersion;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setGenericTiles:(GEOGenericTile*)arg1 count:(unsigned long long)arg2 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOGenericTile)genericTileAtIndex:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)supportedLanguagesVersion;
-(id)jsonRepresentation;
-(void)clearGenericTiles;
-(void)addGenericTile:(GEOGenericTile)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
