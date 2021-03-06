/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOResource;

@interface GEOStaleResource : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOResource* _desiredResource;
	GEOResource* _fallbackResource;
	double _originalTimestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_originalTimestamp : 1;
		unsigned read_unknownFields : 1;
		unsigned read_desiredResource : 1;
		unsigned read_fallbackResource : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDesiredResource; 
@property (nonatomic,retain) GEOResource * desiredResource; 
@property (nonatomic,readonly) BOOL hasFallbackResource; 
@property (nonatomic,retain) GEOResource * fallbackResource; 
@property (assign,nonatomic) BOOL hasOriginalTimestamp; 
@property (assign,nonatomic) double originalTimestamp; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
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
-(double)originalTimestamp;
-(void)writeTo:(id)arg1 ;
-(GEOResource *)desiredResource;
-(GEOResource *)fallbackResource;
-(void)setDesiredResource:(GEOResource *)arg1 ;
-(void)setFallbackResource:(GEOResource *)arg1 ;
-(void)setOriginalTimestamp:(double)arg1 ;
-(BOOL)hasDesiredResource;
-(BOOL)hasFallbackResource;
-(void)setHasOriginalTimestamp:(BOOL)arg1 ;
-(BOOL)hasOriginalTimestamp;
@end

