/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOWiFiConnectionRoamState : PBCodable <NSCopying> {

	int _lateRoamMaxRSSI;
	int _lateRoamMinRSSI;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasLateRoamMinRSSI; 
@property (assign,nonatomic) int lateRoamMinRSSI; 
@property (assign,nonatomic) BOOL hasLateRoamMaxRSSI; 
@property (assign,nonatomic) int lateRoamMaxRSSI; 
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
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setLateRoamMinRSSI:(int)arg1 ;
-(void)setLateRoamMaxRSSI:(int)arg1 ;
-(int)lateRoamMinRSSI;
-(BOOL)hasLateRoamMinRSSI;
-(void)setHasLateRoamMinRSSI:(BOOL)arg1 ;
-(int)lateRoamMaxRSSI;
-(void)setHasLateRoamMaxRSSI:(BOOL)arg1 ;
-(BOOL)hasLateRoamMaxRSSI;
-(void)writeTo:(id)arg1 ;
@end
