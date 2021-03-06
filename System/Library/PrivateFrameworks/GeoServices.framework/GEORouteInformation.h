/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString, NSString;

@interface GEORouteInformation : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _detail;
	GEOFormattedString* _distance;
	GEOFormattedString* _duration;
	GEOFormattedString* _routeDescription;
	NSString* _separator;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_detail : 1;
		unsigned read_distance : 1;
		unsigned read_duration : 1;
		unsigned read_routeDescription : 1;
		unsigned read_separator : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDuration; 
@property (nonatomic,retain) GEOFormattedString * duration; 
@property (nonatomic,readonly) BOOL hasDetail; 
@property (nonatomic,retain) GEOFormattedString * detail; 
@property (nonatomic,readonly) BOOL hasDistance; 
@property (nonatomic,retain) GEOFormattedString * distance; 
@property (nonatomic,readonly) BOOL hasRouteDescription; 
@property (nonatomic,retain) GEOFormattedString * routeDescription; 
@property (nonatomic,readonly) BOOL hasSeparator; 
@property (nonatomic,retain) NSString * separator; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setDetail:(GEOFormattedString *)arg1 ;
-(BOOL)hasDistance;
-(void)setSeparator:(NSString *)arg1 ;
-(NSString *)separator;
-(id)init;
-(GEOFormattedString *)distance;
-(void)setDistance:(GEOFormattedString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDuration:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)routeDescription;
-(void)setRouteDescription:(GEOFormattedString *)arg1 ;
-(BOOL)hasRouteDescription;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasSeparator;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasDetail;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(GEOFormattedString *)duration;
-(GEOFormattedString *)detail;
-(void)writeTo:(id)arg1 ;
@end

