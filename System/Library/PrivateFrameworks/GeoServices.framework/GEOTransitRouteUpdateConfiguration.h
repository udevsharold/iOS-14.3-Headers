/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTransitRouteUpdateConfiguration : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _ttlSeconds;
	struct {
		unsigned has_ttlSeconds : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTtlSeconds; 
@property (assign,nonatomic) unsigned long long ttlSeconds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
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
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasTtlSeconds;
-(unsigned long long)ttlSeconds;
-(void)setTtlSeconds:(unsigned long long)arg1 ;
-(void)setHasTtlSeconds:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

