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

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDPopularNearbyResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDLitePlaceResult* _litePlaceResults;
	unsigned long long _litePlaceResultsCount;
	unsigned long long _litePlaceResultsSpace;
	NSString* _sectionHeader;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_litePlaceResults : 1;
		unsigned read_sectionHeader : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSectionHeader; 
@property (nonatomic,retain) NSString * sectionHeader; 
@property (nonatomic,readonly) unsigned long long litePlaceResultsCount; 
@property (nonatomic,readonly) GEOPDLitePlaceResult* litePlaceResults; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSectionHeader:(NSString *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)sectionHeader;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)clearLitePlaceResults;
-(void)addLitePlaceResult:(GEOPDLitePlaceResult)arg1 ;
-(unsigned long long)litePlaceResultsCount;
-(GEOPDLitePlaceResult)litePlaceResultAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSectionHeader;
-(GEOPDLitePlaceResult*)litePlaceResults;
-(void)setLitePlaceResults:(GEOPDLitePlaceResult*)arg1 count:(unsigned long long)arg2 ;
-(void)writeTo:(id)arg1 ;
@end

