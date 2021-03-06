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

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDBatchSpatialLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _spatialEventLookups;
	NSMutableArray* _spatialPlaceLookups;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_spatialEventLookups : 1;
		unsigned read_spatialPlaceLookups : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * spatialPlaceLookups; 
@property (nonatomic,retain) NSMutableArray * spatialEventLookups; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)spatialPlaceLookupType;
+(Class)spatialEventLookupType;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addSpatialPlaceLookup:(id)arg1 ;
-(void)addSpatialEventLookup:(id)arg1 ;
-(unsigned long long)spatialPlaceLookupsCount;
-(void)clearSpatialPlaceLookups;
-(id)spatialPlaceLookupAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)spatialEventLookupsCount;
-(void)clearSpatialEventLookups;
-(id)spatialEventLookupAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)spatialPlaceLookups;
-(void)setSpatialPlaceLookups:(NSMutableArray *)arg1 ;
-(NSMutableArray *)spatialEventLookups;
-(void)setSpatialEventLookups:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end

