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

@interface GEOVLFEntryPoint : PBCodable <NSCopying> {

	int _accessPoint;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasAccessPoint; 
@property (assign,nonatomic) int accessPoint; 
+(BOOL)isValid:(id)arg1 ;
-(int)accessPoint;
-(void)setAccessPoint:(int)arg1 ;
-(BOOL)hasAccessPoint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasAccessPoint:(BOOL)arg1 ;
-(id)accessPointAsString:(int)arg1 ;
-(int)StringAsAccessPoint:(id)arg1 ;
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

