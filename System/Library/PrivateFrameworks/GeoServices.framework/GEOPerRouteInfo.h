/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPerRouteInfo : PBCodable <NSCopying> {

	GEOSessionID _routeUuid;
	unsigned long long _etaServiceTravelTime;
	unsigned long long _originalTravelTime;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasOriginalTravelTime; 
@property (assign,nonatomic) unsigned long long originalTravelTime; 
@property (assign,nonatomic) BOOL hasEtaServiceTravelTime; 
@property (assign,nonatomic) unsigned long long etaServiceTravelTime; 
@property (assign,nonatomic) BOOL hasRouteUuid; 
@property (assign,nonatomic) GEOSessionID routeUuid; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOSessionID)routeUuid;
-(void)setOriginalTravelTime:(unsigned long long)arg1 ;
-(void)setEtaServiceTravelTime:(unsigned long long)arg1 ;
-(void)setRouteUuid:(GEOSessionID)arg1 ;
-(void)setHasRouteUuid:(BOOL)arg1 ;
-(unsigned long long)originalTravelTime;
-(void)setHasOriginalTravelTime:(BOOL)arg1 ;
-(BOOL)hasOriginalTravelTime;
-(unsigned long long)etaServiceTravelTime;
-(void)setHasEtaServiceTravelTime:(BOOL)arg1 ;
-(BOOL)hasEtaServiceTravelTime;
-(BOOL)hasRouteUuid;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end

