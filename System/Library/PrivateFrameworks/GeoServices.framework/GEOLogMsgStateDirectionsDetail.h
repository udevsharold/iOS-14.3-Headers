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

@interface GEOLogMsgStateDirectionsDetail : PBCodable <NSCopying> {

	int _transportType;
	BOOL _isEv;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) BOOL hasIsEv; 
@property (assign,nonatomic) BOOL isEv; 
+(BOOL)isValid:(id)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(BOOL)isEv;
-(void)setHasIsEv:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(int)transportType;
-(BOOL)hasTransportType;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasIsEv;
-(void)setHasTransportType:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setIsEv:(BOOL)arg1 ;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end
