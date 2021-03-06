/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEOPDShardedId : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _basemapId;
	GEOLatLng* _center;
	unsigned long long _muid;
	int _mapsResultType;
	int _resultProviderId;
	struct {
		unsigned has_basemapId : 1;
		unsigned has_muid : 1;
		unsigned has_mapsResultType : 1;
		unsigned has_resultProviderId : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId; 
@property (assign,nonatomic) BOOL hasBasemapId; 
@property (assign,nonatomic) unsigned long long basemapId; 
@property (assign,nonatomic) BOOL hasMapsResultType; 
@property (assign,nonatomic) int mapsResultType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(unsigned long long)muid;
-(BOOL)hasCenter;
-(void)setHasMapsResultType:(BOOL)arg1 ;
-(void)setHasBasemapId:(BOOL)arg1 ;
-(GEOLatLng *)center;
-(int)resultProviderId;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(void)setResultProviderId:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)mapsResultType;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasMapsResultType;
-(unsigned long long)hash;
-(BOOL)hasBasemapId;
-(int)StringAsMapsResultType:(id)arg1 ;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)basemapId;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBasemapId:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setMapsResultType:(int)arg1 ;
-(BOOL)hasMuid;
-(id)mapsResultTypeAsString:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

