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

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOMatchedToken : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE92* _geoIds;
	NSString* _matchedToken;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _geoType;
	struct {
		unsigned has_geoType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_geoIds : 1;
		unsigned read_matchedToken : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * matchedToken; 
@property (assign,nonatomic) BOOL hasGeoType; 
@property (assign,nonatomic) int geoType; 
@property (nonatomic,readonly) unsigned long long geoIdsCount; 
@property (nonatomic,readonly) unsigned long long* geoIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(int)geoType;
-(id)init;
-(unsigned long long*)geoIds;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasGeoType;
-(NSString *)matchedToken;
-(void)setMatchedToken:(NSString *)arg1 ;
-(void)setGeoType:(int)arg1 ;
-(void)setHasGeoType:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(void)setGeoIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(void)addGeoId:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)geoIdAtIndex:(unsigned long long)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end

