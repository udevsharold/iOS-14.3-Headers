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

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEORegionalResource : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _tileRanges;
	unsigned long long _tileRangesCount;
	unsigned long long _tileRangesSpace;
	NSMutableArray* _attributions;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _x;
	unsigned _y;
	unsigned _z;
	struct {
		unsigned has_x : 1;
		unsigned has_y : 1;
		unsigned has_z : 1;
		unsigned read_unknownFields : 1;
		unsigned read_tileRanges : 1;
		unsigned read_attributions : 1;
		unsigned read_iconChecksums : 1;
		unsigned read_icons : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,nonatomic) unsigned x; 
@property (assign,nonatomic) BOOL hasY; 
@property (assign,nonatomic) unsigned y; 
@property (assign,nonatomic) BOOL hasZ; 
@property (assign,nonatomic) unsigned z; 
@property (nonatomic,retain) NSMutableArray * icons; 
@property (nonatomic,retain) NSMutableArray * attributions; 
@property (nonatomic,retain) NSMutableArray * iconChecksums; 
@property (nonatomic,readonly) unsigned long long tileRangesCount; 
@property (nonatomic,readonly) GEOTileSetRegion* tileRanges; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)attributionType;
+(Class)iconChecksumType;
+(Class)iconType;
-(unsigned long long)iconChecksumsCount;
-(unsigned)y;
-(BOOL)hasX;
-(unsigned long long)iconsCount;
-(void)clearIconChecksums;
-(void)clearAttributions;
-(unsigned)z;
-(id)iconChecksumAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)iconChecksums;
-(void)setZ:(unsigned)arg1 ;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(unsigned long long)attributionsCount;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(NSMutableArray *)attributions;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasY:(BOOL)arg1 ;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)clearIcons;
-(void)addAttribution:(id)arg1 ;
-(void)setX:(unsigned)arg1 ;
-(void)setY:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)x;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)clearTileRanges;
-(void)addTileRange:(GEOTileSetRegion)arg1 ;
-(unsigned long long)tileRangesCount;
-(GEOTileSetRegion)tileRangeAtIndex:(unsigned long long)arg1 ;
-(void)setTileRanges:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasZ:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setHasX:(BOOL)arg1 ;
-(BOOL)hasZ;
-(BOOL)hasY;
-(void)addIcon:(id)arg1 ;
-(NSMutableArray *)icons;
-(GEOTileSetRegion*)tileRanges;
-(void)writeTo:(id)arg1 ;
-(void)addIconChecksum:(id)arg1 ;
@end
